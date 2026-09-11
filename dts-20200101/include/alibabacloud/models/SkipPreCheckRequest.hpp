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
    // The ID of the precheck task. You can call **DescribePreCheckStatus** to query the ID.
    shared_ptr<string> jobId_ {};
    // The region in which the DTS instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Specifies whether to suppress the precheck item. Valid values:
    // 
    // - **true**: Suppress the precheck item.
    // - **false**: Unsuppress the precheck item.
    // 
    // This parameter is required.
    shared_ptr<bool> skip_ {};
    // The abbreviated names of the precheck items to suppress or unsuppress. Valid values:
    // 
    // - **["CHECK_SAME_OBJ"]**: check for objects with the same name.
    // - **["CHECK_SAME_USER"]**: check for accounts with different names.
    // - **["CHECK_SRC"]**: source database version check.
    // - **["CHECK_TOPOLOGY"]**: topology version check. For the topology versions supported by DTS, see [Topology overview](https://help.aliyun.com/document_detail/124115.html).
    // - **["CHECK_SERVER_ID"]**: source database server_id check.
    // - **["CHECK_DEST_TABLE_EMPTY"]**: destination database object existence check.
    // - **["CHECK_SUPER_AUTH_DEST"]**: destination database super account permission check.
    // 
    // > Separate multiple item names with commas (,), for example, **["CHECK_SRC","CHECK_SAME_OBJ"]**.
    shared_ptr<string> skipPreCheckItems_ {};
    // The full names of the precheck items to suppress or unsuppress. This parameter corresponds to the **SkipPreCheckItems** parameter. Valid values:
    // 
    // - **["CHECK_SAME_OBJ_DETAIL"]**: check for objects with the same name.
    // - **["CHECK_SAME_USER_DETAIL"]**: check for accounts with different names.
    // - **["CHECK_SRC_DETAIL"]**: source database version check.
    // - **["CHECK_TOPOLOGY_DETAIL"]**: topology version check. For the topology versions supported by DTS, see [Topology overview](https://help.aliyun.com/document_detail/124115.html).
    // - **["CHECK_SERVER_ID_DETAIL"]**: source database server_id check.
    // - **["CHECK_DEST_TABLE_EMPTY_DETAIL"]**: check whether the destination database tables are empty.
    // - **["CHECK_SUPER_AUTH_DEST_DETAIL"]**: check the super account permissions of the destination database.
    // 
    // > Separate multiple item names with commas (,), for example, **["CHECK_SRC_DETAIL","CHECK_SAME_OBJ_DETAIL"]**.
    shared_ptr<string> skipPreCheckNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
