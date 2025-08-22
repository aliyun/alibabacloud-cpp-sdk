// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCENARIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCENARIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListScenarioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScenarioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
      DARABONBA_PTR_TO_JSON(Sign, sign_);
    };
    friend void from_json(const Darabonba::Json& j, ListScenarioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(Sign, sign_);
    };
    ListScenarioRequest() = default ;
    ListScenarioRequest(const ListScenarioRequest &) = default ;
    ListScenarioRequest(ListScenarioRequest &&) = default ;
    ListScenarioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScenarioRequest() = default ;
    ListScenarioRequest& operator=(const ListScenarioRequest &) = default ;
    ListScenarioRequest& operator=(ListScenarioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->name_ != nullptr && this->regionId_ != nullptr && this->scenario_ != nullptr && this->sign_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListScenarioRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListScenarioRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListScenarioRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string scenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ListScenarioRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // sign Field Functions 
    bool hasSign() const { return this->sign_ != nullptr;};
    void deleteSign() { this->sign_ = nullptr;};
    inline string sign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
    inline ListScenarioRequest& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the business monitoring job.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The scenario where the business monitoring job is used. Valid values:
    // 
    // *   `USER-DEFINED`: user-defined. This is the default value.
    // *   `EDAS-ROLLOUT`: application release in Enterprise Distributed Application Service (EDAS)
    // *   `OAM-ROLLOUT`: application release based on Open Application Model (OAM)
    // *   `MSC-CANARY`: canary release based on Microservice Engine (MSE)
    std::shared_ptr<string> scenario_ = nullptr;
    // The code of the business monitoring job. Set this parameter when you know the code of the business monitoring job you want to query.
    std::shared_ptr<string> sign_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
