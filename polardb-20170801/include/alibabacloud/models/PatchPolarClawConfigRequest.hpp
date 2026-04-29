// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHPOLARCLAWCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PATCHPOLARCLAWCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class PatchPolarClawConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchPolarClawConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_ANY_TO_JSON(ConfigPatch, configPatch_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
    };
    friend void from_json(const Darabonba::Json& j, PatchPolarClawConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_ANY_FROM_JSON(ConfigPatch, configPatch_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
    };
    PatchPolarClawConfigRequest() = default ;
    PatchPolarClawConfigRequest(const PatchPolarClawConfigRequest &) = default ;
    PatchPolarClawConfigRequest(PatchPolarClawConfigRequest &&) = default ;
    PatchPolarClawConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchPolarClawConfigRequest() = default ;
    PatchPolarClawConfigRequest& operator=(const PatchPolarClawConfigRequest &) = default ;
    PatchPolarClawConfigRequest& operator=(PatchPolarClawConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->configPatch_ == nullptr && this->restart_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline PatchPolarClawConfigRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // configPatch Field Functions 
    bool hasConfigPatch() const { return this->configPatch_ != nullptr;};
    void deleteConfigPatch() { this->configPatch_ = nullptr;};
    inline     const Darabonba::Json & getConfigPatch() const { DARABONBA_GET(configPatch_) };
    Darabonba::Json & getConfigPatch() { DARABONBA_GET(configPatch_) };
    inline PatchPolarClawConfigRequest& setConfigPatch(const Darabonba::Json & configPatch) { DARABONBA_SET_VALUE(configPatch_, configPatch) };
    inline PatchPolarClawConfigRequest& setConfigPatch(Darabonba::Json && configPatch) { DARABONBA_SET_RVALUE(configPatch_, configPatch) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline PatchPolarClawConfigRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    Darabonba::Json configPatch_ {};
    shared_ptr<bool> restart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
