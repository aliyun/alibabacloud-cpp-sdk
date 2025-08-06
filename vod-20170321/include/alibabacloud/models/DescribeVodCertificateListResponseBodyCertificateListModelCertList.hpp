// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodCertificateListResponseBodyCertificateListModelCertListCert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodCertificateListResponseBodyCertificateListModelCertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_TO_JSON(Cert, cert_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodCertificateListResponseBodyCertificateListModelCertList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
    };
    DescribeVodCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeVodCertificateListResponseBodyCertificateListModelCertList(const DescribeVodCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeVodCertificateListResponseBodyCertificateListModelCertList(DescribeVodCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    DescribeVodCertificateListResponseBodyCertificateListModelCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodCertificateListResponseBodyCertificateListModelCertList() = default ;
    DescribeVodCertificateListResponseBodyCertificateListModelCertList& operator=(const DescribeVodCertificateListResponseBodyCertificateListModelCertList &) = default ;
    DescribeVodCertificateListResponseBodyCertificateListModelCertList& operator=(DescribeVodCertificateListResponseBodyCertificateListModelCertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cert_ != nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline const vector<Models::DescribeVodCertificateListResponseBodyCertificateListModelCertListCert> & cert() const { DARABONBA_PTR_GET_CONST(cert_, vector<Models::DescribeVodCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline vector<Models::DescribeVodCertificateListResponseBodyCertificateListModelCertListCert> cert() { DARABONBA_PTR_GET(cert_, vector<Models::DescribeVodCertificateListResponseBodyCertificateListModelCertListCert>) };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertList& setCert(const vector<Models::DescribeVodCertificateListResponseBodyCertificateListModelCertListCert> & cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertList& setCert(vector<Models::DescribeVodCertificateListResponseBodyCertificateListModelCertListCert> && cert) { DARABONBA_PTR_SET_RVALUE(cert_, cert) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodCertificateListResponseBodyCertificateListModelCertListCert>> cert_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
