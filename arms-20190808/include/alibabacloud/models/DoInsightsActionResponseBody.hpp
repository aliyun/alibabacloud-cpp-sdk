// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOINSIGHTSACTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOINSIGHTSACTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DoInsightsActionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DoInsightsActionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DoInsightsActionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DoInsightsActionResponseBody() = default ;
    DoInsightsActionResponseBody(const DoInsightsActionResponseBody &) = default ;
    DoInsightsActionResponseBody(DoInsightsActionResponseBody &&) = default ;
    DoInsightsActionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DoInsightsActionResponseBody() = default ;
    DoInsightsActionResponseBody& operator=(const DoInsightsActionResponseBody &) = default ;
    DoInsightsActionResponseBody& operator=(DoInsightsActionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DoInsightsActionResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DoInsightsActionResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DoInsightsActionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DoInsightsActionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DoInsightsActionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The response parameters vary with the value of module.
    // 
    // *   QueryTopo
    // 
    //         {
    //         "nodes": [Object] # The nodes. For more information, see node details in the supplementary notes of response parameters.
    //         "edges": [Object] # The edges. For more information, see edge details in the supplementary notes of response parameters.
    //         }
    // 
    // *   QueryTopoRed
    // 
    //         {
    //           "nodeRed": {
    //           	"nodeId": {
    //           		"count": double, # The total number of requests in the specified time range.
    //           		"error": double, # The total number of errors in the specified time range.
    //           		"rt": double, # The average response time in the specified time range. Unit: milliseconds.
    //           	}
    //           },
    //           "edgeRed": {
    //           	"edgeId": {
    //           	    "count": double, # The total number of requests in the specified time range.
    //           		"error": double, # The total number of errors in the specified time range.
    //           		"rt": double, # The average response time in the specified time range. Unit: milliseconds.
    //           	}
    //           }
    // 
    // }
    // 
    // ```
    // ```
    std::shared_ptr<string> data_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
