// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTMEMBERRESPONSEBODYPROJECTMEMBERROLES_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTMEMBERRESPONSEBODYPROJECTMEMBERROLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetProjectMemberResponseBodyProjectMemberRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectMemberResponseBodyProjectMemberRoles& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectMemberResponseBodyProjectMemberRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetProjectMemberResponseBodyProjectMemberRoles() = default ;
    GetProjectMemberResponseBodyProjectMemberRoles(const GetProjectMemberResponseBodyProjectMemberRoles &) = default ;
    GetProjectMemberResponseBodyProjectMemberRoles(GetProjectMemberResponseBodyProjectMemberRoles &&) = default ;
    GetProjectMemberResponseBodyProjectMemberRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectMemberResponseBodyProjectMemberRoles() = default ;
    GetProjectMemberResponseBodyProjectMemberRoles& operator=(const GetProjectMemberResponseBodyProjectMemberRoles &) = default ;
    GetProjectMemberResponseBodyProjectMemberRoles& operator=(GetProjectMemberResponseBodyProjectMemberRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetProjectMemberResponseBodyProjectMemberRoles& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetProjectMemberResponseBodyProjectMemberRoles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetProjectMemberResponseBodyProjectMemberRoles& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The code of the role. Valid values:
    // 
    // *   role_project_admin: Workspace Administrator
    // *   role_project_dev: Develop
    // *   role_project_dg_admin: Data Governance Administrator
    // *   role_project_guest: Visitor
    // *   role_project_security: Security Administrator
    // *   role_project_deploy: Deploy
    // *   role_project_owner: Workspace Owner
    // *   role_project_data_analyst: Data Analyst
    // *   role_project_pe: O\\&M
    // *   role_project_erd: Model Designer
    std::shared_ptr<string> code_ = nullptr;
    // The name of the role.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the role. Valid values:
    // 
    // *   UserCustom: custom role
    // *   System: built-in role
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
