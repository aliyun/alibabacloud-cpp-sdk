// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKIPFULLJOBTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SKIPFULLJOBTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class SkipFullJobTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SkipFullJobTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(JobProgressId, jobProgressId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    friend void from_json(const Darabonba::Json& j, SkipFullJobTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(JobProgressId, jobProgressId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    SkipFullJobTableRequest() = default ;
    SkipFullJobTableRequest(const SkipFullJobTableRequest &) = default ;
    SkipFullJobTableRequest(SkipFullJobTableRequest &&) = default ;
    SkipFullJobTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SkipFullJobTableRequest() = default ;
    SkipFullJobTableRequest& operator=(const SkipFullJobTableRequest &) = default ;
    SkipFullJobTableRequest& operator=(SkipFullJobTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dtsJobId_ != nullptr
        && this->jobProgressId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->zeroEtlJob_ != nullptr; };
    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline SkipFullJobTableRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // jobProgressId Field Functions 
    bool hasJobProgressId() const { return this->jobProgressId_ != nullptr;};
    void deleteJobProgressId() { this->jobProgressId_ = nullptr;};
    inline string jobProgressId() const { DARABONBA_PTR_GET_DEFAULT(jobProgressId_, "") };
    inline SkipFullJobTableRequest& setJobProgressId(string jobProgressId) { DARABONBA_PTR_SET_VALUE(jobProgressId_, jobProgressId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SkipFullJobTableRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SkipFullJobTableRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool zeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline SkipFullJobTableRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The ID of the DTS task. The DTS task can be a data migration, data synchronization, or change tracking task.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The ID of the primary key.
    std::shared_ptr<string> jobProgressId_ = nullptr;
    // The region ID of the DTS instance. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Specifies whether to query only zero-extract, transform, load (ETL) integration tasks. Valid values:
    // 
    // *   **true**: yes.
    // *   **false**: no.
    std::shared_ptr<bool> zeroEtlJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
