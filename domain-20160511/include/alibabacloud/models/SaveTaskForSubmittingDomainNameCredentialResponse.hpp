// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETASKFORSUBMITTINGDOMAINNAMECREDENTIALRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SAVETASKFORSUBMITTINGDOMAINNAMECREDENTIALRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SaveTaskForSubmittingDomainNameCredentialResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class SaveTaskForSubmittingDomainNameCredentialResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTaskForSubmittingDomainNameCredentialResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTaskForSubmittingDomainNameCredentialResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SaveTaskForSubmittingDomainNameCredentialResponse() = default ;
    SaveTaskForSubmittingDomainNameCredentialResponse(const SaveTaskForSubmittingDomainNameCredentialResponse &) = default ;
    SaveTaskForSubmittingDomainNameCredentialResponse(SaveTaskForSubmittingDomainNameCredentialResponse &&) = default ;
    SaveTaskForSubmittingDomainNameCredentialResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTaskForSubmittingDomainNameCredentialResponse() = default ;
    SaveTaskForSubmittingDomainNameCredentialResponse& operator=(const SaveTaskForSubmittingDomainNameCredentialResponse &) = default ;
    SaveTaskForSubmittingDomainNameCredentialResponse& operator=(SaveTaskForSubmittingDomainNameCredentialResponse &&) = default ;
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
    inline SaveTaskForSubmittingDomainNameCredentialResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline SaveTaskForSubmittingDomainNameCredentialResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline SaveTaskForSubmittingDomainNameCredentialResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SaveTaskForSubmittingDomainNameCredentialResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, SaveTaskForSubmittingDomainNameCredentialResponseBody) };
    inline SaveTaskForSubmittingDomainNameCredentialResponseBody getBody() { DARABONBA_PTR_GET(body_, SaveTaskForSubmittingDomainNameCredentialResponseBody) };
    inline SaveTaskForSubmittingDomainNameCredentialResponse& setBody(const SaveTaskForSubmittingDomainNameCredentialResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SaveTaskForSubmittingDomainNameCredentialResponse& setBody(SaveTaskForSubmittingDomainNameCredentialResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<SaveTaskForSubmittingDomainNameCredentialResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
