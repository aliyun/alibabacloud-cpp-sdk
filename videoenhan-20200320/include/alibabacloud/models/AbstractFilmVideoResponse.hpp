// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABSTRACTFILMVIDEORESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ABSTRACTFILMVIDEORESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AbstractFilmVideoResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class AbstractFilmVideoResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbstractFilmVideoResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AbstractFilmVideoResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AbstractFilmVideoResponse() = default ;
    AbstractFilmVideoResponse(const AbstractFilmVideoResponse &) = default ;
    AbstractFilmVideoResponse(AbstractFilmVideoResponse &&) = default ;
    AbstractFilmVideoResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbstractFilmVideoResponse() = default ;
    AbstractFilmVideoResponse& operator=(const AbstractFilmVideoResponse &) = default ;
    AbstractFilmVideoResponse& operator=(AbstractFilmVideoResponse &&) = default ;
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
    inline AbstractFilmVideoResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline AbstractFilmVideoResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline AbstractFilmVideoResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AbstractFilmVideoResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, AbstractFilmVideoResponseBody) };
    inline AbstractFilmVideoResponseBody body() { DARABONBA_PTR_GET(body_, AbstractFilmVideoResponseBody) };
    inline AbstractFilmVideoResponse& setBody(const AbstractFilmVideoResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AbstractFilmVideoResponse& setBody(AbstractFilmVideoResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<AbstractFilmVideoResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
