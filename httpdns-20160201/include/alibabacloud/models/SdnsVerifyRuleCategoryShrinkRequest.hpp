// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SDNSVERIFYRULECATEGORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SDNSVERIFYRULECATEGORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class SdnsVerifyRuleCategoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SdnsVerifyRuleCategoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Args, argsShrink_);
      DARABONBA_PTR_TO_JSON(Cip, cip_);
      DARABONBA_PTR_TO_JSON(ClientIpRanges, clientIpRangesShrink_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Rules, rulesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SdnsVerifyRuleCategoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Args, argsShrink_);
      DARABONBA_PTR_FROM_JSON(Cip, cip_);
      DARABONBA_PTR_FROM_JSON(ClientIpRanges, clientIpRangesShrink_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Rules, rulesShrink_);
    };
    SdnsVerifyRuleCategoryShrinkRequest() = default ;
    SdnsVerifyRuleCategoryShrinkRequest(const SdnsVerifyRuleCategoryShrinkRequest &) = default ;
    SdnsVerifyRuleCategoryShrinkRequest(SdnsVerifyRuleCategoryShrinkRequest &&) = default ;
    SdnsVerifyRuleCategoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SdnsVerifyRuleCategoryShrinkRequest() = default ;
    SdnsVerifyRuleCategoryShrinkRequest& operator=(const SdnsVerifyRuleCategoryShrinkRequest &) = default ;
    SdnsVerifyRuleCategoryShrinkRequest& operator=(SdnsVerifyRuleCategoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->argsShrink_ == nullptr
        && this->cip_ == nullptr && this->clientIpRangesShrink_ == nullptr && this->matchType_ == nullptr && this->rulesShrink_ == nullptr; };
    // argsShrink Field Functions 
    bool hasArgsShrink() const { return this->argsShrink_ != nullptr;};
    void deleteArgsShrink() { this->argsShrink_ = nullptr;};
    inline string getArgsShrink() const { DARABONBA_PTR_GET_DEFAULT(argsShrink_, "") };
    inline SdnsVerifyRuleCategoryShrinkRequest& setArgsShrink(string argsShrink) { DARABONBA_PTR_SET_VALUE(argsShrink_, argsShrink) };


    // cip Field Functions 
    bool hasCip() const { return this->cip_ != nullptr;};
    void deleteCip() { this->cip_ = nullptr;};
    inline string getCip() const { DARABONBA_PTR_GET_DEFAULT(cip_, "") };
    inline SdnsVerifyRuleCategoryShrinkRequest& setCip(string cip) { DARABONBA_PTR_SET_VALUE(cip_, cip) };


    // clientIpRangesShrink Field Functions 
    bool hasClientIpRangesShrink() const { return this->clientIpRangesShrink_ != nullptr;};
    void deleteClientIpRangesShrink() { this->clientIpRangesShrink_ = nullptr;};
    inline string getClientIpRangesShrink() const { DARABONBA_PTR_GET_DEFAULT(clientIpRangesShrink_, "") };
    inline SdnsVerifyRuleCategoryShrinkRequest& setClientIpRangesShrink(string clientIpRangesShrink) { DARABONBA_PTR_SET_VALUE(clientIpRangesShrink_, clientIpRangesShrink) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline SdnsVerifyRuleCategoryShrinkRequest& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string getRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline SdnsVerifyRuleCategoryShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


  protected:
    // The parameter object used for the current validation. If no custom parameters are used, pass an empty JSON object {}. Do not pass an empty string or null.
    shared_ptr<string> argsShrink_ {};
    // The simulated client IP address. This parameter is required in IP_RANGE mode. Supports a single IPv4 or IPv6 address. CIDR blocks and start-to-end ranges are not supported. This parameter is used for CIDR block matching in the current request and does not change the source of the actual DNS resolution request.
    shared_ptr<string> cip_ {};
    // The array of client CIDR blocks that must be provided in the IP_RANGE pattern. Send this parameter as a JSON form field. Do not pass this parameter in the LINE pattern. Supports single IPv4 and IPv6 addresses, CIDR blocks, and start-to-end ranges. Multiple entries have an OR relationship. For CIDR blocks, the IPv4 prefix length ranges from 0 to 32, and the IPv6 prefix length ranges from 0 to 128. Start-to-end ranges are inclusive and must belong to the same address family, with the start address not greater than the end address. Overlapping, containing, and duplicate ranges are allowed within the same policy. When the policy is saved and read back, the array sequence, duplicate items, and the original text of each string are preserved. The array can contain up to 2,000 array elements. The total number of parsed non-empty address expressions ranges from 1 to 2,000, including duplicates. Specify one expression per array element. It is compatible with line breaks within an array element. Each expression can contain up to 128 characters, including leading and trailing whitespace. The serialized UTF-8 JSON content cannot exceed 65,535 bytes. Both the quantity and byte limits apply simultaneously. To authenticate, the system only checks the ranges that you commit and does not check for conflicts with saved policies.
    shared_ptr<string> clientIpRangesShrink_ {};
    // The match type. Valid values:
    // - LINE: line mode
    // - IP_RANGE: client CIDR block mode
    // If this parameter is omitted, LINE is used. In IP_RANGE mode, you must provide both ClientIpRanges and Cip.
    shared_ptr<string> matchType_ {};
    // The complete list of rules. This parameter is required and must contain at least one rule. If you only need to match CIDR blocks, configure a default rule without ArgKeys and Args, and configure the A/AAAA destination addresses in the Records field of this rule. This operation is used for match validation and does not save the rules.
    shared_ptr<string> rulesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
