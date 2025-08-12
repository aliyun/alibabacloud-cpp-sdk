// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMESSAGEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMESSAGEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateMessageGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMessageGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Extension, extensionShrink_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMessageGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Extension, extensionShrink_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    UpdateMessageGroupShrinkRequest() = default ;
    UpdateMessageGroupShrinkRequest(const UpdateMessageGroupShrinkRequest &) = default ;
    UpdateMessageGroupShrinkRequest(UpdateMessageGroupShrinkRequest &&) = default ;
    UpdateMessageGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMessageGroupShrinkRequest() = default ;
    UpdateMessageGroupShrinkRequest& operator=(const UpdateMessageGroupShrinkRequest &) = default ;
    UpdateMessageGroupShrinkRequest& operator=(UpdateMessageGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->extensionShrink_ != nullptr && this->groupId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMessageGroupShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // extensionShrink Field Functions 
    bool hasExtensionShrink() const { return this->extensionShrink_ != nullptr;};
    void deleteExtensionShrink() { this->extensionShrink_ = nullptr;};
    inline string extensionShrink() const { DARABONBA_PTR_GET_DEFAULT(extensionShrink_, "") };
    inline UpdateMessageGroupShrinkRequest& setExtensionShrink(string extensionShrink) { DARABONBA_PTR_SET_VALUE(extensionShrink_, extensionShrink) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateMessageGroupShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The extended field.
    std::shared_ptr<string> extensionShrink_ = nullptr;
    // The ID of the message group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
