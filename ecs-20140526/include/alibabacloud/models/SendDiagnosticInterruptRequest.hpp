// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDDIAGNOSTICINTERRUPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDDIAGNOSTICINTERRUPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class SendDiagnosticInterruptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendDiagnosticInterruptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SendDiagnosticInterruptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    SendDiagnosticInterruptRequest() = default ;
    SendDiagnosticInterruptRequest(const SendDiagnosticInterruptRequest &) = default ;
    SendDiagnosticInterruptRequest(SendDiagnosticInterruptRequest &&) = default ;
    SendDiagnosticInterruptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendDiagnosticInterruptRequest() = default ;
    SendDiagnosticInterruptRequest& operator=(const SendDiagnosticInterruptRequest &) = default ;
    SendDiagnosticInterruptRequest& operator=(SendDiagnosticInterruptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->instanceId_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline SendDiagnosticInterruptRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SendDiagnosticInterruptRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Specifies whether to perform only a dry run. Valid values: ● true: Sends a check request without sending the NMI command. ● false (default): Sends a normal NMI request to trigger a crash dump.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the instance to which you want to send a diagnostic break.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
