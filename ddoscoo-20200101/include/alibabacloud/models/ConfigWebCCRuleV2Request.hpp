// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGWEBCCRULEV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGWEBCCRULEV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigWebCCRuleV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigWebCCRuleV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Expires, expires_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigWebCCRuleV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Expires, expires_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    ConfigWebCCRuleV2Request() = default ;
    ConfigWebCCRuleV2Request(const ConfigWebCCRuleV2Request &) = default ;
    ConfigWebCCRuleV2Request(ConfigWebCCRuleV2Request &&) = default ;
    ConfigWebCCRuleV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigWebCCRuleV2Request() = default ;
    ConfigWebCCRuleV2Request& operator=(const ConfigWebCCRuleV2Request &) = default ;
    ConfigWebCCRuleV2Request& operator=(ConfigWebCCRuleV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->expires_ == nullptr && this->ruleList_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ConfigWebCCRuleV2Request& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // expires Field Functions 
    bool hasExpires() const { return this->expires_ != nullptr;};
    void deleteExpires() { this->expires_ = nullptr;};
    inline int64_t getExpires() const { DARABONBA_PTR_GET_DEFAULT(expires_, 0L) };
    inline ConfigWebCCRuleV2Request& setExpires(int64_t expires) { DARABONBA_PTR_SET_VALUE(expires_, expires) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline string getRuleList() const { DARABONBA_PTR_GET_DEFAULT(ruleList_, "") };
    inline ConfigWebCCRuleV2Request& setRuleList(string ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };


  protected:
    // The domain name of the website service.
    // > The domain name must have a website service forwarding rule configured. You can call [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) to query all domain names.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The validity period of the rule. Unit: seconds. Default value: 0, which indicates that the rule is permanently effective.
    shared_ptr<int64_t> expires_ {};
    // The configuration of the frequency control rule, expressed as a JSON-formatted string with the following structure:
    // - **action**: String type. Required. The matching action. Valid values:
    //     - **block**: Block.
    //     - **challenge**: JavaScript Challenge.
    //     - **watch**: Monitor.
    // - **name**: String type. Required. The rule name.
    // - **condition**: Map type. Required. The matching condition. The structure is as follows:
    // 
    //     > If multiple matching conditions are specified, the conditions are evaluated using the AND logic.
    // 
    //     - **field**: String type. Required. The matching field.
    //     - **match_method**: String type. Required. The matching method.
    //  
    //         > For the valid values of **field** and **match_method**, see the supplementary description below the request parameters table.
    // 
    //     - **header_name**: String type. Optional. The name of the custom HTTP header field.
    // 
    //         > This parameter takes effect only when **field** is set to **header**.
    // 
    //     - **content**: String type. Required. The matching content.
    // - **ratelimit**: String type. Required. The frequency control field. You can collect frequency statistics by IP address or custom header. The structure is as follows:
    //   - **interval**: Integer type. Required. The statistical period (seconds).
    //   - **ttl**: Integer type. Required. The action duration (seconds).
    //   - **threshold**: Integer type. Required. The threshold (count).
    //   - **subkey**: String type. Optional. The field name. Set this parameter only when the statistical source is header.
    //   - **target**: String type. Required. The statistical source. Valid values: ip and header.
    // - **status_code**: String type. Optional. The frequency control field. You can collect statistics based on the count or ratio of status codes. The structure is as follows:
    //   - **enabled**: Boolean type. Required. Specifies whether to enable status code statistics.
    //   - **code**: Integer type. Required. Enabling status code. Valid values: **100** to **599**.
    //   - **use_ratio**: Boolean type. Required. Specifies whether to use the ratio. If set to true, the ratio is used.
    //   - **ratio_threshold**: Integer type. Optional. The ratio at which enabling status code appears. When the ratio is used, the action is triggered only when the corresponding status code reaches **ratio_threshold**. Valid values: **1** to **100**.
    //   - **count_threshold**: Integer type. Optional. The count at which enabling status code appears. When the ratio is not used, the action is triggered only when the corresponding status code reaches **count_threshold**. Valid values: **2** to **50000**.
    // - **statistics**: String type. Optional. The deduplication statistics. This parameter can be left empty, which indicates that deduplication is not performed. The structure is as follows:
    //   - **mode**: String type. Required. Specifies whether to enable deduplication statistics. Valid values:
    //     - **count**: deduplication disabled
    //     - **distinct**: deduplication enabled
    //   - **field**: String type. Required. The statistical source for deduplication. Valid values: ip, header, and uri.
    //   - **header_name**: String type. Optional. The field name. Set this parameter only when the statistical source is header.
    // 
    // This parameter is required.
    shared_ptr<string> ruleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
