// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTROLESRESPONSEBODYPAGINGINFOPROJECTROLES_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTROLESRESPONSEBODYPAGINGINFOPROJECTROLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListProjectRolesResponseBodyPagingInfoProjectRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectRolesResponseBodyPagingInfoProjectRoles& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectRolesResponseBodyPagingInfoProjectRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListProjectRolesResponseBodyPagingInfoProjectRoles() = default ;
    ListProjectRolesResponseBodyPagingInfoProjectRoles(const ListProjectRolesResponseBodyPagingInfoProjectRoles &) = default ;
    ListProjectRolesResponseBodyPagingInfoProjectRoles(ListProjectRolesResponseBodyPagingInfoProjectRoles &&) = default ;
    ListProjectRolesResponseBodyPagingInfoProjectRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectRolesResponseBodyPagingInfoProjectRoles() = default ;
    ListProjectRolesResponseBodyPagingInfoProjectRoles& operator=(const ListProjectRolesResponseBodyPagingInfoProjectRoles &) = default ;
    ListProjectRolesResponseBodyPagingInfoProjectRoles& operator=(ListProjectRolesResponseBodyPagingInfoProjectRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->name_ != nullptr && this->projectId_ != nullptr && this->type_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListProjectRolesResponseBodyPagingInfoProjectRoles& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProjectRolesResponseBodyPagingInfoProjectRoles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListProjectRolesResponseBodyPagingInfoProjectRoles& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProjectRolesResponseBodyPagingInfoProjectRoles& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The code of the role in the DataWorks workspace.
    std::shared_ptr<string> code_ = nullptr;
    // The name of the role.
    std::shared_ptr<string> name_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The type of the role in the DataWorks workspace.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
