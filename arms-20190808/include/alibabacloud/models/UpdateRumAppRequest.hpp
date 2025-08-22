// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERUMAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERUMAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateRumAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRumAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_TO_JSON(AutoRestart, autoRestart_);
      DARABONBA_PTR_TO_JSON(BackendServiceTraceRegion, backendServiceTraceRegion_);
      DARABONBA_PTR_TO_JSON(BonreeSDKConfigJson, bonreeSDKConfigJson_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsSubscribe, isSubscribe_);
      DARABONBA_PTR_TO_JSON(Nickname, nickname_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RealRegionId, realRegionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
      DARABONBA_PTR_TO_JSON(ServiceDomainOperationJson, serviceDomainOperationJson_);
      DARABONBA_PTR_TO_JSON(Stop, stop_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRumAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_FROM_JSON(AutoRestart, autoRestart_);
      DARABONBA_PTR_FROM_JSON(BackendServiceTraceRegion, backendServiceTraceRegion_);
      DARABONBA_PTR_FROM_JSON(BonreeSDKConfigJson, bonreeSDKConfigJson_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsSubscribe, isSubscribe_);
      DARABONBA_PTR_FROM_JSON(Nickname, nickname_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RealRegionId, realRegionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
      DARABONBA_PTR_FROM_JSON(ServiceDomainOperationJson, serviceDomainOperationJson_);
      DARABONBA_PTR_FROM_JSON(Stop, stop_);
    };
    UpdateRumAppRequest() = default ;
    UpdateRumAppRequest(const UpdateRumAppRequest &) = default ;
    UpdateRumAppRequest(UpdateRumAppRequest &&) = default ;
    UpdateRumAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRumAppRequest() = default ;
    UpdateRumAppRequest& operator=(const UpdateRumAppRequest &) = default ;
    UpdateRumAppRequest& operator=(UpdateRumAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appConfig_ != nullptr
        && this->autoRestart_ != nullptr && this->backendServiceTraceRegion_ != nullptr && this->bonreeSDKConfigJson_ != nullptr && this->description_ != nullptr && this->isSubscribe_ != nullptr
        && this->nickname_ != nullptr && this->pid_ != nullptr && this->realRegionId_ != nullptr && this->regionId_ != nullptr && this->restart_ != nullptr
        && this->serviceDomainOperationJson_ != nullptr && this->stop_ != nullptr; };
    // appConfig Field Functions 
    bool hasAppConfig() const { return this->appConfig_ != nullptr;};
    void deleteAppConfig() { this->appConfig_ = nullptr;};
    inline string appConfig() const { DARABONBA_PTR_GET_DEFAULT(appConfig_, "") };
    inline UpdateRumAppRequest& setAppConfig(string appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };


    // autoRestart Field Functions 
    bool hasAutoRestart() const { return this->autoRestart_ != nullptr;};
    void deleteAutoRestart() { this->autoRestart_ = nullptr;};
    inline bool autoRestart() const { DARABONBA_PTR_GET_DEFAULT(autoRestart_, false) };
    inline UpdateRumAppRequest& setAutoRestart(bool autoRestart) { DARABONBA_PTR_SET_VALUE(autoRestart_, autoRestart) };


    // backendServiceTraceRegion Field Functions 
    bool hasBackendServiceTraceRegion() const { return this->backendServiceTraceRegion_ != nullptr;};
    void deleteBackendServiceTraceRegion() { this->backendServiceTraceRegion_ = nullptr;};
    inline string backendServiceTraceRegion() const { DARABONBA_PTR_GET_DEFAULT(backendServiceTraceRegion_, "") };
    inline UpdateRumAppRequest& setBackendServiceTraceRegion(string backendServiceTraceRegion) { DARABONBA_PTR_SET_VALUE(backendServiceTraceRegion_, backendServiceTraceRegion) };


    // bonreeSDKConfigJson Field Functions 
    bool hasBonreeSDKConfigJson() const { return this->bonreeSDKConfigJson_ != nullptr;};
    void deleteBonreeSDKConfigJson() { this->bonreeSDKConfigJson_ = nullptr;};
    inline string bonreeSDKConfigJson() const { DARABONBA_PTR_GET_DEFAULT(bonreeSDKConfigJson_, "") };
    inline UpdateRumAppRequest& setBonreeSDKConfigJson(string bonreeSDKConfigJson) { DARABONBA_PTR_SET_VALUE(bonreeSDKConfigJson_, bonreeSDKConfigJson) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateRumAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isSubscribe Field Functions 
    bool hasIsSubscribe() const { return this->isSubscribe_ != nullptr;};
    void deleteIsSubscribe() { this->isSubscribe_ = nullptr;};
    inline bool isSubscribe() const { DARABONBA_PTR_GET_DEFAULT(isSubscribe_, false) };
    inline UpdateRumAppRequest& setIsSubscribe(bool isSubscribe) { DARABONBA_PTR_SET_VALUE(isSubscribe_, isSubscribe) };


    // nickname Field Functions 
    bool hasNickname() const { return this->nickname_ != nullptr;};
    void deleteNickname() { this->nickname_ = nullptr;};
    inline string nickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
    inline UpdateRumAppRequest& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline UpdateRumAppRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // realRegionId Field Functions 
    bool hasRealRegionId() const { return this->realRegionId_ != nullptr;};
    void deleteRealRegionId() { this->realRegionId_ = nullptr;};
    inline string realRegionId() const { DARABONBA_PTR_GET_DEFAULT(realRegionId_, "") };
    inline UpdateRumAppRequest& setRealRegionId(string realRegionId) { DARABONBA_PTR_SET_VALUE(realRegionId_, realRegionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateRumAppRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool restart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline UpdateRumAppRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


    // serviceDomainOperationJson Field Functions 
    bool hasServiceDomainOperationJson() const { return this->serviceDomainOperationJson_ != nullptr;};
    void deleteServiceDomainOperationJson() { this->serviceDomainOperationJson_ = nullptr;};
    inline string serviceDomainOperationJson() const { DARABONBA_PTR_GET_DEFAULT(serviceDomainOperationJson_, "") };
    inline UpdateRumAppRequest& setServiceDomainOperationJson(string serviceDomainOperationJson) { DARABONBA_PTR_SET_VALUE(serviceDomainOperationJson_, serviceDomainOperationJson) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline bool stop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
    inline UpdateRumAppRequest& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


  protected:
    // The application configurations in the JSON format. This parameter is deprecated.
    std::shared_ptr<string> appConfig_ = nullptr;
    // Specifies whether to restart the application the next day. Valid values: true and false.
    std::shared_ptr<bool> autoRestart_ = nullptr;
    // The region where the backend application is deployed. This parameter is used in end-to-end tracing scenarios.
    std::shared_ptr<string> backendServiceTraceRegion_ = nullptr;
    // The collection configurations of the mobile SDK. You can enable or disable collection configurations based on the app version.
    std::shared_ptr<string> bonreeSDKConfigJson_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether you want to subscribe to the application. Valid values: true and false.
    std::shared_ptr<bool> isSubscribe_ = nullptr;
    // The alias of the application.
    std::shared_ptr<string> nickname_ = nullptr;
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
    // The region where the application resides. You can leave this parameter empty or set it to China East 2 Finance.
    std::shared_ptr<string> realRegionId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to restart the application. Valid values: true and false.
    std::shared_ptr<bool> restart_ = nullptr;
    // The service domain name of the application. You can create, modify, and delete service domain name configurations.
    std::shared_ptr<string> serviceDomainOperationJson_ = nullptr;
    // Specifies whether to stop the application. Valid values: true and false.
    std::shared_ptr<bool> stop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
