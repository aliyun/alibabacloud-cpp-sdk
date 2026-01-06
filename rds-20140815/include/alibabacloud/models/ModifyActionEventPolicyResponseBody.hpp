// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACTIONEVENTPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACTIONEVENTPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyActionEventPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyActionEventPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnableEventLog, enableEventLog_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyActionEventPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableEventLog, enableEventLog_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyActionEventPolicyResponseBody() = default ;
    ModifyActionEventPolicyResponseBody(const ModifyActionEventPolicyResponseBody &) = default ;
    ModifyActionEventPolicyResponseBody(ModifyActionEventPolicyResponseBody &&) = default ;
    ModifyActionEventPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyActionEventPolicyResponseBody() = default ;
    ModifyActionEventPolicyResponseBody& operator=(const ModifyActionEventPolicyResponseBody &) = default ;
    ModifyActionEventPolicyResponseBody& operator=(ModifyActionEventPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableEventLog_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr; };
    // enableEventLog Field Functions 
    bool hasEnableEventLog() const { return this->enableEventLog_ != nullptr;};
    void deleteEnableEventLog() { this->enableEventLog_ = nullptr;};
    inline string getEnableEventLog() const { DARABONBA_PTR_GET_DEFAULT(enableEventLog_, "") };
    inline ModifyActionEventPolicyResponseBody& setEnableEventLog(string enableEventLog) { DARABONBA_PTR_SET_VALUE(enableEventLog_, enableEventLog) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyActionEventPolicyResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyActionEventPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the event history feature is enabled.
    shared_ptr<string> enableEventLog_ {};
    // The ID of the region for which the event history feature is enabled or disabled.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
