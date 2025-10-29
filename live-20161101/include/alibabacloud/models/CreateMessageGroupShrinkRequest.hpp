// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateMessageGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Extension, extensionShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Extension, extensionShrink_);
    };
    CreateMessageGroupShrinkRequest() = default ;
    CreateMessageGroupShrinkRequest(const CreateMessageGroupShrinkRequest &) = default ;
    CreateMessageGroupShrinkRequest(CreateMessageGroupShrinkRequest &&) = default ;
    CreateMessageGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageGroupShrinkRequest() = default ;
    CreateMessageGroupShrinkRequest& operator=(const CreateMessageGroupShrinkRequest &) = default ;
    CreateMessageGroupShrinkRequest& operator=(CreateMessageGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->creatorId_ == nullptr && return this->extensionShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMessageGroupShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline CreateMessageGroupShrinkRequest& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // extensionShrink Field Functions 
    bool hasExtensionShrink() const { return this->extensionShrink_ != nullptr;};
    void deleteExtensionShrink() { this->extensionShrink_ = nullptr;};
    inline string extensionShrink() const { DARABONBA_PTR_GET_DEFAULT(extensionShrink_, "") };
    inline CreateMessageGroupShrinkRequest& setExtensionShrink(string extensionShrink) { DARABONBA_PTR_SET_VALUE(extensionShrink_, extensionShrink) };


  protected:
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the creator. The ID can be up to 36 characters in length and can contain only letters and digits.
    // 
    // This parameter is required.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The extended field.
    std::shared_ptr<string> extensionShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
