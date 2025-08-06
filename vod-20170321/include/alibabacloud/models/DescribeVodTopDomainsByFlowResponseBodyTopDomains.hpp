// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodTopDomainsByFlowResponseBodyTopDomainsTopDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTopDomainsByFlowResponseBodyTopDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTopDomainsByFlowResponseBodyTopDomains& obj) { 
      DARABONBA_PTR_TO_JSON(TopDomain, topDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTopDomainsByFlowResponseBodyTopDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(TopDomain, topDomain_);
    };
    DescribeVodTopDomainsByFlowResponseBodyTopDomains() = default ;
    DescribeVodTopDomainsByFlowResponseBodyTopDomains(const DescribeVodTopDomainsByFlowResponseBodyTopDomains &) = default ;
    DescribeVodTopDomainsByFlowResponseBodyTopDomains(DescribeVodTopDomainsByFlowResponseBodyTopDomains &&) = default ;
    DescribeVodTopDomainsByFlowResponseBodyTopDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTopDomainsByFlowResponseBodyTopDomains() = default ;
    DescribeVodTopDomainsByFlowResponseBodyTopDomains& operator=(const DescribeVodTopDomainsByFlowResponseBodyTopDomains &) = default ;
    DescribeVodTopDomainsByFlowResponseBodyTopDomains& operator=(DescribeVodTopDomainsByFlowResponseBodyTopDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->topDomain_ != nullptr; };
    // topDomain Field Functions 
    bool hasTopDomain() const { return this->topDomain_ != nullptr;};
    void deleteTopDomain() { this->topDomain_ = nullptr;};
    inline const vector<Models::DescribeVodTopDomainsByFlowResponseBodyTopDomainsTopDomain> & topDomain() const { DARABONBA_PTR_GET_CONST(topDomain_, vector<Models::DescribeVodTopDomainsByFlowResponseBodyTopDomainsTopDomain>) };
    inline vector<Models::DescribeVodTopDomainsByFlowResponseBodyTopDomainsTopDomain> topDomain() { DARABONBA_PTR_GET(topDomain_, vector<Models::DescribeVodTopDomainsByFlowResponseBodyTopDomainsTopDomain>) };
    inline DescribeVodTopDomainsByFlowResponseBodyTopDomains& setTopDomain(const vector<Models::DescribeVodTopDomainsByFlowResponseBodyTopDomainsTopDomain> & topDomain) { DARABONBA_PTR_SET_VALUE(topDomain_, topDomain) };
    inline DescribeVodTopDomainsByFlowResponseBodyTopDomains& setTopDomain(vector<Models::DescribeVodTopDomainsByFlowResponseBodyTopDomainsTopDomain> && topDomain) { DARABONBA_PTR_SET_RVALUE(topDomain_, topDomain) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodTopDomainsByFlowResponseBodyTopDomainsTopDomain>> topDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
