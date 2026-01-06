// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class PermissionRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PermissionRules& obj) { 
        DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
        DARABONBA_PTR_TO_JSON(EntityAccessType, entityAccessType_);
      };
      friend void from_json(const Darabonba::Json& j, PermissionRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
        DARABONBA_PTR_FROM_JSON(EntityAccessType, entityAccessType_);
      };
      PermissionRules() = default ;
      PermissionRules(const PermissionRules &) = default ;
      PermissionRules(PermissionRules &&) = default ;
      PermissionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PermissionRules() = default ;
      PermissionRules& operator=(const PermissionRules &) = default ;
      PermissionRules& operator=(PermissionRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->entityAccessType_ == nullptr; };
      // accessibility Field Functions 
      bool hasAccessibility() const { return this->accessibility_ != nullptr;};
      void deleteAccessibility() { this->accessibility_ = nullptr;};
      inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
      inline PermissionRules& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


      // entityAccessType Field Functions 
      bool hasEntityAccessType() const { return this->entityAccessType_ != nullptr;};
      void deleteEntityAccessType() { this->entityAccessType_ = nullptr;};
      inline string getEntityAccessType() const { DARABONBA_PTR_GET_DEFAULT(entityAccessType_, "") };
      inline PermissionRules& setEntityAccessType(string entityAccessType) { DARABONBA_PTR_SET_VALUE(entityAccessType_, entityAccessType) };


    protected:
      // The accessibility. Valid values:
      // 
      // *   PUBLIC: All members can access the workspace.
      // *   PRIVATE: Only the creator can access the workspace.
      // *   ANY: All users can access the workspace.
      shared_ptr<string> accessibility_ {};
      // The access type. If you set Accessibility to PUBLIC, all users can access the workspace. This parameter is invalid. If you set Accessibility to PRIVATE, the value of this parameter can be:
      // 
      // *   PRIVATE: Only the creator can access the workspace.
      // *   ANY: All users can access the workspace.
      shared_ptr<string> entityAccessType_ {};
    };

    virtual bool empty() const override { return this->permissionCode_ == nullptr
        && this->permissionRules_ == nullptr && this->requestId_ == nullptr; };
    // permissionCode Field Functions 
    bool hasPermissionCode() const { return this->permissionCode_ != nullptr;};
    void deletePermissionCode() { this->permissionCode_ = nullptr;};
    inline string getPermissionCode() const { DARABONBA_PTR_GET_DEFAULT(permissionCode_, "") };
    inline GetPermissionResponseBody& setPermissionCode(string permissionCode) { DARABONBA_PTR_SET_VALUE(permissionCode_, permissionCode) };


    // permissionRules Field Functions 
    bool hasPermissionRules() const { return this->permissionRules_ != nullptr;};
    void deletePermissionRules() { this->permissionRules_ = nullptr;};
    inline const vector<GetPermissionResponseBody::PermissionRules> & getPermissionRules() const { DARABONBA_PTR_GET_CONST(permissionRules_, vector<GetPermissionResponseBody::PermissionRules>) };
    inline vector<GetPermissionResponseBody::PermissionRules> getPermissionRules() { DARABONBA_PTR_GET(permissionRules_, vector<GetPermissionResponseBody::PermissionRules>) };
    inline GetPermissionResponseBody& setPermissionRules(const vector<GetPermissionResponseBody::PermissionRules> & permissionRules) { DARABONBA_PTR_SET_VALUE(permissionRules_, permissionRules) };
    inline GetPermissionResponseBody& setPermissionRules(vector<GetPermissionResponseBody::PermissionRules> && permissionRules) { DARABONBA_PTR_SET_RVALUE(permissionRules_, permissionRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The permission name, which is unique in a region. For more information about permissions, see [Appendix: Roles and permissions](https://help.aliyun.com/document_detail/2840449.html).
    shared_ptr<string> permissionCode_ {};
    // The permission rules.
    shared_ptr<vector<GetPermissionResponseBody::PermissionRules>> permissionRules_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
