// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeExpressConnectTrafficQosRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectTrafficQosRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectTrafficQosRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    DescribeExpressConnectTrafficQosRuleResponseBody() = default ;
    DescribeExpressConnectTrafficQosRuleResponseBody(const DescribeExpressConnectTrafficQosRuleResponseBody &) = default ;
    DescribeExpressConnectTrafficQosRuleResponseBody(DescribeExpressConnectTrafficQosRuleResponseBody &&) = default ;
    DescribeExpressConnectTrafficQosRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectTrafficQosRuleResponseBody() = default ;
    DescribeExpressConnectTrafficQosRuleResponseBody& operator=(const DescribeExpressConnectTrafficQosRuleResponseBody &) = default ;
    DescribeExpressConnectTrafficQosRuleResponseBody& operator=(DescribeExpressConnectTrafficQosRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
        DARABONBA_PTR_TO_JSON(DstCidr, dstCidr_);
        DARABONBA_PTR_TO_JSON(DstIPv6Cidr, dstIPv6Cidr_);
        DARABONBA_PTR_TO_JSON(DstPortRange, dstPortRange_);
        DARABONBA_PTR_TO_JSON(MatchDscp, matchDscp_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(QosId, qosId_);
        DARABONBA_PTR_TO_JSON(QueueId, queueId_);
        DARABONBA_PTR_TO_JSON(RemarkingDscp, remarkingDscp_);
        DARABONBA_PTR_TO_JSON(RuleDescription, ruleDescription_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(SrcCidr, srcCidr_);
        DARABONBA_PTR_TO_JSON(SrcIPv6Cidr, srcIPv6Cidr_);
        DARABONBA_PTR_TO_JSON(SrcPortRange, srcPortRange_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(DstCidr, dstCidr_);
        DARABONBA_PTR_FROM_JSON(DstIPv6Cidr, dstIPv6Cidr_);
        DARABONBA_PTR_FROM_JSON(DstPortRange, dstPortRange_);
        DARABONBA_PTR_FROM_JSON(MatchDscp, matchDscp_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(QosId, qosId_);
        DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
        DARABONBA_PTR_FROM_JSON(RemarkingDscp, remarkingDscp_);
        DARABONBA_PTR_FROM_JSON(RuleDescription, ruleDescription_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(SrcCidr, srcCidr_);
        DARABONBA_PTR_FROM_JSON(SrcIPv6Cidr, srcIPv6Cidr_);
        DARABONBA_PTR_FROM_JSON(SrcPortRange, srcPortRange_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RuleList() = default ;
      RuleList(const RuleList &) = default ;
      RuleList(RuleList &&) = default ;
      RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleList() = default ;
      RuleList& operator=(const RuleList &) = default ;
      RuleList& operator=(RuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dstCidr_ == nullptr
        && this->dstIPv6Cidr_ == nullptr && this->dstPortRange_ == nullptr && this->matchDscp_ == nullptr && this->priority_ == nullptr && this->protocol_ == nullptr
        && this->qosId_ == nullptr && this->queueId_ == nullptr && this->remarkingDscp_ == nullptr && this->ruleDescription_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->srcCidr_ == nullptr && this->srcIPv6Cidr_ == nullptr && this->srcPortRange_ == nullptr && this->status_ == nullptr; };
      // dstCidr Field Functions 
      bool hasDstCidr() const { return this->dstCidr_ != nullptr;};
      void deleteDstCidr() { this->dstCidr_ = nullptr;};
      inline string getDstCidr() const { DARABONBA_PTR_GET_DEFAULT(dstCidr_, "") };
      inline RuleList& setDstCidr(string dstCidr) { DARABONBA_PTR_SET_VALUE(dstCidr_, dstCidr) };


      // dstIPv6Cidr Field Functions 
      bool hasDstIPv6Cidr() const { return this->dstIPv6Cidr_ != nullptr;};
      void deleteDstIPv6Cidr() { this->dstIPv6Cidr_ = nullptr;};
      inline string getDstIPv6Cidr() const { DARABONBA_PTR_GET_DEFAULT(dstIPv6Cidr_, "") };
      inline RuleList& setDstIPv6Cidr(string dstIPv6Cidr) { DARABONBA_PTR_SET_VALUE(dstIPv6Cidr_, dstIPv6Cidr) };


      // dstPortRange Field Functions 
      bool hasDstPortRange() const { return this->dstPortRange_ != nullptr;};
      void deleteDstPortRange() { this->dstPortRange_ = nullptr;};
      inline string getDstPortRange() const { DARABONBA_PTR_GET_DEFAULT(dstPortRange_, "") };
      inline RuleList& setDstPortRange(string dstPortRange) { DARABONBA_PTR_SET_VALUE(dstPortRange_, dstPortRange) };


      // matchDscp Field Functions 
      bool hasMatchDscp() const { return this->matchDscp_ != nullptr;};
      void deleteMatchDscp() { this->matchDscp_ = nullptr;};
      inline int32_t getMatchDscp() const { DARABONBA_PTR_GET_DEFAULT(matchDscp_, 0) };
      inline RuleList& setMatchDscp(int32_t matchDscp) { DARABONBA_PTR_SET_VALUE(matchDscp_, matchDscp) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline RuleList& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline RuleList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // qosId Field Functions 
      bool hasQosId() const { return this->qosId_ != nullptr;};
      void deleteQosId() { this->qosId_ = nullptr;};
      inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
      inline RuleList& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


      // queueId Field Functions 
      bool hasQueueId() const { return this->queueId_ != nullptr;};
      void deleteQueueId() { this->queueId_ = nullptr;};
      inline string getQueueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
      inline RuleList& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


      // remarkingDscp Field Functions 
      bool hasRemarkingDscp() const { return this->remarkingDscp_ != nullptr;};
      void deleteRemarkingDscp() { this->remarkingDscp_ = nullptr;};
      inline int32_t getRemarkingDscp() const { DARABONBA_PTR_GET_DEFAULT(remarkingDscp_, 0) };
      inline RuleList& setRemarkingDscp(int32_t remarkingDscp) { DARABONBA_PTR_SET_VALUE(remarkingDscp_, remarkingDscp) };


      // ruleDescription Field Functions 
      bool hasRuleDescription() const { return this->ruleDescription_ != nullptr;};
      void deleteRuleDescription() { this->ruleDescription_ = nullptr;};
      inline string getRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(ruleDescription_, "") };
      inline RuleList& setRuleDescription(string ruleDescription) { DARABONBA_PTR_SET_VALUE(ruleDescription_, ruleDescription) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline RuleList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline RuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // srcCidr Field Functions 
      bool hasSrcCidr() const { return this->srcCidr_ != nullptr;};
      void deleteSrcCidr() { this->srcCidr_ = nullptr;};
      inline string getSrcCidr() const { DARABONBA_PTR_GET_DEFAULT(srcCidr_, "") };
      inline RuleList& setSrcCidr(string srcCidr) { DARABONBA_PTR_SET_VALUE(srcCidr_, srcCidr) };


      // srcIPv6Cidr Field Functions 
      bool hasSrcIPv6Cidr() const { return this->srcIPv6Cidr_ != nullptr;};
      void deleteSrcIPv6Cidr() { this->srcIPv6Cidr_ = nullptr;};
      inline string getSrcIPv6Cidr() const { DARABONBA_PTR_GET_DEFAULT(srcIPv6Cidr_, "") };
      inline RuleList& setSrcIPv6Cidr(string srcIPv6Cidr) { DARABONBA_PTR_SET_VALUE(srcIPv6Cidr_, srcIPv6Cidr) };


      // srcPortRange Field Functions 
      bool hasSrcPortRange() const { return this->srcPortRange_ != nullptr;};
      void deleteSrcPortRange() { this->srcPortRange_ = nullptr;};
      inline string getSrcPortRange() const { DARABONBA_PTR_GET_DEFAULT(srcPortRange_, "") };
      inline RuleList& setSrcPortRange(string srcPortRange) { DARABONBA_PTR_SET_VALUE(srcPortRange_, srcPortRange) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RuleList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The destination IP address IPv4 CIDR block for QoS rule traffic matching.
      // 
      // > You cannot specify this parameter together with **SrcIPv6Cidr** or **DstIPv6Cidr**.
      shared_ptr<string> dstCidr_ {};
      // The destination IP address IPv6 CIDR block for QoS rule traffic matching.
      // 
      // > You cannot specify this parameter together with **SrcCidr** or **DstCidr**.
      shared_ptr<string> dstIPv6Cidr_ {};
      // The destination port range for QoS rule traffic matching. Valid values: **0** to **65535**. A value of -1 indicates no match. Currently, only a single port number can be specified, and the start and end port numbers must be the same. The destination port range is fixed for each protocol type. Valid values:
      // 
      // - **ALL**: -1/-1. Not editable.
      // 
      // - **ICMP(IPv4)**: -1/-1. Not editable.
      // 
      // - **ICMPv6(IPv6)**: -1/-1. Not editable.
      // 
      // - **TCP**: -1/-1. Editable.
      // 
      // - **UDP**: -1/-1. Editable.
      // 
      // - **GRE**: -1/-1. Not editable.
      // 
      // - **SSH**: 22/22. Not editable.
      // 
      // - **Telnet**: 23/23. Not editable.
      // 
      // - **HTTP**: 80/80. Not editable.
      // 
      // - **HTTPS**: 443/443. Not editable.
      // 
      // - **MS SQL**: 1443/1443. Not editable.
      // 
      // - **Oracle**: 1521/1521. Not editable.
      // 
      // - **MySql**: 3306/3306. Not editable.
      // 
      // - **RDP**: 3389/3389. Not editable.
      // 
      // - **PostgreSQL**: 5432/5432. Not editable.
      // 
      // - **Redis**: 6379/6379. Not editable.
      shared_ptr<string> dstPortRange_ {};
      // The DSCP value for QoS rule traffic matching. Valid values: **0** to **63**. A value of -1 indicates no match.
      shared_ptr<int32_t> matchDscp_ {};
      // The priority of the QoS rule. Valid values: **1** to **9000**. A larger value indicates a higher priority. QoS rule priorities must be unique within the same QoS policy.
      shared_ptr<int32_t> priority_ {};
      // The protocol type of the QoS rule. Valid values:
      // 
      // - **ALL**
      // 
      // - **ICMP(IPv4)**
      // 
      // - **ICMPv6(IPv6)**
      // 
      // - **TCP**
      // 
      // - **UDP**
      // 
      // - **GRE**
      // 
      // - **SSH**
      // 
      // - **Telnet**
      // 
      // - **HTTP**
      // 
      // - **HTTPS**
      // 
      // - **MS SQL**
      // 
      // - **Oracle**
      // 
      // - **MySql**
      // 
      // - **RDP**
      // 
      // - **PostgreSQL**
      // 
      // - **Redis**
      shared_ptr<string> protocol_ {};
      // The QoS policy ID.
      shared_ptr<string> qosId_ {};
      // The QoS queue ID.
      shared_ptr<string> queueId_ {};
      // The remarked DSCP value in the traffic. Valid values: **0** to **63**. A value of -1 indicates no remarking.
      shared_ptr<int32_t> remarkingDscp_ {};
      // The description of the QoS rule.
      // 
      // The description must be 0 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> ruleDescription_ {};
      // The QoS rule ID.
      shared_ptr<string> ruleId_ {};
      // The name of the QoS rule.
      // 
      // The name must be 0 to 128 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> ruleName_ {};
      // The source IPv4 CIDR block for QoS rule traffic matching.
      // 
      // > You cannot specify this parameter together with **SrcIPv6Cidr** or **DstIPv6Cidr**.
      shared_ptr<string> srcCidr_ {};
      // The source IPv6 CIDR block for QoS rule traffic matching.
      // 
      // > You cannot specify this parameter together with **SrcCidr** or **DstCidr**.
      shared_ptr<string> srcIPv6Cidr_ {};
      // The source port range for QoS rule traffic matching. Valid values: **0** to **65535**. A value of -1 indicates no match. Currently, only a single port number can be specified, and the start and end port numbers must be the same.
      shared_ptr<string> srcPortRange_ {};
      // The status of the QoS rule. Valid values:
      // 
      // - **Normal**: active.
      // 
      // - **Configuring**: being configured.
      // 
      // - **Deleting**: being deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpressConnectTrafficQosRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<DescribeExpressConnectTrafficQosRuleResponseBody::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<DescribeExpressConnectTrafficQosRuleResponseBody::RuleList>) };
    inline vector<DescribeExpressConnectTrafficQosRuleResponseBody::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<DescribeExpressConnectTrafficQosRuleResponseBody::RuleList>) };
    inline DescribeExpressConnectTrafficQosRuleResponseBody& setRuleList(const vector<DescribeExpressConnectTrafficQosRuleResponseBody::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeExpressConnectTrafficQosRuleResponseBody& setRuleList(vector<DescribeExpressConnectTrafficQosRuleResponseBody::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The QoS rules.
    shared_ptr<vector<DescribeExpressConnectTrafficQosRuleResponseBody::RuleList>> ruleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
