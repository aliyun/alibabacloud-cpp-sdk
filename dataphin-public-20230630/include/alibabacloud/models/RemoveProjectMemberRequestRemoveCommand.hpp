// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPROJECTMEMBERREQUESTREMOVECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPROJECTMEMBERREQUESTREMOVECOMMAND_HPP_
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
  class RemoveProjectMemberRequestRemoveCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveProjectMemberRequestRemoveCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveProjectMemberRequestRemoveCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
    };
    RemoveProjectMemberRequestRemoveCommand() = default ;
    RemoveProjectMemberRequestRemoveCommand(const RemoveProjectMemberRequestRemoveCommand &) = default ;
    RemoveProjectMemberRequestRemoveCommand(RemoveProjectMemberRequestRemoveCommand &&) = default ;
    RemoveProjectMemberRequestRemoveCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveProjectMemberRequestRemoveCommand() = default ;
    RemoveProjectMemberRequestRemoveCommand& operator=(const RemoveProjectMemberRequestRemoveCommand &) = default ;
    RemoveProjectMemberRequestRemoveCommand& operator=(RemoveProjectMemberRequestRemoveCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->env_ != nullptr
        && this->userIdList_ != nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline RemoveProjectMemberRequestRemoveCommand& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline const vector<string> & userIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
    inline vector<string> userIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
    inline RemoveProjectMemberRequestRemoveCommand& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
    inline RemoveProjectMemberRequestRemoveCommand& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> env_ = nullptr;
    std::shared_ptr<vector<string>> userIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
