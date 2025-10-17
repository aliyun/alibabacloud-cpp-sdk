// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMMARYJOBDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUMMARYJOBDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class SummaryJobDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SummaryJobDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(JobCode, jobCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StructType, structType_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_TO_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    friend void from_json(const Darabonba::Json& j, SummaryJobDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(JobCode, jobCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StructType, structType_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_FROM_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    SummaryJobDetailRequest() = default ;
    SummaryJobDetailRequest(const SummaryJobDetailRequest &) = default ;
    SummaryJobDetailRequest(SummaryJobDetailRequest &&) = default ;
    SummaryJobDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SummaryJobDetailRequest() = default ;
    SummaryJobDetailRequest& operator=(const SummaryJobDetailRequest &) = default ;
    SummaryJobDetailRequest& operator=(SummaryJobDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsInstanceId_ == nullptr
        && return this->dtsJobId_ == nullptr && return this->jobCode_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->structType_ == nullptr
        && return this->synchronizationDirection_ == nullptr && return this->zeroEtlJob_ == nullptr; };
    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string dtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline SummaryJobDetailRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline SummaryJobDetailRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // jobCode Field Functions 
    bool hasJobCode() const { return this->jobCode_ != nullptr;};
    void deleteJobCode() { this->jobCode_ = nullptr;};
    inline string jobCode() const { DARABONBA_PTR_GET_DEFAULT(jobCode_, "") };
    inline SummaryJobDetailRequest& setJobCode(string jobCode) { DARABONBA_PTR_SET_VALUE(jobCode_, jobCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SummaryJobDetailRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SummaryJobDetailRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // structType Field Functions 
    bool hasStructType() const { return this->structType_ != nullptr;};
    void deleteStructType() { this->structType_ = nullptr;};
    inline string structType() const { DARABONBA_PTR_GET_DEFAULT(structType_, "") };
    inline SummaryJobDetailRequest& setStructType(string structType) { DARABONBA_PTR_SET_VALUE(structType_, structType) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string synchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline SummaryJobDetailRequest& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool zeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline SummaryJobDetailRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The ID of the data migration or data synchronization instance.
    // 
    // >  You must specify at least one of the DtsJobId and DtsInstanceId parameters.
    std::shared_ptr<string> dtsInstanceId_ = nullptr;
    // The ID of the data migration or data synchronization task.
    // 
    // >  You must specify at least one of the DtsJobId and DtsInstanceId parameters.
    // 
    // This parameter is required.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The phase of the data migration task. Valid values:
    // 
    // *   **02**: The task is in the schema migration phase.
    // *   **03**: The task is in the incremental migration phase.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobCode_ = nullptr;
    // The region ID of the DTS instance. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The type of schema definition. Valid values:
    // 
    // *   **before**: schema migration or initial schema synchronization
    // *   **after**: DDL operations performed during incremental data migration or synchronization
    std::shared_ptr<string> structType_ = nullptr;
    // The synchronization direction of the data synchronization task. Valid values:
    // 
    // *   **Forward**: Data is synchronized from the source database to the destination database.
    // *   **Reverse**: Data is synchronized from the destination database to the source database.
    // 
    // > 
    // *   Default value: **Forward**.
    // *   You can set this parameter to **Reverse** to delete the reverse synchronization task only if the topology is two-way synchronization.
    std::shared_ptr<string> synchronizationDirection_ = nullptr;
    // Whether it is a seamless integration (Zero-ETL) task, the value can be:
    // - **false**: No. - **true**: Yes.
    std::shared_ptr<bool> zeroEtlJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
