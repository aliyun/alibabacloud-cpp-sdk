// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListMultiAccountResourceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiAccountResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroups, resourceGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiAccountResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroups, resourceGroups_);
    };
    ListMultiAccountResourceGroupsResponseBody() = default ;
    ListMultiAccountResourceGroupsResponseBody(const ListMultiAccountResourceGroupsResponseBody &) = default ;
    ListMultiAccountResourceGroupsResponseBody(ListMultiAccountResourceGroupsResponseBody &&) = default ;
    ListMultiAccountResourceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiAccountResourceGroupsResponseBody() = default ;
    ListMultiAccountResourceGroupsResponseBody& operator=(const ListMultiAccountResourceGroupsResponseBody &) = default ;
    ListMultiAccountResourceGroupsResponseBody& operator=(ListMultiAccountResourceGroupsResponseBody &&) = default ;
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
      };
      friend void from_json(const Darabonba::Json& j, ResourceGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->createDate_ == nullptr && this->displayName_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->status_ == nullptr; };
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


    protected:
      // The ID of the management account or a member in the resource directory.
      shared_ptr<string> accountId_ {};
      // The time when the resource group was created.
      shared_ptr<string> createDate_ {};
      // The display name of the resource group.
      shared_ptr<string> displayName_ {};
      // The resource group ID.
      shared_ptr<string> id_ {};
      // The unique identifier of the resource group.
      shared_ptr<string> name_ {};
      // The status of the resource group.
      // 
      // - Creating: The resource group is being created.
      // 
      // - OK: The resource group is created.
      // 
      // - PendingDelete: The resource group is pending deletion.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroups_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiAccountResourceGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMultiAccountResourceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroups Field Functions 
    bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
    void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
    inline const vector<ListMultiAccountResourceGroupsResponseBody::ResourceGroups> & getResourceGroups() const { DARABONBA_PTR_GET_CONST(resourceGroups_, vector<ListMultiAccountResourceGroupsResponseBody::ResourceGroups>) };
    inline vector<ListMultiAccountResourceGroupsResponseBody::ResourceGroups> getResourceGroups() { DARABONBA_PTR_GET(resourceGroups_, vector<ListMultiAccountResourceGroupsResponseBody::ResourceGroups>) };
    inline ListMultiAccountResourceGroupsResponseBody& setResourceGroups(const vector<ListMultiAccountResourceGroupsResponseBody::ResourceGroups> & resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };
    inline ListMultiAccountResourceGroupsResponseBody& setResourceGroups(vector<ListMultiAccountResourceGroupsResponseBody::ResourceGroups> && resourceGroups) { DARABONBA_PTR_SET_RVALUE(resourceGroups_, resourceGroups) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource groups.
    shared_ptr<vector<ListMultiAccountResourceGroupsResponseBody::ResourceGroups>> resourceGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
