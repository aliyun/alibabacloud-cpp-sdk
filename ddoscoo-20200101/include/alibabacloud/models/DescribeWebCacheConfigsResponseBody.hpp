// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCACHECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCACHECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCacheConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCacheConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainCacheConfigs, domainCacheConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCacheConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainCacheConfigs, domainCacheConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWebCacheConfigsResponseBody() = default ;
    DescribeWebCacheConfigsResponseBody(const DescribeWebCacheConfigsResponseBody &) = default ;
    DescribeWebCacheConfigsResponseBody(DescribeWebCacheConfigsResponseBody &&) = default ;
    DescribeWebCacheConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCacheConfigsResponseBody() = default ;
    DescribeWebCacheConfigsResponseBody& operator=(const DescribeWebCacheConfigsResponseBody &) = default ;
    DescribeWebCacheConfigsResponseBody& operator=(DescribeWebCacheConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainCacheConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainCacheConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(CustomRules, customRules_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
      };
      friend void from_json(const Darabonba::Json& j, DomainCacheConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomRules, customRules_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
      };
      DomainCacheConfigs() = default ;
      DomainCacheConfigs(const DomainCacheConfigs &) = default ;
      DomainCacheConfigs(DomainCacheConfigs &&) = default ;
      DomainCacheConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainCacheConfigs() = default ;
      DomainCacheConfigs& operator=(const DomainCacheConfigs &) = default ;
      DomainCacheConfigs& operator=(DomainCacheConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomRules& obj) { 
          DARABONBA_PTR_TO_JSON(CacheTtl, cacheTtl_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Uri, uri_);
        };
        friend void from_json(const Darabonba::Json& j, CustomRules& obj) { 
          DARABONBA_PTR_FROM_JSON(CacheTtl, cacheTtl_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Uri, uri_);
        };
        CustomRules() = default ;
        CustomRules(const CustomRules &) = default ;
        CustomRules(CustomRules &&) = default ;
        CustomRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomRules() = default ;
        CustomRules& operator=(const CustomRules &) = default ;
        CustomRules& operator=(CustomRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cacheTtl_ == nullptr
        && this->mode_ == nullptr && this->name_ == nullptr && this->uri_ == nullptr; };
        // cacheTtl Field Functions 
        bool hasCacheTtl() const { return this->cacheTtl_ != nullptr;};
        void deleteCacheTtl() { this->cacheTtl_ = nullptr;};
        inline int64_t getCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(cacheTtl_, 0L) };
        inline CustomRules& setCacheTtl(int64_t cacheTtl) { DARABONBA_PTR_SET_VALUE(cacheTtl_, cacheTtl) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline CustomRules& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CustomRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // uri Field Functions 
        bool hasUri() const { return this->uri_ != nullptr;};
        void deleteUri() { this->uri_ = nullptr;};
        inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
        inline CustomRules& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


      protected:
        // The expiration time of the page cache. Unit: seconds.
        shared_ptr<int64_t> cacheTtl_ {};
        // The cache mode. Valid values:
        // 
        // *   **standard**: The standard cache mode is used.
        // *   **aggressive**: The enhanced cache mode is used.
        // *   **bypass**: No data is cached.
        shared_ptr<string> mode_ {};
        // The name of the rule.
        shared_ptr<string> name_ {};
        // The path to the cached page.
        shared_ptr<string> uri_ {};
      };

      virtual bool empty() const override { return this->customRules_ == nullptr
        && this->domain_ == nullptr && this->enable_ == nullptr && this->mode_ == nullptr; };
      // customRules Field Functions 
      bool hasCustomRules() const { return this->customRules_ != nullptr;};
      void deleteCustomRules() { this->customRules_ = nullptr;};
      inline const vector<DomainCacheConfigs::CustomRules> & getCustomRules() const { DARABONBA_PTR_GET_CONST(customRules_, vector<DomainCacheConfigs::CustomRules>) };
      inline vector<DomainCacheConfigs::CustomRules> getCustomRules() { DARABONBA_PTR_GET(customRules_, vector<DomainCacheConfigs::CustomRules>) };
      inline DomainCacheConfigs& setCustomRules(const vector<DomainCacheConfigs::CustomRules> & customRules) { DARABONBA_PTR_SET_VALUE(customRules_, customRules) };
      inline DomainCacheConfigs& setCustomRules(vector<DomainCacheConfigs::CustomRules> && customRules) { DARABONBA_PTR_SET_RVALUE(customRules_, customRules) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainCacheConfigs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
      inline DomainCacheConfigs& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline DomainCacheConfigs& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    protected:
      // An array that consists of custom caching rules.
      shared_ptr<vector<DomainCacheConfigs::CustomRules>> customRules_ {};
      // The domain name of the website.
      shared_ptr<string> domain_ {};
      // The status of the Static Page Caching policy. Valid values:
      // 
      // *   **1**: enabled
      // *   **0**: disabled
      shared_ptr<int32_t> enable_ {};
      // The cache mode. Valid values:
      // 
      // *   **standard**: The standard cache mode is used.
      // *   **aggressive**: The enhanced cache mode is used.
      // *   **bypass**: No data is cached.
      shared_ptr<string> mode_ {};
    };

    virtual bool empty() const override { return this->domainCacheConfigs_ == nullptr
        && this->requestId_ == nullptr; };
    // domainCacheConfigs Field Functions 
    bool hasDomainCacheConfigs() const { return this->domainCacheConfigs_ != nullptr;};
    void deleteDomainCacheConfigs() { this->domainCacheConfigs_ = nullptr;};
    inline const vector<DescribeWebCacheConfigsResponseBody::DomainCacheConfigs> & getDomainCacheConfigs() const { DARABONBA_PTR_GET_CONST(domainCacheConfigs_, vector<DescribeWebCacheConfigsResponseBody::DomainCacheConfigs>) };
    inline vector<DescribeWebCacheConfigsResponseBody::DomainCacheConfigs> getDomainCacheConfigs() { DARABONBA_PTR_GET(domainCacheConfigs_, vector<DescribeWebCacheConfigsResponseBody::DomainCacheConfigs>) };
    inline DescribeWebCacheConfigsResponseBody& setDomainCacheConfigs(const vector<DescribeWebCacheConfigsResponseBody::DomainCacheConfigs> & domainCacheConfigs) { DARABONBA_PTR_SET_VALUE(domainCacheConfigs_, domainCacheConfigs) };
    inline DescribeWebCacheConfigsResponseBody& setDomainCacheConfigs(vector<DescribeWebCacheConfigsResponseBody::DomainCacheConfigs> && domainCacheConfigs) { DARABONBA_PTR_SET_RVALUE(domainCacheConfigs_, domainCacheConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebCacheConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of Static Page Caching configurations.
    shared_ptr<vector<DescribeWebCacheConfigsResponseBody::DomainCacheConfigs>> domainCacheConfigs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
