// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATAROLES_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATAROLES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRolesResponseBodyDataRolesAcl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListRolesResponseBodyDataRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesResponseBodyDataRoles& obj) { 
      DARABONBA_PTR_TO_JSON(acl, acl_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesResponseBodyDataRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(acl, acl_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListRolesResponseBodyDataRoles() = default ;
    ListRolesResponseBodyDataRoles(const ListRolesResponseBodyDataRoles &) = default ;
    ListRolesResponseBodyDataRoles(ListRolesResponseBodyDataRoles &&) = default ;
    ListRolesResponseBodyDataRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesResponseBodyDataRoles() = default ;
    ListRolesResponseBodyDataRoles& operator=(const ListRolesResponseBodyDataRoles &) = default ;
    ListRolesResponseBodyDataRoles& operator=(ListRolesResponseBodyDataRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acl_ != nullptr
        && this->name_ != nullptr && this->policy_ != nullptr && this->type_ != nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline const Models::ListRolesResponseBodyDataRolesAcl & acl() const { DARABONBA_PTR_GET_CONST(acl_, Models::ListRolesResponseBodyDataRolesAcl) };
    inline Models::ListRolesResponseBodyDataRolesAcl acl() { DARABONBA_PTR_GET(acl_, Models::ListRolesResponseBodyDataRolesAcl) };
    inline ListRolesResponseBodyDataRoles& setAcl(const Models::ListRolesResponseBodyDataRolesAcl & acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };
    inline ListRolesResponseBodyDataRoles& setAcl(Models::ListRolesResponseBodyDataRolesAcl && acl) { DARABONBA_PTR_SET_RVALUE(acl_, acl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRolesResponseBodyDataRoles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline ListRolesResponseBodyDataRoles& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListRolesResponseBodyDataRoles& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ACL-based permissions that are granted to the role.
    std::shared_ptr<Models::ListRolesResponseBodyDataRolesAcl> acl_ = nullptr;
    // The name of the role.
    std::shared_ptr<string> name_ = nullptr;
    // The policy that is attached to the role.
    std::shared_ptr<string> policy_ = nullptr;
    // The type of the role.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
