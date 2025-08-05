// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDTSJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTDTSJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class StartDtsJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDtsJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsJobIds, dtsJobIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    friend void from_json(const Darabonba::Json& j, StartDtsJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsJobIds, dtsJobIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    StartDtsJobsRequest() = default ;
    StartDtsJobsRequest(const StartDtsJobsRequest &) = default ;
    StartDtsJobsRequest(StartDtsJobsRequest &&) = default ;
    StartDtsJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDtsJobsRequest() = default ;
    StartDtsJobsRequest& operator=(const StartDtsJobsRequest &) = default ;
    StartDtsJobsRequest& operator=(StartDtsJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dtsJobIds_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->zeroEtlJob_ != nullptr; };
    // dtsJobIds Field Functions 
    bool hasDtsJobIds() const { return this->dtsJobIds_ != nullptr;};
    void deleteDtsJobIds() { this->dtsJobIds_ = nullptr;};
    inline string dtsJobIds() const { DARABONBA_PTR_GET_DEFAULT(dtsJobIds_, "") };
    inline StartDtsJobsRequest& setDtsJobIds(string dtsJobIds) { DARABONBA_PTR_SET_VALUE(dtsJobIds_, dtsJobIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartDtsJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline StartDtsJobsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool zeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline StartDtsJobsRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The ID of the data migration or data synchronization task.
    // 
    // > 
    // *   For multiple tasks, separate them with commas (**,**).
    // *   You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the task ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dtsJobIds_ = nullptr;
    // The region ID of the DTS instance. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource GroupId
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Whether it is a seamless integration (Zero-ETL) task, the value can be:
    // - **false**: No. - **true**: Yes.
    std::shared_ptr<bool> zeroEtlJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
