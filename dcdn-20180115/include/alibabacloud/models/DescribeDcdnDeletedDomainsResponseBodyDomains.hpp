// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDELETEDDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDELETEDDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDeletedDomainsResponseBodyDomainsPageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDeletedDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDeletedDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(PageData, pageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDeletedDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(PageData, pageData_);
    };
    DescribeDcdnDeletedDomainsResponseBodyDomains() = default ;
    DescribeDcdnDeletedDomainsResponseBodyDomains(const DescribeDcdnDeletedDomainsResponseBodyDomains &) = default ;
    DescribeDcdnDeletedDomainsResponseBodyDomains(DescribeDcdnDeletedDomainsResponseBodyDomains &&) = default ;
    DescribeDcdnDeletedDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDeletedDomainsResponseBodyDomains() = default ;
    DescribeDcdnDeletedDomainsResponseBodyDomains& operator=(const DescribeDcdnDeletedDomainsResponseBodyDomains &) = default ;
    DescribeDcdnDeletedDomainsResponseBodyDomains& operator=(DescribeDcdnDeletedDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageData_ != nullptr; };
    // pageData Field Functions 
    bool hasPageData() const { return this->pageData_ != nullptr;};
    void deletePageData() { this->pageData_ = nullptr;};
    inline const vector<Models::DescribeDcdnDeletedDomainsResponseBodyDomainsPageData> & pageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Models::DescribeDcdnDeletedDomainsResponseBodyDomainsPageData>) };
    inline vector<Models::DescribeDcdnDeletedDomainsResponseBodyDomainsPageData> pageData() { DARABONBA_PTR_GET(pageData_, vector<Models::DescribeDcdnDeletedDomainsResponseBodyDomainsPageData>) };
    inline DescribeDcdnDeletedDomainsResponseBodyDomains& setPageData(const vector<Models::DescribeDcdnDeletedDomainsResponseBodyDomainsPageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
    inline DescribeDcdnDeletedDomainsResponseBodyDomains& setPageData(vector<Models::DescribeDcdnDeletedDomainsResponseBodyDomainsPageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDeletedDomainsResponseBodyDomainsPageData>> pageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
