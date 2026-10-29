// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESDNSRULECATEGORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESDNSRULECATEGORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class UpdateSdnsRuleCategoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSdnsRuleCategoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIpRanges, clientIpRanges_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Rules, rulesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSdnsRuleCategoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIpRanges, clientIpRanges_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Rules, rulesShrink_);
    };
    UpdateSdnsRuleCategoryShrinkRequest() = default ;
    UpdateSdnsRuleCategoryShrinkRequest(const UpdateSdnsRuleCategoryShrinkRequest &) = default ;
    UpdateSdnsRuleCategoryShrinkRequest(UpdateSdnsRuleCategoryShrinkRequest &&) = default ;
    UpdateSdnsRuleCategoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSdnsRuleCategoryShrinkRequest() = default ;
    UpdateSdnsRuleCategoryShrinkRequest& operator=(const UpdateSdnsRuleCategoryShrinkRequest &) = default ;
    UpdateSdnsRuleCategoryShrinkRequest& operator=(UpdateSdnsRuleCategoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIpRanges_ == nullptr
        && this->id_ == nullptr && this->rulesShrink_ == nullptr; };
    // clientIpRanges Field Functions 
    bool hasClientIpRanges() const { return this->clientIpRanges_ != nullptr;};
    void deleteClientIpRanges() { this->clientIpRanges_ = nullptr;};
    inline string getClientIpRanges() const { DARABONBA_PTR_GET_DEFAULT(clientIpRanges_, "") };
    inline UpdateSdnsRuleCategoryShrinkRequest& setClientIpRanges(string clientIpRanges) { DARABONBA_PTR_SET_VALUE(clientIpRanges_, clientIpRanges) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateSdnsRuleCategoryShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string getRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline UpdateSdnsRuleCategoryShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


  protected:
    // The JSON text string of the IP address range array. This parameter is used only to update IP_RANGE policies. If this parameter is omitted, the original IP address ranges are retained. If this parameter is provided, the original IP address ranges are replaced as a whole. You cannot pass an empty string, an empty array [], null, or a non-string array. Single IP addresses, CIDR blocks, and start-end ranges of IPv4 and IPv6 are supported. Multiple entries have an OR relationship. For CIDR blocks, the IPv4 prefix length ranges from 0 to 32, and the IPv6 prefix length ranges from 0 to 128. Start-end ranges are inclusive and must belong to the same address family, and the start address must not be greater than the end address. Overlapping, containing, and duplicate ranges are allowed within the same policy. When the policy is saved and read back, the array order, duplicate items, and the original text of each string are retained. An array can contain up to 2,000 array elements. The total number of parsed non-empty address expressions ranges from 1 to 2,000, and duplicate items are counted. We recommend that you specify one expression per element. It is compatible with line breaks within an element. Each expression can contain up to 128 characters, including leading and trailing whitespace. The serialized UTF-8 JSON sequence cannot exceed 65,535 bytes. The quantity and byte limits take effect at the same time. Overlapping is not allowed among different IP_RANGE policies of the same account, the same domain name, and the same address family. Disabled policies are also checked. Disabling a policy does not release its IP address ranges. This limit does not compare LINE policies and the independent configurations of the legacy SetIPRegionResult operation. The new ranges do not conflict with the old ranges of the same policy during an update. Send this parameter as a single form field, and do not add quotes to the JSON text again.
    shared_ptr<string> clientIpRanges_ {};
    // The ID of the policy for the current account. This parameter is required. You can obtain the ID from the Id field in the response of CreateSdnsRuleCategory or from the list returned by SdnsListRuleCategories. Use a decimal string to avoid precision loss for large integers.
    shared_ptr<string> id_ {};
    // The complete list of rules. This parameter is required and must contain at least one rule. If you match only by IP address range, you can configure a default rule without ArgKeys and Args, and configure the A or AAAA destination addresses in the Records field of the rule. The update replaces the original rule list as a whole. Old rules that are not included in the new list are removed. When the rules are saved, the serialized UTF-8 JSON content must be less than 65,535 bytes.
    shared_ptr<string> rulesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
