// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICECONFIGRESPONSEBODYDATACUSTOMSERVICECONFMANUALMACHINECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICECONFIGRESPONSEBODYDATACUSTOMSERVICECONFMANUALMACHINECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuditRiskLevels, auditRiskLevels_);
      DARABONBA_PTR_TO_JSON(CallbackId, callbackId_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(ManualService, manualService_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditRiskLevels, auditRiskLevels_);
      DARABONBA_PTR_FROM_JSON(CallbackId, callbackId_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(ManualService, manualService_);
    };
    GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig() = default ;
    GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig(const GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig &) = default ;
    GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig(GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig &&) = default ;
    GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig() = default ;
    GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig& operator=(const GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig &) = default ;
    GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig& operator=(GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditRiskLevels_ == nullptr
        && return this->callbackId_ == nullptr && return this->enable_ == nullptr && return this->manualService_ == nullptr; };
    // auditRiskLevels Field Functions 
    bool hasAuditRiskLevels() const { return this->auditRiskLevels_ != nullptr;};
    void deleteAuditRiskLevels() { this->auditRiskLevels_ = nullptr;};
    inline const vector<string> & auditRiskLevels() const { DARABONBA_PTR_GET_CONST(auditRiskLevels_, vector<string>) };
    inline vector<string> auditRiskLevels() { DARABONBA_PTR_GET(auditRiskLevels_, vector<string>) };
    inline GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig& setAuditRiskLevels(const vector<string> & auditRiskLevels) { DARABONBA_PTR_SET_VALUE(auditRiskLevels_, auditRiskLevels) };
    inline GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig& setAuditRiskLevels(vector<string> && auditRiskLevels) { DARABONBA_PTR_SET_RVALUE(auditRiskLevels_, auditRiskLevels) };


    // callbackId Field Functions 
    bool hasCallbackId() const { return this->callbackId_ != nullptr;};
    void deleteCallbackId() { this->callbackId_ = nullptr;};
    inline int64_t callbackId() const { DARABONBA_PTR_GET_DEFAULT(callbackId_, 0L) };
    inline GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig& setCallbackId(int64_t callbackId) { DARABONBA_PTR_SET_VALUE(callbackId_, callbackId) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // manualService Field Functions 
    bool hasManualService() const { return this->manualService_ != nullptr;};
    void deleteManualService() { this->manualService_ = nullptr;};
    inline string manualService() const { DARABONBA_PTR_GET_DEFAULT(manualService_, "") };
    inline GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig& setManualService(string manualService) { DARABONBA_PTR_SET_VALUE(manualService_, manualService) };


  protected:
    // Risk levels.
    std::shared_ptr<vector<string>> auditRiskLevels_ = nullptr;
    // Callback notification ID
    std::shared_ptr<int64_t> callbackId_ = nullptr;
    // Whether to enable. Values:
    // - **true**: Enabled
    // - **false**: Disabled
    std::shared_ptr<bool> enable_ = nullptr;
    // Manual review service
    std::shared_ptr<string> manualService_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
