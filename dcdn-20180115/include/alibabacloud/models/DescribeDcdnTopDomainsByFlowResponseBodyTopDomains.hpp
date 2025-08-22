// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNTOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNTOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnTopDomainsByFlowResponseBodyTopDomainsTopDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnTopDomainsByFlowResponseBodyTopDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnTopDomainsByFlowResponseBodyTopDomains& obj) { 
      DARABONBA_PTR_TO_JSON(TopDomain, topDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnTopDomainsByFlowResponseBodyTopDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(TopDomain, topDomain_);
    };
    DescribeDcdnTopDomainsByFlowResponseBodyTopDomains() = default ;
    DescribeDcdnTopDomainsByFlowResponseBodyTopDomains(const DescribeDcdnTopDomainsByFlowResponseBodyTopDomains &) = default ;
    DescribeDcdnTopDomainsByFlowResponseBodyTopDomains(DescribeDcdnTopDomainsByFlowResponseBodyTopDomains &&) = default ;
    DescribeDcdnTopDomainsByFlowResponseBodyTopDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnTopDomainsByFlowResponseBodyTopDomains() = default ;
    DescribeDcdnTopDomainsByFlowResponseBodyTopDomains& operator=(const DescribeDcdnTopDomainsByFlowResponseBodyTopDomains &) = default ;
    DescribeDcdnTopDomainsByFlowResponseBodyTopDomains& operator=(DescribeDcdnTopDomainsByFlowResponseBodyTopDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->topDomain_ != nullptr; };
    // topDomain Field Functions 
    bool hasTopDomain() const { return this->topDomain_ != nullptr;};
    void deleteTopDomain() { this->topDomain_ = nullptr;};
    inline const vector<Models::DescribeDcdnTopDomainsByFlowResponseBodyTopDomainsTopDomain> & topDomain() const { DARABONBA_PTR_GET_CONST(topDomain_, vector<Models::DescribeDcdnTopDomainsByFlowResponseBodyTopDomainsTopDomain>) };
    inline vector<Models::DescribeDcdnTopDomainsByFlowResponseBodyTopDomainsTopDomain> topDomain() { DARABONBA_PTR_GET(topDomain_, vector<Models::DescribeDcdnTopDomainsByFlowResponseBodyTopDomainsTopDomain>) };
    inline DescribeDcdnTopDomainsByFlowResponseBodyTopDomains& setTopDomain(const vector<Models::DescribeDcdnTopDomainsByFlowResponseBodyTopDomainsTopDomain> & topDomain) { DARABONBA_PTR_SET_VALUE(topDomain_, topDomain) };
    inline DescribeDcdnTopDomainsByFlowResponseBodyTopDomains& setTopDomain(vector<Models::DescribeDcdnTopDomainsByFlowResponseBodyTopDomainsTopDomain> && topDomain) { DARABONBA_PTR_SET_RVALUE(topDomain_, topDomain) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnTopDomainsByFlowResponseBodyTopDomainsTopDomain>> topDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
