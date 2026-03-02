// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORNOTIFYALERTPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_MONITORNOTIFYALERTPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MonitorNotifyAlert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorNotifyAlertPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorNotifyAlertPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(intTotal, intTotal_);
      DARABONBA_PTR_TO_JSON(notifyAlerts, notifyAlerts_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorNotifyAlertPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(intTotal, intTotal_);
      DARABONBA_PTR_FROM_JSON(notifyAlerts, notifyAlerts_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    MonitorNotifyAlertPageResult() = default ;
    MonitorNotifyAlertPageResult(const MonitorNotifyAlertPageResult &) = default ;
    MonitorNotifyAlertPageResult(MonitorNotifyAlertPageResult &&) = default ;
    MonitorNotifyAlertPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorNotifyAlertPageResult() = default ;
    MonitorNotifyAlertPageResult& operator=(const MonitorNotifyAlertPageResult &) = default ;
    MonitorNotifyAlertPageResult& operator=(MonitorNotifyAlertPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->intTotal_ == nullptr
        && this->notifyAlerts_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // intTotal Field Functions 
    bool hasIntTotal() const { return this->intTotal_ != nullptr;};
    void deleteIntTotal() { this->intTotal_ = nullptr;};
    inline int32_t getIntTotal() const { DARABONBA_PTR_GET_DEFAULT(intTotal_, 0) };
    inline MonitorNotifyAlertPageResult& setIntTotal(int32_t intTotal) { DARABONBA_PTR_SET_VALUE(intTotal_, intTotal) };


    // notifyAlerts Field Functions 
    bool hasNotifyAlerts() const { return this->notifyAlerts_ != nullptr;};
    void deleteNotifyAlerts() { this->notifyAlerts_ = nullptr;};
    inline const vector<MonitorNotifyAlert> & getNotifyAlerts() const { DARABONBA_PTR_GET_CONST(notifyAlerts_, vector<MonitorNotifyAlert>) };
    inline vector<MonitorNotifyAlert> getNotifyAlerts() { DARABONBA_PTR_GET(notifyAlerts_, vector<MonitorNotifyAlert>) };
    inline MonitorNotifyAlertPageResult& setNotifyAlerts(const vector<MonitorNotifyAlert> & notifyAlerts) { DARABONBA_PTR_SET_VALUE(notifyAlerts_, notifyAlerts) };
    inline MonitorNotifyAlertPageResult& setNotifyAlerts(vector<MonitorNotifyAlert> && notifyAlerts) { DARABONBA_PTR_SET_RVALUE(notifyAlerts_, notifyAlerts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MonitorNotifyAlertPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline MonitorNotifyAlertPageResult& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<int32_t> intTotal_ {};
    shared_ptr<vector<MonitorNotifyAlert>> notifyAlerts_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
