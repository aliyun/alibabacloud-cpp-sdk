// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEAPPDISABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEAPPDISABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveMessageAppDisableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageAppDisableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppSign, appSign_);
      DARABONBA_PTR_TO_JSON(Disable, disable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageAppDisableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppSign, appSign_);
      DARABONBA_PTR_FROM_JSON(Disable, disable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyLiveMessageAppDisableResponseBody() = default ;
    ModifyLiveMessageAppDisableResponseBody(const ModifyLiveMessageAppDisableResponseBody &) = default ;
    ModifyLiveMessageAppDisableResponseBody(ModifyLiveMessageAppDisableResponseBody &&) = default ;
    ModifyLiveMessageAppDisableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageAppDisableResponseBody() = default ;
    ModifyLiveMessageAppDisableResponseBody& operator=(const ModifyLiveMessageAppDisableResponseBody &) = default ;
    ModifyLiveMessageAppDisableResponseBody& operator=(ModifyLiveMessageAppDisableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appSign_ == nullptr && return this->disable_ == nullptr && return this->requestId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyLiveMessageAppDisableResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appSign Field Functions 
    bool hasAppSign() const { return this->appSign_ != nullptr;};
    void deleteAppSign() { this->appSign_ = nullptr;};
    inline string appSign() const { DARABONBA_PTR_GET_DEFAULT(appSign_, "") };
    inline ModifyLiveMessageAppDisableResponseBody& setAppSign(string appSign) { DARABONBA_PTR_SET_VALUE(appSign_, appSign) };


    // disable Field Functions 
    bool hasDisable() const { return this->disable_ != nullptr;};
    void deleteDisable() { this->disable_ = nullptr;};
    inline bool disable() const { DARABONBA_PTR_GET_DEFAULT(disable_, false) };
    inline ModifyLiveMessageAppDisableResponseBody& setDisable(bool disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyLiveMessageAppDisableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the interactive messaging application.
    std::shared_ptr<string> appId_ = nullptr;
    // The signature of the interactive messaging application. It is required by the interactive messaging SDK.
    std::shared_ptr<string> appSign_ = nullptr;
    // Indicates whether the interactive messaging application is disabled.
    std::shared_ptr<bool> disable_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
