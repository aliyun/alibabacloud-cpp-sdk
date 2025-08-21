// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnCertificateListResponseBodyCertificateListModelCertListCert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnCertificateListResponseBodyCertificateListModelCertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_TO_JSON(Cert, cert_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
    };
    DescribeCdnCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeCdnCertificateListResponseBodyCertificateListModelCertList(const DescribeCdnCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeCdnCertificateListResponseBodyCertificateListModelCertList(DescribeCdnCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    DescribeCdnCertificateListResponseBodyCertificateListModelCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeCdnCertificateListResponseBodyCertificateListModelCertList& operator=(const DescribeCdnCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeCdnCertificateListResponseBodyCertificateListModelCertList& operator=(DescribeCdnCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cert_ != nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline const vector<Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertListCert> & cert() const { DARABONBA_PTR_GET_CONST(cert_, vector<Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline vector<Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertListCert> cert() { DARABONBA_PTR_GET(cert_, vector<Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline DescribeCdnCertificateListResponseBodyCertificateListModelCertList& setCert(const vector<Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertListCert> & cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };
    inline DescribeCdnCertificateListResponseBodyCertificateListModelCertList& setCert(vector<Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertListCert> && cert) { DARABONBA_PTR_SET_RVALUE(cert_, cert) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertListCert>> cert_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
