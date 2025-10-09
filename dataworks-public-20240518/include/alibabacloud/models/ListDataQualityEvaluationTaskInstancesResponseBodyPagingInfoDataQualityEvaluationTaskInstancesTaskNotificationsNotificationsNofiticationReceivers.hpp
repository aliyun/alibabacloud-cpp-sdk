// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKINSTANCESRESPONSEBODYPAGINGINFODATAQUALITYEVALUATIONTASKINSTANCESTASKNOTIFICATIONSNOTIFICATIONSNOFITICATIONRECEIVERS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKINSTANCESRESPONSEBODYPAGINGINFODATAQUALITYEVALUATIONTASKINSTANCESTASKNOTIFICATIONSNOTIFICATIONSNOFITICATIONRECEIVERS_HPP_
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
  class ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers& obj) { 
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
      DARABONBA_PTR_TO_JSON(ReceiverValues, receiverValues_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers& obj) { 
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
      DARABONBA_PTR_FROM_JSON(ReceiverValues, receiverValues_);
    };
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers() = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers(const ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers &) = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers(ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers &&) = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers() = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers& operator=(const ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers &) = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers& operator=(ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extension_ != nullptr
        && this->receiverType_ != nullptr && this->receiverValues_ != nullptr; };
    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // receiverType Field Functions 
    bool hasReceiverType() const { return this->receiverType_ != nullptr;};
    void deleteReceiverType() { this->receiverType_ = nullptr;};
    inline string receiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, "") };
    inline ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers& setReceiverType(string receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


    // receiverValues Field Functions 
    bool hasReceiverValues() const { return this->receiverValues_ != nullptr;};
    void deleteReceiverValues() { this->receiverValues_ = nullptr;};
    inline const vector<string> & receiverValues() const { DARABONBA_PTR_GET_CONST(receiverValues_, vector<string>) };
    inline vector<string> receiverValues() { DARABONBA_PTR_GET(receiverValues_, vector<string>) };
    inline ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers& setReceiverValues(const vector<string> & receiverValues) { DARABONBA_PTR_SET_VALUE(receiverValues_, receiverValues) };
    inline ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotificationsNofiticationReceivers& setReceiverValues(vector<string> && receiverValues) { DARABONBA_PTR_SET_RVALUE(receiverValues_, receiverValues) };


  protected:
    // The extended information in the JSON format. For example, the DingTalk chatbot can remind all members in a DingTalk group by using the at sign (@).
    std::shared_ptr<string> extension_ = nullptr;
    // The type of the alert recipient. Valid values:
    // 
    // *   AliUid: Alibaba Cloud account ID
    // *   WebhookUrl: URL of a custom webhook
    // *   DingdingUrl: DingTalk chatbot URL
    // *   FeishuUrl: Lark chatbot URL
    // *   WeixinUrl: WeCom chatbot URL
    std::shared_ptr<string> receiverType_ = nullptr;
    // The alert recipients.
    std::shared_ptr<vector<string>> receiverValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
