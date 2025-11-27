// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSTOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSTOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsTopDomainsByFlowResponseBodyTopDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsTopDomainsByFlowResponseBodyTopDomains& obj) { 
      DARABONBA_PTR_TO_JSON(TopDomain, topDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsTopDomainsByFlowResponseBodyTopDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(TopDomain, topDomain_);
    };
    DescribeVsTopDomainsByFlowResponseBodyTopDomains() = default ;
    DescribeVsTopDomainsByFlowResponseBodyTopDomains(const DescribeVsTopDomainsByFlowResponseBodyTopDomains &) = default ;
    DescribeVsTopDomainsByFlowResponseBodyTopDomains(DescribeVsTopDomainsByFlowResponseBodyTopDomains &&) = default ;
    DescribeVsTopDomainsByFlowResponseBodyTopDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsTopDomainsByFlowResponseBodyTopDomains() = default ;
    DescribeVsTopDomainsByFlowResponseBodyTopDomains& operator=(const DescribeVsTopDomainsByFlowResponseBodyTopDomains &) = default ;
    DescribeVsTopDomainsByFlowResponseBodyTopDomains& operator=(DescribeVsTopDomainsByFlowResponseBodyTopDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->topDomain_ == nullptr; };
    // topDomain Field Functions 
    bool hasTopDomain() const { return this->topDomain_ != nullptr;};
    void deleteTopDomain() { this->topDomain_ = nullptr;};
    inline const vector<Models::DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain> & topDomain() const { DARABONBA_PTR_GET_CONST(topDomain_, vector<Models::DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain>) };
    inline vector<Models::DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain> topDomain() { DARABONBA_PTR_GET(topDomain_, vector<Models::DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain>) };
    inline DescribeVsTopDomainsByFlowResponseBodyTopDomains& setTopDomain(const vector<Models::DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain> & topDomain) { DARABONBA_PTR_SET_VALUE(topDomain_, topDomain) };
    inline DescribeVsTopDomainsByFlowResponseBodyTopDomains& setTopDomain(vector<Models::DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain> && topDomain) { DARABONBA_PTR_SET_RVALUE(topDomain_, topDomain) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain>> topDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
