// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETYIKECALLBACKCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETYIKECALLBACKCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class SetYikeCallbackConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetYikeCallbackConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackConfig, callbackConfig_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SetYikeCallbackConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackConfig, callbackConfig_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
    };
    SetYikeCallbackConfigRequest() = default ;
    SetYikeCallbackConfigRequest(const SetYikeCallbackConfigRequest &) = default ;
    SetYikeCallbackConfigRequest(SetYikeCallbackConfigRequest &&) = default ;
    SetYikeCallbackConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetYikeCallbackConfigRequest() = default ;
    SetYikeCallbackConfigRequest& operator=(const SetYikeCallbackConfigRequest &) = default ;
    SetYikeCallbackConfigRequest& operator=(SetYikeCallbackConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackConfig_ == nullptr
        && this->callbackUrl_ == nullptr; };
    // callbackConfig Field Functions 
    bool hasCallbackConfig() const { return this->callbackConfig_ != nullptr;};
    void deleteCallbackConfig() { this->callbackConfig_ = nullptr;};
    inline string getCallbackConfig() const { DARABONBA_PTR_GET_DEFAULT(callbackConfig_, "") };
    inline SetYikeCallbackConfigRequest& setCallbackConfig(string callbackConfig) { DARABONBA_PTR_SET_VALUE(callbackConfig_, callbackConfig) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline SetYikeCallbackConfigRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


  protected:
    // This parameter is required.
    shared_ptr<string> callbackConfig_ {};
    // This parameter is required.
    shared_ptr<string> callbackUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
