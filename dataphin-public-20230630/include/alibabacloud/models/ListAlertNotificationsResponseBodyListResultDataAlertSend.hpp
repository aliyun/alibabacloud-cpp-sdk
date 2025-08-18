// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODYLISTRESULTDATAALERTSEND_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODYLISTRESULTDATAALERTSEND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAlertNotificationsResponseBodyListResultDataAlertSend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertNotificationsResponseBodyListResultDataAlertSend& obj) { 
      DARABONBA_PTR_TO_JSON(FailReason, failReason_);
      DARABONBA_PTR_TO_JSON(SendContent, sendContent_);
      DARABONBA_PTR_TO_JSON(SendTime, sendTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertNotificationsResponseBodyListResultDataAlertSend& obj) { 
      DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
      DARABONBA_PTR_FROM_JSON(SendContent, sendContent_);
      DARABONBA_PTR_FROM_JSON(SendTime, sendTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListAlertNotificationsResponseBodyListResultDataAlertSend() = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertSend(const ListAlertNotificationsResponseBodyListResultDataAlertSend &) = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertSend(ListAlertNotificationsResponseBodyListResultDataAlertSend &&) = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertSend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertNotificationsResponseBodyListResultDataAlertSend() = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertSend& operator=(const ListAlertNotificationsResponseBodyListResultDataAlertSend &) = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertSend& operator=(ListAlertNotificationsResponseBodyListResultDataAlertSend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failReason_ != nullptr
        && this->sendContent_ != nullptr && this->sendTime_ != nullptr && this->status_ != nullptr; };
    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string failReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertSend& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // sendContent Field Functions 
    bool hasSendContent() const { return this->sendContent_ != nullptr;};
    void deleteSendContent() { this->sendContent_ = nullptr;};
    inline string sendContent() const { DARABONBA_PTR_GET_DEFAULT(sendContent_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertSend& setSendContent(string sendContent) { DARABONBA_PTR_SET_VALUE(sendContent_, sendContent) };


    // sendTime Field Functions 
    bool hasSendTime() const { return this->sendTime_ != nullptr;};
    void deleteSendTime() { this->sendTime_ = nullptr;};
    inline string sendTime() const { DARABONBA_PTR_GET_DEFAULT(sendTime_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertSend& setSendTime(string sendTime) { DARABONBA_PTR_SET_VALUE(sendTime_, sendTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertSend& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> failReason_ = nullptr;
    std::shared_ptr<string> sendContent_ = nullptr;
    std::shared_ptr<string> sendTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
