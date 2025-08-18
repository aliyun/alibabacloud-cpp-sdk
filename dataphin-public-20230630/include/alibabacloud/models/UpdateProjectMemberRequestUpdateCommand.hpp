// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERREQUESTUPDATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERREQUESTUPDATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateProjectMemberRequestUpdateCommandUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateProjectMemberRequestUpdateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectMemberRequestUpdateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectMemberRequestUpdateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    UpdateProjectMemberRequestUpdateCommand() = default ;
    UpdateProjectMemberRequestUpdateCommand(const UpdateProjectMemberRequestUpdateCommand &) = default ;
    UpdateProjectMemberRequestUpdateCommand(UpdateProjectMemberRequestUpdateCommand &&) = default ;
    UpdateProjectMemberRequestUpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectMemberRequestUpdateCommand() = default ;
    UpdateProjectMemberRequestUpdateCommand& operator=(const UpdateProjectMemberRequestUpdateCommand &) = default ;
    UpdateProjectMemberRequestUpdateCommand& operator=(UpdateProjectMemberRequestUpdateCommand &&) = default ;
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
    inline UpdateProjectMemberRequestUpdateCommand& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<Models::UpdateProjectMemberRequestUpdateCommandUserList> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<Models::UpdateProjectMemberRequestUpdateCommandUserList>) };
    inline vector<Models::UpdateProjectMemberRequestUpdateCommandUserList> userList() { DARABONBA_PTR_GET(userList_, vector<Models::UpdateProjectMemberRequestUpdateCommandUserList>) };
    inline UpdateProjectMemberRequestUpdateCommand& setUserList(const vector<Models::UpdateProjectMemberRequestUpdateCommandUserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline UpdateProjectMemberRequestUpdateCommand& setUserList(vector<Models::UpdateProjectMemberRequestUpdateCommandUserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdateProjectMemberRequestUpdateCommandUserList>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
