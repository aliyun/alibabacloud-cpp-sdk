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
    virtual bool empty() const override { return this->checkMessage_ == nullptr
        && this->checkResult_ == nullptr && this->extensionCode_ == nullptr && this->messageId_ == nullptr; };
    // checkMessage Field Functions 
    bool hasCheckMessage() const { return this->checkMessage_ != nullptr;};
    void deleteCheckMessage() { this->checkMessage_ = nullptr;};
    inline string getCheckMessage() const { DARABONBA_PTR_GET_DEFAULT(checkMessage_, "") };
    inline CallbackExtensionRequest& setCheckMessage(string checkMessage) { DARABONBA_PTR_SET_VALUE(checkMessage_, checkMessage) };


    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline string getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
    inline CallbackExtensionRequest& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


    // extensionCode Field Functions 
    bool hasExtensionCode() const { return this->extensionCode_ != nullptr;};
    void deleteExtensionCode() { this->extensionCode_ = nullptr;};
    inline string getExtensionCode() const { DARABONBA_PTR_GET_DEFAULT(extensionCode_, "") };
    inline CallbackExtensionRequest& setExtensionCode(string extensionCode) { DARABONBA_PTR_SET_VALUE(extensionCode_, extensionCode) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline CallbackExtensionRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


  protected:
    // The reason for the failure when CheckResult is set to FAIL.
    shared_ptr<string> checkMessage_ {};
    // The check status of the extension program for the extension point event. Valid values:
    // - OK: The extension program check for the extension point event passed.
    // - FAIL: The extension program check for the extension point event failed. View and resolve the error promptly to avoid affecting the normal execution of subsequent programs.
    // - WARN: The extension program check for the extension point event passed, but warnings exist.
    // 
    // This parameter is required.
    shared_ptr<string> checkResult_ {};
    // The unique code of the extension program.
    // 
    // This parameter is required.
    shared_ptr<string> extensionCode_ {};
    // The message ID of the DataWorks open message. After an extension point event is triggered, you can obtain the message ID from the received event message.
    // 
    // <props="china">For more information about the message format, see [Message format](https://help.aliyun.com/document_detail/215367.html).
    // 
    // This parameter is required.
    shared_ptr<string> messageId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
