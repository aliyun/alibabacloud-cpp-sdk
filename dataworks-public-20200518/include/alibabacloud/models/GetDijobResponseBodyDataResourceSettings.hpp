// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYDATARESOURCESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYDATARESOURCESETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyDataResourceSettingsOfflineResourceSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyDataResourceSettingsRealtimeResourceSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDIJobResponseBodyDataResourceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyDataResourceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(OfflineResourceSettings, offlineResourceSettings_);
      DARABONBA_PTR_TO_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
      DARABONBA_PTR_TO_JSON(RequestedCu, requestedCu_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyDataResourceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(OfflineResourceSettings, offlineResourceSettings_);
      DARABONBA_PTR_FROM_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
      DARABONBA_PTR_FROM_JSON(RequestedCu, requestedCu_);
    };
    GetDIJobResponseBodyDataResourceSettings() = default ;
    GetDIJobResponseBodyDataResourceSettings(const GetDIJobResponseBodyDataResourceSettings &) = default ;
    GetDIJobResponseBodyDataResourceSettings(GetDIJobResponseBodyDataResourceSettings &&) = default ;
    GetDIJobResponseBodyDataResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyDataResourceSettings() = default ;
    GetDIJobResponseBodyDataResourceSettings& operator=(const GetDIJobResponseBodyDataResourceSettings &) = default ;
    GetDIJobResponseBodyDataResourceSettings& operator=(GetDIJobResponseBodyDataResourceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offlineResourceSettings_ != nullptr
        && this->realtimeResourceSettings_ != nullptr && this->requestedCu_ != nullptr; };
    // offlineResourceSettings Field Functions 
    bool hasOfflineResourceSettings() const { return this->offlineResourceSettings_ != nullptr;};
    void deleteOfflineResourceSettings() { this->offlineResourceSettings_ = nullptr;};
    inline const Models::GetDIJobResponseBodyDataResourceSettingsOfflineResourceSettings & offlineResourceSettings() const { DARABONBA_PTR_GET_CONST(offlineResourceSettings_, Models::GetDIJobResponseBodyDataResourceSettingsOfflineResourceSettings) };
    inline Models::GetDIJobResponseBodyDataResourceSettingsOfflineResourceSettings offlineResourceSettings() { DARABONBA_PTR_GET(offlineResourceSettings_, Models::GetDIJobResponseBodyDataResourceSettingsOfflineResourceSettings) };
    inline GetDIJobResponseBodyDataResourceSettings& setOfflineResourceSettings(const Models::GetDIJobResponseBodyDataResourceSettingsOfflineResourceSettings & offlineResourceSettings) { DARABONBA_PTR_SET_VALUE(offlineResourceSettings_, offlineResourceSettings) };
    inline GetDIJobResponseBodyDataResourceSettings& setOfflineResourceSettings(Models::GetDIJobResponseBodyDataResourceSettingsOfflineResourceSettings && offlineResourceSettings) { DARABONBA_PTR_SET_RVALUE(offlineResourceSettings_, offlineResourceSettings) };


    // realtimeResourceSettings Field Functions 
    bool hasRealtimeResourceSettings() const { return this->realtimeResourceSettings_ != nullptr;};
    void deleteRealtimeResourceSettings() { this->realtimeResourceSettings_ = nullptr;};
    inline const Models::GetDIJobResponseBodyDataResourceSettingsRealtimeResourceSettings & realtimeResourceSettings() const { DARABONBA_PTR_GET_CONST(realtimeResourceSettings_, Models::GetDIJobResponseBodyDataResourceSettingsRealtimeResourceSettings) };
    inline Models::GetDIJobResponseBodyDataResourceSettingsRealtimeResourceSettings realtimeResourceSettings() { DARABONBA_PTR_GET(realtimeResourceSettings_, Models::GetDIJobResponseBodyDataResourceSettingsRealtimeResourceSettings) };
    inline GetDIJobResponseBodyDataResourceSettings& setRealtimeResourceSettings(const Models::GetDIJobResponseBodyDataResourceSettingsRealtimeResourceSettings & realtimeResourceSettings) { DARABONBA_PTR_SET_VALUE(realtimeResourceSettings_, realtimeResourceSettings) };
    inline GetDIJobResponseBodyDataResourceSettings& setRealtimeResourceSettings(Models::GetDIJobResponseBodyDataResourceSettingsRealtimeResourceSettings && realtimeResourceSettings) { DARABONBA_PTR_SET_RVALUE(realtimeResourceSettings_, realtimeResourceSettings) };


    // requestedCu Field Functions 
    bool hasRequestedCu() const { return this->requestedCu_ != nullptr;};
    void deleteRequestedCu() { this->requestedCu_ = nullptr;};
    inline float requestedCu() const { DARABONBA_PTR_GET_DEFAULT(requestedCu_, 0.0) };
    inline GetDIJobResponseBodyDataResourceSettings& setRequestedCu(float requestedCu) { DARABONBA_PTR_SET_VALUE(requestedCu_, requestedCu) };


  protected:
    // The resource used for batch synchronization.
    std::shared_ptr<Models::GetDIJobResponseBodyDataResourceSettingsOfflineResourceSettings> offlineResourceSettings_ = nullptr;
    // The resource used for real-time synchronization.
    std::shared_ptr<Models::GetDIJobResponseBodyDataResourceSettingsRealtimeResourceSettings> realtimeResourceSettings_ = nullptr;
    // The number of compute units (CUs) in the resource group that are used for incremental and full synchronization.
    std::shared_ptr<float> requestedCu_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
