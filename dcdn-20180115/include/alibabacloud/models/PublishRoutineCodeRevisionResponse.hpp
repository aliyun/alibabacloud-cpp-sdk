// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHROUTINECODEREVISIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHROUTINECODEREVISIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/PublishRoutineCodeRevisionResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class PublishRoutineCodeRevisionResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishRoutineCodeRevisionResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, PublishRoutineCodeRevisionResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    PublishRoutineCodeRevisionResponse() = default ;
    PublishRoutineCodeRevisionResponse(const PublishRoutineCodeRevisionResponse &) = default ;
    PublishRoutineCodeRevisionResponse(PublishRoutineCodeRevisionResponse &&) = default ;
    PublishRoutineCodeRevisionResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishRoutineCodeRevisionResponse() = default ;
    PublishRoutineCodeRevisionResponse& operator=(const PublishRoutineCodeRevisionResponse &) = default ;
    PublishRoutineCodeRevisionResponse& operator=(PublishRoutineCodeRevisionResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->statusCode_ != nullptr && this->body_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline PublishRoutineCodeRevisionResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline PublishRoutineCodeRevisionResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline PublishRoutineCodeRevisionResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PublishRoutineCodeRevisionResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, PublishRoutineCodeRevisionResponseBody) };
    inline PublishRoutineCodeRevisionResponseBody body() { DARABONBA_PTR_GET(body_, PublishRoutineCodeRevisionResponseBody) };
    inline PublishRoutineCodeRevisionResponse& setBody(const PublishRoutineCodeRevisionResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PublishRoutineCodeRevisionResponse& setBody(PublishRoutineCodeRevisionResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<PublishRoutineCodeRevisionResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
