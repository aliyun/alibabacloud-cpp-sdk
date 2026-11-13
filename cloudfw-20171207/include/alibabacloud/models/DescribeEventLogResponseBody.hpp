// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTLOGRESPONSEBODY_HPP_
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
  class DescribeEventLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEventLogResponseBody() = default ;
    DescribeEventLogResponseBody(const DescribeEventLogResponseBody &) = default ;
    DescribeEventLogResponseBody(DescribeEventLogResponseBody &&) = default ;
    DescribeEventLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventLogResponseBody() = default ;
    DescribeEventLogResponseBody& operator=(const DescribeEventLogResponseBody &) = default ;
    DescribeEventLogResponseBody& operator=(DescribeEventLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(AttackApp, attackApp_);
        DARABONBA_PTR_TO_JSON(AttackType, attackType_);
        DARABONBA_PTR_TO_JSON(Direction, direction_);
        DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
        DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
        DARABONBA_PTR_TO_JSON(HitContent, hitContent_);
        DARABONBA_PTR_TO_JSON(HitType, hitType_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleResult, ruleResult_);
        DARABONBA_PTR_TO_JSON(RuleSource, ruleSource_);
        DARABONBA_PTR_TO_JSON(Sni, sni_);
        DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
        DARABONBA_PTR_TO_JSON(SrcPort, srcPort_);
        DARABONBA_PTR_TO_JSON(SslCipher, sslCipher_);
        DARABONBA_PTR_TO_JSON(SslErrorIndex, sslErrorIndex_);
        DARABONBA_PTR_TO_JSON(SslErrorMsg, sslErrorMsg_);
        DARABONBA_PTR_TO_JSON(SslHandshakeRes, sslHandshakeRes_);
        DARABONBA_PTR_TO_JSON(SslProtocol, sslProtocol_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(VulLevel, vulLevel_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(AttackApp, attackApp_);
        DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
        DARABONBA_PTR_FROM_JSON(Direction, direction_);
        DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
        DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
        DARABONBA_PTR_FROM_JSON(HitContent, hitContent_);
        DARABONBA_PTR_FROM_JSON(HitType, hitType_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleResult, ruleResult_);
        DARABONBA_PTR_FROM_JSON(RuleSource, ruleSource_);
        DARABONBA_PTR_FROM_JSON(Sni, sni_);
        DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
        DARABONBA_PTR_FROM_JSON(SrcPort, srcPort_);
        DARABONBA_PTR_FROM_JSON(SslCipher, sslCipher_);
        DARABONBA_PTR_FROM_JSON(SslErrorIndex, sslErrorIndex_);
        DARABONBA_PTR_FROM_JSON(SslErrorMsg, sslErrorMsg_);
        DARABONBA_PTR_FROM_JSON(SslHandshakeRes, sslHandshakeRes_);
        DARABONBA_PTR_FROM_JSON(SslProtocol, sslProtocol_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(VulLevel, vulLevel_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->attackApp_ == nullptr && this->attackType_ == nullptr && this->direction_ == nullptr && this->dstIP_ == nullptr && this->dstPort_ == nullptr
        && this->hitContent_ == nullptr && this->hitType_ == nullptr && this->ipProtocol_ == nullptr && this->memberUid_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->ruleResult_ == nullptr && this->ruleSource_ == nullptr && this->sni_ == nullptr && this->srcIP_ == nullptr
        && this->srcPort_ == nullptr && this->sslCipher_ == nullptr && this->sslErrorIndex_ == nullptr && this->sslErrorMsg_ == nullptr && this->sslHandshakeRes_ == nullptr
        && this->sslProtocol_ == nullptr && this->startTime_ == nullptr && this->url_ == nullptr && this->vulLevel_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline DataList& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // attackApp Field Functions 
      bool hasAttackApp() const { return this->attackApp_ != nullptr;};
      void deleteAttackApp() { this->attackApp_ = nullptr;};
      inline string getAttackApp() const { DARABONBA_PTR_GET_DEFAULT(attackApp_, "") };
      inline DataList& setAttackApp(string attackApp) { DARABONBA_PTR_SET_VALUE(attackApp_, attackApp) };


      // attackType Field Functions 
      bool hasAttackType() const { return this->attackType_ != nullptr;};
      void deleteAttackType() { this->attackType_ = nullptr;};
      inline int64_t getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0L) };
      inline DataList& setAttackType(int64_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
      inline DataList& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


      // dstIP Field Functions 
      bool hasDstIP() const { return this->dstIP_ != nullptr;};
      void deleteDstIP() { this->dstIP_ = nullptr;};
      inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
      inline DataList& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


      // dstPort Field Functions 
      bool hasDstPort() const { return this->dstPort_ != nullptr;};
      void deleteDstPort() { this->dstPort_ = nullptr;};
      inline int32_t getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0) };
      inline DataList& setDstPort(int32_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


      // hitContent Field Functions 
      bool hasHitContent() const { return this->hitContent_ != nullptr;};
      void deleteHitContent() { this->hitContent_ = nullptr;};
      inline string getHitContent() const { DARABONBA_PTR_GET_DEFAULT(hitContent_, "") };
      inline DataList& setHitContent(string hitContent) { DARABONBA_PTR_SET_VALUE(hitContent_, hitContent) };


      // hitType Field Functions 
      bool hasHitType() const { return this->hitType_ != nullptr;};
      void deleteHitType() { this->hitType_ = nullptr;};
      inline string getHitType() const { DARABONBA_PTR_GET_DEFAULT(hitType_, "") };
      inline DataList& setHitType(string hitType) { DARABONBA_PTR_SET_VALUE(hitType_, hitType) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline DataList& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline int64_t getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
      inline DataList& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline DataList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline DataList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleResult Field Functions 
      bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
      void deleteRuleResult() { this->ruleResult_ = nullptr;};
      inline int32_t getRuleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, 0) };
      inline DataList& setRuleResult(int32_t ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


      // ruleSource Field Functions 
      bool hasRuleSource() const { return this->ruleSource_ != nullptr;};
      void deleteRuleSource() { this->ruleSource_ = nullptr;};
      inline int64_t getRuleSource() const { DARABONBA_PTR_GET_DEFAULT(ruleSource_, 0L) };
      inline DataList& setRuleSource(int64_t ruleSource) { DARABONBA_PTR_SET_VALUE(ruleSource_, ruleSource) };


      // sni Field Functions 
      bool hasSni() const { return this->sni_ != nullptr;};
      void deleteSni() { this->sni_ = nullptr;};
      inline string getSni() const { DARABONBA_PTR_GET_DEFAULT(sni_, "") };
      inline DataList& setSni(string sni) { DARABONBA_PTR_SET_VALUE(sni_, sni) };


      // srcIP Field Functions 
      bool hasSrcIP() const { return this->srcIP_ != nullptr;};
      void deleteSrcIP() { this->srcIP_ = nullptr;};
      inline string getSrcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
      inline DataList& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


      // srcPort Field Functions 
      bool hasSrcPort() const { return this->srcPort_ != nullptr;};
      void deleteSrcPort() { this->srcPort_ = nullptr;};
      inline int32_t getSrcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, 0) };
      inline DataList& setSrcPort(int32_t srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


      // sslCipher Field Functions 
      bool hasSslCipher() const { return this->sslCipher_ != nullptr;};
      void deleteSslCipher() { this->sslCipher_ = nullptr;};
      inline string getSslCipher() const { DARABONBA_PTR_GET_DEFAULT(sslCipher_, "") };
      inline DataList& setSslCipher(string sslCipher) { DARABONBA_PTR_SET_VALUE(sslCipher_, sslCipher) };


      // sslErrorIndex Field Functions 
      bool hasSslErrorIndex() const { return this->sslErrorIndex_ != nullptr;};
      void deleteSslErrorIndex() { this->sslErrorIndex_ = nullptr;};
      inline string getSslErrorIndex() const { DARABONBA_PTR_GET_DEFAULT(sslErrorIndex_, "") };
      inline DataList& setSslErrorIndex(string sslErrorIndex) { DARABONBA_PTR_SET_VALUE(sslErrorIndex_, sslErrorIndex) };


      // sslErrorMsg Field Functions 
      bool hasSslErrorMsg() const { return this->sslErrorMsg_ != nullptr;};
      void deleteSslErrorMsg() { this->sslErrorMsg_ = nullptr;};
      inline string getSslErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(sslErrorMsg_, "") };
      inline DataList& setSslErrorMsg(string sslErrorMsg) { DARABONBA_PTR_SET_VALUE(sslErrorMsg_, sslErrorMsg) };


      // sslHandshakeRes Field Functions 
      bool hasSslHandshakeRes() const { return this->sslHandshakeRes_ != nullptr;};
      void deleteSslHandshakeRes() { this->sslHandshakeRes_ = nullptr;};
      inline string getSslHandshakeRes() const { DARABONBA_PTR_GET_DEFAULT(sslHandshakeRes_, "") };
      inline DataList& setSslHandshakeRes(string sslHandshakeRes) { DARABONBA_PTR_SET_VALUE(sslHandshakeRes_, sslHandshakeRes) };


      // sslProtocol Field Functions 
      bool hasSslProtocol() const { return this->sslProtocol_ != nullptr;};
      void deleteSslProtocol() { this->sslProtocol_ = nullptr;};
      inline string getSslProtocol() const { DARABONBA_PTR_GET_DEFAULT(sslProtocol_, "") };
      inline DataList& setSslProtocol(string sslProtocol) { DARABONBA_PTR_SET_VALUE(sslProtocol_, sslProtocol) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline DataList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline DataList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // vulLevel Field Functions 
      bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
      void deleteVulLevel() { this->vulLevel_ = nullptr;};
      inline int64_t getVulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, 0L) };
      inline DataList& setVulLevel(int64_t vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


    protected:
      // The application type supported by the access control policy. We recommend that you use ApplicationNameList. Valid values:
      // - **FTP**
      // - **HTTP**
      // - **HTTPS**
      // - **Memcache**
      // - **MongoDB**
      // - **MQTT**
      // - **MySQL**
      // - **RDP**
      // - **Redis**
      // - **SMTP**
      // - **SMTPS**
      // - **SSH**
      // - **SSL**
      // - **VNC**
      // - **ANY**: All application types.
      shared_ptr<string> applicationName_ {};
      // The name of the attacked application.
      shared_ptr<string> attackApp_ {};
      // The attack type of the intrusion prevention event. Valid values:
      // - **1**: Abnormal connection.
      // - **2**: Command execution.
      // - **3**: Brute-force attack.
      // - **4**: Scan.
      // - **5**: Other.
      // - **6**: Information leakage.
      // - **7**: DoS attack.
      // - **8**: Overflow attack.
      // - **9**: Web attack.
      // - **10**: Trojan or backdoor.
      // - **11**: Virus or worm.
      // - **12**: Mining behavior.
      // - **13**: Reverse shell.
      shared_ptr<int64_t> attackType_ {};
      // The traffic direction of the intrusion prevention event. Valid values:
      // - **in**: Inbound.
      // - **out**: Outbound.
      shared_ptr<string> direction_ {};
      // The queried destination IP address. This indicates that the intrusion prevention event involves this destination IP address.
      shared_ptr<string> dstIP_ {};
      // The destination port.
      shared_ptr<int32_t> dstPort_ {};
      // The matched content.
      shared_ptr<string> hitContent_ {};
      // The match type.
      shared_ptr<string> hitType_ {};
      // The protocol type.
      shared_ptr<string> ipProtocol_ {};
      // The UID of the Cloud Firewall member account.
      shared_ptr<int64_t> memberUid_ {};
      // The ID of the protection rule for the intrusion prevention event.
      shared_ptr<string> ruleId_ {};
      // The name of the rule.
      shared_ptr<string> ruleName_ {};
      // The defense status. Valid values:
      // - **1**: Alert.
      // - **2**: Block.
      shared_ptr<int32_t> ruleResult_ {};
      // The source of the detection rule for the intrusion prevention event. Valid values:
      // - **1**: Basic protection.
      // - **2**: Virtual Patches.
      // - **4**: Threat intelligence.
      shared_ptr<int64_t> ruleSource_ {};
      // The SNI used when the TLS connection is established.
      shared_ptr<string> sni_ {};
      // The queried source IP address. This indicates that the intrusion prevention event involves this source IP address.
      shared_ptr<string> srcIP_ {};
      // The source port.
      shared_ptr<int32_t> srcPort_ {};
      // The cipher suite used for TLS handshake negotiation, such as TLS_AES_128_GCM_SHA256.
      shared_ptr<string> sslCipher_ {};
      // The phase in which the TLS handshake fails, such as Certificate.
      shared_ptr<string> sslErrorIndex_ {};
      // The reason for the TLS handshake failure, such as BAD_PACKET_LENGTH.
      shared_ptr<string> sslErrorMsg_ {};
      // The TLS handshake result. For example, success indicates that the handshake is successful.
      shared_ptr<string> sslHandshakeRes_ {};
      // The TLS version, such as TLSv1.3.
      shared_ptr<string> sslProtocol_ {};
      // The start time of the data. The value is a timestamp in seconds.
      shared_ptr<int64_t> startTime_ {};
      // The URL path.
      shared_ptr<string> url_ {};
      // The severity level of the intrusion prevention event. Valid values:
      // - **1**: Low.
      // - **2**: Medium.
      // - **3**: High.
      shared_ptr<int64_t> vulLevel_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeEventLogResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeEventLogResponseBody::DataList>) };
    inline vector<DescribeEventLogResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeEventLogResponseBody::DataList>) };
    inline DescribeEventLogResponseBody& setDataList(const vector<DescribeEventLogResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeEventLogResponseBody& setDataList(vector<DescribeEventLogResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeEventLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of ISPs.
    shared_ptr<vector<DescribeEventLogResponseBody::DataList>> dataList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
