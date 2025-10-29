// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDEEVENTRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDEEVENTRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateIDEEventResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIDEEventResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_TO_JSON(CheckResultTip, checkResultTip_);
      DARABONBA_PTR_TO_JSON(ExtensionCode, extensionCode_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIDEEventResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_FROM_JSON(CheckResultTip, checkResultTip_);
      DARABONBA_PTR_FROM_JSON(ExtensionCode, extensionCode_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
    };
    UpdateIDEEventResultRequest() = default ;
    UpdateIDEEventResultRequest(const UpdateIDEEventResultRequest &) = default ;
    UpdateIDEEventResultRequest(UpdateIDEEventResultRequest &&) = default ;
    UpdateIDEEventResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIDEEventResultRequest() = default ;
    UpdateIDEEventResultRequest& operator=(const UpdateIDEEventResultRequest &) = default ;
    UpdateIDEEventResultRequest& operator=(UpdateIDEEventResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkResult_ == nullptr
        && return this->checkResultTip_ == nullptr && return this->extensionCode_ == nullptr && return this->messageId_ == nullptr; };
    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline string checkResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
    inline UpdateIDEEventResultRequest& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


    // checkResultTip Field Functions 
    bool hasCheckResultTip() const { return this->checkResultTip_ != nullptr;};
    void deleteCheckResultTip() { this->checkResultTip_ = nullptr;};
    inline string checkResultTip() const { DARABONBA_PTR_GET_DEFAULT(checkResultTip_, "") };
    inline UpdateIDEEventResultRequest& setCheckResultTip(string checkResultTip) { DARABONBA_PTR_SET_VALUE(checkResultTip_, checkResultTip) };


    // extensionCode Field Functions 
    bool hasExtensionCode() const { return this->extensionCode_ != nullptr;};
    void deleteExtensionCode() { this->extensionCode_ = nullptr;};
    inline string extensionCode() const { DARABONBA_PTR_GET_DEFAULT(extensionCode_, "") };
    inline UpdateIDEEventResultRequest& setExtensionCode(string extensionCode) { DARABONBA_PTR_SET_VALUE(extensionCode_, extensionCode) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline UpdateIDEEventResultRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


  protected:
    // The check status of the extension for this extension point event. Valid values:
    // 
    // *   OK: The extension passed the check for this event.
    // *   FAIL: The extension failed the check for this event. You need to review and resolve the error promptly to avoid affecting subsequent program execution.
    // *   WARN: The extension passed the check for this event, but with warnings.
    std::shared_ptr<string> checkResult_ = nullptr;
    // A summary of the check result for this extension point event. This message is displayed on your current development page. When the check fails or has warnings, you can use this summary to quickly identify the cause.
    std::shared_ptr<string> checkResultTip_ = nullptr;
    // The unique identifier of the extension. You can obtain the identifier from the Extensions tab on Open Platform in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> extensionCode_ = nullptr;
    // The OpenEvent message ID from DataWorks. When an extension point event is triggered, you can obtain the message ID from the event message.
    std::shared_ptr<string> messageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
