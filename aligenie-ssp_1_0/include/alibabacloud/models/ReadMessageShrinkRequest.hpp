// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READMESSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_READMESSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ReadMessageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadMessageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ReadMessageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    ReadMessageShrinkRequest() = default ;
    ReadMessageShrinkRequest(const ReadMessageShrinkRequest &) = default ;
    ReadMessageShrinkRequest(ReadMessageShrinkRequest &&) = default ;
    ReadMessageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadMessageShrinkRequest() = default ;
    ReadMessageShrinkRequest& operator=(const ReadMessageShrinkRequest &) = default ;
    ReadMessageShrinkRequest& operator=(ReadMessageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->messageId_ != nullptr
        && this->userInfoShrink_ != nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline int64_t messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, 0L) };
    inline ReadMessageShrinkRequest& setMessageId(int64_t messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline ReadMessageShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    std::shared_ptr<int64_t> messageId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
