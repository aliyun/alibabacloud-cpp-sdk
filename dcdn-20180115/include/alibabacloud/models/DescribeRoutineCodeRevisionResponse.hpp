// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTINECODEREVISIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTINECODEREVISIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeRoutineCodeRevisionResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeRoutineCodeRevisionResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRoutineCodeRevisionResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRoutineCodeRevisionResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeRoutineCodeRevisionResponse() = default ;
    DescribeRoutineCodeRevisionResponse(const DescribeRoutineCodeRevisionResponse &) = default ;
    DescribeRoutineCodeRevisionResponse(DescribeRoutineCodeRevisionResponse &&) = default ;
    DescribeRoutineCodeRevisionResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRoutineCodeRevisionResponse() = default ;
    DescribeRoutineCodeRevisionResponse& operator=(const DescribeRoutineCodeRevisionResponse &) = default ;
    DescribeRoutineCodeRevisionResponse& operator=(DescribeRoutineCodeRevisionResponse &&) = default ;
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
    inline DescribeRoutineCodeRevisionResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeRoutineCodeRevisionResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeRoutineCodeRevisionResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeRoutineCodeRevisionResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DescribeRoutineCodeRevisionResponseBody) };
    inline DescribeRoutineCodeRevisionResponseBody getBody() { DARABONBA_PTR_GET(body_, DescribeRoutineCodeRevisionResponseBody) };
    inline DescribeRoutineCodeRevisionResponse& setBody(const DescribeRoutineCodeRevisionResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeRoutineCodeRevisionResponse& setBody(DescribeRoutineCodeRevisionResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DescribeRoutineCodeRevisionResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
