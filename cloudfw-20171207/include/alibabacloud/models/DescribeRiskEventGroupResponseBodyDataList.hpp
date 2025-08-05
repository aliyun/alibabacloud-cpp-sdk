// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTGROUPRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTGROUPRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRiskEventGroupResponseBodyDataListIPLocationInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList.hpp>
#include <alibabacloud/models/DescribeRiskEventGroupResponseBodyDataListVpcDstInfo.hpp>
#include <alibabacloud/models/DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventGroupResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventGroupResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AttackApp, attackApp_);
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
      DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(FirstEventTime, firstEventTime_);
      DARABONBA_PTR_TO_JSON(IPLocationInfo, IPLocationInfo_);
      DARABONBA_PTR_TO_JSON(LastEventTime, lastEventTime_);
      DARABONBA_PTR_TO_JSON(ResourcePrivateIPList, resourcePrivateIPList_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_TO_JSON(RuleSource, ruleSource_);
      DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_TO_JSON(SrcIPTag, srcIPTag_);
      DARABONBA_PTR_TO_JSON(SrcPrivateIPList, srcPrivateIPList_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcDstInfo, vpcDstInfo_);
      DARABONBA_PTR_TO_JSON(VpcSrcInfo, vpcSrcInfo_);
      DARABONBA_PTR_TO_JSON(VulLevel, vulLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventGroupResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackApp, attackApp_);
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
      DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(FirstEventTime, firstEventTime_);
      DARABONBA_PTR_FROM_JSON(IPLocationInfo, IPLocationInfo_);
      DARABONBA_PTR_FROM_JSON(LastEventTime, lastEventTime_);
      DARABONBA_PTR_FROM_JSON(ResourcePrivateIPList, resourcePrivateIPList_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_FROM_JSON(RuleSource, ruleSource_);
      DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_FROM_JSON(SrcIPTag, srcIPTag_);
      DARABONBA_PTR_FROM_JSON(SrcPrivateIPList, srcPrivateIPList_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcDstInfo, vpcDstInfo_);
      DARABONBA_PTR_FROM_JSON(VpcSrcInfo, vpcSrcInfo_);
      DARABONBA_PTR_FROM_JSON(VulLevel, vulLevel_);
    };
    DescribeRiskEventGroupResponseBodyDataList() = default ;
    DescribeRiskEventGroupResponseBodyDataList(const DescribeRiskEventGroupResponseBodyDataList &) = default ;
    DescribeRiskEventGroupResponseBodyDataList(DescribeRiskEventGroupResponseBodyDataList &&) = default ;
    DescribeRiskEventGroupResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventGroupResponseBodyDataList() = default ;
    DescribeRiskEventGroupResponseBodyDataList& operator=(const DescribeRiskEventGroupResponseBodyDataList &) = default ;
    DescribeRiskEventGroupResponseBodyDataList& operator=(DescribeRiskEventGroupResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attackApp_ != nullptr
        && this->attackType_ != nullptr && this->description_ != nullptr && this->direction_ != nullptr && this->dstIP_ != nullptr && this->eventCount_ != nullptr
        && this->eventId_ != nullptr && this->eventName_ != nullptr && this->firstEventTime_ != nullptr && this->IPLocationInfo_ != nullptr && this->lastEventTime_ != nullptr
        && this->resourcePrivateIPList_ != nullptr && this->resourceType_ != nullptr && this->ruleId_ != nullptr && this->ruleResult_ != nullptr && this->ruleSource_ != nullptr
        && this->srcIP_ != nullptr && this->srcIPTag_ != nullptr && this->srcPrivateIPList_ != nullptr && this->tag_ != nullptr && this->vpcDstInfo_ != nullptr
        && this->vpcSrcInfo_ != nullptr && this->vulLevel_ != nullptr; };
    // attackApp Field Functions 
    bool hasAttackApp() const { return this->attackApp_ != nullptr;};
    void deleteAttackApp() { this->attackApp_ = nullptr;};
    inline string attackApp() const { DARABONBA_PTR_GET_DEFAULT(attackApp_, "") };
    inline DescribeRiskEventGroupResponseBodyDataList& setAttackApp(string attackApp) { DARABONBA_PTR_SET_VALUE(attackApp_, attackApp) };


    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline int32_t attackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0) };
    inline DescribeRiskEventGroupResponseBodyDataList& setAttackType(int32_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRiskEventGroupResponseBodyDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeRiskEventGroupResponseBodyDataList& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string dstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeRiskEventGroupResponseBodyDataList& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // eventCount Field Functions 
    bool hasEventCount() const { return this->eventCount_ != nullptr;};
    void deleteEventCount() { this->eventCount_ = nullptr;};
    inline int32_t eventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0) };
    inline DescribeRiskEventGroupResponseBodyDataList& setEventCount(int32_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeRiskEventGroupResponseBodyDataList& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeRiskEventGroupResponseBodyDataList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // firstEventTime Field Functions 
    bool hasFirstEventTime() const { return this->firstEventTime_ != nullptr;};
    void deleteFirstEventTime() { this->firstEventTime_ = nullptr;};
    inline int32_t firstEventTime() const { DARABONBA_PTR_GET_DEFAULT(firstEventTime_, 0) };
    inline DescribeRiskEventGroupResponseBodyDataList& setFirstEventTime(int32_t firstEventTime) { DARABONBA_PTR_SET_VALUE(firstEventTime_, firstEventTime) };


    // IPLocationInfo Field Functions 
    bool hasIPLocationInfo() const { return this->IPLocationInfo_ != nullptr;};
    void deleteIPLocationInfo() { this->IPLocationInfo_ = nullptr;};
    inline const Models::DescribeRiskEventGroupResponseBodyDataListIPLocationInfo & IPLocationInfo() const { DARABONBA_PTR_GET_CONST(IPLocationInfo_, Models::DescribeRiskEventGroupResponseBodyDataListIPLocationInfo) };
    inline Models::DescribeRiskEventGroupResponseBodyDataListIPLocationInfo IPLocationInfo() { DARABONBA_PTR_GET(IPLocationInfo_, Models::DescribeRiskEventGroupResponseBodyDataListIPLocationInfo) };
    inline DescribeRiskEventGroupResponseBodyDataList& setIPLocationInfo(const Models::DescribeRiskEventGroupResponseBodyDataListIPLocationInfo & IPLocationInfo) { DARABONBA_PTR_SET_VALUE(IPLocationInfo_, IPLocationInfo) };
    inline DescribeRiskEventGroupResponseBodyDataList& setIPLocationInfo(Models::DescribeRiskEventGroupResponseBodyDataListIPLocationInfo && IPLocationInfo) { DARABONBA_PTR_SET_RVALUE(IPLocationInfo_, IPLocationInfo) };


    // lastEventTime Field Functions 
    bool hasLastEventTime() const { return this->lastEventTime_ != nullptr;};
    void deleteLastEventTime() { this->lastEventTime_ = nullptr;};
    inline int32_t lastEventTime() const { DARABONBA_PTR_GET_DEFAULT(lastEventTime_, 0) };
    inline DescribeRiskEventGroupResponseBodyDataList& setLastEventTime(int32_t lastEventTime) { DARABONBA_PTR_SET_VALUE(lastEventTime_, lastEventTime) };


    // resourcePrivateIPList Field Functions 
    bool hasResourcePrivateIPList() const { return this->resourcePrivateIPList_ != nullptr;};
    void deleteResourcePrivateIPList() { this->resourcePrivateIPList_ = nullptr;};
    inline const vector<Models::DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList> & resourcePrivateIPList() const { DARABONBA_PTR_GET_CONST(resourcePrivateIPList_, vector<Models::DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList>) };
    inline vector<Models::DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList> resourcePrivateIPList() { DARABONBA_PTR_GET(resourcePrivateIPList_, vector<Models::DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList>) };
    inline DescribeRiskEventGroupResponseBodyDataList& setResourcePrivateIPList(const vector<Models::DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList> & resourcePrivateIPList) { DARABONBA_PTR_SET_VALUE(resourcePrivateIPList_, resourcePrivateIPList) };
    inline DescribeRiskEventGroupResponseBodyDataList& setResourcePrivateIPList(vector<Models::DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList> && resourcePrivateIPList) { DARABONBA_PTR_SET_RVALUE(resourcePrivateIPList_, resourcePrivateIPList) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeRiskEventGroupResponseBodyDataList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeRiskEventGroupResponseBodyDataList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleResult Field Functions 
    bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
    void deleteRuleResult() { this->ruleResult_ = nullptr;};
    inline int32_t ruleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, 0) };
    inline DescribeRiskEventGroupResponseBodyDataList& setRuleResult(int32_t ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


    // ruleSource Field Functions 
    bool hasRuleSource() const { return this->ruleSource_ != nullptr;};
    void deleteRuleSource() { this->ruleSource_ = nullptr;};
    inline int32_t ruleSource() const { DARABONBA_PTR_GET_DEFAULT(ruleSource_, 0) };
    inline DescribeRiskEventGroupResponseBodyDataList& setRuleSource(int32_t ruleSource) { DARABONBA_PTR_SET_VALUE(ruleSource_, ruleSource) };


    // srcIP Field Functions 
    bool hasSrcIP() const { return this->srcIP_ != nullptr;};
    void deleteSrcIP() { this->srcIP_ = nullptr;};
    inline string srcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
    inline DescribeRiskEventGroupResponseBodyDataList& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


    // srcIPTag Field Functions 
    bool hasSrcIPTag() const { return this->srcIPTag_ != nullptr;};
    void deleteSrcIPTag() { this->srcIPTag_ = nullptr;};
    inline string srcIPTag() const { DARABONBA_PTR_GET_DEFAULT(srcIPTag_, "") };
    inline DescribeRiskEventGroupResponseBodyDataList& setSrcIPTag(string srcIPTag) { DARABONBA_PTR_SET_VALUE(srcIPTag_, srcIPTag) };


    // srcPrivateIPList Field Functions 
    bool hasSrcPrivateIPList() const { return this->srcPrivateIPList_ != nullptr;};
    void deleteSrcPrivateIPList() { this->srcPrivateIPList_ = nullptr;};
    inline const vector<string> & srcPrivateIPList() const { DARABONBA_PTR_GET_CONST(srcPrivateIPList_, vector<string>) };
    inline vector<string> srcPrivateIPList() { DARABONBA_PTR_GET(srcPrivateIPList_, vector<string>) };
    inline DescribeRiskEventGroupResponseBodyDataList& setSrcPrivateIPList(const vector<string> & srcPrivateIPList) { DARABONBA_PTR_SET_VALUE(srcPrivateIPList_, srcPrivateIPList) };
    inline DescribeRiskEventGroupResponseBodyDataList& setSrcPrivateIPList(vector<string> && srcPrivateIPList) { DARABONBA_PTR_SET_RVALUE(srcPrivateIPList_, srcPrivateIPList) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeRiskEventGroupResponseBodyDataList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // vpcDstInfo Field Functions 
    bool hasVpcDstInfo() const { return this->vpcDstInfo_ != nullptr;};
    void deleteVpcDstInfo() { this->vpcDstInfo_ = nullptr;};
    inline const Models::DescribeRiskEventGroupResponseBodyDataListVpcDstInfo & vpcDstInfo() const { DARABONBA_PTR_GET_CONST(vpcDstInfo_, Models::DescribeRiskEventGroupResponseBodyDataListVpcDstInfo) };
    inline Models::DescribeRiskEventGroupResponseBodyDataListVpcDstInfo vpcDstInfo() { DARABONBA_PTR_GET(vpcDstInfo_, Models::DescribeRiskEventGroupResponseBodyDataListVpcDstInfo) };
    inline DescribeRiskEventGroupResponseBodyDataList& setVpcDstInfo(const Models::DescribeRiskEventGroupResponseBodyDataListVpcDstInfo & vpcDstInfo) { DARABONBA_PTR_SET_VALUE(vpcDstInfo_, vpcDstInfo) };
    inline DescribeRiskEventGroupResponseBodyDataList& setVpcDstInfo(Models::DescribeRiskEventGroupResponseBodyDataListVpcDstInfo && vpcDstInfo) { DARABONBA_PTR_SET_RVALUE(vpcDstInfo_, vpcDstInfo) };


    // vpcSrcInfo Field Functions 
    bool hasVpcSrcInfo() const { return this->vpcSrcInfo_ != nullptr;};
    void deleteVpcSrcInfo() { this->vpcSrcInfo_ = nullptr;};
    inline const Models::DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo & vpcSrcInfo() const { DARABONBA_PTR_GET_CONST(vpcSrcInfo_, Models::DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo) };
    inline Models::DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo vpcSrcInfo() { DARABONBA_PTR_GET(vpcSrcInfo_, Models::DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo) };
    inline DescribeRiskEventGroupResponseBodyDataList& setVpcSrcInfo(const Models::DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo & vpcSrcInfo) { DARABONBA_PTR_SET_VALUE(vpcSrcInfo_, vpcSrcInfo) };
    inline DescribeRiskEventGroupResponseBodyDataList& setVpcSrcInfo(Models::DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo && vpcSrcInfo) { DARABONBA_PTR_SET_RVALUE(vpcSrcInfo_, vpcSrcInfo) };


    // vulLevel Field Functions 
    bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
    void deleteVulLevel() { this->vulLevel_ = nullptr;};
    inline int32_t vulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, 0) };
    inline DescribeRiskEventGroupResponseBodyDataList& setVulLevel(int32_t vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


  protected:
    // The name of the attacked application.
    std::shared_ptr<string> attackApp_ = nullptr;
    // The attack type of the intrusion event. Valid values:
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
    std::shared_ptr<int32_t> attackType_ = nullptr;
    // The description of the intrusion event.
    std::shared_ptr<string> description_ = nullptr;
    // The direction of the traffic for the intrusion event. Valid values:
    // 
    // *   **in**: inbound
    // *   **out**: outbound
    std::shared_ptr<string> direction_ = nullptr;
    // The destination IP address that is included in the intrusion event.
    std::shared_ptr<string> dstIP_ = nullptr;
    // The number of intrusion events.
    std::shared_ptr<int32_t> eventCount_ = nullptr;
    // The ID of the intrusion event.
    std::shared_ptr<string> eventId_ = nullptr;
    // The name of the intrusion event.
    std::shared_ptr<string> eventName_ = nullptr;
    // The time when the intrusion event was first detected. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int32_t> firstEventTime_ = nullptr;
    // The geographical information about the IP address. The value is a struct that contains the following parameters: **CityId**, **CityName**, **CountryId**, and **CountryName**.\\
    // ****************
    std::shared_ptr<Models::DescribeRiskEventGroupResponseBodyDataListIPLocationInfo> IPLocationInfo_ = nullptr;
    // The time when the intrusion event was last detected. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int32_t> lastEventTime_ = nullptr;
    // The information about the private IP address in the intrusion event. The value is an array that contains the following parameters: **RegionNo**, **ResourceInstanceId**, **ResourceInstanceName**, and **ResourcePrivateIP**.\\
    // ****************
    std::shared_ptr<vector<Models::DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList>> resourcePrivateIPList_ = nullptr;
    // The type of the public IP address in the intrusion event. Valid values:
    // 
    // *   **EIP**: the elastic IP address (EIP)
    // *   **EcsPublicIP**: the public IP address of an Elastic Compute Service (ECS) instance
    // *   **EcsEIP**: the EIP of an ECS instance
    // *   **NatPublicIP**: the public IP address of a NAT gateway
    // *   **NatEIP**: the EIP of a NAT gateway
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the rule that is used to detect the intrusion event.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The status of the firewall. Valid values:
    // 
    // *   **1**: alerting
    // *   **2**: blocking
    std::shared_ptr<int32_t> ruleResult_ = nullptr;
    // The module of the rule that is used to detect the intrusion event. Valid values:
    // 
    // *   **1**: basic protection
    // *   **2**: virtual patching
    // *   **4**: threat intelligence
    std::shared_ptr<int32_t> ruleSource_ = nullptr;
    // The source IP address that is included in the intrusion event.
    std::shared_ptr<string> srcIP_ = nullptr;
    // The tag added to the source IP address. The tag helps identify whether the source IP address is a back-to-origin IP address for a cloud service.
    std::shared_ptr<string> srcIPTag_ = nullptr;
    // An array that consists of the source private IP addresses in the intrusion event.
    std::shared_ptr<vector<string>> srcPrivateIPList_ = nullptr;
    // The tag added to the threat intelligence that is provided for major events.
    std::shared_ptr<string> tag_ = nullptr;
    // The information about the destination VPC of the intrusion event. The value is a struct that contains the following parameters: **EcsInstanceId**, **EcsInstanceName**, **NetworkInstanceId**, **NetworkInstanceName**, and **RegionNo**.\\
    // ********************
    std::shared_ptr<Models::DescribeRiskEventGroupResponseBodyDataListVpcDstInfo> vpcDstInfo_ = nullptr;
    // The information about the source VPC of the intrusion event. The value is a struct that contains the following parameters: **EcsInstanceId**, **EcsInstanceName**, **NetworkInstanceId**, **NetworkInstanceName**, and **RegionNo**.\\
    // ********************
    std::shared_ptr<Models::DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo> vpcSrcInfo_ = nullptr;
    // The risk level of the intrusion event. Valid values:
    // 
    // *   **1**: low
    // *   **2**: medium
    // *   **3**: high
    std::shared_ptr<int32_t> vulLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
