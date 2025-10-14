// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORDATALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORDATALISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridMonitorDataListResponseBodyTimeSeries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorDataListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorDataListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TimeSeries, timeSeries_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorDataListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TimeSeries, timeSeries_);
    };
    DescribeHybridMonitorDataListResponseBody() = default ;
    DescribeHybridMonitorDataListResponseBody(const DescribeHybridMonitorDataListResponseBody &) = default ;
    DescribeHybridMonitorDataListResponseBody(DescribeHybridMonitorDataListResponseBody &&) = default ;
    DescribeHybridMonitorDataListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorDataListResponseBody() = default ;
    DescribeHybridMonitorDataListResponseBody& operator=(const DescribeHybridMonitorDataListResponseBody &) = default ;
    DescribeHybridMonitorDataListResponseBody& operator=(DescribeHybridMonitorDataListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->timeSeries_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHybridMonitorDataListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHybridMonitorDataListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridMonitorDataListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeHybridMonitorDataListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timeSeries Field Functions 
    bool hasTimeSeries() const { return this->timeSeries_ != nullptr;};
    void deleteTimeSeries() { this->timeSeries_ = nullptr;};
    inline const vector<DescribeHybridMonitorDataListResponseBodyTimeSeries> & timeSeries() const { DARABONBA_PTR_GET_CONST(timeSeries_, vector<DescribeHybridMonitorDataListResponseBodyTimeSeries>) };
    inline vector<DescribeHybridMonitorDataListResponseBodyTimeSeries> timeSeries() { DARABONBA_PTR_GET(timeSeries_, vector<DescribeHybridMonitorDataListResponseBodyTimeSeries>) };
    inline DescribeHybridMonitorDataListResponseBody& setTimeSeries(const vector<DescribeHybridMonitorDataListResponseBodyTimeSeries> & timeSeries) { DARABONBA_PTR_SET_VALUE(timeSeries_, timeSeries) };
    inline DescribeHybridMonitorDataListResponseBody& setTimeSeries(vector<DescribeHybridMonitorDataListResponseBodyTimeSeries> && timeSeries) { DARABONBA_PTR_SET_RVALUE(timeSeries_, timeSeries) };


  protected:
    // The response code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> success_ = nullptr;
    // The returned monitoring data.
    std::shared_ptr<vector<DescribeHybridMonitorDataListResponseBodyTimeSeries>> timeSeries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
