// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLECONTROLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISABLECONTROLPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class DisableControlPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnablementStatus, enablementStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnablementStatus, enablementStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DisableControlPolicyResponseBody() = default ;
    DisableControlPolicyResponseBody(const DisableControlPolicyResponseBody &) = default ;
    DisableControlPolicyResponseBody(DisableControlPolicyResponseBody &&) = default ;
    DisableControlPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableControlPolicyResponseBody() = default ;
    DisableControlPolicyResponseBody& operator=(const DisableControlPolicyResponseBody &) = default ;
    DisableControlPolicyResponseBody& operator=(DisableControlPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enablementStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // enablementStatus Field Functions 
    bool hasEnablementStatus() const { return this->enablementStatus_ != nullptr;};
    void deleteEnablementStatus() { this->enablementStatus_ = nullptr;};
    inline string enablementStatus() const { DARABONBA_PTR_GET_DEFAULT(enablementStatus_, "") };
    inline DisableControlPolicyResponseBody& setEnablementStatus(string enablementStatus) { DARABONBA_PTR_SET_VALUE(enablementStatus_, enablementStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisableControlPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of the Control Policy feature. Valid values:
    // 
    // *   Enabled: The feature is enabled.
    // *   PendingEnable: The feature is being enabled.
    // *   Disabled: The feature is disabled.
    // *   PendingDisable: The feature is being disabled.
    std::shared_ptr<string> enablementStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
