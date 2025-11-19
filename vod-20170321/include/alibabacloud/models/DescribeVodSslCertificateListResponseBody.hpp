// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSSLCERTIFICATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSSLCERTIFICATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodSSLCertificateListResponseBodyCertificateListModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodSSLCertificateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodSSLCertificateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodSSLCertificateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodSSLCertificateListResponseBody() = default ;
    DescribeVodSSLCertificateListResponseBody(const DescribeVodSSLCertificateListResponseBody &) = default ;
    DescribeVodSSLCertificateListResponseBody(DescribeVodSSLCertificateListResponseBody &&) = default ;
    DescribeVodSSLCertificateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodSSLCertificateListResponseBody() = default ;
    DescribeVodSSLCertificateListResponseBody& operator=(const DescribeVodSSLCertificateListResponseBody &) = default ;
    DescribeVodSSLCertificateListResponseBody& operator=(DescribeVodSSLCertificateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateListModel_ == nullptr
        && return this->requestId_ == nullptr; };
    // certificateListModel Field Functions 
    bool hasCertificateListModel() const { return this->certificateListModel_ != nullptr;};
    void deleteCertificateListModel() { this->certificateListModel_ = nullptr;};
    inline const DescribeVodSSLCertificateListResponseBodyCertificateListModel & certificateListModel() const { DARABONBA_PTR_GET_CONST(certificateListModel_, DescribeVodSSLCertificateListResponseBodyCertificateListModel) };
    inline DescribeVodSSLCertificateListResponseBodyCertificateListModel certificateListModel() { DARABONBA_PTR_GET(certificateListModel_, DescribeVodSSLCertificateListResponseBodyCertificateListModel) };
    inline DescribeVodSSLCertificateListResponseBody& setCertificateListModel(const DescribeVodSSLCertificateListResponseBodyCertificateListModel & certificateListModel) { DARABONBA_PTR_SET_VALUE(certificateListModel_, certificateListModel) };
    inline DescribeVodSSLCertificateListResponseBody& setCertificateListModel(DescribeVodSSLCertificateListResponseBodyCertificateListModel && certificateListModel) { DARABONBA_PTR_SET_RVALUE(certificateListModel_, certificateListModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodSSLCertificateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about certificates.
    std::shared_ptr<DescribeVodSSLCertificateListResponseBodyCertificateListModel> certificateListModel_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
