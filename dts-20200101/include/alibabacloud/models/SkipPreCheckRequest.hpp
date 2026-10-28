// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKIPPRECHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SKIPPRECHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class SkipPreCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SkipPreCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(SkipPreCheckItems, skipPreCheckItems_);
      DARABONBA_PTR_TO_JSON(SkipPreCheckNames, skipPreCheckNames_);
    };
    friend void from_json(const Darabonba::Json& j, SkipPreCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(SkipPreCheckItems, skipPreCheckItems_);
      DARABONBA_PTR_FROM_JSON(SkipPreCheckNames, skipPreCheckNames_);
    };
    SkipPreCheckRequest() = default ;
    SkipPreCheckRequest(const SkipPreCheckRequest &) = default ;
    SkipPreCheckRequest(SkipPreCheckRequest &&) = default ;
    SkipPreCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SkipPreCheckRequest() = default ;
    SkipPreCheckRequest& operator=(const SkipPreCheckRequest &) = default ;
    SkipPreCheckRequest& operator=(SkipPreCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsJobId_ == nullptr
        && this->jobId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->skip_ == nullptr && this->skipPreCheckItems_ == nullptr
        && this->skipPreCheckNames_ == nullptr; };
    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline SkipPreCheckRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SkipPreCheckRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SkipPreCheckRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SkipPreCheckRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline bool getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
    inline SkipPreCheckRequest& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // skipPreCheckItems Field Functions 
    bool hasSkipPreCheckItems() const { return this->skipPreCheckItems_ != nullptr;};
    void deleteSkipPreCheckItems() { this->skipPreCheckItems_ = nullptr;};
    inline string getSkipPreCheckItems() const { DARABONBA_PTR_GET_DEFAULT(skipPreCheckItems_, "") };
    inline SkipPreCheckRequest& setSkipPreCheckItems(string skipPreCheckItems) { DARABONBA_PTR_SET_VALUE(skipPreCheckItems_, skipPreCheckItems) };


    // skipPreCheckNames Field Functions 
    bool hasSkipPreCheckNames() const { return this->skipPreCheckNames_ != nullptr;};
    void deleteSkipPreCheckNames() { this->skipPreCheckNames_ = nullptr;};
    inline string getSkipPreCheckNames() const { DARABONBA_PTR_GET_DEFAULT(skipPreCheckNames_, "") };
    inline SkipPreCheckRequest& setSkipPreCheckNames(string skipPreCheckNames) { DARABONBA_PTR_SET_VALUE(skipPreCheckNames_, skipPreCheckNames) };


  protected:
    // The ID of the data migration, data synchronization, or change tracking task.
    // 
    // This parameter is required.
    shared_ptr<string> dtsJobId_ {};
    // The ID of the precheck task. You can call the **DescribePreCheckStatus** operation to query the task ID.
    shared_ptr<string> jobId_ {};
    // The region where the DTS instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // Specifies whether to skip the precheck item. Valid values:
    // 
    // - **true**: Skips the precheck item.
    // - **false**: Does not skip the precheck item.
    // 
    // This parameter is required.
    shared_ptr<bool> skip_ {};
    // The abbreviations of the precheck items to skip or unskip. Valid values:
    // 
    // - **["CHECK_SAME_OBJ"]**: Checks for the existence of objects with the same name.
    // - **["CHECK_SAME_USER"]**: Checks for the existence of accounts with different names.
    // - **["CHECK_SRC"]**: Checks the version of the source database.
    // - **["CHECK_TOPOLOGY"]**: Checks the topology version. For more information about the topology versions supported by DTS, see [Topology overview](https://help.aliyun.com/document_detail/124115.html).
    // - **["CHECK_SERVER_ID"]**: Checks the server_id of the source database.
    // - **["CHECK_DEST_TABLE_EMPTY"]**: Checks for the existence of objects in the destination database.
    // - **["CHECK_SUPER_AUTH_DEST"]**: Checks the permissions of the super account in the destination database.
    // 
    // > Separate multiple item names with commas (,), for example, **["CHECK_SRC","CHECK_SAME_OBJ"]**.
    shared_ptr<string> skipPreCheckItems_ {};
    // The names of the precheck items to skip or unskip. This parameter corresponds to the **SkipPreCheckItems** parameter. Valid values:
    // 
    // - **["CHECK_SAME_OBJ_DETAIL"]**: Checks for the existence of objects with the same name.
    // - **["CHECK_SAME_USER_DETAIL"]**: Checks for the existence of accounts with different names.
    // - **["CHECK_SRC_DETAIL"]**: Checks the version of the source database.
    // - **["CHECK_TOPOLOGY_DETAIL"]**: Checks the topology version. For more information about the topology versions supported by DTS, see [Topology overview](https://help.aliyun.com/document_detail/124115.html).
    // - **["CHECK_SERVER_ID_DETAIL"]**: Checks the server_id of the source database.
    // - **["CHECK_DEST_TABLE_EMPTY_DETAIL"]**: Checks whether the tables in the destination database are empty.
    // - **["CHECK_SUPER_AUTH_DEST_DETAIL"]**: Checks the permissions of the super account in the destination database.
    // 
    // > Separate multiple item names with commas (,), for example, **["CHECK_SRC_DETAIL","CHECK_SAME_OBJ_DETAIL"]**.
    shared_ptr<string> skipPreCheckNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
