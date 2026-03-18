// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGQUERYMODELTRAINJOBLISTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGQUERYMODELTRAINJOBLISTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/Personalizedtxt2imgQueryModelTrainJobListResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class Personalizedtxt2imgQueryModelTrainJobListResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Personalizedtxt2imgQueryModelTrainJobListResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, Personalizedtxt2imgQueryModelTrainJobListResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    Personalizedtxt2imgQueryModelTrainJobListResponse() = default ;
    Personalizedtxt2imgQueryModelTrainJobListResponse(const Personalizedtxt2imgQueryModelTrainJobListResponse &) = default ;
    Personalizedtxt2imgQueryModelTrainJobListResponse(Personalizedtxt2imgQueryModelTrainJobListResponse &&) = default ;
    Personalizedtxt2imgQueryModelTrainJobListResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Personalizedtxt2imgQueryModelTrainJobListResponse() = default ;
    Personalizedtxt2imgQueryModelTrainJobListResponse& operator=(const Personalizedtxt2imgQueryModelTrainJobListResponse &) = default ;
    Personalizedtxt2imgQueryModelTrainJobListResponse& operator=(Personalizedtxt2imgQueryModelTrainJobListResponse &&) = default ;
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
    inline Personalizedtxt2imgQueryModelTrainJobListResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline Personalizedtxt2imgQueryModelTrainJobListResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline Personalizedtxt2imgQueryModelTrainJobListResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Personalizedtxt2imgQueryModelTrainJobListResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, Personalizedtxt2imgQueryModelTrainJobListResponseBody) };
    inline Personalizedtxt2imgQueryModelTrainJobListResponseBody getBody() { DARABONBA_PTR_GET(body_, Personalizedtxt2imgQueryModelTrainJobListResponseBody) };
    inline Personalizedtxt2imgQueryModelTrainJobListResponse& setBody(const Personalizedtxt2imgQueryModelTrainJobListResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline Personalizedtxt2imgQueryModelTrainJobListResponse& setBody(Personalizedtxt2imgQueryModelTrainJobListResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<Personalizedtxt2imgQueryModelTrainJobListResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
