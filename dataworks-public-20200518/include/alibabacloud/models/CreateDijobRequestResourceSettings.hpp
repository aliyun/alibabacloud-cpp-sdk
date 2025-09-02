// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTRESOURCESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTRESOURCESETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDIJobRequestResourceSettingsOfflineResourceSettings.hpp>
#include <alibabacloud/models/CreateDIJobRequestResourceSettingsRealtimeResourceSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDIJobRequestResourceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequestResourceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(OfflineResourceSettings, offlineResourceSettings_);
      DARABONBA_PTR_TO_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
      DARABONBA_PTR_TO_JSON(RequestedCu, requestedCu_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequestResourceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(OfflineResourceSettings, offlineResourceSettings_);
      DARABONBA_PTR_FROM_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
      DARABONBA_PTR_FROM_JSON(RequestedCu, requestedCu_);
    };
    CreateDIJobRequestResourceSettings() = default ;
    CreateDIJobRequestResourceSettings(const CreateDIJobRequestResourceSettings &) = default ;
    CreateDIJobRequestResourceSettings(CreateDIJobRequestResourceSettings &&) = default ;
    CreateDIJobRequestResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequestResourceSettings() = default ;
    CreateDIJobRequestResourceSettings& operator=(const CreateDIJobRequestResourceSettings &) = default ;
    CreateDIJobRequestResourceSettings& operator=(CreateDIJobRequestResourceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offlineResourceSettings_ != nullptr
        && this->realtimeResourceSettings_ != nullptr && this->requestedCu_ != nullptr; };
    // offlineResourceSettings Field Functions 
    bool hasOfflineResourceSettings() const { return this->offlineResourceSettings_ != nullptr;};
    void deleteOfflineResourceSettings() { this->offlineResourceSettings_ = nullptr;};
    inline const Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings & offlineResourceSettings() const { DARABONBA_PTR_GET_CONST(offlineResourceSettings_, Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings) };
    inline Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings offlineResourceSettings() { DARABONBA_PTR_GET(offlineResourceSettings_, Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings) };
    inline CreateDIJobRequestResourceSettings& setOfflineResourceSettings(const Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings & offlineResourceSettings) { DARABONBA_PTR_SET_VALUE(offlineResourceSettings_, offlineResourceSettings) };
    inline CreateDIJobRequestResourceSettings& setOfflineResourceSettings(Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings && offlineResourceSettings) { DARABONBA_PTR_SET_RVALUE(offlineResourceSettings_, offlineResourceSettings) };


    // realtimeResourceSettings Field Functions 
    bool hasRealtimeResourceSettings() const { return this->realtimeResourceSettings_ != nullptr;};
    void deleteRealtimeResourceSettings() { this->realtimeResourceSettings_ = nullptr;};
    inline const Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings & realtimeResourceSettings() const { DARABONBA_PTR_GET_CONST(realtimeResourceSettings_, Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings) };
    inline Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings realtimeResourceSettings() { DARABONBA_PTR_GET(realtimeResourceSettings_, Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings) };
    inline CreateDIJobRequestResourceSettings& setRealtimeResourceSettings(const Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings & realtimeResourceSettings) { DARABONBA_PTR_SET_VALUE(realtimeResourceSettings_, realtimeResourceSettings) };
    inline CreateDIJobRequestResourceSettings& setRealtimeResourceSettings(Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings && realtimeResourceSettings) { DARABONBA_PTR_SET_RVALUE(realtimeResourceSettings_, realtimeResourceSettings) };


    // requestedCu Field Functions 
    bool hasRequestedCu() const { return this->requestedCu_ != nullptr;};
    void deleteRequestedCu() { this->requestedCu_ = nullptr;};
    inline float requestedCu() const { DARABONBA_PTR_GET_DEFAULT(requestedCu_, 0.0) };
    inline CreateDIJobRequestResourceSettings& setRequestedCu(float requestedCu) { DARABONBA_PTR_SET_VALUE(requestedCu_, requestedCu) };


  protected:
    // The resource used for batch synchronization.
    std::shared_ptr<Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings> offlineResourceSettings_ = nullptr;
    // The resource used for real-time synchronization.
    std::shared_ptr<Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings> realtimeResourceSettings_ = nullptr;
    // The number of compute units (CUs) in the resource group that are used for incremental and full synchronization.
    std::shared_ptr<float> requestedCu_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
