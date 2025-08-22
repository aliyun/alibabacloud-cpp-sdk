// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYSCENARIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYSCENARIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ApplyScenarioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyScenarioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_ANY_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
      DARABONBA_PTR_TO_JSON(Sign, sign_);
      DARABONBA_PTR_TO_JSON(SnDump, snDump_);
      DARABONBA_PTR_TO_JSON(SnForce, snForce_);
      DARABONBA_PTR_TO_JSON(SnStat, snStat_);
      DARABONBA_PTR_TO_JSON(SnTransfer, snTransfer_);
      DARABONBA_PTR_TO_JSON(UpdateOption, updateOption_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyScenarioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_ANY_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(Sign, sign_);
      DARABONBA_PTR_FROM_JSON(SnDump, snDump_);
      DARABONBA_PTR_FROM_JSON(SnForce, snForce_);
      DARABONBA_PTR_FROM_JSON(SnStat, snStat_);
      DARABONBA_PTR_FROM_JSON(SnTransfer, snTransfer_);
      DARABONBA_PTR_FROM_JSON(UpdateOption, updateOption_);
    };
    ApplyScenarioRequest() = default ;
    ApplyScenarioRequest(const ApplyScenarioRequest &) = default ;
    ApplyScenarioRequest(ApplyScenarioRequest &&) = default ;
    ApplyScenarioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyScenarioRequest() = default ;
    ApplyScenarioRequest& operator=(const ApplyScenarioRequest &) = default ;
    ApplyScenarioRequest& operator=(ApplyScenarioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->config_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr && this->scenario_ != nullptr && this->sign_ != nullptr
        && this->snDump_ != nullptr && this->snForce_ != nullptr && this->snStat_ != nullptr && this->snTransfer_ != nullptr && this->updateOption_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ApplyScenarioRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & config() const { DARABONBA_GET(config_) };
    Darabonba::Json & config() { DARABONBA_GET(config_) };
    inline ApplyScenarioRequest& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline ApplyScenarioRequest& setConfig(Darabonba::Json & config) { DARABONBA_SET_RVALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ApplyScenarioRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ApplyScenarioRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string scenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ApplyScenarioRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // sign Field Functions 
    bool hasSign() const { return this->sign_ != nullptr;};
    void deleteSign() { this->sign_ = nullptr;};
    inline string sign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
    inline ApplyScenarioRequest& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


    // snDump Field Functions 
    bool hasSnDump() const { return this->snDump_ != nullptr;};
    void deleteSnDump() { this->snDump_ = nullptr;};
    inline bool snDump() const { DARABONBA_PTR_GET_DEFAULT(snDump_, false) };
    inline ApplyScenarioRequest& setSnDump(bool snDump) { DARABONBA_PTR_SET_VALUE(snDump_, snDump) };


    // snForce Field Functions 
    bool hasSnForce() const { return this->snForce_ != nullptr;};
    void deleteSnForce() { this->snForce_ = nullptr;};
    inline bool snForce() const { DARABONBA_PTR_GET_DEFAULT(snForce_, false) };
    inline ApplyScenarioRequest& setSnForce(bool snForce) { DARABONBA_PTR_SET_VALUE(snForce_, snForce) };


    // snStat Field Functions 
    bool hasSnStat() const { return this->snStat_ != nullptr;};
    void deleteSnStat() { this->snStat_ = nullptr;};
    inline bool snStat() const { DARABONBA_PTR_GET_DEFAULT(snStat_, false) };
    inline ApplyScenarioRequest& setSnStat(bool snStat) { DARABONBA_PTR_SET_VALUE(snStat_, snStat) };


    // snTransfer Field Functions 
    bool hasSnTransfer() const { return this->snTransfer_ != nullptr;};
    void deleteSnTransfer() { this->snTransfer_ = nullptr;};
    inline bool snTransfer() const { DARABONBA_PTR_GET_DEFAULT(snTransfer_, false) };
    inline ApplyScenarioRequest& setSnTransfer(bool snTransfer) { DARABONBA_PTR_SET_VALUE(snTransfer_, snTransfer) };


    // updateOption Field Functions 
    bool hasUpdateOption() const { return this->updateOption_ != nullptr;};
    void deleteUpdateOption() { this->updateOption_ = nullptr;};
    inline bool updateOption() const { DARABONBA_PTR_GET_DEFAULT(updateOption_, false) };
    inline ApplyScenarioRequest& setUpdateOption(bool updateOption) { DARABONBA_PTR_SET_VALUE(updateOption_, updateOption) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The configuration of the business monitoring job. The value is a JSON string. For more information about this parameter, see the following additional information about the **Config** parameter.
    // 
    // This parameter is required.
    Darabonba::Json config_ = nullptr;
    // The name of the business monitoring job.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The scenario where you want to use the business monitoring job. Valid values:
    // 
    // *   `USER-DEFINED`: user-defined. This is the default value.
    // *   `EDAS-ROLLOUT`: application release in Enterprise Distributed Application Service (EDAS)
    // *   `OAM-ROLLOUT`: application release based on Open Application Model (OAM)
    // *   `MSC-CANARY`: canary release based on Microservice Engine (MSE)
    std::shared_ptr<string> scenario_ = nullptr;
    // The code of the business monitoring job. This parameter is not required when you create a business monitoring job. However, this parameter is required when you update a business monitoring job.
    std::shared_ptr<string> sign_ = nullptr;
    // Specifies whether to record business parameters to the trace marked with the coloring sign.
    // 
    // *   `true`
    // *   `false`: This is the default value.
    std::shared_ptr<bool> snDump_ = nullptr;
    // Specifies whether traffic in the trace marked with the coloring sign is all collected.
    // 
    // *   `true`
    // *   `false`: This is the default value.
    std::shared_ptr<bool> snForce_ = nullptr;
    // Specifies whether to count traffic based on the coloring sign.
    // 
    // *   `true`
    // *   `false`: This is the default value.
    std::shared_ptr<bool> snStat_ = nullptr;
    // Specifies whether the coloring sign is transparently passed down to downstream application nodes in the trace.
    // 
    // *   `true`
    // *   `false`: This is the default value.
    std::shared_ptr<bool> snTransfer_ = nullptr;
    // Specifies whether the operation is an update operation.
    // 
    // *   `true`: update
    // *   `false`: insert
    // 
    // This parameter is required.
    std::shared_ptr<bool> updateOption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
