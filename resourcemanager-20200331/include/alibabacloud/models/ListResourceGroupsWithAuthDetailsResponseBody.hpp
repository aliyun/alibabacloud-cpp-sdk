// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSRESPONSEBODY_HPP_
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
  class ListResourceGroupsWithAuthDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsWithAuthDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthDetails, authDetails_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsWithAuthDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthDetails, authDetails_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResourceGroupsWithAuthDetailsResponseBody() = default ;
    ListResourceGroupsWithAuthDetailsResponseBody(const ListResourceGroupsWithAuthDetailsResponseBody &) = default ;
    ListResourceGroupsWithAuthDetailsResponseBody(ListResourceGroupsWithAuthDetailsResponseBody &&) = default ;
    ListResourceGroupsWithAuthDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsWithAuthDetailsResponseBody() = default ;
    ListResourceGroupsWithAuthDetailsResponseBody& operator=(const ListResourceGroupsWithAuthDetailsResponseBody &) = default ;
    ListResourceGroupsWithAuthDetailsResponseBody& operator=(ListResourceGroupsWithAuthDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      ResourceGroups() = default ;
      ResourceGroups(const ResourceGroups &) = default ;
      ResourceGroups(ResourceGroups &&) = default ;
      ResourceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceGroups() = default ;
      ResourceGroups& operator=(const ResourceGroups &) = default ;
      ResourceGroups& operator=(ResourceGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->createDate_ == nullptr && this->displayName_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline ResourceGroups& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline ResourceGroups& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline ResourceGroups& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ResourceGroups& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ResourceGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ResourceGroups::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ResourceGroups::Tags>) };
      inline vector<ResourceGroups::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ResourceGroups::Tags>) };
      inline ResourceGroups& setTags(const vector<ResourceGroups::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ResourceGroups& setTags(vector<ResourceGroups::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The ID of the Alibaba Cloud account to which the resource group belongs.
      shared_ptr<string> accountId_ {};
      // The time when the resource group was created. The time is displayed in UTC.
      shared_ptr<string> createDate_ {};
      // The display name of the resource group.
      shared_ptr<string> displayName_ {};
      // The ID of your Alibaba Cloud resource group.
      shared_ptr<string> id_ {};
      // The unique identifier of the resource group.
      shared_ptr<string> name_ {};
      // The status of the resource group. Valid values:
      // 
      // *   Creating: The resource group is being created.
      // *   OK: The resource group is created.
      // *   PendingDelete: The resource group is waiting to be deleted.
      shared_ptr<string> status_ {};
      // The tags.
      shared_ptr<vector<ResourceGroups::Tags>> tags_ {};
    };

    class AuthDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthDetails& obj) { 
        DARABONBA_PTR_TO_JSON(AccountScopeAuth, accountScopeAuth_);
        DARABONBA_PTR_TO_JSON(AuthOfResourceGroups, authOfResourceGroups_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Service, service_);
      };
      friend void from_json(const Darabonba::Json& j, AuthDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountScopeAuth, accountScopeAuth_);
        DARABONBA_PTR_FROM_JSON(AuthOfResourceGroups, authOfResourceGroups_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Service, service_);
      };
      AuthDetails() = default ;
      AuthDetails(const AuthDetails &) = default ;
      AuthDetails(AuthDetails &&) = default ;
      AuthDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthDetails() = default ;
      AuthDetails& operator=(const AuthDetails &) = default ;
      AuthDetails& operator=(AuthDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuthOfResourceGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthOfResourceGroups& obj) { 
          DARABONBA_PTR_TO_JSON(HasPermission, hasPermission_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, AuthOfResourceGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(HasPermission, hasPermission_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        };
        AuthOfResourceGroups() = default ;
        AuthOfResourceGroups(const AuthOfResourceGroups &) = default ;
        AuthOfResourceGroups(AuthOfResourceGroups &&) = default ;
        AuthOfResourceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthOfResourceGroups() = default ;
        AuthOfResourceGroups& operator=(const AuthOfResourceGroups &) = default ;
        AuthOfResourceGroups& operator=(AuthOfResourceGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hasPermission_ == nullptr
        && this->resourceGroupId_ == nullptr; };
        // hasPermission Field Functions 
        bool hasHasPermission() const { return this->hasPermission_ != nullptr;};
        void deleteHasPermission() { this->hasPermission_ = nullptr;};
        inline bool getHasPermission() const { DARABONBA_PTR_GET_DEFAULT(hasPermission_, false) };
        inline AuthOfResourceGroups& setHasPermission(bool hasPermission) { DARABONBA_PTR_SET_VALUE(hasPermission_, hasPermission) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline AuthOfResourceGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      protected:
        // Indicates whether the user has permissions on the resource group for the specified resource type.
        shared_ptr<bool> hasPermission_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
      };

      virtual bool empty() const override { return this->accountScopeAuth_ == nullptr
        && this->authOfResourceGroups_ == nullptr && this->resourceType_ == nullptr && this->service_ == nullptr; };
      // accountScopeAuth Field Functions 
      bool hasAccountScopeAuth() const { return this->accountScopeAuth_ != nullptr;};
      void deleteAccountScopeAuth() { this->accountScopeAuth_ = nullptr;};
      inline bool getAccountScopeAuth() const { DARABONBA_PTR_GET_DEFAULT(accountScopeAuth_, false) };
      inline AuthDetails& setAccountScopeAuth(bool accountScopeAuth) { DARABONBA_PTR_SET_VALUE(accountScopeAuth_, accountScopeAuth) };


      // authOfResourceGroups Field Functions 
      bool hasAuthOfResourceGroups() const { return this->authOfResourceGroups_ != nullptr;};
      void deleteAuthOfResourceGroups() { this->authOfResourceGroups_ = nullptr;};
      inline const vector<AuthDetails::AuthOfResourceGroups> & getAuthOfResourceGroups() const { DARABONBA_PTR_GET_CONST(authOfResourceGroups_, vector<AuthDetails::AuthOfResourceGroups>) };
      inline vector<AuthDetails::AuthOfResourceGroups> getAuthOfResourceGroups() { DARABONBA_PTR_GET(authOfResourceGroups_, vector<AuthDetails::AuthOfResourceGroups>) };
      inline AuthDetails& setAuthOfResourceGroups(const vector<AuthDetails::AuthOfResourceGroups> & authOfResourceGroups) { DARABONBA_PTR_SET_VALUE(authOfResourceGroups_, authOfResourceGroups) };
      inline AuthDetails& setAuthOfResourceGroups(vector<AuthDetails::AuthOfResourceGroups> && authOfResourceGroups) { DARABONBA_PTR_SET_RVALUE(authOfResourceGroups_, authOfResourceGroups) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline AuthDetails& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline AuthDetails& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    protected:
      // Indicates whether the user has account-level authorization for this resource type.
      shared_ptr<bool> accountScopeAuth_ {};
      // The permission details for the resource groups on the specified resource types.
      shared_ptr<vector<AuthDetails::AuthOfResourceGroups>> authOfResourceGroups_ {};
      // The resource type.
      // 
      // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> resourceType_ {};
      // The ID of the Alibaba Cloud service.
      // 
      // You can obtain the ID from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> service_ {};
    };

    virtual bool empty() const override { return this->authDetails_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resourceGroups_ == nullptr && this->totalCount_ == nullptr; };
    // authDetails Field Functions 
    bool hasAuthDetails() const { return this->authDetails_ != nullptr;};
    void deleteAuthDetails() { this->authDetails_ = nullptr;};
    inline const vector<ListResourceGroupsWithAuthDetailsResponseBody::AuthDetails> & getAuthDetails() const { DARABONBA_PTR_GET_CONST(authDetails_, vector<ListResourceGroupsWithAuthDetailsResponseBody::AuthDetails>) };
    inline vector<ListResourceGroupsWithAuthDetailsResponseBody::AuthDetails> getAuthDetails() { DARABONBA_PTR_GET(authDetails_, vector<ListResourceGroupsWithAuthDetailsResponseBody::AuthDetails>) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setAuthDetails(const vector<ListResourceGroupsWithAuthDetailsResponseBody::AuthDetails> & authDetails) { DARABONBA_PTR_SET_VALUE(authDetails_, authDetails) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setAuthDetails(vector<ListResourceGroupsWithAuthDetailsResponseBody::AuthDetails> && authDetails) { DARABONBA_PTR_SET_RVALUE(authDetails_, authDetails) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroups Field Functions 
    bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
    void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
    inline const vector<ListResourceGroupsWithAuthDetailsResponseBody::ResourceGroups> & getResourceGroups() const { DARABONBA_PTR_GET_CONST(resourceGroups_, vector<ListResourceGroupsWithAuthDetailsResponseBody::ResourceGroups>) };
    inline vector<ListResourceGroupsWithAuthDetailsResponseBody::ResourceGroups> getResourceGroups() { DARABONBA_PTR_GET(resourceGroups_, vector<ListResourceGroupsWithAuthDetailsResponseBody::ResourceGroups>) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setResourceGroups(const vector<ListResourceGroupsWithAuthDetailsResponseBody::ResourceGroups> & resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setResourceGroups(vector<ListResourceGroupsWithAuthDetailsResponseBody::ResourceGroups> && resourceGroups) { DARABONBA_PTR_SET_RVALUE(resourceGroups_, resourceGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The authorization details for resource groups.
    shared_ptr<vector<ListResourceGroupsWithAuthDetailsResponseBody::AuthDetails>> authDetails_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The response parameters.
    shared_ptr<string> requestId_ {};
    // The information of the resource groups.
    shared_ptr<vector<ListResourceGroupsWithAuthDetailsResponseBody::ResourceGroups>> resourceGroups_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
