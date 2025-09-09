// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSSLBSUBDOMAINSRESPONSEBODYSLBSUBDOMAINSSLBSUBDOMAINLINEALGORITHMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSSLBSUBDOMAINSRESPONSEBODYSLBSUBDOMAINSSLBSUBDOMAINLINEALGORITHMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms& obj) { 
      DARABONBA_PTR_TO_JSON(LineAlgorithm, lineAlgorithm_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms& obj) { 
      DARABONBA_PTR_FROM_JSON(LineAlgorithm, lineAlgorithm_);
    };
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms() = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms(const DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms &) = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms(DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms &&) = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms() = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms& operator=(const DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms &) = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms& operator=(DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lineAlgorithm_ != nullptr; };
    // lineAlgorithm Field Functions 
    bool hasLineAlgorithm() const { return this->lineAlgorithm_ != nullptr;};
    void deleteLineAlgorithm() { this->lineAlgorithm_ = nullptr;};
    inline const vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm> & lineAlgorithm() const { DARABONBA_PTR_GET_CONST(lineAlgorithm_, vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm>) };
    inline vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm> lineAlgorithm() { DARABONBA_PTR_GET(lineAlgorithm_, vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm>) };
    inline DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms& setLineAlgorithm(const vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm> & lineAlgorithm) { DARABONBA_PTR_SET_VALUE(lineAlgorithm_, lineAlgorithm) };
    inline DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms& setLineAlgorithm(vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm> && lineAlgorithm) { DARABONBA_PTR_SET_RVALUE(lineAlgorithm_, lineAlgorithm) };


  protected:
    std::shared_ptr<vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm>> lineAlgorithm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
