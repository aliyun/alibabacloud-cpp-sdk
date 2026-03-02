// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORWEBHOOKPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_MONITORWEBHOOKPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MonitorWebhook.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorWebhookPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorWebhookPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(intTotal, intTotal_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorWebhookPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(intTotal, intTotal_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    MonitorWebhookPageResult() = default ;
    MonitorWebhookPageResult(const MonitorWebhookPageResult &) = default ;
    MonitorWebhookPageResult(MonitorWebhookPageResult &&) = default ;
    MonitorWebhookPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorWebhookPageResult() = default ;
    MonitorWebhookPageResult& operator=(const MonitorWebhookPageResult &) = default ;
    MonitorWebhookPageResult& operator=(MonitorWebhookPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->intTotal_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<MonitorWebhook> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<MonitorWebhook>) };
    inline vector<MonitorWebhook> getData() { DARABONBA_PTR_GET(data_, vector<MonitorWebhook>) };
    inline MonitorWebhookPageResult& setData(const vector<MonitorWebhook> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MonitorWebhookPageResult& setData(vector<MonitorWebhook> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // intTotal Field Functions 
    bool hasIntTotal() const { return this->intTotal_ != nullptr;};
    void deleteIntTotal() { this->intTotal_ = nullptr;};
    inline int32_t getIntTotal() const { DARABONBA_PTR_GET_DEFAULT(intTotal_, 0) };
    inline MonitorWebhookPageResult& setIntTotal(int32_t intTotal) { DARABONBA_PTR_SET_VALUE(intTotal_, intTotal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MonitorWebhookPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline MonitorWebhookPageResult& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<MonitorWebhook>> data_ {};
    shared_ptr<int32_t> intTotal_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
