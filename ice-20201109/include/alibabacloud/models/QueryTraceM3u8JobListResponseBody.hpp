// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRACEM3U8JOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRACEM3U8JOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryTraceM3u8JobListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryTraceM3u8JobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTraceM3u8JobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTraceM3u8JobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    QueryTraceM3u8JobListResponseBody() = default ;
    QueryTraceM3u8JobListResponseBody(const QueryTraceM3u8JobListResponseBody &) = default ;
    QueryTraceM3u8JobListResponseBody(QueryTraceM3u8JobListResponseBody &&) = default ;
    QueryTraceM3u8JobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTraceM3u8JobListResponseBody() = default ;
    QueryTraceM3u8JobListResponseBody& operator=(const QueryTraceM3u8JobListResponseBody &) = default ;
    QueryTraceM3u8JobListResponseBody& operator=(QueryTraceM3u8JobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->statusCode_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryTraceM3u8JobListResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryTraceM3u8JobListResponseBodyData>) };
    inline vector<QueryTraceM3u8JobListResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<QueryTraceM3u8JobListResponseBodyData>) };
    inline QueryTraceM3u8JobListResponseBody& setData(const vector<QueryTraceM3u8JobListResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTraceM3u8JobListResponseBody& setData(vector<QueryTraceM3u8JobListResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryTraceM3u8JobListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTraceM3u8JobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int64_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0L) };
    inline QueryTraceM3u8JobListResponseBody& setStatusCode(int64_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    // The data returned.
    std::shared_ptr<vector<QueryTraceM3u8JobListResponseBodyData>> data_ = nullptr;
    // The message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status code.
    std::shared_ptr<int64_t> statusCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
