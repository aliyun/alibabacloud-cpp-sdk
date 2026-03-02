// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORALERTHISTORYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_MONITORALERTHISTORYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MonitorAlertHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorAlertHistoryPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorAlertHistoryPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(alertHistories, alertHistories_);
      DARABONBA_PTR_TO_JSON(intTotal, intTotal_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorAlertHistoryPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(alertHistories, alertHistories_);
      DARABONBA_PTR_FROM_JSON(intTotal, intTotal_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    MonitorAlertHistoryPageResult() = default ;
    MonitorAlertHistoryPageResult(const MonitorAlertHistoryPageResult &) = default ;
    MonitorAlertHistoryPageResult(MonitorAlertHistoryPageResult &&) = default ;
    MonitorAlertHistoryPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorAlertHistoryPageResult() = default ;
    MonitorAlertHistoryPageResult& operator=(const MonitorAlertHistoryPageResult &) = default ;
    MonitorAlertHistoryPageResult& operator=(MonitorAlertHistoryPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertHistories_ == nullptr
        && this->intTotal_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // alertHistories Field Functions 
    bool hasAlertHistories() const { return this->alertHistories_ != nullptr;};
    void deleteAlertHistories() { this->alertHistories_ = nullptr;};
    inline const vector<MonitorAlertHistory> & getAlertHistories() const { DARABONBA_PTR_GET_CONST(alertHistories_, vector<MonitorAlertHistory>) };
    inline vector<MonitorAlertHistory> getAlertHistories() { DARABONBA_PTR_GET(alertHistories_, vector<MonitorAlertHistory>) };
    inline MonitorAlertHistoryPageResult& setAlertHistories(const vector<MonitorAlertHistory> & alertHistories) { DARABONBA_PTR_SET_VALUE(alertHistories_, alertHistories) };
    inline MonitorAlertHistoryPageResult& setAlertHistories(vector<MonitorAlertHistory> && alertHistories) { DARABONBA_PTR_SET_RVALUE(alertHistories_, alertHistories) };


    // intTotal Field Functions 
    bool hasIntTotal() const { return this->intTotal_ != nullptr;};
    void deleteIntTotal() { this->intTotal_ = nullptr;};
    inline int32_t getIntTotal() const { DARABONBA_PTR_GET_DEFAULT(intTotal_, 0) };
    inline MonitorAlertHistoryPageResult& setIntTotal(int32_t intTotal) { DARABONBA_PTR_SET_VALUE(intTotal_, intTotal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MonitorAlertHistoryPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline MonitorAlertHistoryPageResult& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<MonitorAlertHistory>> alertHistories_ {};
    shared_ptr<int32_t> intTotal_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
