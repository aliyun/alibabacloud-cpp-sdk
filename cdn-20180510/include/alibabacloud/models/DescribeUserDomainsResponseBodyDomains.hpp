// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserDomainsResponseBodyDomainsPageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(PageData, pageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(PageData, pageData_);
    };
    DescribeUserDomainsResponseBodyDomains() = default ;
    DescribeUserDomainsResponseBodyDomains(const DescribeUserDomainsResponseBodyDomains &) = default ;
    DescribeUserDomainsResponseBodyDomains(DescribeUserDomainsResponseBodyDomains &&) = default ;
    DescribeUserDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserDomainsResponseBodyDomains() = default ;
    DescribeUserDomainsResponseBodyDomains& operator=(const DescribeUserDomainsResponseBodyDomains &) = default ;
    DescribeUserDomainsResponseBodyDomains& operator=(DescribeUserDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageData_ != nullptr; };
    // pageData Field Functions 
    bool hasPageData() const { return this->pageData_ != nullptr;};
    void deletePageData() { this->pageData_ = nullptr;};
    inline const vector<Models::DescribeUserDomainsResponseBodyDomainsPageData> & pageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Models::DescribeUserDomainsResponseBodyDomainsPageData>) };
    inline vector<Models::DescribeUserDomainsResponseBodyDomainsPageData> pageData() { DARABONBA_PTR_GET(pageData_, vector<Models::DescribeUserDomainsResponseBodyDomainsPageData>) };
    inline DescribeUserDomainsResponseBodyDomains& setPageData(const vector<Models::DescribeUserDomainsResponseBodyDomainsPageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
    inline DescribeUserDomainsResponseBodyDomains& setPageData(vector<Models::DescribeUserDomainsResponseBodyDomainsPageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeUserDomainsResponseBodyDomainsPageData>> pageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
