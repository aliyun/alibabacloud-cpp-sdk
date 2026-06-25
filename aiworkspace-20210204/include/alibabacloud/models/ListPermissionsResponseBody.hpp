// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONSRESPONSEBODY_HPP_
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
  class ListPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPermissionsResponseBody() = default ;
    ListPermissionsResponseBody(const ListPermissionsResponseBody &) = default ;
    ListPermissionsResponseBody(ListPermissionsResponseBody &&) = default ;
    ListPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionsResponseBody() = default ;
    ListPermissionsResponseBody& operator=(const ListPermissionsResponseBody &) = default ;
    ListPermissionsResponseBody& operator=(ListPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Permissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Permissions& obj) { 
        DARABONBA_PTR_TO_JSON(PermissionCode, permissionCode_);
        DARABONBA_PTR_TO_JSON(PermissionRules, permissionRules_);
      };
      friend void from_json(const Darabonba::Json& j, Permissions& obj) { 
        DARABONBA_PTR_FROM_JSON(PermissionCode, permissionCode_);
        DARABONBA_PTR_FROM_JSON(PermissionRules, permissionRules_);
      };
      Permissions() = default ;
      Permissions(const Permissions &) = default ;
      Permissions(Permissions &&) = default ;
      Permissions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Permissions() = default ;
      Permissions& operator=(const Permissions &) = default ;
      Permissions& operator=(Permissions &&) = default ;
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
        // The access type. Valid values:
        // 
        // - PUBLIC: All members in the current workspace can perform the operation.
        // 
        // - PRIVATE: Only the creator can perform the operation.
        // 
        // - ANY: Both the creator and non-creators can perform the operation.
        shared_ptr<string> accessibility_ {};
        // The entity access type.
        // This parameter is invalid if Accessibility is set to PUBLIC. In this case, all users can perform the operation.
        // If Accessibility is set to PRIVATE, the permission is determined by the value of EntityAccessType. Valid values:
        // 
        // - CREATOR: Only the creator can perform the operation.
        // 
        // - ANY: Both the creator and non-creators can perform the operation.
        shared_ptr<string> entityAccessType_ {};
      };

      virtual bool empty() const override { return this->permissionCode_ == nullptr
        && this->permissionRules_ == nullptr; };
      // permissionCode Field Functions 
      bool hasPermissionCode() const { return this->permissionCode_ != nullptr;};
      void deletePermissionCode() { this->permissionCode_ = nullptr;};
      inline string getPermissionCode() const { DARABONBA_PTR_GET_DEFAULT(permissionCode_, "") };
      inline Permissions& setPermissionCode(string permissionCode) { DARABONBA_PTR_SET_VALUE(permissionCode_, permissionCode) };


      // permissionRules Field Functions 
      bool hasPermissionRules() const { return this->permissionRules_ != nullptr;};
      void deletePermissionRules() { this->permissionRules_ = nullptr;};
      inline const vector<Permissions::PermissionRules> & getPermissionRules() const { DARABONBA_PTR_GET_CONST(permissionRules_, vector<Permissions::PermissionRules>) };
      inline vector<Permissions::PermissionRules> getPermissionRules() { DARABONBA_PTR_GET(permissionRules_, vector<Permissions::PermissionRules>) };
      inline Permissions& setPermissionRules(const vector<Permissions::PermissionRules> & permissionRules) { DARABONBA_PTR_SET_VALUE(permissionRules_, permissionRules) };
      inline Permissions& setPermissionRules(vector<Permissions::PermissionRules> && permissionRules) { DARABONBA_PTR_SET_RVALUE(permissionRules_, permissionRules) };


    protected:
      // The name of the permission point. The name is unique within the same region. For more information about permission points, see [Appendix: Roles and permissions](https://help.aliyun.com/document_detail/2840449.html).
      // For example, the value PaiDLC:GetTensorboard grants the permission to view Tensorboard details for the DLC feature.
      shared_ptr<string> permissionCode_ {};
      // The list of permission rules.
      shared_ptr<vector<Permissions::PermissionRules>> permissionRules_ {};
    };

    virtual bool empty() const override { return this->permissions_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<ListPermissionsResponseBody::Permissions> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<ListPermissionsResponseBody::Permissions>) };
    inline vector<ListPermissionsResponseBody::Permissions> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<ListPermissionsResponseBody::Permissions>) };
    inline ListPermissionsResponseBody& setPermissions(const vector<ListPermissionsResponseBody::Permissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline ListPermissionsResponseBody& setPermissions(vector<ListPermissionsResponseBody::Permissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListPermissionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of permissions.
    shared_ptr<vector<ListPermissionsResponseBody::Permissions>> permissions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries that meet the filter conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
