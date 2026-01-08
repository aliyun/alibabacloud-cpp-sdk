// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackApp, attackApp_);
      DARABONBA_PTR_TO_JSON(AttackAppCategory, attackAppCategory_);
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(BuyVersion, buyVersion_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
      DARABONBA_PTR_TO_JSON(DstNetworkInstanceId, dstNetworkInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_TO_JSON(IsOnlyPrivateAssoc, isOnlyPrivateAssoc_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NoLocation, noLocation_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_TO_JSON(RuleSource, ruleSource_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_TO_JSON(SrcNetworkInstanceId, srcNetworkInstanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VulLevel, vulLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackApp, attackApp_);
      DARABONBA_PTR_FROM_JSON(AttackAppCategory, attackAppCategory_);
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(BuyVersion, buyVersion_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
      DARABONBA_PTR_FROM_JSON(DstNetworkInstanceId, dstNetworkInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_FROM_JSON(IsOnlyPrivateAssoc, isOnlyPrivateAssoc_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NoLocation, noLocation_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_FROM_JSON(RuleSource, ruleSource_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_FROM_JSON(SrcNetworkInstanceId, srcNetworkInstanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VulLevel, vulLevel_);
    };
    DescribeRiskEventGroupRequest() = default ;
    DescribeRiskEventGroupRequest(const DescribeRiskEventGroupRequest &) = default ;
    DescribeRiskEventGroupRequest(DescribeRiskEventGroupRequest &&) = default ;
    DescribeRiskEventGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventGroupRequest() = default ;
    DescribeRiskEventGroupRequest& operator=(const DescribeRiskEventGroupRequest &) = default ;
    DescribeRiskEventGroupRequest& operator=(DescribeRiskEventGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackApp_ == nullptr
        && this->attackAppCategory_ == nullptr && this->attackType_ == nullptr && this->buyVersion_ == nullptr && this->currentPage_ == nullptr && this->dataType_ == nullptr
        && this->direction_ == nullptr && this->dstIP_ == nullptr && this->dstNetworkInstanceId_ == nullptr && this->endTime_ == nullptr && this->eventName_ == nullptr
        && this->firewallType_ == nullptr && this->isOnlyPrivateAssoc_ == nullptr && this->lang_ == nullptr && this->noLocation_ == nullptr && this->order_ == nullptr
        && this->pageSize_ == nullptr && this->ruleResult_ == nullptr && this->ruleSource_ == nullptr && this->sort_ == nullptr && this->srcIP_ == nullptr
        && this->srcNetworkInstanceId_ == nullptr && this->startTime_ == nullptr && this->vulLevel_ == nullptr; };
    // attackApp Field Functions 
    bool hasAttackApp() const { return this->attackApp_ != nullptr;};
    void deleteAttackApp() { this->attackApp_ = nullptr;};
    inline const vector<string> & getAttackApp() const { DARABONBA_PTR_GET_CONST(attackApp_, vector<string>) };
    inline vector<string> getAttackApp() { DARABONBA_PTR_GET(attackApp_, vector<string>) };
    inline DescribeRiskEventGroupRequest& setAttackApp(const vector<string> & attackApp) { DARABONBA_PTR_SET_VALUE(attackApp_, attackApp) };
    inline DescribeRiskEventGroupRequest& setAttackApp(vector<string> && attackApp) { DARABONBA_PTR_SET_RVALUE(attackApp_, attackApp) };


    // attackAppCategory Field Functions 
    bool hasAttackAppCategory() const { return this->attackAppCategory_ != nullptr;};
    void deleteAttackAppCategory() { this->attackAppCategory_ = nullptr;};
    inline const vector<string> & getAttackAppCategory() const { DARABONBA_PTR_GET_CONST(attackAppCategory_, vector<string>) };
    inline vector<string> getAttackAppCategory() { DARABONBA_PTR_GET(attackAppCategory_, vector<string>) };
    inline DescribeRiskEventGroupRequest& setAttackAppCategory(const vector<string> & attackAppCategory) { DARABONBA_PTR_SET_VALUE(attackAppCategory_, attackAppCategory) };
    inline DescribeRiskEventGroupRequest& setAttackAppCategory(vector<string> && attackAppCategory) { DARABONBA_PTR_SET_RVALUE(attackAppCategory_, attackAppCategory) };


    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline string getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, "") };
    inline DescribeRiskEventGroupRequest& setAttackType(string attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // buyVersion Field Functions 
    bool hasBuyVersion() const { return this->buyVersion_ != nullptr;};
    void deleteBuyVersion() { this->buyVersion_ = nullptr;};
    inline int64_t getBuyVersion() const { DARABONBA_PTR_GET_DEFAULT(buyVersion_, 0L) };
    inline DescribeRiskEventGroupRequest& setBuyVersion(int64_t buyVersion) { DARABONBA_PTR_SET_VALUE(buyVersion_, buyVersion) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeRiskEventGroupRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeRiskEventGroupRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeRiskEventGroupRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeRiskEventGroupRequest& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // dstNetworkInstanceId Field Functions 
    bool hasDstNetworkInstanceId() const { return this->dstNetworkInstanceId_ != nullptr;};
    void deleteDstNetworkInstanceId() { this->dstNetworkInstanceId_ = nullptr;};
    inline string getDstNetworkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dstNetworkInstanceId_, "") };
    inline DescribeRiskEventGroupRequest& setDstNetworkInstanceId(string dstNetworkInstanceId) { DARABONBA_PTR_SET_VALUE(dstNetworkInstanceId_, dstNetworkInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRiskEventGroupRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeRiskEventGroupRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // firewallType Field Functions 
    bool hasFirewallType() const { return this->firewallType_ != nullptr;};
    void deleteFirewallType() { this->firewallType_ = nullptr;};
    inline string getFirewallType() const { DARABONBA_PTR_GET_DEFAULT(firewallType_, "") };
    inline DescribeRiskEventGroupRequest& setFirewallType(string firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };


    // isOnlyPrivateAssoc Field Functions 
    bool hasIsOnlyPrivateAssoc() const { return this->isOnlyPrivateAssoc_ != nullptr;};
    void deleteIsOnlyPrivateAssoc() { this->isOnlyPrivateAssoc_ = nullptr;};
    inline string getIsOnlyPrivateAssoc() const { DARABONBA_PTR_GET_DEFAULT(isOnlyPrivateAssoc_, "") };
    inline DescribeRiskEventGroupRequest& setIsOnlyPrivateAssoc(string isOnlyPrivateAssoc) { DARABONBA_PTR_SET_VALUE(isOnlyPrivateAssoc_, isOnlyPrivateAssoc) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRiskEventGroupRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // noLocation Field Functions 
    bool hasNoLocation() const { return this->noLocation_ != nullptr;};
    void deleteNoLocation() { this->noLocation_ = nullptr;};
    inline string getNoLocation() const { DARABONBA_PTR_GET_DEFAULT(noLocation_, "") };
    inline DescribeRiskEventGroupRequest& setNoLocation(string noLocation) { DARABONBA_PTR_SET_VALUE(noLocation_, noLocation) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeRiskEventGroupRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeRiskEventGroupRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleResult Field Functions 
    bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
    void deleteRuleResult() { this->ruleResult_ = nullptr;};
    inline string getRuleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, "") };
    inline DescribeRiskEventGroupRequest& setRuleResult(string ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


    // ruleSource Field Functions 
    bool hasRuleSource() const { return this->ruleSource_ != nullptr;};
    void deleteRuleSource() { this->ruleSource_ = nullptr;};
    inline string getRuleSource() const { DARABONBA_PTR_GET_DEFAULT(ruleSource_, "") };
    inline DescribeRiskEventGroupRequest& setRuleSource(string ruleSource) { DARABONBA_PTR_SET_VALUE(ruleSource_, ruleSource) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeRiskEventGroupRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // srcIP Field Functions 
    bool hasSrcIP() const { return this->srcIP_ != nullptr;};
    void deleteSrcIP() { this->srcIP_ = nullptr;};
    inline string getSrcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
    inline DescribeRiskEventGroupRequest& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


    // srcNetworkInstanceId Field Functions 
    bool hasSrcNetworkInstanceId() const { return this->srcNetworkInstanceId_ != nullptr;};
    void deleteSrcNetworkInstanceId() { this->srcNetworkInstanceId_ = nullptr;};
    inline string getSrcNetworkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(srcNetworkInstanceId_, "") };
    inline DescribeRiskEventGroupRequest& setSrcNetworkInstanceId(string srcNetworkInstanceId) { DARABONBA_PTR_SET_VALUE(srcNetworkInstanceId_, srcNetworkInstanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRiskEventGroupRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vulLevel Field Functions 
    bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
    void deleteVulLevel() { this->vulLevel_ = nullptr;};
    inline string getVulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, "") };
    inline DescribeRiskEventGroupRequest& setVulLevel(string vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


  protected:
    // The names of the attacked applications. Set the value in the `["AttackApp1","AttackApp2"]` format.
    shared_ptr<vector<string>> attackApp_ {};
    // A list of categories of attacked applications, expressed in the format ["AttackAppCategory1","AttackAppCategory2"].
    shared_ptr<vector<string>> attackAppCategory_ {};
    // The attack type of the intrusion events. Valid values:
    // 
    // *   **1**: suspicious connection
    // *   **2**: command execution
    // *   **3**: brute-force attack
    // *   **4**: scanning
    // *   **5**: others
    // *   **6**: information leak
    // *   **7**: DoS attack
    // *   **8**: buffer overflow attack
    // *   **9**: web attack
    // *   **10**: trojan backdoor
    // *   **11**: computer worm
    // *   **12**: mining
    // *   **13**: reverse shell
    // 
    // > If you do not specify this parameter, the intrusion events of all attack types are queried.
    shared_ptr<string> attackType_ {};
    // The edition of Cloud Firewall that you purchase. Valid values:
    // 
    // *   **2**: Premium Edition
    // *   **3**: Enterprise Edition
    // *   **4**: Ultimate Edition
    // *   **10**: Cloud Firewall that uses the pay-as-you-go billing method
    shared_ptr<int64_t> buyVersion_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<string> currentPage_ {};
    // The type of the risk events.\\
    // Set the value to **session**, which indicates intrusion events.
    // 
    // This parameter is required.
    shared_ptr<string> dataType_ {};
    // The direction of the traffic for the intrusion events. Valid values:
    // 
    // *   **in**: inbound
    // *   **out**: outbound
    // 
    // > If you do not specify this parameter, the intrusion events that are recorded for both inbound and outbound traffic are queried.
    shared_ptr<string> direction_ {};
    // The destination IP address to query. If you specify this parameter, all intrusion events with the specified destination IP address are queried.
    shared_ptr<string> dstIP_ {};
    // The ID of the destination VPC.
    // 
    // > If the FirewallType parameter is set to VpcFirewall, you must specify this parameter.
    shared_ptr<string> dstNetworkInstanceId_ {};
    // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The name of the intrusion event.
    shared_ptr<string> eventName_ {};
    // The type of the firewall. Valid values:
    // 
    // *   **VpcFirewall**: virtual private cloud (VPC) firewall
    // *   **InternetFirewall**: Internet firewall (default)
    shared_ptr<string> firewallType_ {};
    // Whether to query only the data that has completed private network tracing.
    shared_ptr<string> isOnlyPrivateAssoc_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // Specifies whether to query the information about the geographical locations of IP addresses.
    // 
    // *   **true**: does not query the information about the geographical locations of IP addresses.
    // *   **false**: queries the information about the geographical locations of IP addresses. This is the default value.
    shared_ptr<string> noLocation_ {};
    // The order in which you want to sort the results. Valid values:
    // 
    // *   **asc**: the ascending order.
    // *   **desc**: the descending order. This is the default value.
    shared_ptr<string> order_ {};
    // The number of entries to return on each page.
    // 
    // Default value: **6**. Maximum value: **10**.
    shared_ptr<string> pageSize_ {};
    // The status of the firewall. Valid values:
    // 
    // *   **1**: alerting
    // *   **2**: blocking
    // 
    // > If you do not specify this parameter, all intrusion events that are detected by the firewall are queried, regardless of the firewall status.
    shared_ptr<string> ruleResult_ {};
    // The module of the rule that is used to detect the intrusion events. Valid values:
    // 
    // *   **1**: basic protection
    // *   **2**: virtual patching
    // *   **4**: threat intelligence
    // 
    // > If you do not specify this parameter, the intrusion events that are detected by all rules are queried.
    shared_ptr<string> ruleSource_ {};
    // The field based on which you want to sort the results. Valid values:
    // 
    // *   **VulLevel**: The results are sorted based on the risk level field. This is the default value.
    // *   **LastTime**: The results are sorted based on the most recent occurrence time.
    shared_ptr<string> sort_ {};
    // The source IP address to query. If you specify this parameter, all intrusion events with the specified source IP address are queried.
    shared_ptr<string> srcIP_ {};
    // The ID of the source VPC.
    // 
    // > If the FirewallType parameter is set to VpcFirewall, you must specify this parameter.
    shared_ptr<string> srcNetworkInstanceId_ {};
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The risk level of the intrusion events. Valid values:
    // 
    // *   **1**: low
    // *   **2**: medium
    // *   **3**: high
    // 
    // > If you do not specify this parameter, the intrusion events that are at all risk levels are queried.
    shared_ptr<string> vulLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
