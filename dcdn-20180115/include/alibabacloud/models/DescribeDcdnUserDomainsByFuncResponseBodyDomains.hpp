// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserDomainsByFuncResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserDomainsByFuncResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(PageData, pageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserDomainsByFuncResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(PageData, pageData_);
    };
    DescribeDcdnUserDomainsByFuncResponseBodyDomains() = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomains(const DescribeDcdnUserDomainsByFuncResponseBodyDomains &) = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomains(DescribeDcdnUserDomainsByFuncResponseBodyDomains &&) = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserDomainsByFuncResponseBodyDomains() = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomains& operator=(const DescribeDcdnUserDomainsByFuncResponseBodyDomains &) = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomains& operator=(DescribeDcdnUserDomainsByFuncResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageData_ != nullptr; };
    // pageData Field Functions 
    bool hasPageData() const { return this->pageData_ != nullptr;};
    void deletePageData() { this->pageData_ = nullptr;};
    inline const vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData> & pageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData>) };
    inline vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData> pageData() { DARABONBA_PTR_GET(pageData_, vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData>) };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomains& setPageData(const vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomains& setPageData(vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData>> pageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
