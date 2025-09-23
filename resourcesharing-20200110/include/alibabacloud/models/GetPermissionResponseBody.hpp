// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPermissionResponseBodyPermission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class GetPermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPermissionResponseBody() = default ;
    GetPermissionResponseBody(const GetPermissionResponseBody &) = default ;
    GetPermissionResponseBody(GetPermissionResponseBody &&) = default ;
    GetPermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionResponseBody() = default ;
    GetPermissionResponseBody& operator=(const GetPermissionResponseBody &) = default ;
    GetPermissionResponseBody& operator=(GetPermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->permission_ != nullptr
        && this->requestId_ != nullptr; };
    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline const GetPermissionResponseBodyPermission & permission() const { DARABONBA_PTR_GET_CONST(permission_, GetPermissionResponseBodyPermission) };
    inline GetPermissionResponseBodyPermission permission() { DARABONBA_PTR_GET(permission_, GetPermissionResponseBodyPermission) };
    inline GetPermissionResponseBody& setPermission(const GetPermissionResponseBodyPermission & permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };
    inline GetPermissionResponseBody& setPermission(GetPermissionResponseBodyPermission && permission) { DARABONBA_PTR_SET_RVALUE(permission_, permission) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the permission.
    std::shared_ptr<GetPermissionResponseBodyPermission> permission_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
