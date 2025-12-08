// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENREALPERSONVERIFICATIONTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENREALPERSONVERIFICATIONTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class GenRealPersonVerificationTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenRealPersonVerificationTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_TO_JSON(CertificateNumber, certificateNumber_);
      DARABONBA_PTR_TO_JSON(MetaInfo, metaInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GenRealPersonVerificationTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_FROM_JSON(CertificateNumber, certificateNumber_);
      DARABONBA_PTR_FROM_JSON(MetaInfo, metaInfo_);
    };
    GenRealPersonVerificationTokenRequest() = default ;
    GenRealPersonVerificationTokenRequest(const GenRealPersonVerificationTokenRequest &) = default ;
    GenRealPersonVerificationTokenRequest(GenRealPersonVerificationTokenRequest &&) = default ;
    GenRealPersonVerificationTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenRealPersonVerificationTokenRequest() = default ;
    GenRealPersonVerificationTokenRequest& operator=(const GenRealPersonVerificationTokenRequest &) = default ;
    GenRealPersonVerificationTokenRequest& operator=(GenRealPersonVerificationTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateName_ == nullptr
        && return this->certificateNumber_ == nullptr && return this->metaInfo_ == nullptr; };
    // certificateName Field Functions 
    bool hasCertificateName() const { return this->certificateName_ != nullptr;};
    void deleteCertificateName() { this->certificateName_ = nullptr;};
    inline string certificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
    inline GenRealPersonVerificationTokenRequest& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


    // certificateNumber Field Functions 
    bool hasCertificateNumber() const { return this->certificateNumber_ != nullptr;};
    void deleteCertificateNumber() { this->certificateNumber_ = nullptr;};
    inline string certificateNumber() const { DARABONBA_PTR_GET_DEFAULT(certificateNumber_, "") };
    inline GenRealPersonVerificationTokenRequest& setCertificateNumber(string certificateNumber) { DARABONBA_PTR_SET_VALUE(certificateNumber_, certificateNumber) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline string metaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
    inline GenRealPersonVerificationTokenRequest& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> certificateName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> certificateNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> metaInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
