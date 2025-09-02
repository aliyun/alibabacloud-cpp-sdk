// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTRESOURCESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTRESOURCESETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDIJobRequestResourceSettingsOfflineResourceSettings.hpp>
#include <alibabacloud/models/UpdateDIJobRequestResourceSettingsRealtimeResourceSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateDIJobRequestResourceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIJobRequestResourceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(OfflineResourceSettings, offlineResourceSettings_);
      DARABONBA_PTR_TO_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
      DARABONBA_PTR_TO_JSON(RequestedCu, requestedCu_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIJobRequestResourceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(OfflineResourceSettings, offlineResourceSettings_);
      DARABONBA_PTR_FROM_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
      DARABONBA_PTR_FROM_JSON(RequestedCu, requestedCu_);
    };
    UpdateDIJobRequestResourceSettings() = default ;
    UpdateDIJobRequestResourceSettings(const UpdateDIJobRequestResourceSettings &) = default ;
    UpdateDIJobRequestResourceSettings(UpdateDIJobRequestResourceSettings &&) = default ;
    UpdateDIJobRequestResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIJobRequestResourceSettings() = default ;
    UpdateDIJobRequestResourceSettings& operator=(const UpdateDIJobRequestResourceSettings &) = default ;
    UpdateDIJobRequestResourceSettings& operator=(UpdateDIJobRequestResourceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offlineResourceSettings_ != nullptr
        && this->realtimeResourceSettings_ != nullptr && this->requestedCu_ != nullptr; };
    // offlineResourceSettings Field Functions 
    bool hasOfflineResourceSettings() const { return this->offlineResourceSettings_ != nullptr;};
    void deleteOfflineResourceSettings() { this->offlineResourceSettings_ = nullptr;};
    inline const Models::UpdateDIJobRequestResourceSettingsOfflineResourceSettings & offlineResourceSettings() const { DARABONBA_PTR_GET_CONST(offlineResourceSettings_, Models::UpdateDIJobRequestResourceSettingsOfflineResourceSettings) };
    inline Models::UpdateDIJobRequestResourceSettingsOfflineResourceSettings offlineResourceSettings() { DARABONBA_PTR_GET(offlineResourceSettings_, Models::UpdateDIJobRequestResourceSettingsOfflineResourceSettings) };
    inline UpdateDIJobRequestResourceSettings& setOfflineResourceSettings(const Models::UpdateDIJobRequestResourceSettingsOfflineResourceSettings & offlineResourceSettings) { DARABONBA_PTR_SET_VALUE(offlineResourceSettings_, offlineResourceSettings) };
    inline UpdateDIJobRequestResourceSettings& setOfflineResourceSettings(Models::UpdateDIJobRequestResourceSettingsOfflineResourceSettings && offlineResourceSettings) { DARABONBA_PTR_SET_RVALUE(offlineResourceSettings_, offlineResourceSettings) };


    // realtimeResourceSettings Field Functions 
    bool hasRealtimeResourceSettings() const { return this->realtimeResourceSettings_ != nullptr;};
    void deleteRealtimeResourceSettings() { this->realtimeResourceSettings_ = nullptr;};
    inline const Models::UpdateDIJobRequestResourceSettingsRealtimeResourceSettings & realtimeResourceSettings() const { DARABONBA_PTR_GET_CONST(realtimeResourceSettings_, Models::UpdateDIJobRequestResourceSettingsRealtimeResourceSettings) };
    inline Models::UpdateDIJobRequestResourceSettingsRealtimeResourceSettings realtimeResourceSettings() { DARABONBA_PTR_GET(realtimeResourceSettings_, Models::UpdateDIJobRequestResourceSettingsRealtimeResourceSettings) };
    inline UpdateDIJobRequestResourceSettings& setRealtimeResourceSettings(const Models::UpdateDIJobRequestResourceSettingsRealtimeResourceSettings & realtimeResourceSettings) { DARABONBA_PTR_SET_VALUE(realtimeResourceSettings_, realtimeResourceSettings) };
    inline UpdateDIJobRequestResourceSettings& setRealtimeResourceSettings(Models::UpdateDIJobRequestResourceSettingsRealtimeResourceSettings && realtimeResourceSettings) { DARABONBA_PTR_SET_RVALUE(realtimeResourceSettings_, realtimeResourceSettings) };


    // requestedCu Field Functions 
    bool hasRequestedCu() const { return this->requestedCu_ != nullptr;};
    void deleteRequestedCu() { this->requestedCu_ = nullptr;};
    inline float requestedCu() const { DARABONBA_PTR_GET_DEFAULT(requestedCu_, 0.0) };
    inline UpdateDIJobRequestResourceSettings& setRequestedCu(float requestedCu) { DARABONBA_PTR_SET_VALUE(requestedCu_, requestedCu) };


  protected:
    // The resource used for batch synchronization.
    std::shared_ptr<Models::UpdateDIJobRequestResourceSettingsOfflineResourceSettings> offlineResourceSettings_ = nullptr;
    // The resource used for real-time synchronization.
    std::shared_ptr<Models::UpdateDIJobRequestResourceSettingsRealtimeResourceSettings> realtimeResourceSettings_ = nullptr;
    // The number of compute units (CUs) in the resource group that are used for full and incremental synchronization.
    std::shared_ptr<float> requestedCu_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
