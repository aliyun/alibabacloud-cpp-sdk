// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUSERDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUSERDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUserDomainsResponseBodyDomainsPageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUserDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUserDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(PageData, pageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUserDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(PageData, pageData_);
    };
    DescribeLiveUserDomainsResponseBodyDomains() = default ;
    DescribeLiveUserDomainsResponseBodyDomains(const DescribeLiveUserDomainsResponseBodyDomains &) = default ;
    DescribeLiveUserDomainsResponseBodyDomains(DescribeLiveUserDomainsResponseBodyDomains &&) = default ;
    DescribeLiveUserDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUserDomainsResponseBodyDomains() = default ;
    DescribeLiveUserDomainsResponseBodyDomains& operator=(const DescribeLiveUserDomainsResponseBodyDomains &) = default ;
    DescribeLiveUserDomainsResponseBodyDomains& operator=(DescribeLiveUserDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageData_ == nullptr; };
    // pageData Field Functions 
    bool hasPageData() const { return this->pageData_ != nullptr;};
    void deletePageData() { this->pageData_ = nullptr;};
    inline const vector<Models::DescribeLiveUserDomainsResponseBodyDomainsPageData> & pageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Models::DescribeLiveUserDomainsResponseBodyDomainsPageData>) };
    inline vector<Models::DescribeLiveUserDomainsResponseBodyDomainsPageData> pageData() { DARABONBA_PTR_GET(pageData_, vector<Models::DescribeLiveUserDomainsResponseBodyDomainsPageData>) };
    inline DescribeLiveUserDomainsResponseBodyDomains& setPageData(const vector<Models::DescribeLiveUserDomainsResponseBodyDomainsPageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
    inline DescribeLiveUserDomainsResponseBodyDomains& setPageData(vector<Models::DescribeLiveUserDomainsResponseBodyDomainsPageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUserDomainsResponseBodyDomainsPageData>> pageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
