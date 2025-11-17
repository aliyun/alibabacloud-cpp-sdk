// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONROLEUSERSRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONROLEUSERSRESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListOrganizationRoleUsersResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationRoleUsersResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationRoleUsersResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListOrganizationRoleUsersResponseBodyResultData() = default ;
    ListOrganizationRoleUsersResponseBodyResultData(const ListOrganizationRoleUsersResponseBodyResultData &) = default ;
    ListOrganizationRoleUsersResponseBodyResultData(ListOrganizationRoleUsersResponseBodyResultData &&) = default ;
    ListOrganizationRoleUsersResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationRoleUsersResponseBodyResultData() = default ;
    ListOrganizationRoleUsersResponseBodyResultData& operator=(const ListOrganizationRoleUsersResponseBodyResultData &) = default ;
    ListOrganizationRoleUsersResponseBodyResultData& operator=(ListOrganizationRoleUsersResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nickName_ == nullptr
        && return this->userId_ == nullptr; };
    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline ListOrganizationRoleUsersResponseBodyResultData& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListOrganizationRoleUsersResponseBodyResultData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Nickname of the organization member.
    std::shared_ptr<string> nickName_ = nullptr;
    // UserID of the organization member in Quick BI.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
