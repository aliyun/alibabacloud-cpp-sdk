// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVETOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVETOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveTopDomainsByFlowResponseBodyTopDomainsTopDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveTopDomainsByFlowResponseBodyTopDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveTopDomainsByFlowResponseBodyTopDomains& obj) { 
      DARABONBA_PTR_TO_JSON(TopDomain, topDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveTopDomainsByFlowResponseBodyTopDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(TopDomain, topDomain_);
    };
    DescribeLiveTopDomainsByFlowResponseBodyTopDomains() = default ;
    DescribeLiveTopDomainsByFlowResponseBodyTopDomains(const DescribeLiveTopDomainsByFlowResponseBodyTopDomains &) = default ;
    DescribeLiveTopDomainsByFlowResponseBodyTopDomains(DescribeLiveTopDomainsByFlowResponseBodyTopDomains &&) = default ;
    DescribeLiveTopDomainsByFlowResponseBodyTopDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveTopDomainsByFlowResponseBodyTopDomains() = default ;
    DescribeLiveTopDomainsByFlowResponseBodyTopDomains& operator=(const DescribeLiveTopDomainsByFlowResponseBodyTopDomains &) = default ;
    DescribeLiveTopDomainsByFlowResponseBodyTopDomains& operator=(DescribeLiveTopDomainsByFlowResponseBodyTopDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->topDomain_ == nullptr; };
    // topDomain Field Functions 
    bool hasTopDomain() const { return this->topDomain_ != nullptr;};
    void deleteTopDomain() { this->topDomain_ = nullptr;};
    inline const vector<Models::DescribeLiveTopDomainsByFlowResponseBodyTopDomainsTopDomain> & topDomain() const { DARABONBA_PTR_GET_CONST(topDomain_, vector<Models::DescribeLiveTopDomainsByFlowResponseBodyTopDomainsTopDomain>) };
    inline vector<Models::DescribeLiveTopDomainsByFlowResponseBodyTopDomainsTopDomain> topDomain() { DARABONBA_PTR_GET(topDomain_, vector<Models::DescribeLiveTopDomainsByFlowResponseBodyTopDomainsTopDomain>) };
    inline DescribeLiveTopDomainsByFlowResponseBodyTopDomains& setTopDomain(const vector<Models::DescribeLiveTopDomainsByFlowResponseBodyTopDomainsTopDomain> & topDomain) { DARABONBA_PTR_SET_VALUE(topDomain_, topDomain) };
    inline DescribeLiveTopDomainsByFlowResponseBodyTopDomains& setTopDomain(vector<Models::DescribeLiveTopDomainsByFlowResponseBodyTopDomainsTopDomain> && topDomain) { DARABONBA_PTR_SET_RVALUE(topDomain_, topDomain) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveTopDomainsByFlowResponseBodyTopDomainsTopDomain>> topDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
