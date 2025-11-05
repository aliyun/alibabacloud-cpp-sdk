// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSSLCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSSLCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertListCert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_TO_JSON(Cert, cert_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
    };
    DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList(const DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList(DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList& operator=(const DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList& operator=(DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cert_ == nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline const vector<Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertListCert> & cert() const { DARABONBA_PTR_GET_CONST(cert_, vector<Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline vector<Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertListCert> cert() { DARABONBA_PTR_GET(cert_, vector<Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList& setCert(const vector<Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertListCert> & cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };
    inline DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList& setCert(vector<Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertListCert> && cert) { DARABONBA_PTR_SET_RVALUE(cert_, cert) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertListCert>> cert_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
