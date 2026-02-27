// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSREQUEST_HPP_
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
  class ListResourceGroupsWithAuthDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsWithAuthDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(IncludeTags, includeTags_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsWithAuthDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(IncludeTags, includeTags_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListResourceGroupsWithAuthDetailsRequest() = default ;
    ListResourceGroupsWithAuthDetailsRequest(const ListResourceGroupsWithAuthDetailsRequest &) = default ;
    ListResourceGroupsWithAuthDetailsRequest(ListResourceGroupsWithAuthDetailsRequest &&) = default ;
    ListResourceGroupsWithAuthDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsWithAuthDetailsRequest() = default ;
    ListResourceGroupsWithAuthDetailsRequest& operator=(const ListResourceGroupsWithAuthDetailsRequest &) = default ;
    ListResourceGroupsWithAuthDetailsRequest& operator=(ListResourceGroupsWithAuthDetailsRequest &&) = default ;
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

    class ResourceTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTypes& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceTypeCode, resourceTypeCode_);
        DARABONBA_PTR_TO_JSON(Service, service_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceTypeCode, resourceTypeCode_);
        DARABONBA_PTR_FROM_JSON(Service, service_);
      };
      ResourceTypes() = default ;
      ResourceTypes(const ResourceTypes &) = default ;
      ResourceTypes(ResourceTypes &&) = default ;
      ResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTypes() = default ;
      ResourceTypes& operator=(const ResourceTypes &) = default ;
      ResourceTypes& operator=(ResourceTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceTypeCode_ == nullptr
        && this->service_ == nullptr; };
      // resourceTypeCode Field Functions 
      bool hasResourceTypeCode() const { return this->resourceTypeCode_ != nullptr;};
      void deleteResourceTypeCode() { this->resourceTypeCode_ = nullptr;};
      inline string getResourceTypeCode() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeCode_, "") };
      inline ResourceTypes& setResourceTypeCode(string resourceTypeCode) { DARABONBA_PTR_SET_VALUE(resourceTypeCode_, resourceTypeCode) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline ResourceTypes& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    protected:
      // The resource type.
      // 
      // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> resourceTypeCode_ {};
      // The service code.
      // 
      // You can obtain the code from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> service_ {};
    };

    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->includeTags_ == nullptr && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceGroupIds_ == nullptr
        && this->resourceRegionId_ == nullptr && this->resourceTypes_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListResourceGroupsWithAuthDetailsRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // includeTags Field Functions 
    bool hasIncludeTags() const { return this->includeTags_ != nullptr;};
    void deleteIncludeTags() { this->includeTags_ = nullptr;};
    inline bool getIncludeTags() const { DARABONBA_PTR_GET_DEFAULT(includeTags_, false) };
    inline ListResourceGroupsWithAuthDetailsRequest& setIncludeTags(bool includeTags) { DARABONBA_PTR_SET_VALUE(includeTags_, includeTags) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourceGroupsWithAuthDetailsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceGroupsWithAuthDetailsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceGroupsWithAuthDetailsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupIds Field Functions 
    bool hasResourceGroupIds() const { return this->resourceGroupIds_ != nullptr;};
    void deleteResourceGroupIds() { this->resourceGroupIds_ = nullptr;};
    inline const vector<string> & getResourceGroupIds() const { DARABONBA_PTR_GET_CONST(resourceGroupIds_, vector<string>) };
    inline vector<string> getResourceGroupIds() { DARABONBA_PTR_GET(resourceGroupIds_, vector<string>) };
    inline ListResourceGroupsWithAuthDetailsRequest& setResourceGroupIds(const vector<string> & resourceGroupIds) { DARABONBA_PTR_SET_VALUE(resourceGroupIds_, resourceGroupIds) };
    inline ListResourceGroupsWithAuthDetailsRequest& setResourceGroupIds(vector<string> && resourceGroupIds) { DARABONBA_PTR_SET_RVALUE(resourceGroupIds_, resourceGroupIds) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline ListResourceGroupsWithAuthDetailsRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<ListResourceGroupsWithAuthDetailsRequest::ResourceTypes> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<ListResourceGroupsWithAuthDetailsRequest::ResourceTypes>) };
    inline vector<ListResourceGroupsWithAuthDetailsRequest::ResourceTypes> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<ListResourceGroupsWithAuthDetailsRequest::ResourceTypes>) };
    inline ListResourceGroupsWithAuthDetailsRequest& setResourceTypes(const vector<ListResourceGroupsWithAuthDetailsRequest::ResourceTypes> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline ListResourceGroupsWithAuthDetailsRequest& setResourceTypes(vector<ListResourceGroupsWithAuthDetailsRequest::ResourceTypes> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceGroupsWithAuthDetailsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListResourceGroupsWithAuthDetailsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListResourceGroupsWithAuthDetailsRequest::Tag>) };
    inline vector<ListResourceGroupsWithAuthDetailsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListResourceGroupsWithAuthDetailsRequest::Tag>) };
    inline ListResourceGroupsWithAuthDetailsRequest& setTag(const vector<ListResourceGroupsWithAuthDetailsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListResourceGroupsWithAuthDetailsRequest& setTag(vector<ListResourceGroupsWithAuthDetailsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The display name of the resource group. This parameter specifies a filter condition for the query. Fuzzy search is supported.
    // 
    // The display name can be a maximum of 50 characters in length.
    shared_ptr<string> displayName_ {};
    // Specifies whether to return the information of tags. Valid values:
    // 
    // *   false (default)
    // *   true
    // 
    // >  If you set a tag filter condition, the tag information is returned regardless of the `IncludeTags` value.
    shared_ptr<bool> includeTags_ {};
    // The identifier of the resource group. This parameter specifies a filter condition for the query. Fuzzy search is supported.
    // 
    // The identifier can be a maximum of 50 characters in length and can contain letters, digits, and hyphens (-).
    shared_ptr<string> name_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The IDs of the resource groups that you want to query.
    shared_ptr<vector<string>> resourceGroupIds_ {};
    // The ID of the region where the resource resides.
    shared_ptr<string> resourceRegionId_ {};
    // The resource types.
    shared_ptr<vector<ListResourceGroupsWithAuthDetailsRequest::ResourceTypes>> resourceTypes_ {};
    // The status of the resource group. This parameter specifies a filter condition for the query. Valid values:
    // 
    // *   Creating: The resource group is being created.
    // *   OK: The resource group is created.
    // *   PendingDelete: The resource group is waiting to be deleted.
    shared_ptr<string> status_ {};
    // The tags.
    shared_ptr<vector<ListResourceGroupsWithAuthDetailsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
