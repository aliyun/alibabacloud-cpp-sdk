// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESDNSRULECATEGORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESDNSRULECATEGORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class CreateSdnsRuleCategoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSdnsRuleCategoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIpRanges, clientIpRangesShrink_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(LineId, lineId_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Paths, pathsShrink_);
      DARABONBA_PTR_TO_JSON(Rules, rulesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSdnsRuleCategoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIpRanges, clientIpRangesShrink_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(LineId, lineId_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Paths, pathsShrink_);
      DARABONBA_PTR_FROM_JSON(Rules, rulesShrink_);
    };
    CreateSdnsRuleCategoryShrinkRequest() = default ;
    CreateSdnsRuleCategoryShrinkRequest(const CreateSdnsRuleCategoryShrinkRequest &) = default ;
    CreateSdnsRuleCategoryShrinkRequest(CreateSdnsRuleCategoryShrinkRequest &&) = default ;
    CreateSdnsRuleCategoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSdnsRuleCategoryShrinkRequest() = default ;
    CreateSdnsRuleCategoryShrinkRequest& operator=(const CreateSdnsRuleCategoryShrinkRequest &) = default ;
    CreateSdnsRuleCategoryShrinkRequest& operator=(CreateSdnsRuleCategoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIpRangesShrink_ == nullptr
        && this->domainName_ == nullptr && this->enable_ == nullptr && this->lineId_ == nullptr && this->matchType_ == nullptr && this->pathsShrink_ == nullptr
        && this->rulesShrink_ == nullptr; };
    // clientIpRangesShrink Field Functions 
    bool hasClientIpRangesShrink() const { return this->clientIpRangesShrink_ != nullptr;};
    void deleteClientIpRangesShrink() { this->clientIpRangesShrink_ = nullptr;};
    inline string getClientIpRangesShrink() const { DARABONBA_PTR_GET_DEFAULT(clientIpRangesShrink_, "") };
    inline CreateSdnsRuleCategoryShrinkRequest& setClientIpRangesShrink(string clientIpRangesShrink) { DARABONBA_PTR_SET_VALUE(clientIpRangesShrink_, clientIpRangesShrink) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateSdnsRuleCategoryShrinkRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateSdnsRuleCategoryShrinkRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // lineId Field Functions 
    bool hasLineId() const { return this->lineId_ != nullptr;};
    void deleteLineId() { this->lineId_ = nullptr;};
    inline string getLineId() const { DARABONBA_PTR_GET_DEFAULT(lineId_, "") };
    inline CreateSdnsRuleCategoryShrinkRequest& setLineId(string lineId) { DARABONBA_PTR_SET_VALUE(lineId_, lineId) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline CreateSdnsRuleCategoryShrinkRequest& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // pathsShrink Field Functions 
    bool hasPathsShrink() const { return this->pathsShrink_ != nullptr;};
    void deletePathsShrink() { this->pathsShrink_ = nullptr;};
    inline string getPathsShrink() const { DARABONBA_PTR_GET_DEFAULT(pathsShrink_, "") };
    inline CreateSdnsRuleCategoryShrinkRequest& setPathsShrink(string pathsShrink) { DARABONBA_PTR_SET_VALUE(pathsShrink_, pathsShrink) };


    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string getRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline CreateSdnsRuleCategoryShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


  protected:
    // The array of client IP address ranges required for the IP_RANGE pattern. Send this parameter as a JSON form field. Do not specify this parameter for the LINE pattern. This parameter supports single IPv4 and IPv6 addresses, CIDR blocks, and start-end ranges. Multiple entries have an OR relationship. For CIDR blocks, the IPv4 prefix length ranges from 0 to 32, and the IPv6 prefix length ranges from 0 to 128. Start-end ranges are inclusive and must belong to the same address family, and the start address cannot be greater than the end address. Duplicates, inclusions, and overlaps are allowed within the same policy. When the policy is saved and read back, the array sequence, duplicates, and original text of each string are preserved. The array can contain up to 2,000 array elements. The total number of parsed non-empty address expressions ranges from 1 to 2,000, and duplicates are counted. We recommend that you specify one expression per array element. It is compatible with line breaks within an array element. Each expression can contain up to 128 characters, including leading and trailing spaces. The serialized UTF-8 JSON content cannot exceed 65,535 bytes. The quantity and byte limits take effect simultaneously. Overlaps are not allowed between different IP_RANGE policies for the same account, domain name, and address family. Disabled policies are also checked. Disabling a policy does not release the ranges. This limit does not compare independent configurations of LINE policies and the legacy SetIPRegionResult operation.
    shared_ptr<string> clientIpRangesShrink_ {};
    // The domain name connected to HTTPDNS for the current account. This parameter is required.
    shared_ptr<string> domainName_ {};
    // Specifies whether to enable the policy upon creation. If this parameter is omitted or set to false, the policy is disabled (Status=0). If this parameter is set to true, the policy is enabled (Status=1), and you do not need to call the enable operation. This parameter applies to the LINE and IP_RANGE modes. Actual resolution still requires waiting for configuration propagation.
    shared_ptr<bool> enable_ {};
    // The line identifier required for the LINE mode. Valid values:
    // - internal: the Chinese mainland.
    // - overseas: outside the Chinese mainland.
    // 
    // Do not specify this parameter for the IP_RANGE mode.
    shared_ptr<string> lineId_ {};
    // The match type. Valid values:
    // - LINE: the line mode.
    // - IP_RANGE: the client IP address range mode.
    // 
    // If this parameter is omitted, it is processed as LINE. To create an IP address range policy, you must explicitly set this parameter to IP_RANGE and provide ClientIpRanges. You cannot provide LineId or Paths at the same time. The match type cannot be changed after creation.
    shared_ptr<string> matchType_ {};
    // The line selection path that describes the line conditions at each level. This parameter applies only to the LINE mode. The IP_RANGE mode does not use line paths. When you create a line policy, provide valid options at each level. Use x for the default option. For the Chinese mainland, the levels include ISP, region, and province. For regions outside the Chinese mainland, the levels include continent and region.
    shared_ptr<string> pathsShrink_ {};
    // The complete list of rules. This parameter is required and must contain at least one rule. When matching only by IP address range, configure a default rule without ArgKeys and Args, and configure the A or AAAA destination addresses in the Records of this rule. When saved, the serialized UTF-8 JSON content must be less than 65,535 bytes.
    shared_ptr<string> rulesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
