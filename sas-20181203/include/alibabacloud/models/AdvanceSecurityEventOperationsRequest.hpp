// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADVANCESECURITYEVENTOPERATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADVANCESECURITYEVENTOPERATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AdvanceSecurityEventOperationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AdvanceSecurityEventOperationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, AdvanceSecurityEventOperationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    AdvanceSecurityEventOperationsRequest() = default ;
    AdvanceSecurityEventOperationsRequest(const AdvanceSecurityEventOperationsRequest &) = default ;
    AdvanceSecurityEventOperationsRequest(AdvanceSecurityEventOperationsRequest &&) = default ;
    AdvanceSecurityEventOperationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AdvanceSecurityEventOperationsRequest() = default ;
    AdvanceSecurityEventOperationsRequest& operator=(const AdvanceSecurityEventOperationsRequest &) = default ;
    AdvanceSecurityEventOperationsRequest& operator=(AdvanceSecurityEventOperationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventName_ == nullptr
        && return this->eventType_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->ruleId_ == nullptr; };
    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline AdvanceSecurityEventOperationsRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline AdvanceSecurityEventOperationsRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AdvanceSecurityEventOperationsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int32_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
    inline AdvanceSecurityEventOperationsRequest& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The alert name.
    std::shared_ptr<string> eventName_ = nullptr;
    // The alert event type. Valid values:
    // 
    // *   Suspicious process
    // *   Webshell
    // *   Unusual logon
    // *   Exception
    // *   Sensitive file tampering
    // *   Malicious process (cloud threat detection)
    // *   Unusual network connection
    // *   Abnormal account
    // *   Application intrusion event
    // *   Cloud threat detection
    // *   Precision defense
    // *   Application whitelist
    // *   Persistent webshell
    // *   Web application threat detection
    // *   Malicious script
    // *   Threat intelligence
    // *   Malicious network activity
    // *   Cluster exception
    // *   Webshell (on-premises threat detection)
    // *   Vulnerability exploitation
    // *   Malicious process (on-premises threat detection)
    // *   Trusted exception
    // *   Others
    // 
    // For more information about alert types, see [Alerts](https://help.aliyun.com/document_detail/68388.html).
    std::shared_ptr<string> eventType_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The rule ID.
    std::shared_ptr<int32_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
