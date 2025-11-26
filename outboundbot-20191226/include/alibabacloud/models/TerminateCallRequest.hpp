// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMINATECALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TERMINATECALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class TerminateCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TerminateCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, TerminateCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    TerminateCallRequest() = default ;
    TerminateCallRequest(const TerminateCallRequest &) = default ;
    TerminateCallRequest(TerminateCallRequest &&) = default ;
    TerminateCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TerminateCallRequest() = default ;
    TerminateCallRequest& operator=(const TerminateCallRequest &) = default ;
    TerminateCallRequest& operator=(TerminateCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callId_ == nullptr
        && return this->instanceId_ == nullptr; };
    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline TerminateCallRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline TerminateCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> callId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
