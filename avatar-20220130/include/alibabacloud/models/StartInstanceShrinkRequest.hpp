// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class StartInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, appShrink_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Channel, channelShrink_);
      DARABONBA_PTR_TO_JSON(CommandRequest, commandRequestShrink_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TextRequest, textRequestShrink_);
      DARABONBA_PTR_TO_JSON(User, userShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, appShrink_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Channel, channelShrink_);
      DARABONBA_PTR_FROM_JSON(CommandRequest, commandRequestShrink_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TextRequest, textRequestShrink_);
      DARABONBA_PTR_FROM_JSON(User, userShrink_);
    };
    StartInstanceShrinkRequest() = default ;
    StartInstanceShrinkRequest(const StartInstanceShrinkRequest &) = default ;
    StartInstanceShrinkRequest(StartInstanceShrinkRequest &&) = default ;
    StartInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceShrinkRequest() = default ;
    StartInstanceShrinkRequest& operator=(const StartInstanceShrinkRequest &) = default ;
    StartInstanceShrinkRequest& operator=(StartInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appShrink_ != nullptr
        && this->bizId_ != nullptr && this->channelShrink_ != nullptr && this->commandRequestShrink_ != nullptr && this->tenantId_ != nullptr && this->textRequestShrink_ != nullptr
        && this->userShrink_ != nullptr; };
    // appShrink Field Functions 
    bool hasAppShrink() const { return this->appShrink_ != nullptr;};
    void deleteAppShrink() { this->appShrink_ = nullptr;};
    inline string appShrink() const { DARABONBA_PTR_GET_DEFAULT(appShrink_, "") };
    inline StartInstanceShrinkRequest& setAppShrink(string appShrink) { DARABONBA_PTR_SET_VALUE(appShrink_, appShrink) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline StartInstanceShrinkRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // channelShrink Field Functions 
    bool hasChannelShrink() const { return this->channelShrink_ != nullptr;};
    void deleteChannelShrink() { this->channelShrink_ = nullptr;};
    inline string channelShrink() const { DARABONBA_PTR_GET_DEFAULT(channelShrink_, "") };
    inline StartInstanceShrinkRequest& setChannelShrink(string channelShrink) { DARABONBA_PTR_SET_VALUE(channelShrink_, channelShrink) };


    // commandRequestShrink Field Functions 
    bool hasCommandRequestShrink() const { return this->commandRequestShrink_ != nullptr;};
    void deleteCommandRequestShrink() { this->commandRequestShrink_ = nullptr;};
    inline string commandRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(commandRequestShrink_, "") };
    inline StartInstanceShrinkRequest& setCommandRequestShrink(string commandRequestShrink) { DARABONBA_PTR_SET_VALUE(commandRequestShrink_, commandRequestShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline StartInstanceShrinkRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // textRequestShrink Field Functions 
    bool hasTextRequestShrink() const { return this->textRequestShrink_ != nullptr;};
    void deleteTextRequestShrink() { this->textRequestShrink_ = nullptr;};
    inline string textRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(textRequestShrink_, "") };
    inline StartInstanceShrinkRequest& setTextRequestShrink(string textRequestShrink) { DARABONBA_PTR_SET_VALUE(textRequestShrink_, textRequestShrink) };


    // userShrink Field Functions 
    bool hasUserShrink() const { return this->userShrink_ != nullptr;};
    void deleteUserShrink() { this->userShrink_ = nullptr;};
    inline string userShrink() const { DARABONBA_PTR_GET_DEFAULT(userShrink_, "") };
    inline StartInstanceShrinkRequest& setUserShrink(string userShrink) { DARABONBA_PTR_SET_VALUE(userShrink_, userShrink) };


  protected:
    std::shared_ptr<string> appShrink_ = nullptr;
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> channelShrink_ = nullptr;
    std::shared_ptr<string> commandRequestShrink_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<string> textRequestShrink_ = nullptr;
    std::shared_ptr<string> userShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
