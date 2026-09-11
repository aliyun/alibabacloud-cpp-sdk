// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDTSJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTDTSJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class StartDtsJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDtsJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_TO_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    friend void from_json(const Darabonba::Json& j, StartDtsJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_FROM_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    StartDtsJobRequest() = default ;
    StartDtsJobRequest(const StartDtsJobRequest &) = default ;
    StartDtsJobRequest(StartDtsJobRequest &&) = default ;
    StartDtsJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDtsJobRequest() = default ;
    StartDtsJobRequest& operator=(const StartDtsJobRequest &) = default ;
    StartDtsJobRequest& operator=(StartDtsJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsInstanceId_ == nullptr
        && this->dtsJobId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->synchronizationDirection_ == nullptr && this->zeroEtlJob_ == nullptr; };
    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline StartDtsJobRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline StartDtsJobRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartDtsJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline StartDtsJobRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline StartDtsJobRequest& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool getZeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline StartDtsJobRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The ID of the data migration, data synchronization, or change tracking instance.
    // > You can query the instance ID by invoking [Query the list of data migration instances and details of each instance](https://help.aliyun.com/document_detail/208139.html), [Query the list of change tracking instances and details of each instance](https://help.aliyun.com/document_detail/49442.html), or [Query the list of data synchronization instances and details of each instance](https://help.aliyun.com/document_detail/49454.html).
    shared_ptr<string> dtsInstanceId_ {};
    // The ID of the data migration, data synchronization, or change tracking task.
    shared_ptr<string> dtsJobId_ {};
    // The region in which the DTS instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The synchronization direction. Valid values:
    // - **Forward**: forward. This is the default value.
    // - **Reverse**: reverse.
    // > You can set this parameter to **Reverse** to start the reverse synchronization link only when the topology of the data synchronization instance is two-way synchronization.
    shared_ptr<string> synchronizationDirection_ {};
    // Specifies whether the node is a zero-ETL node. Valid values:
    // 
    // - **false**: no.
    // - **true**: yes.
    shared_ptr<bool> zeroEtlJob_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
