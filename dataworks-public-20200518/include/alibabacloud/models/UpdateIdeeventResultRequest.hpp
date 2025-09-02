// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDEEVENTRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDEEVENTRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
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
    virtual bool empty() const override { this->checkResult_ != nullptr
        && this->checkResultTip_ != nullptr && this->extensionCode_ != nullptr && this->messageId_ != nullptr; };
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
    // The check status of the extension point event. Valid values:
    // 
    // *   OK: The event passes the check.
    // *   FAIL: The event fails to pass the check. You must check and handle the reported error at the earliest opportunity to ensure that your program is run as expected.
    // *   WARN: The event passes the check, but an alert is reported.
    std::shared_ptr<string> checkResult_ = nullptr;
    // The summary information of the check result. The information is displayed in DataStudio. If an alert is reported or the event fails the check, you can troubleshoot errors based on the information.
    std::shared_ptr<string> checkResultTip_ = nullptr;
    // The unique identifier of the extension. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Extensions tab of the Open Platform page to view the identifier.
    std::shared_ptr<string> extensionCode_ = nullptr;
    // The message ID. You can obtain the ID from a received message when an extension point event is triggered.
    std::shared_ptr<string> messageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
