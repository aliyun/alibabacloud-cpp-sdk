// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBROWSERINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBROWSERINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListBrowserInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBrowserInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupSetId, appInstanceGroupSetId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(BrowserInstanceGroupName, browserInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(CloudBrowserName, cloudBrowserName_);
      DARABONBA_PTR_TO_JSON(ExcludedUserGroupIds, excludedUserGroupIds_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Tier, tier_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListBrowserInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupSetId, appInstanceGroupSetId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupName, browserInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(CloudBrowserName, cloudBrowserName_);
      DARABONBA_PTR_FROM_JSON(ExcludedUserGroupIds, excludedUserGroupIds_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Tier, tier_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
    };
    ListBrowserInstanceGroupRequest() = default ;
    ListBrowserInstanceGroupRequest(const ListBrowserInstanceGroupRequest &) = default ;
    ListBrowserInstanceGroupRequest(ListBrowserInstanceGroupRequest &&) = default ;
    ListBrowserInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBrowserInstanceGroupRequest() = default ;
    ListBrowserInstanceGroupRequest& operator=(const ListBrowserInstanceGroupRequest &) = default ;
    ListBrowserInstanceGroupRequest& operator=(ListBrowserInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. Do not specify this parameter in customer-facing scenarios.
      shared_ptr<string> key_ {};
      // The tag value. Do not specify this parameter in customer-facing scenarios.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->appInstanceGroupSetId_ == nullptr
        && this->bizRegionId_ == nullptr && this->browserInstanceGroupId_ == nullptr && this->browserInstanceGroupName_ == nullptr && this->cloudBrowserName_ == nullptr && this->excludedUserGroupIds_ == nullptr
        && this->officeSiteId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr
        && this->tier_ == nullptr && this->userGroupIds_ == nullptr; };
    // appInstanceGroupSetId Field Functions 
    bool hasAppInstanceGroupSetId() const { return this->appInstanceGroupSetId_ != nullptr;};
    void deleteAppInstanceGroupSetId() { this->appInstanceGroupSetId_ = nullptr;};
    inline string getAppInstanceGroupSetId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupSetId_, "") };
    inline ListBrowserInstanceGroupRequest& setAppInstanceGroupSetId(string appInstanceGroupSetId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupSetId_, appInstanceGroupSetId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ListBrowserInstanceGroupRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // browserInstanceGroupId Field Functions 
    bool hasBrowserInstanceGroupId() const { return this->browserInstanceGroupId_ != nullptr;};
    void deleteBrowserInstanceGroupId() { this->browserInstanceGroupId_ = nullptr;};
    inline string getBrowserInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupId_, "") };
    inline ListBrowserInstanceGroupRequest& setBrowserInstanceGroupId(string browserInstanceGroupId) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupId_, browserInstanceGroupId) };


    // browserInstanceGroupName Field Functions 
    bool hasBrowserInstanceGroupName() const { return this->browserInstanceGroupName_ != nullptr;};
    void deleteBrowserInstanceGroupName() { this->browserInstanceGroupName_ = nullptr;};
    inline string getBrowserInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupName_, "") };
    inline ListBrowserInstanceGroupRequest& setBrowserInstanceGroupName(string browserInstanceGroupName) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupName_, browserInstanceGroupName) };


    // cloudBrowserName Field Functions 
    bool hasCloudBrowserName() const { return this->cloudBrowserName_ != nullptr;};
    void deleteCloudBrowserName() { this->cloudBrowserName_ = nullptr;};
    inline string getCloudBrowserName() const { DARABONBA_PTR_GET_DEFAULT(cloudBrowserName_, "") };
    inline ListBrowserInstanceGroupRequest& setCloudBrowserName(string cloudBrowserName) { DARABONBA_PTR_SET_VALUE(cloudBrowserName_, cloudBrowserName) };


    // excludedUserGroupIds Field Functions 
    bool hasExcludedUserGroupIds() const { return this->excludedUserGroupIds_ != nullptr;};
    void deleteExcludedUserGroupIds() { this->excludedUserGroupIds_ = nullptr;};
    inline const vector<string> & getExcludedUserGroupIds() const { DARABONBA_PTR_GET_CONST(excludedUserGroupIds_, vector<string>) };
    inline vector<string> getExcludedUserGroupIds() { DARABONBA_PTR_GET(excludedUserGroupIds_, vector<string>) };
    inline ListBrowserInstanceGroupRequest& setExcludedUserGroupIds(const vector<string> & excludedUserGroupIds) { DARABONBA_PTR_SET_VALUE(excludedUserGroupIds_, excludedUserGroupIds) };
    inline ListBrowserInstanceGroupRequest& setExcludedUserGroupIds(vector<string> && excludedUserGroupIds) { DARABONBA_PTR_SET_RVALUE(excludedUserGroupIds_, excludedUserGroupIds) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ListBrowserInstanceGroupRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBrowserInstanceGroupRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBrowserInstanceGroupRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> getStatus() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline ListBrowserInstanceGroupRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListBrowserInstanceGroupRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListBrowserInstanceGroupRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListBrowserInstanceGroupRequest::Tag>) };
    inline vector<ListBrowserInstanceGroupRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListBrowserInstanceGroupRequest::Tag>) };
    inline ListBrowserInstanceGroupRequest& setTag(const vector<ListBrowserInstanceGroupRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListBrowserInstanceGroupRequest& setTag(vector<ListBrowserInstanceGroupRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tier Field Functions 
    bool hasTier() const { return this->tier_ != nullptr;};
    void deleteTier() { this->tier_ = nullptr;};
    inline string getTier() const { DARABONBA_PTR_GET_DEFAULT(tier_, "") };
    inline ListBrowserInstanceGroupRequest& setTier(string tier) { DARABONBA_PTR_SET_VALUE(tier_, tier) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline ListBrowserInstanceGroupRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline ListBrowserInstanceGroupRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


  protected:
    // The browser group set ID for exact match queries of active members in the set.
    shared_ptr<string> appInstanceGroupSetId_ {};
    // Filters browser groups by business region.
    shared_ptr<string> bizRegionId_ {};
    // The cloud browser group ID for exact match queries.
    shared_ptr<string> browserInstanceGroupId_ {};
    // The browser group name. Fuzzy match is supported.
    shared_ptr<string> browserInstanceGroupName_ {};
    // Performs a contains match by browser group name or ID.
    shared_ptr<string> cloudBrowserName_ {};
    // Excludes browser groups that are authorized to the specified user groups.
    shared_ptr<vector<string>> excludedUserGroupIds_ {};
    // Filters browser groups by office network ID.
    shared_ptr<string> officeSiteId_ {};
    // The page number, starting from page 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page.
    shared_ptr<int32_t> pageSize_ {};
    // Filters by browser group status.
    // 
    // **Limit:** Only one status value can be specified at a time.
    shared_ptr<vector<string>> status_ {};
    // The tag filter parameters. This parameter is not supported in customer-facing scenarios. Do not specify this parameter.
    shared_ptr<vector<ListBrowserInstanceGroupRequest::Tag>> tag_ {};
    // Filters by version of the browser.
    // 
    // - `Basic`: Basic Edition.
    // - `Pro`: Premium Edition.
    // 
    // Use `Pro` to query MAU browser groups.
    shared_ptr<string> tier_ {};
    // Filters by authorized user group IDs.
    shared_ptr<vector<string>> userGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
