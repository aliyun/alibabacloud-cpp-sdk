// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWTOPURLRESPONSEBODYRULEHITSTOPURL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWTOPURLRESPONSEBODYRULEHITSTOPURL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFlowTopUrlResponseBodyRuleHitsTopUrl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowTopUrlResponseBodyRuleHitsTopUrl& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowTopUrlResponseBodyRuleHitsTopUrl& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeFlowTopUrlResponseBodyRuleHitsTopUrl() = default ;
    DescribeFlowTopUrlResponseBodyRuleHitsTopUrl(const DescribeFlowTopUrlResponseBodyRuleHitsTopUrl &) = default ;
    DescribeFlowTopUrlResponseBodyRuleHitsTopUrl(DescribeFlowTopUrlResponseBodyRuleHitsTopUrl &&) = default ;
    DescribeFlowTopUrlResponseBodyRuleHitsTopUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowTopUrlResponseBodyRuleHitsTopUrl() = default ;
    DescribeFlowTopUrlResponseBodyRuleHitsTopUrl& operator=(const DescribeFlowTopUrlResponseBodyRuleHitsTopUrl &) = default ;
    DescribeFlowTopUrlResponseBodyRuleHitsTopUrl& operator=(DescribeFlowTopUrlResponseBodyRuleHitsTopUrl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->url_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeFlowTopUrlResponseBodyRuleHitsTopUrl& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeFlowTopUrlResponseBodyRuleHitsTopUrl& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The total number of requests that are initiated by using the URL.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The URL that is used to initiate requests.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
