// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGROUPRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGROUPRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafGroupResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafGroupResponseBodyRules& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafGroupResponseBodyRules& obj) { 
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
    DescribeDcdnWafGroupResponseBodyRules() = default ;
    DescribeDcdnWafGroupResponseBodyRules(const DescribeDcdnWafGroupResponseBodyRules &) = default ;
    DescribeDcdnWafGroupResponseBodyRules(DescribeDcdnWafGroupResponseBodyRules &&) = default ;
    DescribeDcdnWafGroupResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafGroupResponseBodyRules() = default ;
    DescribeDcdnWafGroupResponseBodyRules& operator=(const DescribeDcdnWafGroupResponseBodyRules &) = default ;
    DescribeDcdnWafGroupResponseBodyRules& operator=(DescribeDcdnWafGroupResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationType_ != nullptr
        && this->cveId_ != nullptr && this->cveUrl_ != nullptr && this->description_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr
        && this->name_ != nullptr && this->protectionType_ != nullptr && this->riskLevel_ != nullptr; };
    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline int32_t applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, 0) };
    inline DescribeDcdnWafGroupResponseBodyRules& setApplicationType(int32_t applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // cveId Field Functions 
    bool hasCveId() const { return this->cveId_ != nullptr;};
    void deleteCveId() { this->cveId_ = nullptr;};
    inline string cveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
    inline DescribeDcdnWafGroupResponseBodyRules& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


    // cveUrl Field Functions 
    bool hasCveUrl() const { return this->cveUrl_ != nullptr;};
    void deleteCveUrl() { this->cveUrl_ = nullptr;};
    inline string cveUrl() const { DARABONBA_PTR_GET_DEFAULT(cveUrl_, "") };
    inline DescribeDcdnWafGroupResponseBodyRules& setCveUrl(string cveUrl) { DARABONBA_PTR_SET_VALUE(cveUrl_, cveUrl) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDcdnWafGroupResponseBodyRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDcdnWafGroupResponseBodyRules& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDcdnWafGroupResponseBodyRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDcdnWafGroupResponseBodyRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protectionType Field Functions 
    bool hasProtectionType() const { return this->protectionType_ != nullptr;};
    void deleteProtectionType() { this->protectionType_ = nullptr;};
    inline int32_t protectionType() const { DARABONBA_PTR_GET_DEFAULT(protectionType_, 0) };
    inline DescribeDcdnWafGroupResponseBodyRules& setProtectionType(int32_t protectionType) { DARABONBA_PTR_SET_VALUE(protectionType_, protectionType) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline DescribeDcdnWafGroupResponseBodyRules& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


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
    std::shared_ptr<int32_t> applicationType_ = nullptr;
    // The Common Vulnerabilities and Exposures (CVE) ID of the related vulnerability.
    std::shared_ptr<string> cveId_ = nullptr;
    // The CVE link.
    std::shared_ptr<string> cveUrl_ = nullptr;
    // The description of the WAF rule.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the rule was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the custom WAF rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the WAF rule.
    std::shared_ptr<string> name_ = nullptr;
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
    std::shared_ptr<int32_t> protectionType_ = nullptr;
    // The risk level of the resources that do not comply with the managed rule. Valid values:
    // 
    // *   **1**: high risk
    // *   **2**: medium risk
    // *   **3**: low risk
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
