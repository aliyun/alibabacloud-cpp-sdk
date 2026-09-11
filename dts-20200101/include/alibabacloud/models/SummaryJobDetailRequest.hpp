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
        && this->dtsJobId_ == nullptr && this->jobCode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->structType_ == nullptr
        && this->synchronizationDirection_ == nullptr && this->zeroEtlJob_ == nullptr; };
    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline SummaryJobDetailRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline SummaryJobDetailRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // jobCode Field Functions 
    bool hasJobCode() const { return this->jobCode_ != nullptr;};
    void deleteJobCode() { this->jobCode_ = nullptr;};
    inline string getJobCode() const { DARABONBA_PTR_GET_DEFAULT(jobCode_, "") };
    inline SummaryJobDetailRequest& setJobCode(string jobCode) { DARABONBA_PTR_SET_VALUE(jobCode_, jobCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SummaryJobDetailRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SummaryJobDetailRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // structType Field Functions 
    bool hasStructType() const { return this->structType_ != nullptr;};
    void deleteStructType() { this->structType_ = nullptr;};
    inline string getStructType() const { DARABONBA_PTR_GET_DEFAULT(structType_, "") };
    inline SummaryJobDetailRequest& setStructType(string structType) { DARABONBA_PTR_SET_VALUE(structType_, structType) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline SummaryJobDetailRequest& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool getZeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline SummaryJobDetailRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The migration or synchronization instance ID.
    shared_ptr<string> dtsInstanceId_ {};
    // The ID of the data migration or synchronization task.
    // 
    // This parameter is required.
    shared_ptr<string> dtsJobId_ {};
    // The migration phase. Valid values:
    // - **02**: schema migration phase.
    // - **03**: incremental data migration phase.
    // 
    // This parameter is required.
    shared_ptr<string> jobCode_ {};
    // The region in which the DTS instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The type of schema definition. Valid values:
    // 
    // - **before**: schema migration or initial schema synchronization.
    // - **after**: DDL operations during incremental data migration or synchronization.
    shared_ptr<string> structType_ {};
    // The synchronization direction. Valid values:
    // - **Forward**: forward.
    // - **Reverse**: reverse.
    // 
    // > - Default value: **Forward**.
    // - You can set this parameter to **Reverse** to release the reverse synchronization link only when the topology of the data synchronization instance is two-way synchronization.
    shared_ptr<string> synchronizationDirection_ {};
    // Specifies whether the node is a seamless integration (zero-ETL) node. Valid values:
    // - **true**: The node is a seamless integration node.
    // - **false**: The node is not a seamless integration node.
    shared_ptr<bool> zeroEtlJob_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
