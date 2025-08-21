// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCACHECONFIGSRESPONSEBODYDOMAINCACHECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCACHECONFIGSRESPONSEBODYDOMAINCACHECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCacheConfigsResponseBodyDomainCacheConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCacheConfigsResponseBodyDomainCacheConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(CustomRules, customRules_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCacheConfigsResponseBodyDomainCacheConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomRules, customRules_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    DescribeWebCacheConfigsResponseBodyDomainCacheConfigs() = default ;
    DescribeWebCacheConfigsResponseBodyDomainCacheConfigs(const DescribeWebCacheConfigsResponseBodyDomainCacheConfigs &) = default ;
    DescribeWebCacheConfigsResponseBodyDomainCacheConfigs(DescribeWebCacheConfigsResponseBodyDomainCacheConfigs &&) = default ;
    DescribeWebCacheConfigsResponseBodyDomainCacheConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCacheConfigsResponseBodyDomainCacheConfigs() = default ;
    DescribeWebCacheConfigsResponseBodyDomainCacheConfigs& operator=(const DescribeWebCacheConfigsResponseBodyDomainCacheConfigs &) = default ;
    DescribeWebCacheConfigsResponseBodyDomainCacheConfigs& operator=(DescribeWebCacheConfigsResponseBodyDomainCacheConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customRules_ != nullptr
        && this->domain_ != nullptr && this->enable_ != nullptr && this->mode_ != nullptr; };
    // customRules Field Functions 
    bool hasCustomRules() const { return this->customRules_ != nullptr;};
    void deleteCustomRules() { this->customRules_ = nullptr;};
    inline const vector<Models::DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules> & customRules() const { DARABONBA_PTR_GET_CONST(customRules_, vector<Models::DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules>) };
    inline vector<Models::DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules> customRules() { DARABONBA_PTR_GET(customRules_, vector<Models::DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules>) };
    inline DescribeWebCacheConfigsResponseBodyDomainCacheConfigs& setCustomRules(const vector<Models::DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules> & customRules) { DARABONBA_PTR_SET_VALUE(customRules_, customRules) };
    inline DescribeWebCacheConfigsResponseBodyDomainCacheConfigs& setCustomRules(vector<Models::DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules> && customRules) { DARABONBA_PTR_SET_RVALUE(customRules_, customRules) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeWebCacheConfigsResponseBodyDomainCacheConfigs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline DescribeWebCacheConfigsResponseBodyDomainCacheConfigs& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeWebCacheConfigsResponseBodyDomainCacheConfigs& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    // An array that consists of custom caching rules.
    std::shared_ptr<vector<Models::DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules>> customRules_ = nullptr;
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The status of the Static Page Caching policy. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int32_t> enable_ = nullptr;
    // The cache mode. Valid values:
    // 
    // *   **standard**: The standard cache mode is used.
    // *   **aggressive**: The enhanced cache mode is used.
    // *   **bypass**: No data is cached.
    std::shared_ptr<string> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
