// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTCOMPUTETASKRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SELECTCOMPUTETASKRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SelectComputeTaskResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SelectComputeTaskResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectComputeTaskResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SelectComputeTaskResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SelectComputeTaskResponse() = default ;
    SelectComputeTaskResponse(const SelectComputeTaskResponse &) = default ;
    SelectComputeTaskResponse(SelectComputeTaskResponse &&) = default ;
    SelectComputeTaskResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectComputeTaskResponse() = default ;
    SelectComputeTaskResponse& operator=(const SelectComputeTaskResponse &) = default ;
    SelectComputeTaskResponse& operator=(SelectComputeTaskResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline SelectComputeTaskResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline SelectComputeTaskResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline SelectComputeTaskResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SelectComputeTaskResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, SelectComputeTaskResponseBody) };
    inline SelectComputeTaskResponseBody getBody() { DARABONBA_PTR_GET(body_, SelectComputeTaskResponseBody) };
    inline SelectComputeTaskResponse& setBody(const SelectComputeTaskResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SelectComputeTaskResponse& setBody(SelectComputeTaskResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<SelectComputeTaskResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
