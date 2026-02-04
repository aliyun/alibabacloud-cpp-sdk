// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Subscribe, subscribe_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Subscribe, subscribe_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDcdnWafGroupResponseBody() = default ;
    DescribeDcdnWafGroupResponseBody(const DescribeDcdnWafGroupResponseBody &) = default ;
    DescribeDcdnWafGroupResponseBody(DescribeDcdnWafGroupResponseBody &&) = default ;
    DescribeDcdnWafGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafGroupResponseBody() = default ;
    DescribeDcdnWafGroupResponseBody& operator=(const DescribeDcdnWafGroupResponseBody &) = default ;
    DescribeDcdnWafGroupResponseBody& operator=(DescribeDcdnWafGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
        DARABONBA_PTR_TO_JSON(CveId, cveId_);
        DARABONBA_PTR_TO_JSON(CveUrl, cveUrl_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProtectionType, protectionType_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
        DARABONBA_PTR_FROM_JSON(CveId, cveId_);
        DARABONBA_PTR_FROM_JSON(CveUrl, cveUrl_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProtectionType, protectionType_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationType_ == nullptr
        && this->cveId_ == nullptr && this->cveUrl_ == nullptr && this->description_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->protectionType_ == nullptr && this->riskLevel_ == nullptr; };
      // applicationType Field Functions 
      bool hasApplicationType() const { return this->applicationType_ != nullptr;};
      void deleteApplicationType() { this->applicationType_ = nullptr;};
      inline int32_t getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, 0) };
      inline Rules& setApplicationType(int32_t applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


      // cveId Field Functions 
      bool hasCveId() const { return this->cveId_ != nullptr;};
      void deleteCveId() { this->cveId_ = nullptr;};
      inline string getCveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
      inline Rules& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


      // cveUrl Field Functions 
      bool hasCveUrl() const { return this->cveUrl_ != nullptr;};
      void deleteCveUrl() { this->cveUrl_ = nullptr;};
      inline string getCveUrl() const { DARABONBA_PTR_GET_DEFAULT(cveUrl_, "") };
      inline Rules& setCveUrl(string cveUrl) { DARABONBA_PTR_SET_VALUE(cveUrl_, cveUrl) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Rules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Rules& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Rules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protectionType Field Functions 
      bool hasProtectionType() const { return this->protectionType_ != nullptr;};
      void deleteProtectionType() { this->protectionType_ = nullptr;};
      inline int32_t getProtectionType() const { DARABONBA_PTR_GET_DEFAULT(protectionType_, 0) };
      inline Rules& setProtectionType(int32_t protectionType) { DARABONBA_PTR_SET_VALUE(protectionType_, protectionType) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
      inline Rules& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    protected:
      // The type of the application. Valid values:
      // 
      // *   **0**: Common
      // *   **1**: WordPress
      // *   **2**: DedeCMS
      // *   **3**: Discuz
      // *   **4**: PHP CMS
      // *   **5**: ECShop
      // *   **6**: ShopEX
      // *   **7**: Drupal
      // *   **8**: Joomla
      // *   **9**: MetInfo
      // *   **10**: Struts2
      // *   **11**: Spring Boot
      // *   **12**: JBoss
      // *   **13**: WebLogic
      // *   **14**: WebSphere
      // *   **15**: Tomcat
      // *   **16**: Elastic Search
      // *   **18**: ThinkPHP
      // *   **19**: Fastjson
      // *   **20**: ImageMagick
      // *   **21**: PHPWind
      // *   **22**: phpMyAdmin
      // *   **23**: Resin
      // *   **24**: IIS
      // *   **99**: Others
      shared_ptr<int32_t> applicationType_ {};
      // The Common Vulnerabilities and Exposures (CVE) ID of the related vulnerability.
      shared_ptr<string> cveId_ {};
      // The CVE link.
      shared_ptr<string> cveUrl_ {};
      // The description of the WAF rule.
      shared_ptr<string> description_ {};
      // The time when the rule was modified.
      shared_ptr<string> gmtModified_ {};
      // The ID of the custom WAF rule.
      shared_ptr<int64_t> id_ {};
      // The name of the WAF rule.
      shared_ptr<string> name_ {};
      // Protection type Valid values:
      // 
      // *   **11**: SQL injection
      // *   **12**: cross-site scripting (XSS)
      // *   **13**: code execution
      // *   **14**: carriage return line feeds (CRLF)
      // *   **15**: local file inclusion
      // *   **16**: remote file inclusion
      // *   **17**: webshells
      // *   **19**: cross-site request forgery
      // *   **20**: others
      // *   **21**: SEMA
      shared_ptr<int32_t> protectionType_ {};
      // The risk level of the resources that do not comply with the managed rule. Valid values:
      // 
      // *   **1**: high risk
      // *   **2**: medium risk
      // *   **3**: low risk
      shared_ptr<int32_t> riskLevel_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->rules_ == nullptr
        && this->subscribe_ == nullptr && this->templateId_ == nullptr && this->totalCount_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDcdnWafGroupResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDcdnWafGroupResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDcdnWafGroupResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDcdnWafGroupResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeDcdnWafGroupResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeDcdnWafGroupResponseBody::Rules>) };
    inline vector<DescribeDcdnWafGroupResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<DescribeDcdnWafGroupResponseBody::Rules>) };
    inline DescribeDcdnWafGroupResponseBody& setRules(const vector<DescribeDcdnWafGroupResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeDcdnWafGroupResponseBody& setRules(vector<DescribeDcdnWafGroupResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // subscribe Field Functions 
    bool hasSubscribe() const { return this->subscribe_ != nullptr;};
    void deleteSubscribe() { this->subscribe_ = nullptr;};
    inline string getSubscribe() const { DARABONBA_PTR_GET_DEFAULT(subscribe_, "") };
    inline DescribeDcdnWafGroupResponseBody& setSubscribe(string subscribe) { DARABONBA_PTR_SET_VALUE(subscribe_, subscribe) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeDcdnWafGroupResponseBody& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDcdnWafGroupResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the custom WAF rule group.
    shared_ptr<int64_t> id_ {};
    // The name of the WAF rule group.
    shared_ptr<string> name_ {};
    // The page number of the page returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The configurations of the rule.
    shared_ptr<vector<DescribeDcdnWafGroupResponseBody::Rules>> rules_ {};
    // Indicates whether to enable subscription. Valid values:
    // 
    // *   **on:**
    // *   **off**
    shared_ptr<string> subscribe_ {};
    // The ID of the template.
    shared_ptr<int64_t> templateId_ {};
    // The total number of rules that are filtered out.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
