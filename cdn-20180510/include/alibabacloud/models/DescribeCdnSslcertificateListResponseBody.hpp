// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSSLCERTIFICATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSSLCERTIFICATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnSSLCertificateListResponseBodyCertificateListModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnSSLCertificateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSSLCertificateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSSLCertificateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnSSLCertificateListResponseBody() = default ;
    DescribeCdnSSLCertificateListResponseBody(const DescribeCdnSSLCertificateListResponseBody &) = default ;
    DescribeCdnSSLCertificateListResponseBody(DescribeCdnSSLCertificateListResponseBody &&) = default ;
    DescribeCdnSSLCertificateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSSLCertificateListResponseBody() = default ;
    DescribeCdnSSLCertificateListResponseBody& operator=(const DescribeCdnSSLCertificateListResponseBody &) = default ;
    DescribeCdnSSLCertificateListResponseBody& operator=(DescribeCdnSSLCertificateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificateListModel_ != nullptr
        && this->requestId_ != nullptr; };
    // certificateListModel Field Functions 
    bool hasCertificateListModel() const { return this->certificateListModel_ != nullptr;};
    void deleteCertificateListModel() { this->certificateListModel_ = nullptr;};
    inline const DescribeCdnSSLCertificateListResponseBodyCertificateListModel & certificateListModel() const { DARABONBA_PTR_GET_CONST(certificateListModel_, DescribeCdnSSLCertificateListResponseBodyCertificateListModel) };
    inline DescribeCdnSSLCertificateListResponseBodyCertificateListModel certificateListModel() { DARABONBA_PTR_GET(certificateListModel_, DescribeCdnSSLCertificateListResponseBodyCertificateListModel) };
    inline DescribeCdnSSLCertificateListResponseBody& setCertificateListModel(const DescribeCdnSSLCertificateListResponseBodyCertificateListModel & certificateListModel) { DARABONBA_PTR_SET_VALUE(certificateListModel_, certificateListModel) };
    inline DescribeCdnSSLCertificateListResponseBody& setCertificateListModel(DescribeCdnSSLCertificateListResponseBodyCertificateListModel && certificateListModel) { DARABONBA_PTR_SET_RVALUE(certificateListModel_, certificateListModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnSSLCertificateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of certificates.
    std::shared_ptr<DescribeCdnSSLCertificateListResponseBodyCertificateListModel> certificateListModel_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
