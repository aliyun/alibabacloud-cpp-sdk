// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnUserDomainsResponseBodyDomainsPageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(PageData, pageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(PageData, pageData_);
    };
    DescribeDcdnUserDomainsResponseBodyDomains() = default ;
    DescribeDcdnUserDomainsResponseBodyDomains(const DescribeDcdnUserDomainsResponseBodyDomains &) = default ;
    DescribeDcdnUserDomainsResponseBodyDomains(DescribeDcdnUserDomainsResponseBodyDomains &&) = default ;
    DescribeDcdnUserDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserDomainsResponseBodyDomains() = default ;
    DescribeDcdnUserDomainsResponseBodyDomains& operator=(const DescribeDcdnUserDomainsResponseBodyDomains &) = default ;
    DescribeDcdnUserDomainsResponseBodyDomains& operator=(DescribeDcdnUserDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageData_ != nullptr; };
    // pageData Field Functions 
    bool hasPageData() const { return this->pageData_ != nullptr;};
    void deletePageData() { this->pageData_ = nullptr;};
    inline const vector<Models::DescribeDcdnUserDomainsResponseBodyDomainsPageData> & pageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Models::DescribeDcdnUserDomainsResponseBodyDomainsPageData>) };
    inline vector<Models::DescribeDcdnUserDomainsResponseBodyDomainsPageData> pageData() { DARABONBA_PTR_GET(pageData_, vector<Models::DescribeDcdnUserDomainsResponseBodyDomainsPageData>) };
    inline DescribeDcdnUserDomainsResponseBodyDomains& setPageData(const vector<Models::DescribeDcdnUserDomainsResponseBodyDomainsPageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
    inline DescribeDcdnUserDomainsResponseBodyDomains& setPageData(vector<Models::DescribeDcdnUserDomainsResponseBodyDomainsPageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnUserDomainsResponseBodyDomainsPageData>> pageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
