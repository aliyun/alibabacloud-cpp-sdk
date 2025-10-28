// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPermissionResponseBodyPermissionRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetPermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PermissionCode, permissionCode_);
      DARABONBA_PTR_TO_JSON(PermissionRules, permissionRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PermissionCode, permissionCode_);
      DARABONBA_PTR_FROM_JSON(PermissionRules, permissionRules_);
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
    virtual bool empty() const override { return this->permissionCode_ == nullptr
        && return this->permissionRules_ == nullptr && return this->requestId_ == nullptr; };
    // permissionCode Field Functions 
    bool hasPermissionCode() const { return this->permissionCode_ != nullptr;};
    void deletePermissionCode() { this->permissionCode_ = nullptr;};
    inline string permissionCode() const { DARABONBA_PTR_GET_DEFAULT(permissionCode_, "") };
    inline GetPermissionResponseBody& setPermissionCode(string permissionCode) { DARABONBA_PTR_SET_VALUE(permissionCode_, permissionCode) };


    // permissionRules Field Functions 
    bool hasPermissionRules() const { return this->permissionRules_ != nullptr;};
    void deletePermissionRules() { this->permissionRules_ = nullptr;};
    inline const vector<GetPermissionResponseBodyPermissionRules> & permissionRules() const { DARABONBA_PTR_GET_CONST(permissionRules_, vector<GetPermissionResponseBodyPermissionRules>) };
    inline vector<GetPermissionResponseBodyPermissionRules> permissionRules() { DARABONBA_PTR_GET(permissionRules_, vector<GetPermissionResponseBodyPermissionRules>) };
    inline GetPermissionResponseBody& setPermissionRules(const vector<GetPermissionResponseBodyPermissionRules> & permissionRules) { DARABONBA_PTR_SET_VALUE(permissionRules_, permissionRules) };
    inline GetPermissionResponseBody& setPermissionRules(vector<GetPermissionResponseBodyPermissionRules> && permissionRules) { DARABONBA_PTR_SET_RVALUE(permissionRules_, permissionRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The permission name, which is unique in a region. For more information about permissions, see [Appendix: Roles and permissions](https://help.aliyun.com/document_detail/2840449.html).
    std::shared_ptr<string> permissionCode_ = nullptr;
    // The permission rules.
    std::shared_ptr<vector<GetPermissionResponseBodyPermissionRules>> permissionRules_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
