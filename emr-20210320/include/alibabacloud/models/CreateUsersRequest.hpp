// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateUsersRequestUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class CreateUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
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
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->regionId_ != nullptr && this->users_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateUsersRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateUsersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<CreateUsersRequestUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<CreateUsersRequestUsers>) };
    inline vector<CreateUsersRequestUsers> users() { DARABONBA_PTR_GET(users_, vector<CreateUsersRequestUsers>) };
    inline CreateUsersRequest& setUsers(const vector<CreateUsersRequestUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CreateUsersRequest& setUsers(vector<CreateUsersRequestUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // 集群ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // 区域ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // 用户列表。
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateUsersRequestUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
