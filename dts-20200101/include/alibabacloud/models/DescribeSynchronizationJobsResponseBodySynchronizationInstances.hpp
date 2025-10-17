// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobsResponseBodySynchronizationInstancesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobsResponseBodySynchronizationInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobsResponseBodySynchronizationInstances& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceCreateTime, instanceCreateTime_);
      DARABONBA_PTR_TO_JSON(JobCreateTime, jobCreateTime_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Performance, performance_);
      DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobClass, synchronizationJobClass_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobName, synchronizationJobName_);
      DARABONBA_PTR_TO_JSON(SynchronizationObjects, synchronizationObjects_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobsResponseBodySynchronizationInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceCreateTime, instanceCreateTime_);
      DARABONBA_PTR_FROM_JSON(JobCreateTime, jobCreateTime_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Performance, performance_);
      DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobClass, synchronizationJobClass_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobName, synchronizationJobName_);
      DARABONBA_PTR_FROM_JSON(SynchronizationObjects, synchronizationObjects_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeSynchronizationJobsResponseBodySynchronizationInstances() = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstances(const DescribeSynchronizationJobsResponseBodySynchronizationInstances &) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstances(DescribeSynchronizationJobsResponseBodySynchronizationInstances &&) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstances() = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstances& operator=(const DescribeSynchronizationJobsResponseBodySynchronizationInstances &) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstances& operator=(DescribeSynchronizationJobsResponseBodySynchronizationInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dataInitialization_ == nullptr && return this->dataInitializationStatus_ == nullptr && return this->dataSynchronizationStatus_ == nullptr && return this->delay_ == nullptr && return this->destinationEndpoint_ == nullptr
        && return this->errorMessage_ == nullptr && return this->expireTime_ == nullptr && return this->instanceCreateTime_ == nullptr && return this->jobCreateTime_ == nullptr && return this->payType_ == nullptr
        && return this->performance_ == nullptr && return this->precheckStatus_ == nullptr && return this->sourceEndpoint_ == nullptr && return this->status_ == nullptr && return this->structureInitialization_ == nullptr
        && return this->structureInitializationStatus_ == nullptr && return this->synchronizationDirection_ == nullptr && return this->synchronizationJobClass_ == nullptr && return this->synchronizationJobId_ == nullptr && return this->synchronizationJobName_ == nullptr
        && return this->synchronizationObjects_ == nullptr && return this->tags_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataInitialization Field Functions 
    bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
    void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
    inline string dataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setDataInitialization(string dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


    // dataInitializationStatus Field Functions 
    bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
    void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
    inline const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus & dataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus) };
    inline Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus dataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setDataInitializationStatus(const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setDataInitializationStatus(Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


    // dataSynchronizationStatus Field Functions 
    bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
    void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
    inline const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus & dataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus) };
    inline Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus dataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setDataSynchronizationStatus(const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setDataSynchronizationStatus(Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline string delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setDelay(string delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint & destinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint) };
    inline Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint destinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setDestinationEndpoint(const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setDestinationEndpoint(Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceCreateTime Field Functions 
    bool hasInstanceCreateTime() const { return this->instanceCreateTime_ != nullptr;};
    void deleteInstanceCreateTime() { this->instanceCreateTime_ = nullptr;};
    inline string instanceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(instanceCreateTime_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setInstanceCreateTime(string instanceCreateTime) { DARABONBA_PTR_SET_VALUE(instanceCreateTime_, instanceCreateTime) };


    // jobCreateTime Field Functions 
    bool hasJobCreateTime() const { return this->jobCreateTime_ != nullptr;};
    void deleteJobCreateTime() { this->jobCreateTime_ = nullptr;};
    inline string jobCreateTime() const { DARABONBA_PTR_GET_DEFAULT(jobCreateTime_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setJobCreateTime(string jobCreateTime) { DARABONBA_PTR_SET_VALUE(jobCreateTime_, jobCreateTime) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // performance Field Functions 
    bool hasPerformance() const { return this->performance_ != nullptr;};
    void deletePerformance() { this->performance_ = nullptr;};
    inline const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance & performance() const { DARABONBA_PTR_GET_CONST(performance_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance) };
    inline Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance performance() { DARABONBA_PTR_GET(performance_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setPerformance(const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setPerformance(Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus & precheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus) };
    inline Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus precheckStatus() { DARABONBA_PTR_GET(precheckStatus_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setPrecheckStatus(const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setPrecheckStatus(Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint) };
    inline Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setSourceEndpoint(const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setSourceEndpoint(Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // structureInitialization Field Functions 
    bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
    void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
    inline string structureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setStructureInitialization(string structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


    // structureInitializationStatus Field Functions 
    bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
    void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
    inline const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus & structureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus) };
    inline Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus structureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setStructureInitializationStatus(const Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setStructureInitializationStatus(Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string synchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // synchronizationJobClass Field Functions 
    bool hasSynchronizationJobClass() const { return this->synchronizationJobClass_ != nullptr;};
    void deleteSynchronizationJobClass() { this->synchronizationJobClass_ = nullptr;};
    inline string synchronizationJobClass() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobClass_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setSynchronizationJobClass(string synchronizationJobClass) { DARABONBA_PTR_SET_VALUE(synchronizationJobClass_, synchronizationJobClass) };


    // synchronizationJobId Field Functions 
    bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
    void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
    inline string synchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


    // synchronizationJobName Field Functions 
    bool hasSynchronizationJobName() const { return this->synchronizationJobName_ != nullptr;};
    void deleteSynchronizationJobName() { this->synchronizationJobName_ = nullptr;};
    inline string synchronizationJobName() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobName_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setSynchronizationJobName(string synchronizationJobName) { DARABONBA_PTR_SET_VALUE(synchronizationJobName_, synchronizationJobName) };


    // synchronizationObjects Field Functions 
    bool hasSynchronizationObjects() const { return this->synchronizationObjects_ != nullptr;};
    void deleteSynchronizationObjects() { this->synchronizationObjects_ = nullptr;};
    inline const vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects> & synchronizationObjects() const { DARABONBA_PTR_GET_CONST(synchronizationObjects_, vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects>) };
    inline vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects> synchronizationObjects() { DARABONBA_PTR_GET(synchronizationObjects_, vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects>) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setSynchronizationObjects(const vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects> & synchronizationObjects) { DARABONBA_PTR_SET_VALUE(synchronizationObjects_, synchronizationObjects) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setSynchronizationObjects(vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects> && synchronizationObjects) { DARABONBA_PTR_SET_RVALUE(synchronizationObjects_, synchronizationObjects) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesTags>) };
    inline vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesTags>) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setTags(const vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstances& setTags(vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The time when the data synchronization task was created. The time is displayed in the *yyyy-MM-dd* *HH:mm:ss*.0 format (UTC+8).
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether full data synchronization is performed. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<string> dataInitialization_ = nullptr;
    // The status of full data synchronization.
    std::shared_ptr<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus> dataInitializationStatus_ = nullptr;
    // The status of incremental data synchronization.
    // 
    // >  This parameter and its sub-parameters are no longer available.
    std::shared_ptr<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus> dataSynchronizationStatus_ = nullptr;
    // The synchronization latency, in seconds.
    std::shared_ptr<string> delay_ = nullptr;
    // The connection settings of the destination instance.
    std::shared_ptr<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint> destinationEndpoint_ = nullptr;
    // The error message returned if data synchronization failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The time when the data synchronization instance expires. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    // 
    // >  This parameter is returned only if the return value of the **PayType** parameter is **PrePaid**.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The time when the instance was created. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    std::shared_ptr<string> instanceCreateTime_ = nullptr;
    // The time when the data synchronization task was created. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    std::shared_ptr<string> jobCreateTime_ = nullptr;
    // The billing method of the data synchronization instance. Valid values:
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid**: pay-as-you-go
    std::shared_ptr<string> payType_ = nullptr;
    // The performance of the data synchronization instance.
    std::shared_ptr<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance> performance_ = nullptr;
    // The precheck status.
    std::shared_ptr<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus> precheckStatus_ = nullptr;
    // The connection settings of the source instance.
    std::shared_ptr<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint> sourceEndpoint_ = nullptr;
    // The status of the data synchronization task. Valid values:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is being prechecked.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **Initializing**: The task is performing initial synchronization.
    // *   **InitializeFailed**: Initial synchronization failed.
    // *   **Synchronizing**: The task is synchronizing data.
    // *   **Failed**: The task failed to synchronize data.
    // *   **Suspending**: The task is paused.
    // *   **Modifying**: The objects in the task are being modified.
    // *   **Finished**: The task is completed.
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether schema synchronization is performed. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<string> structureInitialization_ = nullptr;
    // The status of schema synchronization.
    std::shared_ptr<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus> structureInitializationStatus_ = nullptr;
    // The synchronization direction. Valid values:
    // 
    // *   **Forward**
    // *   **Reverse**
    std::shared_ptr<string> synchronizationDirection_ = nullptr;
    // The specification of the data synchronization instance.
    std::shared_ptr<string> synchronizationJobClass_ = nullptr;
    // The ID of the data synchronization instance.
    std::shared_ptr<string> synchronizationJobId_ = nullptr;
    // The name of the data synchronization task.
    std::shared_ptr<string> synchronizationJobName_ = nullptr;
    // The objects that are synchronized by the task.
    std::shared_ptr<vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects>> synchronizationObjects_ = nullptr;
    // The collection of tags.
    std::shared_ptr<vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
