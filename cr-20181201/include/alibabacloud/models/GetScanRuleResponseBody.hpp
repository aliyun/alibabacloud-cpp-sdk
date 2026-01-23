// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCANRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCANRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetScanRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScanRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanRule, scanRule_);
    };
    friend void from_json(const Darabonba::Json& j, GetScanRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanRule, scanRule_);
    };
    GetScanRuleResponseBody() = default ;
    GetScanRuleResponseBody(const GetScanRuleResponseBody &) = default ;
    GetScanRuleResponseBody(GetScanRuleResponseBody &&) = default ;
    GetScanRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScanRuleResponseBody() = default ;
    GetScanRuleResponseBody& operator=(const GetScanRuleResponseBody &) = default ;
    GetScanRuleResponseBody& operator=(GetScanRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScanRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScanRule& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
        DARABONBA_PTR_TO_JSON(RepoNames, repoNames_);
        DARABONBA_PTR_TO_JSON(RepoTagFilterPattern, repoTagFilterPattern_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(ScanRuleId, scanRuleId_);
        DARABONBA_PTR_TO_JSON(ScanScope, scanScope_);
        DARABONBA_PTR_TO_JSON(ScanType, scanType_);
        DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ScanRule& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
        DARABONBA_PTR_FROM_JSON(RepoNames, repoNames_);
        DARABONBA_PTR_FROM_JSON(RepoTagFilterPattern, repoTagFilterPattern_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(ScanRuleId, scanRuleId_);
        DARABONBA_PTR_FROM_JSON(ScanScope, scanScope_);
        DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
        DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ScanRule() = default ;
      ScanRule(const ScanRule &) = default ;
      ScanRule(ScanRule &&) = default ;
      ScanRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScanRule() = default ;
      ScanRule& operator=(const ScanRule &) = default ;
      ScanRule& operator=(ScanRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->instanceId_ == nullptr && this->namespaces_ == nullptr && this->repoNames_ == nullptr && this->repoTagFilterPattern_ == nullptr && this->ruleName_ == nullptr
        && this->scanRuleId_ == nullptr && this->scanScope_ == nullptr && this->scanType_ == nullptr && this->triggerType_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ScanRule& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ScanRule& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // namespaces Field Functions 
      bool hasNamespaces() const { return this->namespaces_ != nullptr;};
      void deleteNamespaces() { this->namespaces_ = nullptr;};
      inline const vector<string> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
      inline vector<string> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
      inline ScanRule& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
      inline ScanRule& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


      // repoNames Field Functions 
      bool hasRepoNames() const { return this->repoNames_ != nullptr;};
      void deleteRepoNames() { this->repoNames_ = nullptr;};
      inline const vector<string> & getRepoNames() const { DARABONBA_PTR_GET_CONST(repoNames_, vector<string>) };
      inline vector<string> getRepoNames() { DARABONBA_PTR_GET(repoNames_, vector<string>) };
      inline ScanRule& setRepoNames(const vector<string> & repoNames) { DARABONBA_PTR_SET_VALUE(repoNames_, repoNames) };
      inline ScanRule& setRepoNames(vector<string> && repoNames) { DARABONBA_PTR_SET_RVALUE(repoNames_, repoNames) };


      // repoTagFilterPattern Field Functions 
      bool hasRepoTagFilterPattern() const { return this->repoTagFilterPattern_ != nullptr;};
      void deleteRepoTagFilterPattern() { this->repoTagFilterPattern_ = nullptr;};
      inline string getRepoTagFilterPattern() const { DARABONBA_PTR_GET_DEFAULT(repoTagFilterPattern_, "") };
      inline ScanRule& setRepoTagFilterPattern(string repoTagFilterPattern) { DARABONBA_PTR_SET_VALUE(repoTagFilterPattern_, repoTagFilterPattern) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline ScanRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // scanRuleId Field Functions 
      bool hasScanRuleId() const { return this->scanRuleId_ != nullptr;};
      void deleteScanRuleId() { this->scanRuleId_ = nullptr;};
      inline string getScanRuleId() const { DARABONBA_PTR_GET_DEFAULT(scanRuleId_, "") };
      inline ScanRule& setScanRuleId(string scanRuleId) { DARABONBA_PTR_SET_VALUE(scanRuleId_, scanRuleId) };


      // scanScope Field Functions 
      bool hasScanScope() const { return this->scanScope_ != nullptr;};
      void deleteScanScope() { this->scanScope_ = nullptr;};
      inline string getScanScope() const { DARABONBA_PTR_GET_DEFAULT(scanScope_, "") };
      inline ScanRule& setScanScope(string scanScope) { DARABONBA_PTR_SET_VALUE(scanScope_, scanScope) };


      // scanType Field Functions 
      bool hasScanType() const { return this->scanType_ != nullptr;};
      void deleteScanType() { this->scanType_ = nullptr;};
      inline string getScanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
      inline ScanRule& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline ScanRule& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ScanRule& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // Names of namespaces where the event is effective.
      shared_ptr<vector<string>> namespaces_ {};
      // Names of repositories where the event is effective.
      shared_ptr<vector<string>> repoNames_ {};
      // Tag filter pattern for event triggering.
      shared_ptr<string> repoTagFilterPattern_ {};
      // The event rule name.
      shared_ptr<string> ruleName_ {};
      // The scan rule ID.
      shared_ptr<string> scanRuleId_ {};
      // The scan scope.
      shared_ptr<string> scanScope_ {};
      // The vulnerability type: 
      // 
      // - `cve`: System vulnerability
      // 
      // - `sca`: Application vulnerability
      shared_ptr<string> scanType_ {};
      // The trigger type, valid values:
      // 
      // - `ALL`: All triggers
      // 
      // - `TAG_LISTTAG`: Trigger
      // 
      // - `TAG_REG_EXP`: Expression trigger
      shared_ptr<string> triggerType_ {};
      // The update time.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->requestId_ == nullptr && this->scanRule_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetScanRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetScanRuleResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScanRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanRule Field Functions 
    bool hasScanRule() const { return this->scanRule_ != nullptr;};
    void deleteScanRule() { this->scanRule_ = nullptr;};
    inline const GetScanRuleResponseBody::ScanRule & getScanRule() const { DARABONBA_PTR_GET_CONST(scanRule_, GetScanRuleResponseBody::ScanRule) };
    inline GetScanRuleResponseBody::ScanRule getScanRule() { DARABONBA_PTR_GET(scanRule_, GetScanRuleResponseBody::ScanRule) };
    inline GetScanRuleResponseBody& setScanRule(const GetScanRuleResponseBody::ScanRule & scanRule) { DARABONBA_PTR_SET_VALUE(scanRule_, scanRule) };
    inline GetScanRuleResponseBody& setScanRule(GetScanRuleResponseBody::ScanRule && scanRule) { DARABONBA_PTR_SET_RVALUE(scanRule_, scanRule) };


  protected:
    // Return value
    shared_ptr<string> code_ {};
    // Indicates whether the API call was successful, valid values:
    // 
    // - `true`: The API call was successful
    // 
    // - `false`: The API call failed
    shared_ptr<bool> isSuccess_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The scan rule.
    shared_ptr<GetScanRuleResponseBody::ScanRule> scanRule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
