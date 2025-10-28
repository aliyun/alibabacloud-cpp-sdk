// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONSRESPONSEBODYPERMISSIONSPERMISSIONRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONSRESPONSEBODYPERMISSIONSPERMISSIONRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListPermissionsResponseBodyPermissionsPermissionRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionsResponseBodyPermissionsPermissionRules& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(EntityAccessType, entityAccessType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionsResponseBodyPermissionsPermissionRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(EntityAccessType, entityAccessType_);
    };
    ListPermissionsResponseBodyPermissionsPermissionRules() = default ;
    ListPermissionsResponseBodyPermissionsPermissionRules(const ListPermissionsResponseBodyPermissionsPermissionRules &) = default ;
    ListPermissionsResponseBodyPermissionsPermissionRules(ListPermissionsResponseBodyPermissionsPermissionRules &&) = default ;
    ListPermissionsResponseBodyPermissionsPermissionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionsResponseBodyPermissionsPermissionRules() = default ;
    ListPermissionsResponseBodyPermissionsPermissionRules& operator=(const ListPermissionsResponseBodyPermissionsPermissionRules &) = default ;
    ListPermissionsResponseBodyPermissionsPermissionRules& operator=(ListPermissionsResponseBodyPermissionsPermissionRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->entityAccessType_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListPermissionsResponseBodyPermissionsPermissionRules& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // entityAccessType Field Functions 
    bool hasEntityAccessType() const { return this->entityAccessType_ != nullptr;};
    void deleteEntityAccessType() { this->entityAccessType_ = nullptr;};
    inline string entityAccessType() const { DARABONBA_PTR_GET_DEFAULT(entityAccessType_, "") };
    inline ListPermissionsResponseBodyPermissionsPermissionRules& setEntityAccessType(string entityAccessType) { DARABONBA_PTR_SET_VALUE(entityAccessType_, entityAccessType) };


  protected:
    // The accessibility of the permission rule. Valid values:
    // 
    // *   PUBLIC: All members in the workspace can access the permission rule.
    // *   PRIVATE: Only the creator can access the permission rule.
    // *   ANY: All users can access the permission rule.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The type of access. If you set Accessibility to PUBLIC, all users can access the workspace. This parameter is invalid. If you set Accessibility to PRIVATE, the permissions are determined based on the value of EntityAccessType. The value of EntityAccessType can be:
    // 
    // *   CREATOR: Only the creator can access the workspace.
    // *   ANY: All users can access the workspace.
    std::shared_ptr<string> entityAccessType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
