// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateChatConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(avatarId, avatarId_);
      DARABONBA_PTR_TO_JSON(backgroundId, backgroundId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(avatarId, avatarId_);
      DARABONBA_PTR_FROM_JSON(backgroundId, backgroundId_);
    };
    CreateChatConfigRequest() = default ;
    CreateChatConfigRequest(const CreateChatConfigRequest &) = default ;
    CreateChatConfigRequest(CreateChatConfigRequest &&) = default ;
    CreateChatConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatConfigRequest() = default ;
    CreateChatConfigRequest& operator=(const CreateChatConfigRequest &) = default ;
    CreateChatConfigRequest& operator=(CreateChatConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarId_ == nullptr
        && return this->backgroundId_ == nullptr; };
    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string avatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline CreateChatConfigRequest& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    // backgroundId Field Functions 
    bool hasBackgroundId() const { return this->backgroundId_ != nullptr;};
    void deleteBackgroundId() { this->backgroundId_ = nullptr;};
    inline string backgroundId() const { DARABONBA_PTR_GET_DEFAULT(backgroundId_, "") };
    inline CreateChatConfigRequest& setBackgroundId(string backgroundId) { DARABONBA_PTR_SET_VALUE(backgroundId_, backgroundId) };


  protected:
    std::shared_ptr<string> avatarId_ = nullptr;
    std::shared_ptr<string> backgroundId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
