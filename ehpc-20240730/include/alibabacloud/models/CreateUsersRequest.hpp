// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateUsersRequestUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    CreateUsersRequest() = default ;
    CreateUsersRequest(const CreateUsersRequest &) = default ;
    CreateUsersRequest(CreateUsersRequest &&) = default ;
    CreateUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUsersRequest() = default ;
    CreateUsersRequest& operator=(const CreateUsersRequest &) = default ;
    CreateUsersRequest& operator=(CreateUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->user_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateUsersRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const vector<CreateUsersRequestUser> & user() const { DARABONBA_PTR_GET_CONST(user_, vector<CreateUsersRequestUser>) };
    inline vector<CreateUsersRequestUser> user() { DARABONBA_PTR_GET(user_, vector<CreateUsersRequestUser>) };
    inline CreateUsersRequest& setUser(const vector<CreateUsersRequestUser> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline CreateUsersRequest& setUser(vector<CreateUsersRequestUser> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The users that you want to add.
    std::shared_ptr<vector<CreateUsersRequestUser>> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
