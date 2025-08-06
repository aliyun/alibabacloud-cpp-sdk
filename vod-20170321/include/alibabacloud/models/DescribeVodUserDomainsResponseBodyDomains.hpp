// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodUserDomainsResponseBodyDomainsPageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(PageData, pageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(PageData, pageData_);
    };
    DescribeVodUserDomainsResponseBodyDomains() = default ;
    DescribeVodUserDomainsResponseBodyDomains(const DescribeVodUserDomainsResponseBodyDomains &) = default ;
    DescribeVodUserDomainsResponseBodyDomains(DescribeVodUserDomainsResponseBodyDomains &&) = default ;
    DescribeVodUserDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserDomainsResponseBodyDomains() = default ;
    DescribeVodUserDomainsResponseBodyDomains& operator=(const DescribeVodUserDomainsResponseBodyDomains &) = default ;
    DescribeVodUserDomainsResponseBodyDomains& operator=(DescribeVodUserDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageData_ != nullptr; };
    // pageData Field Functions 
    bool hasPageData() const { return this->pageData_ != nullptr;};
    void deletePageData() { this->pageData_ = nullptr;};
    inline const vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageData> & pageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageData>) };
    inline vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageData> pageData() { DARABONBA_PTR_GET(pageData_, vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageData>) };
    inline DescribeVodUserDomainsResponseBodyDomains& setPageData(const vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
    inline DescribeVodUserDomainsResponseBodyDomains& setPageData(vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageData>> pageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
