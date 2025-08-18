// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODYLISTRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODYLISTRESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAlertNotificationsResponseBodyListResultDataAlertObject.hpp>
#include <alibabacloud/models/ListAlertNotificationsResponseBodyListResultDataAlertReason.hpp>
#include <alibabacloud/models/ListAlertNotificationsResponseBodyListResultDataAlertReceiver.hpp>
#include <alibabacloud/models/ListAlertNotificationsResponseBodyListResultDataAlertSend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAlertNotificationsResponseBodyListResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertNotificationsResponseBodyListResultData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertEventId, alertEventId_);
      DARABONBA_PTR_TO_JSON(AlertObject, alertObject_);
      DARABONBA_PTR_TO_JSON(AlertReason, alertReason_);
      DARABONBA_PTR_TO_JSON(AlertReceiver, alertReceiver_);
      DARABONBA_PTR_TO_JSON(AlertSend, alertSend_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertNotificationsResponseBodyListResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertEventId, alertEventId_);
      DARABONBA_PTR_FROM_JSON(AlertObject, alertObject_);
      DARABONBA_PTR_FROM_JSON(AlertReason, alertReason_);
      DARABONBA_PTR_FROM_JSON(AlertReceiver, alertReceiver_);
      DARABONBA_PTR_FROM_JSON(AlertSend, alertSend_);
    };
    ListAlertNotificationsResponseBodyListResultData() = default ;
    ListAlertNotificationsResponseBodyListResultData(const ListAlertNotificationsResponseBodyListResultData &) = default ;
    ListAlertNotificationsResponseBodyListResultData(ListAlertNotificationsResponseBodyListResultData &&) = default ;
    ListAlertNotificationsResponseBodyListResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertNotificationsResponseBodyListResultData() = default ;
    ListAlertNotificationsResponseBodyListResultData& operator=(const ListAlertNotificationsResponseBodyListResultData &) = default ;
    ListAlertNotificationsResponseBodyListResultData& operator=(ListAlertNotificationsResponseBodyListResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertEventId_ != nullptr
        && this->alertObject_ != nullptr && this->alertReason_ != nullptr && this->alertReceiver_ != nullptr && this->alertSend_ != nullptr; };
    // alertEventId Field Functions 
    bool hasAlertEventId() const { return this->alertEventId_ != nullptr;};
    void deleteAlertEventId() { this->alertEventId_ = nullptr;};
    inline string alertEventId() const { DARABONBA_PTR_GET_DEFAULT(alertEventId_, "") };
    inline ListAlertNotificationsResponseBodyListResultData& setAlertEventId(string alertEventId) { DARABONBA_PTR_SET_VALUE(alertEventId_, alertEventId) };


    // alertObject Field Functions 
    bool hasAlertObject() const { return this->alertObject_ != nullptr;};
    void deleteAlertObject() { this->alertObject_ = nullptr;};
    inline const Models::ListAlertNotificationsResponseBodyListResultDataAlertObject & alertObject() const { DARABONBA_PTR_GET_CONST(alertObject_, Models::ListAlertNotificationsResponseBodyListResultDataAlertObject) };
    inline Models::ListAlertNotificationsResponseBodyListResultDataAlertObject alertObject() { DARABONBA_PTR_GET(alertObject_, Models::ListAlertNotificationsResponseBodyListResultDataAlertObject) };
    inline ListAlertNotificationsResponseBodyListResultData& setAlertObject(const Models::ListAlertNotificationsResponseBodyListResultDataAlertObject & alertObject) { DARABONBA_PTR_SET_VALUE(alertObject_, alertObject) };
    inline ListAlertNotificationsResponseBodyListResultData& setAlertObject(Models::ListAlertNotificationsResponseBodyListResultDataAlertObject && alertObject) { DARABONBA_PTR_SET_RVALUE(alertObject_, alertObject) };


    // alertReason Field Functions 
    bool hasAlertReason() const { return this->alertReason_ != nullptr;};
    void deleteAlertReason() { this->alertReason_ = nullptr;};
    inline const Models::ListAlertNotificationsResponseBodyListResultDataAlertReason & alertReason() const { DARABONBA_PTR_GET_CONST(alertReason_, Models::ListAlertNotificationsResponseBodyListResultDataAlertReason) };
    inline Models::ListAlertNotificationsResponseBodyListResultDataAlertReason alertReason() { DARABONBA_PTR_GET(alertReason_, Models::ListAlertNotificationsResponseBodyListResultDataAlertReason) };
    inline ListAlertNotificationsResponseBodyListResultData& setAlertReason(const Models::ListAlertNotificationsResponseBodyListResultDataAlertReason & alertReason) { DARABONBA_PTR_SET_VALUE(alertReason_, alertReason) };
    inline ListAlertNotificationsResponseBodyListResultData& setAlertReason(Models::ListAlertNotificationsResponseBodyListResultDataAlertReason && alertReason) { DARABONBA_PTR_SET_RVALUE(alertReason_, alertReason) };


    // alertReceiver Field Functions 
    bool hasAlertReceiver() const { return this->alertReceiver_ != nullptr;};
    void deleteAlertReceiver() { this->alertReceiver_ = nullptr;};
    inline const Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiver & alertReceiver() const { DARABONBA_PTR_GET_CONST(alertReceiver_, Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiver) };
    inline Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiver alertReceiver() { DARABONBA_PTR_GET(alertReceiver_, Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiver) };
    inline ListAlertNotificationsResponseBodyListResultData& setAlertReceiver(const Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiver & alertReceiver) { DARABONBA_PTR_SET_VALUE(alertReceiver_, alertReceiver) };
    inline ListAlertNotificationsResponseBodyListResultData& setAlertReceiver(Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiver && alertReceiver) { DARABONBA_PTR_SET_RVALUE(alertReceiver_, alertReceiver) };


    // alertSend Field Functions 
    bool hasAlertSend() const { return this->alertSend_ != nullptr;};
    void deleteAlertSend() { this->alertSend_ = nullptr;};
    inline const Models::ListAlertNotificationsResponseBodyListResultDataAlertSend & alertSend() const { DARABONBA_PTR_GET_CONST(alertSend_, Models::ListAlertNotificationsResponseBodyListResultDataAlertSend) };
    inline Models::ListAlertNotificationsResponseBodyListResultDataAlertSend alertSend() { DARABONBA_PTR_GET(alertSend_, Models::ListAlertNotificationsResponseBodyListResultDataAlertSend) };
    inline ListAlertNotificationsResponseBodyListResultData& setAlertSend(const Models::ListAlertNotificationsResponseBodyListResultDataAlertSend & alertSend) { DARABONBA_PTR_SET_VALUE(alertSend_, alertSend) };
    inline ListAlertNotificationsResponseBodyListResultData& setAlertSend(Models::ListAlertNotificationsResponseBodyListResultDataAlertSend && alertSend) { DARABONBA_PTR_SET_RVALUE(alertSend_, alertSend) };


  protected:
    std::shared_ptr<string> alertEventId_ = nullptr;
    std::shared_ptr<Models::ListAlertNotificationsResponseBodyListResultDataAlertObject> alertObject_ = nullptr;
    std::shared_ptr<Models::ListAlertNotificationsResponseBodyListResultDataAlertReason> alertReason_ = nullptr;
    std::shared_ptr<Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiver> alertReceiver_ = nullptr;
    std::shared_ptr<Models::ListAlertNotificationsResponseBodyListResultDataAlertSend> alertSend_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
