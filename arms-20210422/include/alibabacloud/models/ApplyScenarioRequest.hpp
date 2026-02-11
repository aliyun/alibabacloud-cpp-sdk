// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYSCENARIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYSCENARIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
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
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->config_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->scenario_ == nullptr && this->sign_ == nullptr
        && this->snDump_ == nullptr && this->snForce_ == nullptr && this->snStat_ == nullptr && this->snTransfer_ == nullptr && this->updateOption_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ApplyScenarioRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
    Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
    inline ApplyScenarioRequest& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline ApplyScenarioRequest& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ApplyScenarioRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ApplyScenarioRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ApplyScenarioRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // sign Field Functions 
    bool hasSign() const { return this->sign_ != nullptr;};
    void deleteSign() { this->sign_ = nullptr;};
    inline string getSign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
    inline ApplyScenarioRequest& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


    // snDump Field Functions 
    bool hasSnDump() const { return this->snDump_ != nullptr;};
    void deleteSnDump() { this->snDump_ = nullptr;};
    inline bool getSnDump() const { DARABONBA_PTR_GET_DEFAULT(snDump_, false) };
    inline ApplyScenarioRequest& setSnDump(bool snDump) { DARABONBA_PTR_SET_VALUE(snDump_, snDump) };


    // snForce Field Functions 
    bool hasSnForce() const { return this->snForce_ != nullptr;};
    void deleteSnForce() { this->snForce_ = nullptr;};
    inline bool getSnForce() const { DARABONBA_PTR_GET_DEFAULT(snForce_, false) };
    inline ApplyScenarioRequest& setSnForce(bool snForce) { DARABONBA_PTR_SET_VALUE(snForce_, snForce) };


    // snStat Field Functions 
    bool hasSnStat() const { return this->snStat_ != nullptr;};
    void deleteSnStat() { this->snStat_ = nullptr;};
    inline bool getSnStat() const { DARABONBA_PTR_GET_DEFAULT(snStat_, false) };
    inline ApplyScenarioRequest& setSnStat(bool snStat) { DARABONBA_PTR_SET_VALUE(snStat_, snStat) };


    // snTransfer Field Functions 
    bool hasSnTransfer() const { return this->snTransfer_ != nullptr;};
    void deleteSnTransfer() { this->snTransfer_ = nullptr;};
    inline bool getSnTransfer() const { DARABONBA_PTR_GET_DEFAULT(snTransfer_, false) };
    inline ApplyScenarioRequest& setSnTransfer(bool snTransfer) { DARABONBA_PTR_SET_VALUE(snTransfer_, snTransfer) };


    // updateOption Field Functions 
    bool hasUpdateOption() const { return this->updateOption_ != nullptr;};
    void deleteUpdateOption() { this->updateOption_ = nullptr;};
    inline bool getUpdateOption() const { DARABONBA_PTR_GET_DEFAULT(updateOption_, false) };
    inline ApplyScenarioRequest& setUpdateOption(bool updateOption) { DARABONBA_PTR_SET_VALUE(updateOption_, updateOption) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    Darabonba::Json config_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> scenario_ {};
    shared_ptr<string> sign_ {};
    shared_ptr<bool> snDump_ {};
    shared_ptr<bool> snForce_ {};
    shared_ptr<bool> snStat_ {};
    shared_ptr<bool> snTransfer_ {};
    // This parameter is required.
    shared_ptr<bool> updateOption_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
