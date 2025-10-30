// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPHONENOABYTRACKNORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPHONENOABYTRACKNORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPhoneNoAByTrackNoResponseBodyModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QueryPhoneNoAByTrackNoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPhoneNoAByTrackNoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPhoneNoAByTrackNoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPhoneNoAByTrackNoResponseBody() = default ;
    QueryPhoneNoAByTrackNoResponseBody(const QueryPhoneNoAByTrackNoResponseBody &) = default ;
    QueryPhoneNoAByTrackNoResponseBody(QueryPhoneNoAByTrackNoResponseBody &&) = default ;
    QueryPhoneNoAByTrackNoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPhoneNoAByTrackNoResponseBody() = default ;
    QueryPhoneNoAByTrackNoResponseBody& operator=(const QueryPhoneNoAByTrackNoResponseBody &) = default ;
    QueryPhoneNoAByTrackNoResponseBody& operator=(QueryPhoneNoAByTrackNoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->module_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPhoneNoAByTrackNoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryPhoneNoAByTrackNoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<QueryPhoneNoAByTrackNoResponseBodyModule> & module() const { DARABONBA_PTR_GET_CONST(module_, vector<QueryPhoneNoAByTrackNoResponseBodyModule>) };
    inline vector<QueryPhoneNoAByTrackNoResponseBodyModule> module() { DARABONBA_PTR_GET(module_, vector<QueryPhoneNoAByTrackNoResponseBodyModule>) };
    inline QueryPhoneNoAByTrackNoResponseBody& setModule(const vector<QueryPhoneNoAByTrackNoResponseBodyModule> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryPhoneNoAByTrackNoResponseBody& setModule(vector<QueryPhoneNoAByTrackNoResponseBodyModule> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPhoneNoAByTrackNoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other status codes indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/109196.html).
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The information returned after the phone numbers were bound.
    std::shared_ptr<vector<QueryPhoneNoAByTrackNoResponseBodyModule>> module_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
