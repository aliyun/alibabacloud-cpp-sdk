// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFPOLICYVALIDDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFPOLICYVALIDDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafPolicyValidDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafPolicyValidDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(DomainNameLike, domainNameLike_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafPolicyValidDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(DomainNameLike, domainNameLike_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeDcdnWafPolicyValidDomainsRequest() = default ;
    DescribeDcdnWafPolicyValidDomainsRequest(const DescribeDcdnWafPolicyValidDomainsRequest &) = default ;
    DescribeDcdnWafPolicyValidDomainsRequest(DescribeDcdnWafPolicyValidDomainsRequest &&) = default ;
    DescribeDcdnWafPolicyValidDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafPolicyValidDomainsRequest() = default ;
    DescribeDcdnWafPolicyValidDomainsRequest& operator=(const DescribeDcdnWafPolicyValidDomainsRequest &) = default ;
    DescribeDcdnWafPolicyValidDomainsRequest& operator=(DescribeDcdnWafPolicyValidDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defenseScene_ == nullptr
        && this->domainNameLike_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline DescribeDcdnWafPolicyValidDomainsRequest& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // domainNameLike Field Functions 
    bool hasDomainNameLike() const { return this->domainNameLike_ != nullptr;};
    void deleteDomainNameLike() { this->domainNameLike_ = nullptr;};
    inline string getDomainNameLike() const { DARABONBA_PTR_GET_DEFAULT(domainNameLike_, "") };
    inline DescribeDcdnWafPolicyValidDomainsRequest& setDomainNameLike(string domainNameLike) { DARABONBA_PTR_SET_VALUE(domainNameLike_, domainNameLike) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDcdnWafPolicyValidDomainsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDcdnWafPolicyValidDomainsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The type of the Web Application Firewall (WAF) protection policy. Valid values:
    // 
    // *   waf_group: basic web protection
    // *   custom_acl: custom protection
    // *   whitelist: IP address whitelist
    // *   ip_blacklist: IP address blacklist
    // *   region_block: region blacklist
    // *   bot: bot management
    // 
    // This parameter is required.
    shared_ptr<string> defenseScene_ {};
    // The protected domain name. Fuzzy search is supported.
    shared_ptr<string> domainNameLike_ {};
    // The page number of the returned page. Valid values: **1** to **100000**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of domain names to return on each page. Valid values: an integer from **1** to **500**. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
