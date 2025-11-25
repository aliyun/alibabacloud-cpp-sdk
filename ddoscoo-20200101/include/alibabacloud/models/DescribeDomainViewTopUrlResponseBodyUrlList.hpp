// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPURLRESPONSEBODYURLLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPURLRESPONSEBODYURLLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainViewTopUrlResponseBodyUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainViewTopUrlResponseBodyUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainViewTopUrlResponseBodyUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeDomainViewTopUrlResponseBodyUrlList() = default ;
    DescribeDomainViewTopUrlResponseBodyUrlList(const DescribeDomainViewTopUrlResponseBodyUrlList &) = default ;
    DescribeDomainViewTopUrlResponseBodyUrlList(DescribeDomainViewTopUrlResponseBodyUrlList &&) = default ;
    DescribeDomainViewTopUrlResponseBodyUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainViewTopUrlResponseBodyUrlList() = default ;
    DescribeDomainViewTopUrlResponseBodyUrlList& operator=(const DescribeDomainViewTopUrlResponseBodyUrlList &) = default ;
    DescribeDomainViewTopUrlResponseBodyUrlList& operator=(DescribeDomainViewTopUrlResponseBodyUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->domain_ == nullptr && return this->url_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeDomainViewTopUrlResponseBodyUrlList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainViewTopUrlResponseBodyUrlList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeDomainViewTopUrlResponseBodyUrlList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The total number of requests.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The URL that is Base64-encoded.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
