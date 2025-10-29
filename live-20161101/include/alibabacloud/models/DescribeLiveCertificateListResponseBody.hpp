// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVECERTIFICATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVECERTIFICATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveCertificateListResponseBodyCertificateListModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveCertificateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveCertificateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveCertificateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveCertificateListResponseBody() = default ;
    DescribeLiveCertificateListResponseBody(const DescribeLiveCertificateListResponseBody &) = default ;
    DescribeLiveCertificateListResponseBody(DescribeLiveCertificateListResponseBody &&) = default ;
    DescribeLiveCertificateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveCertificateListResponseBody() = default ;
    DescribeLiveCertificateListResponseBody& operator=(const DescribeLiveCertificateListResponseBody &) = default ;
    DescribeLiveCertificateListResponseBody& operator=(DescribeLiveCertificateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateListModel_ == nullptr
        && return this->requestId_ == nullptr; };
    // certificateListModel Field Functions 
    bool hasCertificateListModel() const { return this->certificateListModel_ != nullptr;};
    void deleteCertificateListModel() { this->certificateListModel_ = nullptr;};
    inline const DescribeLiveCertificateListResponseBodyCertificateListModel & certificateListModel() const { DARABONBA_PTR_GET_CONST(certificateListModel_, DescribeLiveCertificateListResponseBodyCertificateListModel) };
    inline DescribeLiveCertificateListResponseBodyCertificateListModel certificateListModel() { DARABONBA_PTR_GET(certificateListModel_, DescribeLiveCertificateListResponseBodyCertificateListModel) };
    inline DescribeLiveCertificateListResponseBody& setCertificateListModel(const DescribeLiveCertificateListResponseBodyCertificateListModel & certificateListModel) { DARABONBA_PTR_SET_VALUE(certificateListModel_, certificateListModel) };
    inline DescribeLiveCertificateListResponseBody& setCertificateListModel(DescribeLiveCertificateListResponseBodyCertificateListModel && certificateListModel) { DARABONBA_PTR_SET_RVALUE(certificateListModel_, certificateListModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveCertificateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details.
    std::shared_ptr<DescribeLiveCertificateListResponseBodyCertificateListModel> certificateListModel_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
