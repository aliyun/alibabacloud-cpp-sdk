// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class DeleteUsersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUsersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserNames, userNamesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUsersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserNames, userNamesShrink_);
    };
    DeleteUsersShrinkRequest() = default ;
    DeleteUsersShrinkRequest(const DeleteUsersShrinkRequest &) = default ;
    DeleteUsersShrinkRequest(DeleteUsersShrinkRequest &&) = default ;
    DeleteUsersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUsersShrinkRequest() = default ;
    DeleteUsersShrinkRequest& operator=(const DeleteUsersShrinkRequest &) = default ;
    DeleteUsersShrinkRequest& operator=(DeleteUsersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->regionId_ == nullptr && return this->userNamesShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteUsersShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteUsersShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userNamesShrink Field Functions 
    bool hasUserNamesShrink() const { return this->userNamesShrink_ != nullptr;};
    void deleteUserNamesShrink() { this->userNamesShrink_ = nullptr;};
    inline string userNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(userNamesShrink_, "") };
    inline DeleteUsersShrinkRequest& setUserNamesShrink(string userNamesShrink) { DARABONBA_PTR_SET_VALUE(userNamesShrink_, userNamesShrink) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The usernames. Number of elements in the array: 0 to 10.
    std::shared_ptr<string> userNamesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
