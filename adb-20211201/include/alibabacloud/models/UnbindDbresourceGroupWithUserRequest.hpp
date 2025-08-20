// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDDBRESOURCEGROUPWITHUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDDBRESOURCEGROUPWITHUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UnbindDBResourceGroupWithUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindDBResourceGroupWithUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupUser, groupUser_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindDBResourceGroupWithUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupUser, groupUser_);
    };
    UnbindDBResourceGroupWithUserRequest() = default ;
    UnbindDBResourceGroupWithUserRequest(const UnbindDBResourceGroupWithUserRequest &) = default ;
    UnbindDBResourceGroupWithUserRequest(UnbindDBResourceGroupWithUserRequest &&) = default ;
    UnbindDBResourceGroupWithUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindDBResourceGroupWithUserRequest() = default ;
    UnbindDBResourceGroupWithUserRequest& operator=(const UnbindDBResourceGroupWithUserRequest &) = default ;
    UnbindDBResourceGroupWithUserRequest& operator=(UnbindDBResourceGroupWithUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->groupName_ != nullptr && this->groupUser_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UnbindDBResourceGroupWithUserRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UnbindDBResourceGroupWithUserRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupUser Field Functions 
    bool hasGroupUser() const { return this->groupUser_ != nullptr;};
    void deleteGroupUser() { this->groupUser_ = nullptr;};
    inline string groupUser() const { DARABONBA_PTR_GET_DEFAULT(groupUser_, "") };
    inline UnbindDBResourceGroupWithUserRequest& setGroupUser(string groupUser) { DARABONBA_PTR_SET_VALUE(groupUser_, groupUser) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> groupUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
