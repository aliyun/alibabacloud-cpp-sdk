// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDTSJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDTSJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DeleteDtsJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDtsJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsJobIds, dtsJobIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDtsJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsJobIds, dtsJobIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    DeleteDtsJobsRequest() = default ;
    DeleteDtsJobsRequest(const DeleteDtsJobsRequest &) = default ;
    DeleteDtsJobsRequest(DeleteDtsJobsRequest &&) = default ;
    DeleteDtsJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDtsJobsRequest() = default ;
    DeleteDtsJobsRequest& operator=(const DeleteDtsJobsRequest &) = default ;
    DeleteDtsJobsRequest& operator=(DeleteDtsJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsJobIds_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->zeroEtlJob_ == nullptr; };
    // dtsJobIds Field Functions 
    bool hasDtsJobIds() const { return this->dtsJobIds_ != nullptr;};
    void deleteDtsJobIds() { this->dtsJobIds_ = nullptr;};
    inline string getDtsJobIds() const { DARABONBA_PTR_GET_DEFAULT(dtsJobIds_, "") };
    inline DeleteDtsJobsRequest& setDtsJobIds(string dtsJobIds) { DARABONBA_PTR_SET_VALUE(dtsJobIds_, dtsJobIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDtsJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DeleteDtsJobsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool getZeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline DeleteDtsJobsRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The ID of the data migration, data synchronization, or change tracking task.
    // 
    // > *   Separate multiple task IDs with commas (,).
    // > *   You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query task IDs.
    // 
    // This parameter is required.
    shared_ptr<string> dtsJobIds_ {};
    // The ID of the region in which the DTS instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Is it ZeroETL task
    shared_ptr<bool> zeroEtlJob_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
