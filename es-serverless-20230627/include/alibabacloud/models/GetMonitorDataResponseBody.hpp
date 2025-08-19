// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMONITORDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMonitorDataResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetMonitorDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetMonitorDataResponseBody() = default ;
    GetMonitorDataResponseBody(const GetMonitorDataResponseBody &) = default ;
    GetMonitorDataResponseBody(GetMonitorDataResponseBody &&) = default ;
    GetMonitorDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMonitorDataResponseBody() = default ;
    GetMonitorDataResponseBody& operator=(const GetMonitorDataResponseBody &) = default ;
    GetMonitorDataResponseBody& operator=(GetMonitorDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->result_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMonitorDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMonitorDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMonitorDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetMonitorDataResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<GetMonitorDataResponseBodyResult>) };
    inline vector<GetMonitorDataResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<GetMonitorDataResponseBodyResult>) };
    inline GetMonitorDataResponseBody& setResult(const vector<GetMonitorDataResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetMonitorDataResponseBody& setResult(vector<GetMonitorDataResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMonitorDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetMonitorDataResponseBodyResult>> result_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
