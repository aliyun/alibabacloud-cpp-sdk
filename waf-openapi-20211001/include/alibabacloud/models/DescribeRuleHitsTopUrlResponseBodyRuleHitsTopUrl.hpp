// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPURLRESPONSEBODYRULEHITSTOPURL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPURLRESPONSEBODYRULEHITSTOPURL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl() = default ;
    DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl(const DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl &) = default ;
    DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl(DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl &&) = default ;
    DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl() = default ;
    DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl& operator=(const DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl &) = default ;
    DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl& operator=(DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl &&) = default ;
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
    inline DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The number of requests that match protection rules.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The request URL.
    // 
    // >  The value is Base64-encoded.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
