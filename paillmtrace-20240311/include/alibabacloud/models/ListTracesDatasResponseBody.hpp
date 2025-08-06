// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRACESDATASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRACESDATASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class ListTracesDatasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTracesDatasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Traces, traces_);
    };
    friend void from_json(const Darabonba::Json& j, ListTracesDatasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Traces, traces_);
    };
    ListTracesDatasResponseBody() = default ;
    ListTracesDatasResponseBody(const ListTracesDatasResponseBody &) = default ;
    ListTracesDatasResponseBody(ListTracesDatasResponseBody &&) = default ;
    ListTracesDatasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTracesDatasResponseBody() = default ;
    ListTracesDatasResponseBody& operator=(const ListTracesDatasResponseBody &) = default ;
    ListTracesDatasResponseBody& operator=(ListTracesDatasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->traces_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTracesDatasResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTracesDatasResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTracesDatasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTracesDatasResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // traces Field Functions 
    bool hasTraces() const { return this->traces_ != nullptr;};
    void deleteTraces() { this->traces_ = nullptr;};
    inline const vector<Darabonba::Json> & traces() const { DARABONBA_PTR_GET_CONST(traces_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> traces() { DARABONBA_PTR_GET(traces_, vector<Darabonba::Json>) };
    inline ListTracesDatasResponseBody& setTraces(const vector<Darabonba::Json> & traces) { DARABONBA_PTR_SET_VALUE(traces_, traces) };
    inline ListTracesDatasResponseBody& setTraces(vector<Darabonba::Json> && traces) { DARABONBA_PTR_SET_RVALUE(traces_, traces) };


  protected:
    // The internal error code. This parameter is returned only when an error occurs.
    std::shared_ptr<string> code_ = nullptr;
    // The error message. This parameter is returned only when an error occurs.
    std::shared_ptr<string> message_ = nullptr;
    // POP request id
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of traces that meet the condition.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The JSON array with each element being a trace\\"s JSON string. Length of the array is equal to or less than the page size parameter value.
    std::shared_ptr<vector<Darabonba::Json>> traces_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
