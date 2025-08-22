// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNIPAUSERDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNIPAUSERDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnIpaUserDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnIpaUserDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(PageData, pageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnIpaUserDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(PageData, pageData_);
    };
    DescribeDcdnIpaUserDomainsResponseBodyDomains() = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomains(const DescribeDcdnIpaUserDomainsResponseBodyDomains &) = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomains(DescribeDcdnIpaUserDomainsResponseBodyDomains &&) = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnIpaUserDomainsResponseBodyDomains() = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomains& operator=(const DescribeDcdnIpaUserDomainsResponseBodyDomains &) = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomains& operator=(DescribeDcdnIpaUserDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageData_ != nullptr; };
    // pageData Field Functions 
    bool hasPageData() const { return this->pageData_ != nullptr;};
    void deletePageData() { this->pageData_ = nullptr;};
    inline const vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData> & pageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData>) };
    inline vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData> pageData() { DARABONBA_PTR_GET(pageData_, vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData>) };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomains& setPageData(const vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomains& setPageData(vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData>> pageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
