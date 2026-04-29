// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHPOLARCLAWCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PATCHPOLARCLAWCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class PatchPolarClawConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchPolarClawConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ConfigPatch, configPatchShrink_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
    };
    friend void from_json(const Darabonba::Json& j, PatchPolarClawConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ConfigPatch, configPatchShrink_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
    };
    PatchPolarClawConfigShrinkRequest() = default ;
    PatchPolarClawConfigShrinkRequest(const PatchPolarClawConfigShrinkRequest &) = default ;
    PatchPolarClawConfigShrinkRequest(PatchPolarClawConfigShrinkRequest &&) = default ;
    PatchPolarClawConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchPolarClawConfigShrinkRequest() = default ;
    PatchPolarClawConfigShrinkRequest& operator=(const PatchPolarClawConfigShrinkRequest &) = default ;
    PatchPolarClawConfigShrinkRequest& operator=(PatchPolarClawConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->configPatchShrink_ == nullptr && this->restart_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline PatchPolarClawConfigShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // configPatchShrink Field Functions 
    bool hasConfigPatchShrink() const { return this->configPatchShrink_ != nullptr;};
    void deleteConfigPatchShrink() { this->configPatchShrink_ = nullptr;};
    inline string getConfigPatchShrink() const { DARABONBA_PTR_GET_DEFAULT(configPatchShrink_, "") };
    inline PatchPolarClawConfigShrinkRequest& setConfigPatchShrink(string configPatchShrink) { DARABONBA_PTR_SET_VALUE(configPatchShrink_, configPatchShrink) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline PatchPolarClawConfigShrinkRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> configPatchShrink_ {};
    shared_ptr<bool> restart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
