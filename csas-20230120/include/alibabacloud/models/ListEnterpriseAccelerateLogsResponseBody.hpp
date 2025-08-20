// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnterpriseAccelerateLogsResponseBodyLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListEnterpriseAccelerateLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseAccelerateLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseAccelerateLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
    };
    ListEnterpriseAccelerateLogsResponseBody() = default ;
    ListEnterpriseAccelerateLogsResponseBody(const ListEnterpriseAccelerateLogsResponseBody &) = default ;
    ListEnterpriseAccelerateLogsResponseBody(ListEnterpriseAccelerateLogsResponseBody &&) = default ;
    ListEnterpriseAccelerateLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseAccelerateLogsResponseBody() = default ;
    ListEnterpriseAccelerateLogsResponseBody& operator=(const ListEnterpriseAccelerateLogsResponseBody &) = default ;
    ListEnterpriseAccelerateLogsResponseBody& operator=(ListEnterpriseAccelerateLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logs_ != nullptr
        && this->requestId_ != nullptr && this->totalNumber_ != nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<ListEnterpriseAccelerateLogsResponseBodyLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<ListEnterpriseAccelerateLogsResponseBodyLogs>) };
    inline vector<ListEnterpriseAccelerateLogsResponseBodyLogs> logs() { DARABONBA_PTR_GET(logs_, vector<ListEnterpriseAccelerateLogsResponseBodyLogs>) };
    inline ListEnterpriseAccelerateLogsResponseBody& setLogs(const vector<ListEnterpriseAccelerateLogsResponseBodyLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline ListEnterpriseAccelerateLogsResponseBody& setLogs(vector<ListEnterpriseAccelerateLogsResponseBodyLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnterpriseAccelerateLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline int32_t totalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
    inline ListEnterpriseAccelerateLogsResponseBody& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    std::shared_ptr<vector<ListEnterpriseAccelerateLogsResponseBodyLogs>> logs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
