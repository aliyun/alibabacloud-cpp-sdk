// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEADAPTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEADAPTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class UpdateAdaptorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAdaptorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptorId, adaptorId_);
      DARABONBA_PTR_TO_JSON(AppScript, appScript_);
      DARABONBA_PTR_TO_JSON(ExecuteFileAddress, executeFileAddress_);
      DARABONBA_PTR_TO_JSON(OptimizeParam, optimizeParam_);
      DARABONBA_PTR_TO_JSON(SilenceParam, silenceParam_);
      DARABONBA_PTR_TO_JSON(UserConfig, userConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAdaptorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptorId, adaptorId_);
      DARABONBA_PTR_FROM_JSON(AppScript, appScript_);
      DARABONBA_PTR_FROM_JSON(ExecuteFileAddress, executeFileAddress_);
      DARABONBA_PTR_FROM_JSON(OptimizeParam, optimizeParam_);
      DARABONBA_PTR_FROM_JSON(SilenceParam, silenceParam_);
      DARABONBA_PTR_FROM_JSON(UserConfig, userConfig_);
    };
    UpdateAdaptorRequest() = default ;
    UpdateAdaptorRequest(const UpdateAdaptorRequest &) = default ;
    UpdateAdaptorRequest(UpdateAdaptorRequest &&) = default ;
    UpdateAdaptorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAdaptorRequest() = default ;
    UpdateAdaptorRequest& operator=(const UpdateAdaptorRequest &) = default ;
    UpdateAdaptorRequest& operator=(UpdateAdaptorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DisconnectAction, disconnectAction_);
        DARABONBA_PTR_TO_JSON(FixedResolution, fixedResolution_);
        DARABONBA_PTR_TO_JSON(ShowWindow, showWindow_);
      };
      friend void from_json(const Darabonba::Json& j, UserConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DisconnectAction, disconnectAction_);
        DARABONBA_PTR_FROM_JSON(FixedResolution, fixedResolution_);
        DARABONBA_PTR_FROM_JSON(ShowWindow, showWindow_);
      };
      UserConfig() = default ;
      UserConfig(const UserConfig &) = default ;
      UserConfig(UserConfig &&) = default ;
      UserConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserConfig() = default ;
      UserConfig& operator=(const UserConfig &) = default ;
      UserConfig& operator=(UserConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->disconnectAction_ == nullptr
        && this->fixedResolution_ == nullptr && this->showWindow_ == nullptr; };
      // disconnectAction Field Functions 
      bool hasDisconnectAction() const { return this->disconnectAction_ != nullptr;};
      void deleteDisconnectAction() { this->disconnectAction_ = nullptr;};
      inline string getDisconnectAction() const { DARABONBA_PTR_GET_DEFAULT(disconnectAction_, "") };
      inline UserConfig& setDisconnectAction(string disconnectAction) { DARABONBA_PTR_SET_VALUE(disconnectAction_, disconnectAction) };


      // fixedResolution Field Functions 
      bool hasFixedResolution() const { return this->fixedResolution_ != nullptr;};
      void deleteFixedResolution() { this->fixedResolution_ = nullptr;};
      inline string getFixedResolution() const { DARABONBA_PTR_GET_DEFAULT(fixedResolution_, "") };
      inline UserConfig& setFixedResolution(string fixedResolution) { DARABONBA_PTR_SET_VALUE(fixedResolution_, fixedResolution) };


      // showWindow Field Functions 
      bool hasShowWindow() const { return this->showWindow_ != nullptr;};
      void deleteShowWindow() { this->showWindow_ = nullptr;};
      inline string getShowWindow() const { DARABONBA_PTR_GET_DEFAULT(showWindow_, "") };
      inline UserConfig& setShowWindow(string showWindow) { DARABONBA_PTR_SET_VALUE(showWindow_, showWindow) };


    protected:
      // The processing policy after a connection is disconnected. When modifying other UserConfig configurations, if you need to retain the original policy, pass the original value in the complete configuration object. This operation does not automatically populate default values.
      shared_ptr<string> disconnectAction_ {};
      // The fixed resolution used when the application runs, in the format of width × height, in pixels.
      shared_ptr<string> fixedResolution_ {};
      // The application window display configuration. When modifying other UserConfig configurations, if you need to retain the original configuration, pass the original value in the complete configuration object. This operation does not automatically populate default values.
      shared_ptr<string> showWindow_ {};
    };

    virtual bool empty() const override { return this->adaptorId_ == nullptr
        && this->appScript_ == nullptr && this->executeFileAddress_ == nullptr && this->optimizeParam_ == nullptr && this->silenceParam_ == nullptr && this->userConfig_ == nullptr; };
    // adaptorId Field Functions 
    bool hasAdaptorId() const { return this->adaptorId_ != nullptr;};
    void deleteAdaptorId() { this->adaptorId_ = nullptr;};
    inline string getAdaptorId() const { DARABONBA_PTR_GET_DEFAULT(adaptorId_, "") };
    inline UpdateAdaptorRequest& setAdaptorId(string adaptorId) { DARABONBA_PTR_SET_VALUE(adaptorId_, adaptorId) };


    // appScript Field Functions 
    bool hasAppScript() const { return this->appScript_ != nullptr;};
    void deleteAppScript() { this->appScript_ = nullptr;};
    inline string getAppScript() const { DARABONBA_PTR_GET_DEFAULT(appScript_, "") };
    inline UpdateAdaptorRequest& setAppScript(string appScript) { DARABONBA_PTR_SET_VALUE(appScript_, appScript) };


    // executeFileAddress Field Functions 
    bool hasExecuteFileAddress() const { return this->executeFileAddress_ != nullptr;};
    void deleteExecuteFileAddress() { this->executeFileAddress_ = nullptr;};
    inline string getExecuteFileAddress() const { DARABONBA_PTR_GET_DEFAULT(executeFileAddress_, "") };
    inline UpdateAdaptorRequest& setExecuteFileAddress(string executeFileAddress) { DARABONBA_PTR_SET_VALUE(executeFileAddress_, executeFileAddress) };


    // optimizeParam Field Functions 
    bool hasOptimizeParam() const { return this->optimizeParam_ != nullptr;};
    void deleteOptimizeParam() { this->optimizeParam_ = nullptr;};
    inline string getOptimizeParam() const { DARABONBA_PTR_GET_DEFAULT(optimizeParam_, "") };
    inline UpdateAdaptorRequest& setOptimizeParam(string optimizeParam) { DARABONBA_PTR_SET_VALUE(optimizeParam_, optimizeParam) };


    // silenceParam Field Functions 
    bool hasSilenceParam() const { return this->silenceParam_ != nullptr;};
    void deleteSilenceParam() { this->silenceParam_ = nullptr;};
    inline string getSilenceParam() const { DARABONBA_PTR_GET_DEFAULT(silenceParam_, "") };
    inline UpdateAdaptorRequest& setSilenceParam(string silenceParam) { DARABONBA_PTR_SET_VALUE(silenceParam_, silenceParam) };


    // userConfig Field Functions 
    bool hasUserConfig() const { return this->userConfig_ != nullptr;};
    void deleteUserConfig() { this->userConfig_ = nullptr;};
    inline const UpdateAdaptorRequest::UserConfig & getUserConfig() const { DARABONBA_PTR_GET_CONST(userConfig_, UpdateAdaptorRequest::UserConfig) };
    inline UpdateAdaptorRequest::UserConfig getUserConfig() { DARABONBA_PTR_GET(userConfig_, UpdateAdaptorRequest::UserConfig) };
    inline UpdateAdaptorRequest& setUserConfig(const UpdateAdaptorRequest::UserConfig & userConfig) { DARABONBA_PTR_SET_VALUE(userConfig_, userConfig) };
    inline UpdateAdaptorRequest& setUserConfig(UpdateAdaptorRequest::UserConfig && userConfig) { DARABONBA_PTR_SET_RVALUE(userConfig_, userConfig) };


  protected:
    // The ID of the application adapter to be modified. This parameter is required and must belong to an application adapter manageable by the current account.
    shared_ptr<string> adaptorId_ {};
    // **Not enabled. Do not pass this parameter.** This operation does not support modifying application scripts through this parameter.
    // 
    // The example "Not applicable (not enabled)" is only a description of the field status and is not a valid parameter value.
    shared_ptr<string> appScript_ {};
    // **Not enabled. Do not pass this parameter.** This operation does not support modifying executable file paths through this parameter.
    // 
    // The example "Not applicable (not enabled)" is only a description of the field status and is not a valid parameter value.
    shared_ptr<string> executeFileAddress_ {};
    // The application optimization configuration, represented as a JSON object string. Pass this parameter only when specific optimization configuration requirements exist. The content must be a valid JSON object.
    shared_ptr<string> optimizeParam_ {};
    // The command-line parameters used when the application starts. If not empty, this parameter is used to update the startup parameters of the application adapter. Specify the value based on the startup requirements of the application.
    shared_ptr<string> silenceParam_ {};
    // The application runtime configuration object. If this parameter is omitted, the existing user configuration is not modified.
    // 
    // **If passed, the original UserConfig is entirely replaced and not merged item by item.** Submit the complete configuration and include the configuration items that need to be retained. Subfields that are not provided do not automatically inherit the original values.
    shared_ptr<UpdateAdaptorRequest::UserConfig> userConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
