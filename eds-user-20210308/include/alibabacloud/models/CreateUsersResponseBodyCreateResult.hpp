// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSRESPONSEBODYCREATERESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSRESPONSEBODYCREATERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateUsersResponseBodyCreateResultCreatedUsers.hpp>
#include <alibabacloud/models/CreateUsersResponseBodyCreateResultFailedUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CreateUsersResponseBodyCreateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedUsers, createdUsers_);
      DARABONBA_PTR_TO_JSON(FailedUsers, failedUsers_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedUsers, createdUsers_);
      DARABONBA_PTR_FROM_JSON(FailedUsers, failedUsers_);
    };
    CreateUsersResponseBodyCreateResult() = default ;
    CreateUsersResponseBodyCreateResult(const CreateUsersResponseBodyCreateResult &) = default ;
    CreateUsersResponseBodyCreateResult(CreateUsersResponseBodyCreateResult &&) = default ;
    CreateUsersResponseBodyCreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUsersResponseBodyCreateResult() = default ;
    CreateUsersResponseBodyCreateResult& operator=(const CreateUsersResponseBodyCreateResult &) = default ;
    CreateUsersResponseBodyCreateResult& operator=(CreateUsersResponseBodyCreateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdUsers_ != nullptr
        && this->failedUsers_ != nullptr; };
    // createdUsers Field Functions 
    bool hasCreatedUsers() const { return this->createdUsers_ != nullptr;};
    void deleteCreatedUsers() { this->createdUsers_ = nullptr;};
    inline const vector<Models::CreateUsersResponseBodyCreateResultCreatedUsers> & createdUsers() const { DARABONBA_PTR_GET_CONST(createdUsers_, vector<Models::CreateUsersResponseBodyCreateResultCreatedUsers>) };
    inline vector<Models::CreateUsersResponseBodyCreateResultCreatedUsers> createdUsers() { DARABONBA_PTR_GET(createdUsers_, vector<Models::CreateUsersResponseBodyCreateResultCreatedUsers>) };
    inline CreateUsersResponseBodyCreateResult& setCreatedUsers(const vector<Models::CreateUsersResponseBodyCreateResultCreatedUsers> & createdUsers) { DARABONBA_PTR_SET_VALUE(createdUsers_, createdUsers) };
    inline CreateUsersResponseBodyCreateResult& setCreatedUsers(vector<Models::CreateUsersResponseBodyCreateResultCreatedUsers> && createdUsers) { DARABONBA_PTR_SET_RVALUE(createdUsers_, createdUsers) };


    // failedUsers Field Functions 
    bool hasFailedUsers() const { return this->failedUsers_ != nullptr;};
    void deleteFailedUsers() { this->failedUsers_ = nullptr;};
    inline const vector<Models::CreateUsersResponseBodyCreateResultFailedUsers> & failedUsers() const { DARABONBA_PTR_GET_CONST(failedUsers_, vector<Models::CreateUsersResponseBodyCreateResultFailedUsers>) };
    inline vector<Models::CreateUsersResponseBodyCreateResultFailedUsers> failedUsers() { DARABONBA_PTR_GET(failedUsers_, vector<Models::CreateUsersResponseBodyCreateResultFailedUsers>) };
    inline CreateUsersResponseBodyCreateResult& setFailedUsers(const vector<Models::CreateUsersResponseBodyCreateResultFailedUsers> & failedUsers) { DARABONBA_PTR_SET_VALUE(failedUsers_, failedUsers) };
    inline CreateUsersResponseBodyCreateResult& setFailedUsers(vector<Models::CreateUsersResponseBodyCreateResultFailedUsers> && failedUsers) { DARABONBA_PTR_SET_RVALUE(failedUsers_, failedUsers) };


  protected:
    // Details of the created convenience users.
    std::shared_ptr<vector<Models::CreateUsersResponseBodyCreateResultCreatedUsers>> createdUsers_ = nullptr;
    // Details of the convenience users that failed to be created.
    std::shared_ptr<vector<Models::CreateUsersResponseBodyCreateResultFailedUsers>> failedUsers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
