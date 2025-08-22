// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSSLCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSSLCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_TO_JSON(Cert, cert_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
    };
    DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList(const DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList(DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList& operator=(const DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList& operator=(DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cert_ != nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline const vector<Models::DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert> & cert() const { DARABONBA_PTR_GET_CONST(cert_, vector<Models::DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline vector<Models::DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert> cert() { DARABONBA_PTR_GET(cert_, vector<Models::DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList& setCert(const vector<Models::DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert> & cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };
    inline DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertList& setCert(vector<Models::DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert> && cert) { DARABONBA_PTR_SET_RVALUE(cert_, cert) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert>> cert_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
