// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDELETEDDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDELETEDDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnDeletedDomainsResponseBodyDomainsPageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDeletedDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDeletedDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(PageData, pageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDeletedDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(PageData, pageData_);
    };
    DescribeCdnDeletedDomainsResponseBodyDomains() = default ;
    DescribeCdnDeletedDomainsResponseBodyDomains(const DescribeCdnDeletedDomainsResponseBodyDomains &) = default ;
    DescribeCdnDeletedDomainsResponseBodyDomains(DescribeCdnDeletedDomainsResponseBodyDomains &&) = default ;
    DescribeCdnDeletedDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDeletedDomainsResponseBodyDomains() = default ;
    DescribeCdnDeletedDomainsResponseBodyDomains& operator=(const DescribeCdnDeletedDomainsResponseBodyDomains &) = default ;
    DescribeCdnDeletedDomainsResponseBodyDomains& operator=(DescribeCdnDeletedDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageData_ == nullptr; };
    // pageData Field Functions 
    bool hasPageData() const { return this->pageData_ != nullptr;};
    void deletePageData() { this->pageData_ = nullptr;};
    inline const vector<Models::DescribeCdnDeletedDomainsResponseBodyDomainsPageData> & pageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Models::DescribeCdnDeletedDomainsResponseBodyDomainsPageData>) };
    inline vector<Models::DescribeCdnDeletedDomainsResponseBodyDomainsPageData> pageData() { DARABONBA_PTR_GET(pageData_, vector<Models::DescribeCdnDeletedDomainsResponseBodyDomainsPageData>) };
    inline DescribeCdnDeletedDomainsResponseBodyDomains& setPageData(const vector<Models::DescribeCdnDeletedDomainsResponseBodyDomainsPageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
    inline DescribeCdnDeletedDomainsResponseBodyDomains& setPageData(vector<Models::DescribeCdnDeletedDomainsResponseBodyDomainsPageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnDeletedDomainsResponseBodyDomainsPageData>> pageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
