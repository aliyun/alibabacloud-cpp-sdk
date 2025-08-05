// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVENTTRACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVENTTRACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryEventTracesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class QueryEventTracesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEventTracesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEventTracesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryEventTracesResponseBody() = default ;
    QueryEventTracesResponseBody(const QueryEventTracesResponseBody &) = default ;
    QueryEventTracesResponseBody(QueryEventTracesResponseBody &&) = default ;
    QueryEventTracesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEventTracesResponseBody() = default ;
    QueryEventTracesResponseBody& operator=(const QueryEventTracesResponseBody &) = default ;
    QueryEventTracesResponseBody& operator=(QueryEventTracesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryEventTracesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryEventTracesResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryEventTracesResponseBodyData>) };
    inline vector<QueryEventTracesResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<QueryEventTracesResponseBodyData>) };
    inline QueryEventTracesResponseBody& setData(const vector<QueryEventTracesResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryEventTracesResponseBody& setData(vector<QueryEventTracesResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryEventTracesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEventTracesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryEventTracesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // 
    // 200: The request was successful.
    // 
    // Other codes: The request failed. For information about error codes, see Error codes.
    std::shared_ptr<string> code_ = nullptr;
    // The name of the event source.
    std::shared_ptr<vector<QueryEventTracesResponseBodyData>> data_ = nullptr;
    // The error message that is returned if the request failed.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values: true and false.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
