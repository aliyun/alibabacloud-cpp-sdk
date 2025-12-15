// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteUsersRequestUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DeleteUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DeleteUsersRequest() = default ;
    DeleteUsersRequest(const DeleteUsersRequest &) = default ;
    DeleteUsersRequest(DeleteUsersRequest &&) = default ;
    DeleteUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUsersRequest() = default ;
    DeleteUsersRequest& operator=(const DeleteUsersRequest &) = default ;
    DeleteUsersRequest& operator=(DeleteUsersRequest &&) = default ;
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
    inline DeleteUsersRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const vector<DeleteUsersRequestUser> & user() const { DARABONBA_PTR_GET_CONST(user_, vector<DeleteUsersRequestUser>) };
    inline vector<DeleteUsersRequestUser> user() { DARABONBA_PTR_GET(user_, vector<DeleteUsersRequestUser>) };
    inline DeleteUsersRequest& setUser(const vector<DeleteUsersRequestUser> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline DeleteUsersRequest& setUser(vector<DeleteUsersRequestUser> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The users that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<vector<DeleteUsersRequestUser>> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
