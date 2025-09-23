// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESHAREPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESHAREPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceSharePermissionsResponseBodyPermissions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListResourceSharePermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceSharePermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceSharePermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListResourceSharePermissionsResponseBody() = default ;
    ListResourceSharePermissionsResponseBody(const ListResourceSharePermissionsResponseBody &) = default ;
    ListResourceSharePermissionsResponseBody(ListResourceSharePermissionsResponseBody &&) = default ;
    ListResourceSharePermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceSharePermissionsResponseBody() = default ;
    ListResourceSharePermissionsResponseBody& operator=(const ListResourceSharePermissionsResponseBody &) = default ;
    ListResourceSharePermissionsResponseBody& operator=(ListResourceSharePermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->permissions_ != nullptr && this->requestId_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceSharePermissionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<ListResourceSharePermissionsResponseBodyPermissions> & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<ListResourceSharePermissionsResponseBodyPermissions>) };
    inline vector<ListResourceSharePermissionsResponseBodyPermissions> permissions() { DARABONBA_PTR_GET(permissions_, vector<ListResourceSharePermissionsResponseBodyPermissions>) };
    inline ListResourceSharePermissionsResponseBody& setPermissions(const vector<ListResourceSharePermissionsResponseBodyPermissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline ListResourceSharePermissionsResponseBody& setPermissions(vector<ListResourceSharePermissionsResponseBodyPermissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceSharePermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The `token` that is used to initiate the next request. If the response of the current request is truncated, you can use the token to initiate another request and obtain the remaining records.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The information about the permissions.
    std::shared_ptr<vector<ListResourceSharePermissionsResponseBodyPermissions>> permissions_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
