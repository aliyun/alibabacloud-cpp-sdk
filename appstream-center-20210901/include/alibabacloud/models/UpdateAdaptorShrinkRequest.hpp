// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEADAPTORSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEADAPTORSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class UpdateAdaptorShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAdaptorShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptorId, adaptorId_);
      DARABONBA_PTR_TO_JSON(AppScript, appScript_);
      DARABONBA_PTR_TO_JSON(ExecuteFileAddress, executeFileAddress_);
      DARABONBA_PTR_TO_JSON(OptimizeParam, optimizeParam_);
      DARABONBA_PTR_TO_JSON(SilenceParam, silenceParam_);
      DARABONBA_PTR_TO_JSON(UserConfig, userConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAdaptorShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptorId, adaptorId_);
      DARABONBA_PTR_FROM_JSON(AppScript, appScript_);
      DARABONBA_PTR_FROM_JSON(ExecuteFileAddress, executeFileAddress_);
      DARABONBA_PTR_FROM_JSON(OptimizeParam, optimizeParam_);
      DARABONBA_PTR_FROM_JSON(SilenceParam, silenceParam_);
      DARABONBA_PTR_FROM_JSON(UserConfig, userConfigShrink_);
    };
    UpdateAdaptorShrinkRequest() = default ;
    UpdateAdaptorShrinkRequest(const UpdateAdaptorShrinkRequest &) = default ;
    UpdateAdaptorShrinkRequest(UpdateAdaptorShrinkRequest &&) = default ;
    UpdateAdaptorShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAdaptorShrinkRequest() = default ;
    UpdateAdaptorShrinkRequest& operator=(const UpdateAdaptorShrinkRequest &) = default ;
    UpdateAdaptorShrinkRequest& operator=(UpdateAdaptorShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adaptorId_ == nullptr
        && this->appScript_ == nullptr && this->executeFileAddress_ == nullptr && this->optimizeParam_ == nullptr && this->silenceParam_ == nullptr && this->userConfigShrink_ == nullptr; };
    // adaptorId Field Functions 
    bool hasAdaptorId() const { return this->adaptorId_ != nullptr;};
    void deleteAdaptorId() { this->adaptorId_ = nullptr;};
    inline string getAdaptorId() const { DARABONBA_PTR_GET_DEFAULT(adaptorId_, "") };
    inline UpdateAdaptorShrinkRequest& setAdaptorId(string adaptorId) { DARABONBA_PTR_SET_VALUE(adaptorId_, adaptorId) };


    // appScript Field Functions 
    bool hasAppScript() const { return this->appScript_ != nullptr;};
    void deleteAppScript() { this->appScript_ = nullptr;};
    inline string getAppScript() const { DARABONBA_PTR_GET_DEFAULT(appScript_, "") };
    inline UpdateAdaptorShrinkRequest& setAppScript(string appScript) { DARABONBA_PTR_SET_VALUE(appScript_, appScript) };


    // executeFileAddress Field Functions 
    bool hasExecuteFileAddress() const { return this->executeFileAddress_ != nullptr;};
    void deleteExecuteFileAddress() { this->executeFileAddress_ = nullptr;};
    inline string getExecuteFileAddress() const { DARABONBA_PTR_GET_DEFAULT(executeFileAddress_, "") };
    inline UpdateAdaptorShrinkRequest& setExecuteFileAddress(string executeFileAddress) { DARABONBA_PTR_SET_VALUE(executeFileAddress_, executeFileAddress) };


    // optimizeParam Field Functions 
    bool hasOptimizeParam() const { return this->optimizeParam_ != nullptr;};
    void deleteOptimizeParam() { this->optimizeParam_ = nullptr;};
    inline string getOptimizeParam() const { DARABONBA_PTR_GET_DEFAULT(optimizeParam_, "") };
    inline UpdateAdaptorShrinkRequest& setOptimizeParam(string optimizeParam) { DARABONBA_PTR_SET_VALUE(optimizeParam_, optimizeParam) };


    // silenceParam Field Functions 
    bool hasSilenceParam() const { return this->silenceParam_ != nullptr;};
    void deleteSilenceParam() { this->silenceParam_ = nullptr;};
    inline string getSilenceParam() const { DARABONBA_PTR_GET_DEFAULT(silenceParam_, "") };
    inline UpdateAdaptorShrinkRequest& setSilenceParam(string silenceParam) { DARABONBA_PTR_SET_VALUE(silenceParam_, silenceParam) };


    // userConfigShrink Field Functions 
    bool hasUserConfigShrink() const { return this->userConfigShrink_ != nullptr;};
    void deleteUserConfigShrink() { this->userConfigShrink_ = nullptr;};
    inline string getUserConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(userConfigShrink_, "") };
    inline UpdateAdaptorShrinkRequest& setUserConfigShrink(string userConfigShrink) { DARABONBA_PTR_SET_VALUE(userConfigShrink_, userConfigShrink) };


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
    shared_ptr<string> userConfigShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
