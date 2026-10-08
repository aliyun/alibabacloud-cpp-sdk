// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERAUTHORIZEDRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERAUTHORIZEDRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListUserAuthorizedResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserAuthorizedResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PermissionCode, permissionCode_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserAuthorizedResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PermissionCode, permissionCode_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListUserAuthorizedResourcesRequest() = default ;
    ListUserAuthorizedResourcesRequest(const ListUserAuthorizedResourcesRequest &) = default ;
    ListUserAuthorizedResourcesRequest(ListUserAuthorizedResourcesRequest &&) = default ;
    ListUserAuthorizedResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserAuthorizedResourcesRequest() = default ;
    ListUserAuthorizedResourcesRequest& operator=(const ListUserAuthorizedResourcesRequest &) = default ;
    ListUserAuthorizedResourcesRequest& operator=(ListUserAuthorizedResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->permissionCode_ == nullptr && this->resourceType_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserAuthorizedResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // permissionCode Field Functions 
    bool hasPermissionCode() const { return this->permissionCode_ != nullptr;};
    void deletePermissionCode() { this->permissionCode_ = nullptr;};
    inline string getPermissionCode() const { DARABONBA_PTR_GET_DEFAULT(permissionCode_, "") };
    inline ListUserAuthorizedResourcesRequest& setPermissionCode(string permissionCode) { DARABONBA_PTR_SET_VALUE(permissionCode_, permissionCode) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListUserAuthorizedResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> permissionCode_ {};
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
