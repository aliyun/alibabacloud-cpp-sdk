// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSSLCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSSLCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodSSLCertificateListResponseBodyCertificateListModelCertListCert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_TO_JSON(Cert, cert_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
    };
    DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList(const DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList(DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList& operator=(const DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList& operator=(DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cert_ != nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline const vector<Models::DescribeVodSSLCertificateListResponseBodyCertificateListModelCertListCert> & cert() const { DARABONBA_PTR_GET_CONST(cert_, vector<Models::DescribeVodSSLCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline vector<Models::DescribeVodSSLCertificateListResponseBodyCertificateListModelCertListCert> cert() { DARABONBA_PTR_GET(cert_, vector<Models::DescribeVodSSLCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList& setCert(const vector<Models::DescribeVodSSLCertificateListResponseBodyCertificateListModelCertListCert> & cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };
    inline DescribeVodSSLCertificateListResponseBodyCertificateListModelCertList& setCert(vector<Models::DescribeVodSSLCertificateListResponseBodyCertificateListModelCertListCert> && cert) { DARABONBA_PTR_SET_RVALUE(cert_, cert) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodSSLCertificateListResponseBodyCertificateListModelCertListCert>> cert_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
