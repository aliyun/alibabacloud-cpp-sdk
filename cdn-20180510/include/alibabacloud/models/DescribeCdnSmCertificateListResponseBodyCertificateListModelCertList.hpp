// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSMCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSMCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnSMCertificateListResponseBodyCertificateListModelCertListCert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_TO_JSON(Cert, cert_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
    };
    DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList(const DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList(DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList& operator=(const DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList& operator=(DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cert_ == nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline const vector<Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertListCert> & cert() const { DARABONBA_PTR_GET_CONST(cert_, vector<Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline vector<Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertListCert> cert() { DARABONBA_PTR_GET(cert_, vector<Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList& setCert(const vector<Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertListCert> & cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };
    inline DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList& setCert(vector<Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertListCert> && cert) { DARABONBA_PTR_SET_RVALUE(cert_, cert) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertListCert>> cert_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
