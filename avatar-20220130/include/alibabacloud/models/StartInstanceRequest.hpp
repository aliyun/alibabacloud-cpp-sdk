// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartInstanceRequestApp.hpp>
#include <alibabacloud/models/StartInstanceRequestChannel.hpp>
#include <alibabacloud/models/StartInstanceRequestCommandRequest.hpp>
#include <alibabacloud/models/StartInstanceRequestTextRequest.hpp>
#include <alibabacloud/models/StartInstanceRequestUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class StartInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(CommandRequest, commandRequest_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TextRequest, textRequest_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(CommandRequest, commandRequest_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TextRequest, textRequest_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    StartInstanceRequest() = default ;
    StartInstanceRequest(const StartInstanceRequest &) = default ;
    StartInstanceRequest(StartInstanceRequest &&) = default ;
    StartInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceRequest() = default ;
    StartInstanceRequest& operator=(const StartInstanceRequest &) = default ;
    StartInstanceRequest& operator=(StartInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->app_ != nullptr
        && this->bizId_ != nullptr && this->channel_ != nullptr && this->commandRequest_ != nullptr && this->tenantId_ != nullptr && this->textRequest_ != nullptr
        && this->user_ != nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline const StartInstanceRequestApp & app() const { DARABONBA_PTR_GET_CONST(app_, StartInstanceRequestApp) };
    inline StartInstanceRequestApp app() { DARABONBA_PTR_GET(app_, StartInstanceRequestApp) };
    inline StartInstanceRequest& setApp(const StartInstanceRequestApp & app) { DARABONBA_PTR_SET_VALUE(app_, app) };
    inline StartInstanceRequest& setApp(StartInstanceRequestApp && app) { DARABONBA_PTR_SET_RVALUE(app_, app) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline StartInstanceRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline const StartInstanceRequestChannel & channel() const { DARABONBA_PTR_GET_CONST(channel_, StartInstanceRequestChannel) };
    inline StartInstanceRequestChannel channel() { DARABONBA_PTR_GET(channel_, StartInstanceRequestChannel) };
    inline StartInstanceRequest& setChannel(const StartInstanceRequestChannel & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
    inline StartInstanceRequest& setChannel(StartInstanceRequestChannel && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


    // commandRequest Field Functions 
    bool hasCommandRequest() const { return this->commandRequest_ != nullptr;};
    void deleteCommandRequest() { this->commandRequest_ = nullptr;};
    inline const StartInstanceRequestCommandRequest & commandRequest() const { DARABONBA_PTR_GET_CONST(commandRequest_, StartInstanceRequestCommandRequest) };
    inline StartInstanceRequestCommandRequest commandRequest() { DARABONBA_PTR_GET(commandRequest_, StartInstanceRequestCommandRequest) };
    inline StartInstanceRequest& setCommandRequest(const StartInstanceRequestCommandRequest & commandRequest) { DARABONBA_PTR_SET_VALUE(commandRequest_, commandRequest) };
    inline StartInstanceRequest& setCommandRequest(StartInstanceRequestCommandRequest && commandRequest) { DARABONBA_PTR_SET_RVALUE(commandRequest_, commandRequest) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline StartInstanceRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // textRequest Field Functions 
    bool hasTextRequest() const { return this->textRequest_ != nullptr;};
    void deleteTextRequest() { this->textRequest_ = nullptr;};
    inline const StartInstanceRequestTextRequest & textRequest() const { DARABONBA_PTR_GET_CONST(textRequest_, StartInstanceRequestTextRequest) };
    inline StartInstanceRequestTextRequest textRequest() { DARABONBA_PTR_GET(textRequest_, StartInstanceRequestTextRequest) };
    inline StartInstanceRequest& setTextRequest(const StartInstanceRequestTextRequest & textRequest) { DARABONBA_PTR_SET_VALUE(textRequest_, textRequest) };
    inline StartInstanceRequest& setTextRequest(StartInstanceRequestTextRequest && textRequest) { DARABONBA_PTR_SET_RVALUE(textRequest_, textRequest) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const StartInstanceRequestUser & user() const { DARABONBA_PTR_GET_CONST(user_, StartInstanceRequestUser) };
    inline StartInstanceRequestUser user() { DARABONBA_PTR_GET(user_, StartInstanceRequestUser) };
    inline StartInstanceRequest& setUser(const StartInstanceRequestUser & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline StartInstanceRequest& setUser(StartInstanceRequestUser && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    std::shared_ptr<StartInstanceRequestApp> app_ = nullptr;
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<StartInstanceRequestChannel> channel_ = nullptr;
    std::shared_ptr<StartInstanceRequestCommandRequest> commandRequest_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<StartInstanceRequestTextRequest> textRequest_ = nullptr;
    std::shared_ptr<StartInstanceRequestUser> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
