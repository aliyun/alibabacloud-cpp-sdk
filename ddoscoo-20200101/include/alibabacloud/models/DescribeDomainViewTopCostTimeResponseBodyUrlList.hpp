// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPCOSTTIMERESPONSEBODYURLLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPCOSTTIMERESPONSEBODYURLLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainViewTopCostTimeResponseBodyUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainViewTopCostTimeResponseBodyUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(CostTime, costTime_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainViewTopCostTimeResponseBodyUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeDomainViewTopCostTimeResponseBodyUrlList() = default ;
    DescribeDomainViewTopCostTimeResponseBodyUrlList(const DescribeDomainViewTopCostTimeResponseBodyUrlList &) = default ;
    DescribeDomainViewTopCostTimeResponseBodyUrlList(DescribeDomainViewTopCostTimeResponseBodyUrlList &&) = default ;
    DescribeDomainViewTopCostTimeResponseBodyUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainViewTopCostTimeResponseBodyUrlList() = default ;
    DescribeDomainViewTopCostTimeResponseBodyUrlList& operator=(const DescribeDomainViewTopCostTimeResponseBodyUrlList &) = default ;
    DescribeDomainViewTopCostTimeResponseBodyUrlList& operator=(DescribeDomainViewTopCostTimeResponseBodyUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->costTime_ == nullptr
        && return this->domain_ == nullptr && return this->url_ == nullptr; };
    // costTime Field Functions 
    bool hasCostTime() const { return this->costTime_ != nullptr;};
    void deleteCostTime() { this->costTime_ = nullptr;};
    inline float costTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, 0.0) };
    inline DescribeDomainViewTopCostTimeResponseBodyUrlList& setCostTime(float costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainViewTopCostTimeResponseBodyUrlList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeDomainViewTopCostTimeResponseBodyUrlList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The response duration. Unit: milliseconds.
    std::shared_ptr<float> costTime_ = nullptr;
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The URL that is Base64-encoded.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
