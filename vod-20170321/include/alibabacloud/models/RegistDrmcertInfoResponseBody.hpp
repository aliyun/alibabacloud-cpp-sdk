// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTDRMCERTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REGISTDRMCERTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RegistDRMCertInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegistDRMCertInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RegistDRMCertInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RegistDRMCertInfoResponseBody() = default ;
    RegistDRMCertInfoResponseBody(const RegistDRMCertInfoResponseBody &) = default ;
    RegistDRMCertInfoResponseBody(RegistDRMCertInfoResponseBody &&) = default ;
    RegistDRMCertInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegistDRMCertInfoResponseBody() = default ;
    RegistDRMCertInfoResponseBody& operator=(const RegistDRMCertInfoResponseBody &) = default ;
    RegistDRMCertInfoResponseBody& operator=(RegistDRMCertInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certId_ != nullptr
        && this->requestId_ != nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline RegistDRMCertInfoResponseBody& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RegistDRMCertInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> certId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
