// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVECERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVECERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveCertificateListResponseBodyCertificateListModelCertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_TO_JSON(Cert, cert_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
    };
    DescribeLiveCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModelCertList(const DescribeLiveCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModelCertList(DescribeLiveCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModelCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModelCertList& operator=(const DescribeLiveCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModelCertList& operator=(DescribeLiveCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cert_ != nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline const vector<Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert> & cert() const { DARABONBA_PTR_GET_CONST(cert_, vector<Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline vector<Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert> cert() { DARABONBA_PTR_GET(cert_, vector<Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline DescribeLiveCertificateListResponseBodyCertificateListModelCertList& setCert(const vector<Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert> & cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };
    inline DescribeLiveCertificateListResponseBodyCertificateListModelCertList& setCert(vector<Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert> && cert) { DARABONBA_PTR_SET_RVALUE(cert_, cert) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertListCert>> cert_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
