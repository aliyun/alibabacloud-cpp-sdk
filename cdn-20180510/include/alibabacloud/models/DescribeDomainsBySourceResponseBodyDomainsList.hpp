// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODYDOMAINSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODYDOMAINSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainsBySourceResponseBodyDomainsListDomainsData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainsBySourceResponseBodyDomainsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsBySourceResponseBodyDomainsList& obj) { 
      DARABONBA_PTR_TO_JSON(DomainsData, domainsData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsBySourceResponseBodyDomainsList& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainsData, domainsData_);
    };
    DescribeDomainsBySourceResponseBodyDomainsList() = default ;
    DescribeDomainsBySourceResponseBodyDomainsList(const DescribeDomainsBySourceResponseBodyDomainsList &) = default ;
    DescribeDomainsBySourceResponseBodyDomainsList(DescribeDomainsBySourceResponseBodyDomainsList &&) = default ;
    DescribeDomainsBySourceResponseBodyDomainsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsBySourceResponseBodyDomainsList() = default ;
    DescribeDomainsBySourceResponseBodyDomainsList& operator=(const DescribeDomainsBySourceResponseBodyDomainsList &) = default ;
    DescribeDomainsBySourceResponseBodyDomainsList& operator=(DescribeDomainsBySourceResponseBodyDomainsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainsData_ == nullptr; };
    // domainsData Field Functions 
    bool hasDomainsData() const { return this->domainsData_ != nullptr;};
    void deleteDomainsData() { this->domainsData_ = nullptr;};
    inline const vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsData> & domainsData() const { DARABONBA_PTR_GET_CONST(domainsData_, vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsData>) };
    inline vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsData> domainsData() { DARABONBA_PTR_GET(domainsData_, vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsData>) };
    inline DescribeDomainsBySourceResponseBodyDomainsList& setDomainsData(const vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsData> & domainsData) { DARABONBA_PTR_SET_VALUE(domainsData_, domainsData) };
    inline DescribeDomainsBySourceResponseBodyDomainsList& setDomainsData(vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsData> && domainsData) { DARABONBA_PTR_SET_RVALUE(domainsData_, domainsData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsData>> domainsData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
