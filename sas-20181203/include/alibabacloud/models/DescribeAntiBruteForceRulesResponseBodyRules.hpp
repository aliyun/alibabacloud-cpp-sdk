// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANTIBRUTEFORCERULESRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANTIBRUTEFORCERULESRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAntiBruteForceRulesResponseBodyRulesProtocolType.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAntiBruteForceRulesResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAntiBruteForceRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_TO_JSON(EnableSmartRule, enableSmartRule_);
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(ForbiddenTime, forbiddenTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MachineCount, machineCount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Span, span_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAntiBruteForceRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_FROM_JSON(EnableSmartRule, enableSmartRule_);
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(ForbiddenTime, forbiddenTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MachineCount, machineCount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Span, span_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    DescribeAntiBruteForceRulesResponseBodyRules() = default ;
    DescribeAntiBruteForceRulesResponseBodyRules(const DescribeAntiBruteForceRulesResponseBodyRules &) = default ;
    DescribeAntiBruteForceRulesResponseBodyRules(DescribeAntiBruteForceRulesResponseBodyRules &&) = default ;
    DescribeAntiBruteForceRulesResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAntiBruteForceRulesResponseBodyRules() = default ;
    DescribeAntiBruteForceRulesResponseBodyRules& operator=(const DescribeAntiBruteForceRulesResponseBodyRules &) = default ;
    DescribeAntiBruteForceRulesResponseBodyRules& operator=(DescribeAntiBruteForceRulesResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimestamp_ != nullptr
        && this->defaultRule_ != nullptr && this->enableSmartRule_ != nullptr && this->failCount_ != nullptr && this->forbiddenTime_ != nullptr && this->id_ != nullptr
        && this->machineCount_ != nullptr && this->name_ != nullptr && this->protocolType_ != nullptr && this->span_ != nullptr && this->uuidList_ != nullptr; };
    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeAntiBruteForceRulesResponseBodyRules& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // defaultRule Field Functions 
    bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
    void deleteDefaultRule() { this->defaultRule_ = nullptr;};
    inline bool defaultRule() const { DARABONBA_PTR_GET_DEFAULT(defaultRule_, false) };
    inline DescribeAntiBruteForceRulesResponseBodyRules& setDefaultRule(bool defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };


    // enableSmartRule Field Functions 
    bool hasEnableSmartRule() const { return this->enableSmartRule_ != nullptr;};
    void deleteEnableSmartRule() { this->enableSmartRule_ = nullptr;};
    inline bool enableSmartRule() const { DARABONBA_PTR_GET_DEFAULT(enableSmartRule_, false) };
    inline DescribeAntiBruteForceRulesResponseBodyRules& setEnableSmartRule(bool enableSmartRule) { DARABONBA_PTR_SET_VALUE(enableSmartRule_, enableSmartRule) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline DescribeAntiBruteForceRulesResponseBodyRules& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // forbiddenTime Field Functions 
    bool hasForbiddenTime() const { return this->forbiddenTime_ != nullptr;};
    void deleteForbiddenTime() { this->forbiddenTime_ = nullptr;};
    inline int32_t forbiddenTime() const { DARABONBA_PTR_GET_DEFAULT(forbiddenTime_, 0) };
    inline DescribeAntiBruteForceRulesResponseBodyRules& setForbiddenTime(int32_t forbiddenTime) { DARABONBA_PTR_SET_VALUE(forbiddenTime_, forbiddenTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeAntiBruteForceRulesResponseBodyRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // machineCount Field Functions 
    bool hasMachineCount() const { return this->machineCount_ != nullptr;};
    void deleteMachineCount() { this->machineCount_ = nullptr;};
    inline int32_t machineCount() const { DARABONBA_PTR_GET_DEFAULT(machineCount_, 0) };
    inline DescribeAntiBruteForceRulesResponseBodyRules& setMachineCount(int32_t machineCount) { DARABONBA_PTR_SET_VALUE(machineCount_, machineCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAntiBruteForceRulesResponseBodyRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline const Models::DescribeAntiBruteForceRulesResponseBodyRulesProtocolType & protocolType() const { DARABONBA_PTR_GET_CONST(protocolType_, Models::DescribeAntiBruteForceRulesResponseBodyRulesProtocolType) };
    inline Models::DescribeAntiBruteForceRulesResponseBodyRulesProtocolType protocolType() { DARABONBA_PTR_GET(protocolType_, Models::DescribeAntiBruteForceRulesResponseBodyRulesProtocolType) };
    inline DescribeAntiBruteForceRulesResponseBodyRules& setProtocolType(const Models::DescribeAntiBruteForceRulesResponseBodyRulesProtocolType & protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };
    inline DescribeAntiBruteForceRulesResponseBodyRules& setProtocolType(Models::DescribeAntiBruteForceRulesResponseBodyRulesProtocolType && protocolType) { DARABONBA_PTR_SET_RVALUE(protocolType_, protocolType) };


    // span Field Functions 
    bool hasSpan() const { return this->span_ != nullptr;};
    void deleteSpan() { this->span_ = nullptr;};
    inline int32_t span() const { DARABONBA_PTR_GET_DEFAULT(span_, 0) };
    inline DescribeAntiBruteForceRulesResponseBodyRules& setSpan(int32_t span) { DARABONBA_PTR_SET_VALUE(span_, span) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & uuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> uuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline DescribeAntiBruteForceRulesResponseBodyRules& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline DescribeAntiBruteForceRulesResponseBodyRules& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // 防暴力破解规则创建时间戳。单位：毫秒。
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // Indicates whether the defense rule is the default rule. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // >  The default rule takes effect on all servers that are not protected by defense rules against brute-force attacks.
    std::shared_ptr<bool> defaultRule_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<bool> enableSmartRule_ = nullptr;
    // The threshold of logon failures that you specify.
    std::shared_ptr<int32_t> failCount_ = nullptr;
    // The period of time during which logons from an account are not allowed. Unit: minutes.
    std::shared_ptr<int32_t> forbiddenTime_ = nullptr;
    // The ID of the defense rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The number of servers to which the defense rule is applied.
    std::shared_ptr<int32_t> machineCount_ = nullptr;
    // The name of the defense rule.
    std::shared_ptr<string> name_ = nullptr;
    // The types of protocols that the brute force cracking rule supports to intercept.
    std::shared_ptr<Models::DescribeAntiBruteForceRulesResponseBodyRulesProtocolType> protocolType_ = nullptr;
    // The period of time during which logon failures from an account are measured. Unit: minutes. If **Span** is set to 10, the defense rule takes effect when the logon failures measured within 10 minutes reaches the specified threshold. The IP address of attackers cannot be used to log on to the server in the specified period of time.
    std::shared_ptr<int32_t> span_ = nullptr;
    // An array consisting of the UUIDs of servers to which the defense rule is applied.
    std::shared_ptr<vector<string>> uuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
