// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeEventLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_TO_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_FROM_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeEventLogRequest() = default ;
    DescribeEventLogRequest(const DescribeEventLogRequest &) = default ;
    DescribeEventLogRequest(DescribeEventLogRequest &&) = default ;
    DescribeEventLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventLogRequest() = default ;
    DescribeEventLogRequest& operator=(const DescribeEventLogRequest &) = default ;
    DescribeEventLogRequest& operator=(DescribeEventLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackType_ == nullptr
        && this->currentPage_ == nullptr && this->dstIP_ == nullptr && this->endTime_ == nullptr && this->firewallType_ == nullptr && this->lang_ == nullptr
        && this->logType_ == nullptr && this->pageSize_ == nullptr && this->ruleResult_ == nullptr && this->sourceCode_ == nullptr && this->sourceIp_ == nullptr
        && this->srcIP_ == nullptr && this->startTime_ == nullptr; };
    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline int64_t getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0L) };
    inline DescribeEventLogRequest& setAttackType(int64_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeEventLogRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeEventLogRequest& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeEventLogRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // firewallType Field Functions 
    bool hasFirewallType() const { return this->firewallType_ != nullptr;};
    void deleteFirewallType() { this->firewallType_ = nullptr;};
    inline string getFirewallType() const { DARABONBA_PTR_GET_DEFAULT(firewallType_, "") };
    inline DescribeEventLogRequest& setFirewallType(string firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeEventLogRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline DescribeEventLogRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeEventLogRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleResult Field Functions 
    bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
    void deleteRuleResult() { this->ruleResult_ = nullptr;};
    inline string getRuleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, "") };
    inline DescribeEventLogRequest& setRuleResult(string ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


    // sourceCode Field Functions 
    bool hasSourceCode() const { return this->sourceCode_ != nullptr;};
    void deleteSourceCode() { this->sourceCode_ = nullptr;};
    inline string getSourceCode() const { DARABONBA_PTR_GET_DEFAULT(sourceCode_, "") };
    inline DescribeEventLogRequest& setSourceCode(string sourceCode) { DARABONBA_PTR_SET_VALUE(sourceCode_, sourceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeEventLogRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // srcIP Field Functions 
    bool hasSrcIP() const { return this->srcIP_ != nullptr;};
    void deleteSrcIP() { this->srcIP_ = nullptr;};
    inline string getSrcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
    inline DescribeEventLogRequest& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeEventLogRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
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
    // 
    // > If this parameter is not specified, all attack types are queried.
    shared_ptr<int64_t> attackType_ {};
    // The page number for a paged query.
    shared_ptr<string> currentPage_ {};
    // The destination IP address to query. If you specify this parameter, the intrusion prevention events that involve this destination IP address are queried.
    shared_ptr<string> dstIP_ {};
    // The end time of the query. The value is a UNIX timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The type of Cloud Firewall. Valid values:
    // - **VpcFirewall**: virtual private cloud (VPC) firewalls.
    // - **InternetFirewall** (default): the Internet Border firewall.
    shared_ptr<string> firewallType_ {};
    // The language for receiving messages.
    shared_ptr<string> lang_ {};
    // The log type.
    shared_ptr<string> logType_ {};
    // The number of entries to return on each page.
    // 
    // Default value: **6**, which indicates that 6 entries are returned on each page. Maximum value: **10**.
    shared_ptr<string> pageSize_ {};
    // The defense status of Cloud Firewall. Valid values:
    // - **1**: Alert.
    // - **2**: Block.
    // 
    // > If you do not specify this parameter, events of all defense statuses are queried.
    shared_ptr<string> ruleResult_ {};
    // The tracing code.
    // 
    // This parameter is required.
    shared_ptr<string> sourceCode_ {};
    // The source IP address of the visitor.
    shared_ptr<string> sourceIp_ {};
    // The source IP address to query. If you specify this parameter, the intrusion prevention events that involve this source IP address are queried.
    shared_ptr<string> srcIP_ {};
    // The start time of the query. The value is a UNIX timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
