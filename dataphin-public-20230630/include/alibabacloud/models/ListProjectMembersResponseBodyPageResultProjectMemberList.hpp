// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYPAGERESULTPROJECTMEMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYPAGERESULTPROJECTMEMBERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListProjectMembersResponseBodyPageResultProjectMemberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersResponseBodyPageResultProjectMemberList& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_TO_JSON(RoleIdList, roleIdList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersResponseBodyPageResultProjectMemberList& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_FROM_JSON(RoleIdList, roleIdList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListProjectMembersResponseBodyPageResultProjectMemberList() = default ;
    ListProjectMembersResponseBodyPageResultProjectMemberList(const ListProjectMembersResponseBodyPageResultProjectMemberList &) = default ;
    ListProjectMembersResponseBodyPageResultProjectMemberList(ListProjectMembersResponseBodyPageResultProjectMemberList &&) = default ;
    ListProjectMembersResponseBodyPageResultProjectMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersResponseBodyPageResultProjectMemberList() = default ;
    ListProjectMembersResponseBodyPageResultProjectMemberList& operator=(const ListProjectMembersResponseBodyPageResultProjectMemberList &) = default ;
    ListProjectMembersResponseBodyPageResultProjectMemberList& operator=(ListProjectMembersResponseBodyPageResultProjectMemberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->lastModifier_ == nullptr && return this->lastModifierName_ == nullptr && return this->roleIdList_ == nullptr
        && return this->userId_ == nullptr && return this->userName_ == nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListProjectMembersResponseBodyPageResultProjectMemberList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListProjectMembersResponseBodyPageResultProjectMemberList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListProjectMembersResponseBodyPageResultProjectMemberList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifier Field Functions 
    bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
    void deleteLastModifier() { this->lastModifier_ = nullptr;};
    inline string lastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
    inline ListProjectMembersResponseBodyPageResultProjectMemberList& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


    // lastModifierName Field Functions 
    bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
    void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
    inline string lastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
    inline ListProjectMembersResponseBodyPageResultProjectMemberList& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


    // roleIdList Field Functions 
    bool hasRoleIdList() const { return this->roleIdList_ != nullptr;};
    void deleteRoleIdList() { this->roleIdList_ = nullptr;};
    inline const vector<int32_t> & roleIdList() const { DARABONBA_PTR_GET_CONST(roleIdList_, vector<int32_t>) };
    inline vector<int32_t> roleIdList() { DARABONBA_PTR_GET(roleIdList_, vector<int32_t>) };
    inline ListProjectMembersResponseBodyPageResultProjectMemberList& setRoleIdList(const vector<int32_t> & roleIdList) { DARABONBA_PTR_SET_VALUE(roleIdList_, roleIdList) };
    inline ListProjectMembersResponseBodyPageResultProjectMemberList& setRoleIdList(vector<int32_t> && roleIdList) { DARABONBA_PTR_SET_RVALUE(roleIdList_, roleIdList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListProjectMembersResponseBodyPageResultProjectMemberList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListProjectMembersResponseBodyPageResultProjectMemberList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastModifier_ = nullptr;
    std::shared_ptr<string> lastModifierName_ = nullptr;
    std::shared_ptr<vector<int32_t>> roleIdList_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
