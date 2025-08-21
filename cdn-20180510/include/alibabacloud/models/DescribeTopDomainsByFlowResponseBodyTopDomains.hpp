// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeTopDomainsByFlowResponseBodyTopDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTopDomainsByFlowResponseBodyTopDomains& obj) { 
      DARABONBA_PTR_TO_JSON(TopDomain, topDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTopDomainsByFlowResponseBodyTopDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(TopDomain, topDomain_);
    };
    DescribeTopDomainsByFlowResponseBodyTopDomains() = default ;
    DescribeTopDomainsByFlowResponseBodyTopDomains(const DescribeTopDomainsByFlowResponseBodyTopDomains &) = default ;
    DescribeTopDomainsByFlowResponseBodyTopDomains(DescribeTopDomainsByFlowResponseBodyTopDomains &&) = default ;
    DescribeTopDomainsByFlowResponseBodyTopDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTopDomainsByFlowResponseBodyTopDomains() = default ;
    DescribeTopDomainsByFlowResponseBodyTopDomains& operator=(const DescribeTopDomainsByFlowResponseBodyTopDomains &) = default ;
    DescribeTopDomainsByFlowResponseBodyTopDomains& operator=(DescribeTopDomainsByFlowResponseBodyTopDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->topDomain_ != nullptr; };
    // topDomain Field Functions 
    bool hasTopDomain() const { return this->topDomain_ != nullptr;};
    void deleteTopDomain() { this->topDomain_ = nullptr;};
    inline const vector<Models::DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain> & topDomain() const { DARABONBA_PTR_GET_CONST(topDomain_, vector<Models::DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain>) };
    inline vector<Models::DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain> topDomain() { DARABONBA_PTR_GET(topDomain_, vector<Models::DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain>) };
    inline DescribeTopDomainsByFlowResponseBodyTopDomains& setTopDomain(const vector<Models::DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain> & topDomain) { DARABONBA_PTR_SET_VALUE(topDomain_, topDomain) };
    inline DescribeTopDomainsByFlowResponseBodyTopDomains& setTopDomain(vector<Models::DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain> && topDomain) { DARABONBA_PTR_SET_RVALUE(topDomain_, topDomain) };


  protected:
    std::shared_ptr<vector<Models::DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain>> topDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
