// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSQUEUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSQUEUERESPONSEBODY_HPP_
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
  class DescribeExpressConnectTrafficQosQueueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectTrafficQosQueueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueueList, queueList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectTrafficQosQueueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueueList, queueList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExpressConnectTrafficQosQueueResponseBody() = default ;
    DescribeExpressConnectTrafficQosQueueResponseBody(const DescribeExpressConnectTrafficQosQueueResponseBody &) = default ;
    DescribeExpressConnectTrafficQosQueueResponseBody(DescribeExpressConnectTrafficQosQueueResponseBody &&) = default ;
    DescribeExpressConnectTrafficQosQueueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectTrafficQosQueueResponseBody() = default ;
    DescribeExpressConnectTrafficQosQueueResponseBody& operator=(const DescribeExpressConnectTrafficQosQueueResponseBody &) = default ;
    DescribeExpressConnectTrafficQosQueueResponseBody& operator=(DescribeExpressConnectTrafficQosQueueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueueList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueueList& obj) { 
        DARABONBA_PTR_TO_JSON(BandwidthPercent, bandwidthPercent_);
        DARABONBA_PTR_TO_JSON(QosId, qosId_);
        DARABONBA_PTR_TO_JSON(QueueDescription, queueDescription_);
        DARABONBA_PTR_TO_JSON(QueueId, queueId_);
        DARABONBA_PTR_TO_JSON(QueueName, queueName_);
        DARABONBA_PTR_TO_JSON(QueueType, queueType_);
        DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, QueueList& obj) { 
        DARABONBA_PTR_FROM_JSON(BandwidthPercent, bandwidthPercent_);
        DARABONBA_PTR_FROM_JSON(QosId, qosId_);
        DARABONBA_PTR_FROM_JSON(QueueDescription, queueDescription_);
        DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
        DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
        DARABONBA_PTR_FROM_JSON(QueueType, queueType_);
        DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      QueueList() = default ;
      QueueList(const QueueList &) = default ;
      QueueList(QueueList &&) = default ;
      QueueList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueueList() = default ;
      QueueList& operator=(const QueueList &) = default ;
      QueueList& operator=(QueueList &&) = default ;
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
        // The destination IPv4 CIDR block that matches the QoS rule traffic.
        // 
        // 
        // 
        // > If the parameter is unavailable, specify **SrcIPv6Cidr** or **DstIPv6Cidr**.
        shared_ptr<string> dstCidr_ {};
        // The destination IPv6 CIDR block that matches the QoS rule traffic.
        // 
        // 
        // 
        // > If the parameter is unavailable, specify **SrcCidr** or **DstCidr**.
        shared_ptr<string> dstIPv6Cidr_ {};
        // The range of destination ports that match the QoS rule traffic. Valid values: **0** to **65535**. If the traffic does not match, the value is -1. You can specify only one port. The start port number must be the same as the end port number. Different protocols correspond to different ports. Valid values:
        // 
        // *   **ALL** (uneditable): -1/-1.
        // *   **ICMP(IPv4)** (uneditable): -1/-1.
        // *   **ICMPv6(IPv6)** (uneditable): -1/-1.
        // *   **TCP** (editable): -1/-1.
        // *   **UDP** (editable): -1/-1.
        // *   **GRE** (uneditable): -1/-1.
        // *   **SSH** (uneditable): 22/22.
        // *   **Telnet** (uneditable): 23/23.
        // *   **HTTP** (uneditable): 80/80.
        // *   **HTTPS** (uneditable): 443/443.
        // *   **MS SQL** (uneditable): 1443/1443.
        // *   **Oracle** (uneditable): 1521/1521.
        // *   **MySql** (uneditable): 3306/3306.
        // *   **RDP** (uneditable): 3389/3389.
        // *   **PostgreSQL** (uneditable): 5432/5432.
        // *   **Redis** (uneditable): 6379/6379.
        shared_ptr<string> dstPortRange_ {};
        // The DSCP value that matches the QoS rule traffic. Valid values: **0** to **63**. If no value is matched, the value is -1.
        shared_ptr<int32_t> matchDscp_ {};
        // The priority of the QoS rule. Valid values: **1** to **9000**. A larger value indicates a higher priority. The priority of each QoS rule must be unique in the same QoS policy.
        shared_ptr<int32_t> priority_ {};
        // The protocol of the QoS rule. Valid values:
        // 
        // *   **ALL**
        // *   **ICMP(IPv4)**
        // *   **ICMPv6(IPv6)**
        // *   **TCP**
        // *   **UDP**
        // *   **GRE**
        // *   **SSH**
        // *   **Telnet**
        // *   **HTTP**
        // *   **HTTPS**
        // *   **MS SQL**
        // *   **Oracle**
        // *   **MySql**
        // *   **RDP**
        // *   **PostgreSQL**
        // *   **Redis**
        shared_ptr<string> protocol_ {};
        // The ID of the QoS policy.
        shared_ptr<string> qosId_ {};
        // The ID of the QoS queue.
        shared_ptr<string> queueId_ {};
        // The new DSCP value. Valid values: **0** to **63**. If you do not change the value, the value is -1.
        shared_ptr<int32_t> remarkingDscp_ {};
        // The description of the QoS rule.
        // 
        // The name must be **0** to **256** characters in length and cannot start with `http://` or `https://`.
        shared_ptr<string> ruleDescription_ {};
        // The ID of the QoS rule.
        shared_ptr<string> ruleId_ {};
        // The name of the QoS rule.
        // 
        // The name must be **0** to **128** characters in length and cannot start with `http://` or `https://`.
        shared_ptr<string> ruleName_ {};
        // The source IPv4 CIDR block that matches the QoS rule traffic.
        // 
        // 
        // 
        //  > If the parameter is unavailable, specify **SrcIPv6Cidr** or **DstIPv6Cidr**.
        shared_ptr<string> srcCidr_ {};
        // The source IPv6 CIDR block that matches the QoS rule traffic.
        // 
        // 
        // 
        // > If the parameter is unavailable, specify **SrcCidr** or **DstCidr**.
        shared_ptr<string> srcIPv6Cidr_ {};
        // The range of source ports that match the QoS rule traffic. Valid values: **0** to **65535**. If the traffic does not match, the value is -1. You can specify only one port. The start port number must be the same as the end port number.
        shared_ptr<string> srcPortRange_ {};
        // The status of the QoS rule. Valid values:
        // 
        // *   **Normal**: The QoS queue is available.
        // *   **Configuring**: The QoS queue is being configured.
        // *   **Deleting**: The QoS queue is being deleted.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->bandwidthPercent_ == nullptr
        && this->qosId_ == nullptr && this->queueDescription_ == nullptr && this->queueId_ == nullptr && this->queueName_ == nullptr && this->queueType_ == nullptr
        && this->ruleList_ == nullptr && this->status_ == nullptr; };
      // bandwidthPercent Field Functions 
      bool hasBandwidthPercent() const { return this->bandwidthPercent_ != nullptr;};
      void deleteBandwidthPercent() { this->bandwidthPercent_ = nullptr;};
      inline string getBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPercent_, "") };
      inline QueueList& setBandwidthPercent(string bandwidthPercent) { DARABONBA_PTR_SET_VALUE(bandwidthPercent_, bandwidthPercent) };


      // qosId Field Functions 
      bool hasQosId() const { return this->qosId_ != nullptr;};
      void deleteQosId() { this->qosId_ = nullptr;};
      inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
      inline QueueList& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


      // queueDescription Field Functions 
      bool hasQueueDescription() const { return this->queueDescription_ != nullptr;};
      void deleteQueueDescription() { this->queueDescription_ = nullptr;};
      inline string getQueueDescription() const { DARABONBA_PTR_GET_DEFAULT(queueDescription_, "") };
      inline QueueList& setQueueDescription(string queueDescription) { DARABONBA_PTR_SET_VALUE(queueDescription_, queueDescription) };


      // queueId Field Functions 
      bool hasQueueId() const { return this->queueId_ != nullptr;};
      void deleteQueueId() { this->queueId_ = nullptr;};
      inline string getQueueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
      inline QueueList& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline QueueList& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // queueType Field Functions 
      bool hasQueueType() const { return this->queueType_ != nullptr;};
      void deleteQueueType() { this->queueType_ = nullptr;};
      inline string getQueueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
      inline QueueList& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


      // ruleList Field Functions 
      bool hasRuleList() const { return this->ruleList_ != nullptr;};
      void deleteRuleList() { this->ruleList_ = nullptr;};
      inline const vector<QueueList::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<QueueList::RuleList>) };
      inline vector<QueueList::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<QueueList::RuleList>) };
      inline QueueList& setRuleList(const vector<QueueList::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
      inline QueueList& setRuleList(vector<QueueList::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline QueueList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The percentage of bandwidth allocated to a QoS queue.
      // 
      // *   If QueueType is set to **Medium**, this parameter is returned. Valid values: **1** to **100**.
      // *   If QueueType is set to **Default**, a value of - is returned.
      shared_ptr<string> bandwidthPercent_ {};
      // The ID of the QoS policy.
      shared_ptr<string> qosId_ {};
      // The description of the QoS queue.
      // 
      // The name must be **0** to **256** characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> queueDescription_ {};
      // The ID of the QoS queue.
      shared_ptr<string> queueId_ {};
      // The name of the QoS queue.
      // 
      // The name must be **0** to **128** characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> queueName_ {};
      // The priority of the QoS queue. Valid values:
      // 
      // *   **High**
      // *   **Medium**
      // *   **Default**
      // 
      // 
      // 
      // >  You cannot create a QoS queue of the default priority.
      shared_ptr<string> queueType_ {};
      // The information about the QoS rules.
      shared_ptr<vector<QueueList::RuleList>> ruleList_ {};
      // The state of the QoS queue. Valid values:
      // 
      // *   **Normal**: The QoS queue is available.
      // *   **Configuring**: The QoS queue is being configured.
      // *   **Deleting**: The QoS queue is being deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->queueList_ == nullptr
        && this->requestId_ == nullptr; };
    // queueList Field Functions 
    bool hasQueueList() const { return this->queueList_ != nullptr;};
    void deleteQueueList() { this->queueList_ = nullptr;};
    inline const vector<DescribeExpressConnectTrafficQosQueueResponseBody::QueueList> & getQueueList() const { DARABONBA_PTR_GET_CONST(queueList_, vector<DescribeExpressConnectTrafficQosQueueResponseBody::QueueList>) };
    inline vector<DescribeExpressConnectTrafficQosQueueResponseBody::QueueList> getQueueList() { DARABONBA_PTR_GET(queueList_, vector<DescribeExpressConnectTrafficQosQueueResponseBody::QueueList>) };
    inline DescribeExpressConnectTrafficQosQueueResponseBody& setQueueList(const vector<DescribeExpressConnectTrafficQosQueueResponseBody::QueueList> & queueList) { DARABONBA_PTR_SET_VALUE(queueList_, queueList) };
    inline DescribeExpressConnectTrafficQosQueueResponseBody& setQueueList(vector<DescribeExpressConnectTrafficQosQueueResponseBody::QueueList> && queueList) { DARABONBA_PTR_SET_RVALUE(queueList_, queueList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpressConnectTrafficQosQueueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the QoS queues.
    shared_ptr<vector<DescribeExpressConnectTrafficQosQueueResponseBody::QueueList>> queueList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
