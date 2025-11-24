// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserPermissionsResponseBodyPermissions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeUserPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserPermissionsResponseBody() = default ;
    DescribeUserPermissionsResponseBody(const DescribeUserPermissionsResponseBody &) = default ;
    DescribeUserPermissionsResponseBody(DescribeUserPermissionsResponseBody &&) = default ;
    DescribeUserPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserPermissionsResponseBody() = default ;
    DescribeUserPermissionsResponseBody& operator=(const DescribeUserPermissionsResponseBody &) = default ;
    DescribeUserPermissionsResponseBody& operator=(DescribeUserPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permissions_ == nullptr
        && return this->requestId_ == nullptr; };
    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<DescribeUserPermissionsResponseBodyPermissions> & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<DescribeUserPermissionsResponseBodyPermissions>) };
    inline vector<DescribeUserPermissionsResponseBodyPermissions> permissions() { DARABONBA_PTR_GET(permissions_, vector<DescribeUserPermissionsResponseBodyPermissions>) };
    inline DescribeUserPermissionsResponseBody& setPermissions(const vector<DescribeUserPermissionsResponseBodyPermissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline DescribeUserPermissionsResponseBody& setPermissions(vector<DescribeUserPermissionsResponseBodyPermissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserPermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The permissions that are granted to an entity.
    std::shared_ptr<vector<DescribeUserPermissionsResponseBodyPermissions>> permissions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
