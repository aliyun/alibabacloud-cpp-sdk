// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGISTICSORDERLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_LOGISTICSORDERLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LogisticsOrderResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class LogisticsOrderListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogisticsOrderListResult& obj) { 
      DARABONBA_PTR_TO_JSON(logisticsOrderList, logisticsOrderList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LogisticsOrderListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(logisticsOrderList, logisticsOrderList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    LogisticsOrderListResult() = default ;
    LogisticsOrderListResult(const LogisticsOrderListResult &) = default ;
    LogisticsOrderListResult(LogisticsOrderListResult &&) = default ;
    LogisticsOrderListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogisticsOrderListResult() = default ;
    LogisticsOrderListResult& operator=(const LogisticsOrderListResult &) = default ;
    LogisticsOrderListResult& operator=(LogisticsOrderListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logisticsOrderList_ == nullptr
        && this->requestId_ == nullptr; };
    // logisticsOrderList Field Functions 
    bool hasLogisticsOrderList() const { return this->logisticsOrderList_ != nullptr;};
    void deleteLogisticsOrderList() { this->logisticsOrderList_ = nullptr;};
    inline const vector<LogisticsOrderResult> & getLogisticsOrderList() const { DARABONBA_PTR_GET_CONST(logisticsOrderList_, vector<LogisticsOrderResult>) };
    inline vector<LogisticsOrderResult> getLogisticsOrderList() { DARABONBA_PTR_GET(logisticsOrderList_, vector<LogisticsOrderResult>) };
    inline LogisticsOrderListResult& setLogisticsOrderList(const vector<LogisticsOrderResult> & logisticsOrderList) { DARABONBA_PTR_SET_VALUE(logisticsOrderList_, logisticsOrderList) };
    inline LogisticsOrderListResult& setLogisticsOrderList(vector<LogisticsOrderResult> && logisticsOrderList) { DARABONBA_PTR_SET_RVALUE(logisticsOrderList_, logisticsOrderList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LogisticsOrderListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<LogisticsOrderResult>> logisticsOrderList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
