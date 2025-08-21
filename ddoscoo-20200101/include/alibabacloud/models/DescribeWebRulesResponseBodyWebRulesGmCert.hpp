// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBRULESRESPONSEBODYWEBRULESGMCERT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBRULESRESPONSEBODYWEBRULESGMCERT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebRulesResponseBodyWebRulesGmCert : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebRulesResponseBodyWebRulesGmCert& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(GmEnable, gmEnable_);
      DARABONBA_PTR_TO_JSON(GmOnly, gmOnly_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebRulesResponseBodyWebRulesGmCert& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(GmEnable, gmEnable_);
      DARABONBA_PTR_FROM_JSON(GmOnly, gmOnly_);
    };
    DescribeWebRulesResponseBodyWebRulesGmCert() = default ;
    DescribeWebRulesResponseBodyWebRulesGmCert(const DescribeWebRulesResponseBodyWebRulesGmCert &) = default ;
    DescribeWebRulesResponseBodyWebRulesGmCert(DescribeWebRulesResponseBodyWebRulesGmCert &&) = default ;
    DescribeWebRulesResponseBodyWebRulesGmCert(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebRulesResponseBodyWebRulesGmCert() = default ;
    DescribeWebRulesResponseBodyWebRulesGmCert& operator=(const DescribeWebRulesResponseBodyWebRulesGmCert &) = default ;
    DescribeWebRulesResponseBodyWebRulesGmCert& operator=(DescribeWebRulesResponseBodyWebRulesGmCert &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certId_ != nullptr
        && this->gmEnable_ != nullptr && this->gmOnly_ != nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline DescribeWebRulesResponseBodyWebRulesGmCert& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // gmEnable Field Functions 
    bool hasGmEnable() const { return this->gmEnable_ != nullptr;};
    void deleteGmEnable() { this->gmEnable_ = nullptr;};
    inline int64_t gmEnable() const { DARABONBA_PTR_GET_DEFAULT(gmEnable_, 0L) };
    inline DescribeWebRulesResponseBodyWebRulesGmCert& setGmEnable(int64_t gmEnable) { DARABONBA_PTR_SET_VALUE(gmEnable_, gmEnable) };


    // gmOnly Field Functions 
    bool hasGmOnly() const { return this->gmOnly_ != nullptr;};
    void deleteGmOnly() { this->gmOnly_ = nullptr;};
    inline int64_t gmOnly() const { DARABONBA_PTR_GET_DEFAULT(gmOnly_, 0L) };
    inline DescribeWebRulesResponseBodyWebRulesGmCert& setGmOnly(int64_t gmOnly) { DARABONBA_PTR_SET_VALUE(gmOnly_, gmOnly) };


  protected:
    // The ID of the SM certificate.
    std::shared_ptr<string> certId_ = nullptr;
    // Indicates whether Enable SM Certificate-based Verification is turned on.
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int64_t> gmEnable_ = nullptr;
    // Indicates whether Allow Access Only from SM Certificates-based Clients is turned on.
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int64_t> gmOnly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
