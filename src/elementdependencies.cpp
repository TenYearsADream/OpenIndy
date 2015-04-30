#include "elementdependencies.h"

ElementDependencies::ElementDependencies()
{
    this->hasSensorPlugin = false;
    this->hasFunctionPlugin = false;
    this->hasObservations = false;
    this->hasFeatures = false;
}

bool ElementDependencies::addFeatureID(int id,QString featureGroup){

    this->hasFeatures = true;

    if(!this->features.contains(featureGroup)){
        QList<int> *l = new QList<int>;
        this->features.insert(featureGroup,l);
    }

    this->features.value(featureGroup)->append(id);

    return true;
}


bool ElementDependencies::addObservationID(int id){

    this->hasObservations = true;

    this->observations.append(id);

    return true;
}

bool ElementDependencies::addFunctionInfo(functionInfo info){

    this->hasFunctionPlugin = true;

    this->neededFunctions.append(info);

    return true;
}

bool ElementDependencies::addSensorInfo(sensorInfo info){

    this->hasSensorPlugin = true;

    this->neededSensors.append(info);

    return true;
}

bool ElementDependencies::addActiveSensor(sensorInfo info)
{
    this->hasSensorPlugin = true;

    this->activeSensor = info;

    return true;
}

/*!
 * \brief ElementDependencies::addUsedFor
 * \param id
 * \return
 */
bool ElementDependencies::addUsedFor(int id){
    if(!this->usedFor.contains(id)){
        this->usedFor.append(id);
        return true;
    }
    return false;
}

/*!
 * \brief ElementDependencies::addPreviouslyNeeded
 * \param id
 * \return
 */
bool ElementDependencies::addPreviouslyNeeded(int id){
    if(!this->previouslyNeeded.contains(id)){
        this->previouslyNeeded.append(id);
        return true;
    }
    return false;
}

bool ElementDependencies::setStationPosition(int id)
{
    if(id<0){
       return false;
    }else{
      this->stationPosition = id;
    }


    return true;
}

bool ElementDependencies::setStationCoordSystem(int id)
{

    if(id<0){
       return false;
    }else{
      this->stationCoordSystem = id;
    }

    return true;
}

int ElementDependencies::getStationPosition()
{
    return this->stationPosition;
}

int ElementDependencies::getStationCoordSystem()
{
    return this->stationCoordSystem;
}

/*!
 * \brief ElementDependencies::setFromSystem
 * \param id
 */
void ElementDependencies::setFromSystem(int id){
    this->from = id;
}

/*!
 * \brief ElementDependencies::setToSystem
 * \param id
 */
void ElementDependencies::setToSystem(int id){
   this->to = id;
}

/*!
 * \brief ElementDependencies::getFromSystem
 * \return
 */
int ElementDependencies::getFromSystem(){
    return this->from;
}

/*!
 * \brief ElementDependencies::getToSystem
 * \return
 */
int ElementDependencies::getToSystem(){
    return this->to;
}

bool ElementDependencies::hasPluginSensor()
{
    return this->hasSensorPlugin;
}

bool ElementDependencies::hasPluginFunction()
{
    return this->hasFunctionPlugin;
}

bool ElementDependencies::hasObservation()
{
    return this->hasObservations;
}

bool ElementDependencies::hasFeature()
{
    return this->hasFeatures;
}

QList<int> ElementDependencies::getObservationDependencies()
{
    return this->observations;
}

QMap<QString, QList<int> *> ElementDependencies::getfeatureDependencies()
{
    return this->features;
}

QList<functionInfo> ElementDependencies::getNeededFunctions()
{
    return this->neededFunctions;
}

QList<sensorInfo> ElementDependencies::getNeededSensors()
{
    return this->neededSensors;
}

sensorInfo ElementDependencies::getActiveSensor()
{
    return this->activeSensor;
}

/*!
 * \brief ElementDependencies::getUsedFor
 * \return
 */
QList<int> ElementDependencies::getUsedFor(){
    return this->usedFor;
}

/*!
 * \brief ElementDependencies::getPreviouslyNeeded
 * \return
 */
QList<int> ElementDependencies::getPreviouslyNeeded(){
    return this->previouslyNeeded;
}