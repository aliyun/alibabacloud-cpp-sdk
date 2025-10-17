// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDDBRESOURCEGROUPWITHUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDDBRESOURCEGROUPWITHUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class BindDBResourceGroupWithUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindDBResourceGroupWithUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupUser, groupUser_);
    };
    friend void from_json(const Darabonba::Json& j, BindDBResourceGroupWithUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupUser, groupUser_);
    };
    BindDBResourceGroupWithUserRequest() = default ;
    BindDBResourceGroupWithUserRequest(const BindDBResourceGroupWithUserRequest &) = default ;
    BindDBResourceGroupWithUserRequest(BindDBResourceGroupWithUserRequest &&) = default ;
    BindDBResourceGroupWithUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindDBResourceGroupWithUserRequest() = default ;
    BindDBResourceGroupWithUserRequest& operator=(const BindDBResourceGroupWithUserRequest &) = default ;
    BindDBResourceGroupWithUserRequest& operator=(BindDBResourceGroupWithUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->groupName_ == nullptr && return this->groupUser_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline BindDBResourceGroupWithUserRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline BindDBResourceGroupWithUserRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupUser Field Functions 
    bool hasGroupUser() const { return this->groupUser_ != nullptr;};
    void deleteGroupUser() { this->groupUser_ = nullptr;};
    inline string groupUser() const { DARABONBA_PTR_GET_DEFAULT(groupUser_, "") };
    inline BindDBResourceGroupWithUserRequest& setGroupUser(string groupUser) { DARABONBA_PTR_SET_VALUE(groupUser_, groupUser) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the resource group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The name of the database account. It can be a standard account or a privileged account.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
