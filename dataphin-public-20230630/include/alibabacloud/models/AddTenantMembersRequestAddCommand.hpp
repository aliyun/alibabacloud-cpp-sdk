// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTENANTMEMBERSREQUESTADDCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_ADDTENANTMEMBERSREQUESTADDCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddTenantMembersRequestAddCommandUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddTenantMembersRequestAddCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTenantMembersRequestAddCommand& obj) { 
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, AddTenantMembersRequestAddCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    AddTenantMembersRequestAddCommand() = default ;
    AddTenantMembersRequestAddCommand(const AddTenantMembersRequestAddCommand &) = default ;
    AddTenantMembersRequestAddCommand(AddTenantMembersRequestAddCommand &&) = default ;
    AddTenantMembersRequestAddCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTenantMembersRequestAddCommand() = default ;
    AddTenantMembersRequestAddCommand& operator=(const AddTenantMembersRequestAddCommand &) = default ;
    AddTenantMembersRequestAddCommand& operator=(AddTenantMembersRequestAddCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userList_ == nullptr; };
    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<Models::AddTenantMembersRequestAddCommandUserList> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<Models::AddTenantMembersRequestAddCommandUserList>) };
    inline vector<Models::AddTenantMembersRequestAddCommandUserList> userList() { DARABONBA_PTR_GET(userList_, vector<Models::AddTenantMembersRequestAddCommandUserList>) };
    inline AddTenantMembersRequestAddCommand& setUserList(const vector<Models::AddTenantMembersRequestAddCommandUserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline AddTenantMembersRequestAddCommand& setUserList(vector<Models::AddTenantMembersRequestAddCommandUserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::AddTenantMembersRequestAddCommandUserList>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
