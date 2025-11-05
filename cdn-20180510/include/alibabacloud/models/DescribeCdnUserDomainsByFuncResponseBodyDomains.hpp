// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserDomainsByFuncResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserDomainsByFuncResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(PageData, pageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserDomainsByFuncResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(PageData, pageData_);
    };
    DescribeCdnUserDomainsByFuncResponseBodyDomains() = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomains(const DescribeCdnUserDomainsByFuncResponseBodyDomains &) = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomains(DescribeCdnUserDomainsByFuncResponseBodyDomains &&) = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserDomainsByFuncResponseBodyDomains() = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomains& operator=(const DescribeCdnUserDomainsByFuncResponseBodyDomains &) = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomains& operator=(DescribeCdnUserDomainsByFuncResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageData_ == nullptr; };
    // pageData Field Functions 
    bool hasPageData() const { return this->pageData_ != nullptr;};
    void deletePageData() { this->pageData_ = nullptr;};
    inline const vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData> & pageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData>) };
    inline vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData> pageData() { DARABONBA_PTR_GET(pageData_, vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData>) };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomains& setPageData(const vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomains& setPageData(vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData>> pageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
