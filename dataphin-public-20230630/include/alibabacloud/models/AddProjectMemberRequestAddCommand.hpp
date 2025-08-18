// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROJECTMEMBERREQUESTADDCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_ADDPROJECTMEMBERREQUESTADDCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddProjectMemberRequestAddCommandUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddProjectMemberRequestAddCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddProjectMemberRequestAddCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, AddProjectMemberRequestAddCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    AddProjectMemberRequestAddCommand() = default ;
    AddProjectMemberRequestAddCommand(const AddProjectMemberRequestAddCommand &) = default ;
    AddProjectMemberRequestAddCommand(AddProjectMemberRequestAddCommand &&) = default ;
    AddProjectMemberRequestAddCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddProjectMemberRequestAddCommand() = default ;
    AddProjectMemberRequestAddCommand& operator=(const AddProjectMemberRequestAddCommand &) = default ;
    AddProjectMemberRequestAddCommand& operator=(AddProjectMemberRequestAddCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->env_ != nullptr
        && this->userList_ != nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline AddProjectMemberRequestAddCommand& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<Models::AddProjectMemberRequestAddCommandUserList> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<Models::AddProjectMemberRequestAddCommandUserList>) };
    inline vector<Models::AddProjectMemberRequestAddCommandUserList> userList() { DARABONBA_PTR_GET(userList_, vector<Models::AddProjectMemberRequestAddCommandUserList>) };
    inline AddProjectMemberRequestAddCommand& setUserList(const vector<Models::AddProjectMemberRequestAddCommandUserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline AddProjectMemberRequestAddCommand& setUserList(vector<Models::AddProjectMemberRequestAddCommandUserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::AddProjectMemberRequestAddCommandUserList>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
