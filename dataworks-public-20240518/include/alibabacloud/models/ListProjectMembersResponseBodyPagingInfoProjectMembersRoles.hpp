// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYPAGINGINFOPROJECTMEMBERSROLES_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYPAGINGINFOPROJECTMEMBERSROLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListProjectMembersResponseBodyPagingInfoProjectMembersRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersResponseBodyPagingInfoProjectMembersRoles& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersResponseBodyPagingInfoProjectMembersRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListProjectMembersResponseBodyPagingInfoProjectMembersRoles() = default ;
    ListProjectMembersResponseBodyPagingInfoProjectMembersRoles(const ListProjectMembersResponseBodyPagingInfoProjectMembersRoles &) = default ;
    ListProjectMembersResponseBodyPagingInfoProjectMembersRoles(ListProjectMembersResponseBodyPagingInfoProjectMembersRoles &&) = default ;
    ListProjectMembersResponseBodyPagingInfoProjectMembersRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersResponseBodyPagingInfoProjectMembersRoles() = default ;
    ListProjectMembersResponseBodyPagingInfoProjectMembersRoles& operator=(const ListProjectMembersResponseBodyPagingInfoProjectMembersRoles &) = default ;
    ListProjectMembersResponseBodyPagingInfoProjectMembersRoles& operator=(ListProjectMembersResponseBodyPagingInfoProjectMembersRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->name_ == nullptr && return this->type_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListProjectMembersResponseBodyPagingInfoProjectMembersRoles& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProjectMembersResponseBodyPagingInfoProjectMembersRoles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProjectMembersResponseBodyPagingInfoProjectMembersRoles& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The code of the role.
    std::shared_ptr<string> code_ = nullptr;
    // The name of the role.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the role. Valid values:
    // 
    // *   UserCustom: user-defined role
    // *   System: system role
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
