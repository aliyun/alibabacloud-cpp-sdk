// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSMCERTIFICATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSMCERTIFICATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnSMCertificateListResponseBodyCertificateListModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnSMCertificateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSMCertificateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSMCertificateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnSMCertificateListResponseBody() = default ;
    DescribeCdnSMCertificateListResponseBody(const DescribeCdnSMCertificateListResponseBody &) = default ;
    DescribeCdnSMCertificateListResponseBody(DescribeCdnSMCertificateListResponseBody &&) = default ;
    DescribeCdnSMCertificateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSMCertificateListResponseBody() = default ;
    DescribeCdnSMCertificateListResponseBody& operator=(const DescribeCdnSMCertificateListResponseBody &) = default ;
    DescribeCdnSMCertificateListResponseBody& operator=(DescribeCdnSMCertificateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateListModel_ == nullptr
        && return this->requestId_ == nullptr; };
    // certificateListModel Field Functions 
    bool hasCertificateListModel() const { return this->certificateListModel_ != nullptr;};
    void deleteCertificateListModel() { this->certificateListModel_ = nullptr;};
    inline const DescribeCdnSMCertificateListResponseBodyCertificateListModel & certificateListModel() const { DARABONBA_PTR_GET_CONST(certificateListModel_, DescribeCdnSMCertificateListResponseBodyCertificateListModel) };
    inline DescribeCdnSMCertificateListResponseBodyCertificateListModel certificateListModel() { DARABONBA_PTR_GET(certificateListModel_, DescribeCdnSMCertificateListResponseBodyCertificateListModel) };
    inline DescribeCdnSMCertificateListResponseBody& setCertificateListModel(const DescribeCdnSMCertificateListResponseBodyCertificateListModel & certificateListModel) { DARABONBA_PTR_SET_VALUE(certificateListModel_, certificateListModel) };
    inline DescribeCdnSMCertificateListResponseBody& setCertificateListModel(DescribeCdnSMCertificateListResponseBodyCertificateListModel && certificateListModel) { DARABONBA_PTR_SET_RVALUE(certificateListModel_, certificateListModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnSMCertificateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The type of the certificate information.
    std::shared_ptr<DescribeCdnSMCertificateListResponseBodyCertificateListModel> certificateListModel_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
