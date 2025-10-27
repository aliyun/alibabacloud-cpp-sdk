// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYANTIBRUTEFORCERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYANTIBRUTEFORCERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAntiBruteForceRuleRequestProtocolType.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyAntiBruteForceRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAntiBruteForceRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(ForbiddenTime, forbiddenTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Span, span_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAntiBruteForceRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(ForbiddenTime, forbiddenTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Span, span_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    ModifyAntiBruteForceRuleRequest() = default ;
    ModifyAntiBruteForceRuleRequest(const ModifyAntiBruteForceRuleRequest &) = default ;
    ModifyAntiBruteForceRuleRequest(ModifyAntiBruteForceRuleRequest &&) = default ;
    ModifyAntiBruteForceRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAntiBruteForceRuleRequest() = default ;
    ModifyAntiBruteForceRuleRequest& operator=(const ModifyAntiBruteForceRuleRequest &) = default ;
    ModifyAntiBruteForceRuleRequest& operator=(ModifyAntiBruteForceRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultRule_ == nullptr
        && return this->failCount_ == nullptr && return this->forbiddenTime_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->protocolType_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->sourceIp_ == nullptr && return this->span_ == nullptr && return this->uuidList_ == nullptr; };
    // defaultRule Field Functions 
    bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
    void deleteDefaultRule() { this->defaultRule_ = nullptr;};
    inline bool defaultRule() const { DARABONBA_PTR_GET_DEFAULT(defaultRule_, false) };
    inline ModifyAntiBruteForceRuleRequest& setDefaultRule(bool defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline ModifyAntiBruteForceRuleRequest& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // forbiddenTime Field Functions 
    bool hasForbiddenTime() const { return this->forbiddenTime_ != nullptr;};
    void deleteForbiddenTime() { this->forbiddenTime_ = nullptr;};
    inline int32_t forbiddenTime() const { DARABONBA_PTR_GET_DEFAULT(forbiddenTime_, 0) };
    inline ModifyAntiBruteForceRuleRequest& setForbiddenTime(int32_t forbiddenTime) { DARABONBA_PTR_SET_VALUE(forbiddenTime_, forbiddenTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyAntiBruteForceRuleRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAntiBruteForceRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline const ModifyAntiBruteForceRuleRequestProtocolType & protocolType() const { DARABONBA_PTR_GET_CONST(protocolType_, ModifyAntiBruteForceRuleRequestProtocolType) };
    inline ModifyAntiBruteForceRuleRequestProtocolType protocolType() { DARABONBA_PTR_GET(protocolType_, ModifyAntiBruteForceRuleRequestProtocolType) };
    inline ModifyAntiBruteForceRuleRequest& setProtocolType(const ModifyAntiBruteForceRuleRequestProtocolType & protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };
    inline ModifyAntiBruteForceRuleRequest& setProtocolType(ModifyAntiBruteForceRuleRequestProtocolType && protocolType) { DARABONBA_PTR_SET_RVALUE(protocolType_, protocolType) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyAntiBruteForceRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyAntiBruteForceRuleRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // span Field Functions 
    bool hasSpan() const { return this->span_ != nullptr;};
    void deleteSpan() { this->span_ = nullptr;};
    inline int32_t span() const { DARABONBA_PTR_GET_DEFAULT(span_, 0) };
    inline ModifyAntiBruteForceRuleRequest& setSpan(int32_t span) { DARABONBA_PTR_SET_VALUE(span_, span) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & uuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> uuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline ModifyAntiBruteForceRuleRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline ModifyAntiBruteForceRuleRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // Specifies whether to set the defense rule as the default rule. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> defaultRule_ = nullptr;
    // The threshold of logon failures that you specify. Valid values:
    // 
    // *   **2**
    // *   **3**
    // *   **4**
    // *   **5**
    // *   **10**
    // *   **50**
    // *   **80**
    // *   **100**
    std::shared_ptr<int32_t> failCount_ = nullptr;
    // The period of time during which logons from an account are not allowed. Unit: minutes. Valid values:
    // 
    // *   **5**
    // *   **15**
    // *   **30**
    // *   **60**
    // *   **120**
    // *   **360**
    // *   **720**
    // *   **1440**
    // *   **10080**
    // *   **52560000**: permanent
    std::shared_ptr<int32_t> forbiddenTime_ = nullptr;
    // The ID of the defense rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the defense rule.
    std::shared_ptr<string> name_ = nullptr;
    // The protocol types supported by the anti-brute force rule for interception.
    std::shared_ptr<ModifyAntiBruteForceRuleRequestProtocolType> protocolType_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The period of time during which logon failures from an account are measured. Unit: minutes. Valid values:
    // 
    // *   **1**
    // *   **2**
    // *   **5**
    // *   **10**
    // *   **15**
    std::shared_ptr<int32_t> span_ = nullptr;
    // An array consisting of the UUIDs of the servers to which the defense rule is applied.
    std::shared_ptr<vector<string>> uuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
