// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CALLBACKEXTENSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CALLBACKEXTENSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CallbackExtensionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CallbackExtensionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckMessage, checkMessage_);
      DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_TO_JSON(ExtensionCode, extensionCode_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
    };
    friend void from_json(const Darabonba::Json& j, CallbackExtensionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckMessage, checkMessage_);
      DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_FROM_JSON(ExtensionCode, extensionCode_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
    };
    CallbackExtensionRequest() = default ;
    CallbackExtensionRequest(const CallbackExtensionRequest &) = default ;
    CallbackExtensionRequest(CallbackExtensionRequest &&) = default ;
    CallbackExtensionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CallbackExtensionRequest() = default ;
    CallbackExtensionRequest& operator=(const CallbackExtensionRequest &) = default ;
    CallbackExtensionRequest& operator=(CallbackExtensionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkMessage_ != nullptr
        && this->checkResult_ != nullptr && this->extensionCode_ != nullptr && this->messageId_ != nullptr; };
    // checkMessage Field Functions 
    bool hasCheckMessage() const { return this->checkMessage_ != nullptr;};
    void deleteCheckMessage() { this->checkMessage_ = nullptr;};
    inline string checkMessage() const { DARABONBA_PTR_GET_DEFAULT(checkMessage_, "") };
    inline CallbackExtensionRequest& setCheckMessage(string checkMessage) { DARABONBA_PTR_SET_VALUE(checkMessage_, checkMessage) };


    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline string checkResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
    inline CallbackExtensionRequest& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


    // extensionCode Field Functions 
    bool hasExtensionCode() const { return this->extensionCode_ != nullptr;};
    void deleteExtensionCode() { this->extensionCode_ = nullptr;};
    inline string extensionCode() const { DARABONBA_PTR_GET_DEFAULT(extensionCode_, "") };
    inline CallbackExtensionRequest& setExtensionCode(string extensionCode) { DARABONBA_PTR_SET_VALUE(extensionCode_, extensionCode) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline CallbackExtensionRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


  protected:
    // The check message of the extension point event. If CheckResult is set to FAIL, you must provide the failure cause.
    std::shared_ptr<string> checkMessage_ = nullptr;
    // The check status of the extension point event. Valid values:
    // 
    // *   OK: The event passes the check.
    // *   FAIL: The event fails to pass the check. You must check and handle the reported error at the earliest opportunity to ensure that your program is run as expected.
    // *   WARN: The event passes the check, but an alert is reported.
    // 
    // This parameter is required.
    std::shared_ptr<string> checkResult_ = nullptr;
    // The unique code of the extension.
    // 
    // This parameter is required.
    std::shared_ptr<string> extensionCode_ = nullptr;
    // The message ID in DataWorks OpenEvent. You can obtain the ID from a received message when an extension point event is triggered.
    // 
    // This parameter is required.
    std::shared_ptr<string> messageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
