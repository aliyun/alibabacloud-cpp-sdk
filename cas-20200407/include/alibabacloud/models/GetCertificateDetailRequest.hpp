// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetCertificateDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertificateDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCertificateDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
    };
    GetCertificateDetailRequest() = default ;
    GetCertificateDetailRequest(const GetCertificateDetailRequest &) = default ;
    GetCertificateDetailRequest(GetCertificateDetailRequest &&) = default ;
    GetCertificateDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertificateDetailRequest() = default ;
    GetCertificateDetailRequest& operator=(const GetCertificateDetailRequest &) = default ;
    GetCertificateDetailRequest& operator=(GetCertificateDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline int64_t getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, 0L) };
    inline GetCertificateDetailRequest& setCertificateId(int64_t certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> certificateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
