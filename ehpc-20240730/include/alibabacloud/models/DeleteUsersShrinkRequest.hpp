// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DeleteUsersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUsersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(User, userShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUsersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(User, userShrink_);
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
        && return this->userShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteUsersShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // userShrink Field Functions 
    bool hasUserShrink() const { return this->userShrink_ != nullptr;};
    void deleteUserShrink() { this->userShrink_ = nullptr;};
    inline string userShrink() const { DARABONBA_PTR_GET_DEFAULT(userShrink_, "") };
    inline DeleteUsersShrinkRequest& setUserShrink(string userShrink) { DARABONBA_PTR_SET_VALUE(userShrink_, userShrink) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The users that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> userShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
