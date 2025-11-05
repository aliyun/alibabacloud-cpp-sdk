// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNCERTIFICATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNCERTIFICATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnCertificateListResponseBodyCertificateListModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnCertificateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnCertificateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnCertificateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnCertificateListResponseBody() = default ;
    DescribeCdnCertificateListResponseBody(const DescribeCdnCertificateListResponseBody &) = default ;
    DescribeCdnCertificateListResponseBody(DescribeCdnCertificateListResponseBody &&) = default ;
    DescribeCdnCertificateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnCertificateListResponseBody() = default ;
    DescribeCdnCertificateListResponseBody& operator=(const DescribeCdnCertificateListResponseBody &) = default ;
    DescribeCdnCertificateListResponseBody& operator=(DescribeCdnCertificateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateListModel_ == nullptr
        && return this->requestId_ == nullptr; };
    // certificateListModel Field Functions 
    bool hasCertificateListModel() const { return this->certificateListModel_ != nullptr;};
    void deleteCertificateListModel() { this->certificateListModel_ = nullptr;};
    inline const DescribeCdnCertificateListResponseBodyCertificateListModel & certificateListModel() const { DARABONBA_PTR_GET_CONST(certificateListModel_, DescribeCdnCertificateListResponseBodyCertificateListModel) };
    inline DescribeCdnCertificateListResponseBodyCertificateListModel certificateListModel() { DARABONBA_PTR_GET(certificateListModel_, DescribeCdnCertificateListResponseBodyCertificateListModel) };
    inline DescribeCdnCertificateListResponseBody& setCertificateListModel(const DescribeCdnCertificateListResponseBodyCertificateListModel & certificateListModel) { DARABONBA_PTR_SET_VALUE(certificateListModel_, certificateListModel) };
    inline DescribeCdnCertificateListResponseBody& setCertificateListModel(DescribeCdnCertificateListResponseBodyCertificateListModel && certificateListModel) { DARABONBA_PTR_SET_RVALUE(certificateListModel_, certificateListModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnCertificateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about certificates.
    std::shared_ptr<DescribeCdnCertificateListResponseBodyCertificateListModel> certificateListModel_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
