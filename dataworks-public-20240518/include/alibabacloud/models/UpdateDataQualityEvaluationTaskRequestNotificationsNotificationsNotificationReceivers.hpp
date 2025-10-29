// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTNOTIFICATIONSNOTIFICATIONSNOTIFICATIONRECEIVERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTNOTIFICATIONSNOTIFICATIONSNOTIFICATIONRECEIVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers& obj) { 
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
      DARABONBA_PTR_TO_JSON(ReceiverValues, receiverValues_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers& obj) { 
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
      DARABONBA_PTR_FROM_JSON(ReceiverValues, receiverValues_);
    };
    UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers() = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers(const UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers &) = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers(UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers &&) = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers() = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers& operator=(const UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers &) = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers& operator=(UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extension_ == nullptr
        && return this->receiverType_ == nullptr && return this->receiverValues_ == nullptr; };
    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // receiverType Field Functions 
    bool hasReceiverType() const { return this->receiverType_ != nullptr;};
    void deleteReceiverType() { this->receiverType_ = nullptr;};
    inline string receiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, "") };
    inline UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers& setReceiverType(string receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


    // receiverValues Field Functions 
    bool hasReceiverValues() const { return this->receiverValues_ != nullptr;};
    void deleteReceiverValues() { this->receiverValues_ = nullptr;};
    inline const vector<string> & receiverValues() const { DARABONBA_PTR_GET_CONST(receiverValues_, vector<string>) };
    inline vector<string> receiverValues() { DARABONBA_PTR_GET(receiverValues_, vector<string>) };
    inline UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers& setReceiverValues(const vector<string> & receiverValues) { DARABONBA_PTR_SET_VALUE(receiverValues_, receiverValues) };
    inline UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers& setReceiverValues(vector<string> && receiverValues) { DARABONBA_PTR_SET_RVALUE(receiverValues_, receiverValues) };


  protected:
    // The additional parameters that are required when alerts are sent. The parameters are JSON-formatted strings. The following keys are supported:
    // 
    // *   atAll: specifies that all members in a group are mentioned when alerts are sent by using DingTalk. This parameter is valid only if you set ReceiverType to DingdingUrl.
    std::shared_ptr<string> extension_ = nullptr;
    // The type of the alert recipient.
    // 
    // Valid values:
    // 
    // *   WebhookUrl
    // *   FeishuUrl
    // *   DingdingUrl
    // *   WeixinUrl
    // *   AliUid
    std::shared_ptr<string> receiverType_ = nullptr;
    // The alert recipient.
    std::shared_ptr<vector<string>> receiverValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
