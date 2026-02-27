// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListResourceGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(IncludeTags, includeTags_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(IncludeTags, includeTags_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListResourceGroupsRequest() = default ;
    ListResourceGroupsRequest(const ListResourceGroupsRequest &) = default ;
    ListResourceGroupsRequest(ListResourceGroupsRequest &&) = default ;
    ListResourceGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsRequest() = default ;
    ListResourceGroupsRequest& operator=(const ListResourceGroupsRequest &) = default ;
    ListResourceGroupsRequest& operator=(ListResourceGroupsRequest &&) = default ;
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
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->includeTags_ == nullptr && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceGroupIds_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListResourceGroupsRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // includeTags Field Functions 
    bool hasIncludeTags() const { return this->includeTags_ != nullptr;};
    void deleteIncludeTags() { this->includeTags_ = nullptr;};
    inline bool getIncludeTags() const { DARABONBA_PTR_GET_DEFAULT(includeTags_, false) };
    inline ListResourceGroupsRequest& setIncludeTags(bool includeTags) { DARABONBA_PTR_SET_VALUE(includeTags_, includeTags) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourceGroupsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListResourceGroupsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupIds Field Functions 
    bool hasResourceGroupIds() const { return this->resourceGroupIds_ != nullptr;};
    void deleteResourceGroupIds() { this->resourceGroupIds_ = nullptr;};
    inline const vector<string> & getResourceGroupIds() const { DARABONBA_PTR_GET_CONST(resourceGroupIds_, vector<string>) };
    inline vector<string> getResourceGroupIds() { DARABONBA_PTR_GET(resourceGroupIds_, vector<string>) };
    inline ListResourceGroupsRequest& setResourceGroupIds(const vector<string> & resourceGroupIds) { DARABONBA_PTR_SET_VALUE(resourceGroupIds_, resourceGroupIds) };
    inline ListResourceGroupsRequest& setResourceGroupIds(vector<string> && resourceGroupIds) { DARABONBA_PTR_SET_RVALUE(resourceGroupIds_, resourceGroupIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceGroupsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListResourceGroupsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListResourceGroupsRequest::Tag>) };
    inline vector<ListResourceGroupsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListResourceGroupsRequest::Tag>) };
    inline ListResourceGroupsRequest& setTag(const vector<ListResourceGroupsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListResourceGroupsRequest& setTag(vector<ListResourceGroupsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The display name of the resource group. This parameter specifies a filter condition for the query. Fuzzy match is supported.
    // 
    // The display name can be a maximum of 50 characters in length.
    shared_ptr<string> displayName_ {};
    // Specifies whether to return the information of tags. Valid values:
    // 
    // *   false (default value)
    // *   true
    // 
    // >  If you configure the Tag parameter, the system returns the information of tags regardless of the setting of the `IncludeTags` parameter.
    shared_ptr<bool> includeTags_ {};
    // The identifier of the resource group. This parameter specifies a filter condition for the query. Fuzzy match is supported.
    // 
    // The identifier can be a maximum of 50 characters in length and can contain letters, digits, and hyphens (-).
    shared_ptr<string> name_ {};
    // The number of the page to return.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the resource group. This parameter specifies a filter condition for the query.
    // 
    // The ID can be a maximum of 18 characters in length and must start with `rg-`.
    // 
    // >  This parameter is incorporated into the `ResourceGroupIds` parameter. If you configure both the `ResourceGroupId` and `ResourceGroupIds` parameters, the value of the `ResourceGroupIds` parameter prevails.
    shared_ptr<string> resourceGroupId_ {};
    // The IDs of the resource groups. This parameter specifies a filter condition for the query.
    // 
    // You can specify a maximum of 100 resource group IDs.
    // 
    // >  If you configure both the `ResourceGroupId` and `ResourceGroupIds` parameters, the value of the `ResourceGroupIds` parameter prevails.
    shared_ptr<vector<string>> resourceGroupIds_ {};
    // The status of the resource group. This parameter specifies a filter condition for the query. Valid values:
    // 
    // *   Creating: The resource group is being created.
    // *   OK: The resource group is created.
    // *   PendingDelete: The resource group is waiting to be deleted.
    shared_ptr<string> status_ {};
    // The tag. This parameter specifies a filter condition for the query.
    shared_ptr<vector<ListResourceGroupsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
