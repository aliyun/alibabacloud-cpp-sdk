// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCACHECONFIGSRESPONSEBODYDOMAINCACHECONFIGSCUSTOMRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCACHECONFIGSRESPONSEBODYDOMAINCACHECONFIGSCUSTOMRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules& obj) { 
      DARABONBA_PTR_TO_JSON(CacheTtl, cacheTtl_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheTtl, cacheTtl_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules() = default ;
    DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules(const DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules &) = default ;
    DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules(DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules &&) = default ;
    DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules() = default ;
    DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules& operator=(const DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules &) = default ;
    DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules& operator=(DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheTtl_ == nullptr
        && return this->mode_ == nullptr && return this->name_ == nullptr && return this->uri_ == nullptr; };
    // cacheTtl Field Functions 
    bool hasCacheTtl() const { return this->cacheTtl_ != nullptr;};
    void deleteCacheTtl() { this->cacheTtl_ = nullptr;};
    inline int64_t cacheTtl() const { DARABONBA_PTR_GET_DEFAULT(cacheTtl_, 0L) };
    inline DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules& setCacheTtl(int64_t cacheTtl) { DARABONBA_PTR_SET_VALUE(cacheTtl_, cacheTtl) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline DescribeWebCacheConfigsResponseBodyDomainCacheConfigsCustomRules& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // The expiration time of the page cache. Unit: seconds.
    std::shared_ptr<int64_t> cacheTtl_ = nullptr;
    // The cache mode. Valid values:
    // 
    // *   **standard**: The standard cache mode is used.
    // *   **aggressive**: The enhanced cache mode is used.
    // *   **bypass**: No data is cached.
    std::shared_ptr<string> mode_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> name_ = nullptr;
    // The path to the cached page.
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
