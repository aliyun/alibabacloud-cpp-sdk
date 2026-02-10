// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANTIBRUTEFORCERULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANTIBRUTEFORCERULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateAntiBruteForceRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAntiBruteForceRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(ForbiddenTime, forbiddenTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolTypeShrink_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Span, span_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAntiBruteForceRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(ForbiddenTime, forbiddenTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolTypeShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Span, span_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    CreateAntiBruteForceRuleShrinkRequest() = default ;
    CreateAntiBruteForceRuleShrinkRequest(const CreateAntiBruteForceRuleShrinkRequest &) = default ;
    CreateAntiBruteForceRuleShrinkRequest(CreateAntiBruteForceRuleShrinkRequest &&) = default ;
    CreateAntiBruteForceRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAntiBruteForceRuleShrinkRequest() = default ;
    CreateAntiBruteForceRuleShrinkRequest& operator=(const CreateAntiBruteForceRuleShrinkRequest &) = default ;
    CreateAntiBruteForceRuleShrinkRequest& operator=(CreateAntiBruteForceRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultRule_ == nullptr
        && this->failCount_ == nullptr && this->forbiddenTime_ == nullptr && this->name_ == nullptr && this->protocolTypeShrink_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->sourceIp_ == nullptr && this->span_ == nullptr && this->uuidList_ == nullptr; };
    // defaultRule Field Functions 
    bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
    void deleteDefaultRule() { this->defaultRule_ = nullptr;};
    inline bool getDefaultRule() const { DARABONBA_PTR_GET_DEFAULT(defaultRule_, false) };
    inline CreateAntiBruteForceRuleShrinkRequest& setDefaultRule(bool defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline CreateAntiBruteForceRuleShrinkRequest& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // forbiddenTime Field Functions 
    bool hasForbiddenTime() const { return this->forbiddenTime_ != nullptr;};
    void deleteForbiddenTime() { this->forbiddenTime_ = nullptr;};
    inline int32_t getForbiddenTime() const { DARABONBA_PTR_GET_DEFAULT(forbiddenTime_, 0) };
    inline CreateAntiBruteForceRuleShrinkRequest& setForbiddenTime(int32_t forbiddenTime) { DARABONBA_PTR_SET_VALUE(forbiddenTime_, forbiddenTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAntiBruteForceRuleShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocolTypeShrink Field Functions 
    bool hasProtocolTypeShrink() const { return this->protocolTypeShrink_ != nullptr;};
    void deleteProtocolTypeShrink() { this->protocolTypeShrink_ = nullptr;};
    inline string getProtocolTypeShrink() const { DARABONBA_PTR_GET_DEFAULT(protocolTypeShrink_, "") };
    inline CreateAntiBruteForceRuleShrinkRequest& setProtocolTypeShrink(string protocolTypeShrink) { DARABONBA_PTR_SET_VALUE(protocolTypeShrink_, protocolTypeShrink) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateAntiBruteForceRuleShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateAntiBruteForceRuleShrinkRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // span Field Functions 
    bool hasSpan() const { return this->span_ != nullptr;};
    void deleteSpan() { this->span_ = nullptr;};
    inline int32_t getSpan() const { DARABONBA_PTR_GET_DEFAULT(span_, 0) };
    inline CreateAntiBruteForceRuleShrinkRequest& setSpan(int32_t span) { DARABONBA_PTR_SET_VALUE(span_, span) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline CreateAntiBruteForceRuleShrinkRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline CreateAntiBruteForceRuleShrinkRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // Specifies whether to set the defense rule as the default rule. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> defaultRule_ {};
    // The maximum number of failed logon attempts from an account. Valid values: 2, 3, 4, 5, 10, 50, 80, and 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> failCount_ {};
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
    // 
    // This parameter is required.
    shared_ptr<int32_t> forbiddenTime_ {};
    // The name of the defense rule.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The types of protocols supported for interception by the brute force attack rule creation.
    shared_ptr<string> protocolTypeShrink_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The maximum period of time during which failed logon attempts from an account can occur. Unit: minutes. Valid values:
    // 
    // *   **1**
    // *   **2**
    // *   **5**
    // *   **10**
    // *   **15**
    // 
    // >  To configure a defense rule, you must specify the Span, FailCount, and ForbiddenTime parameters. If the number of failed logon attempts from an account within the minutes specified by Span exceeds the value specified by FailCount, the account cannot be used for logons within the minutes specified by ForbiddenTime.
    // 
    // This parameter is required.
    shared_ptr<int32_t> span_ {};
    // The UUIDs of the servers to which you want to apply the defense rule.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
