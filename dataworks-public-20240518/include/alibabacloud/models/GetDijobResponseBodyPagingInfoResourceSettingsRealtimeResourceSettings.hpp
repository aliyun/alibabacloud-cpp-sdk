// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFORESOURCESETTINGSREALTIMERESOURCESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFORESOURCESETTINGSREALTIMERESOURCESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(RequestedCu, requestedCu_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestedCu, requestedCu_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
    };
    GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings() = default ;
    GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings(const GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings &) = default ;
    GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings(GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings &&) = default ;
    GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings() = default ;
    GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings& operator=(const GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings &) = default ;
    GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings& operator=(GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestedCu_ != nullptr
        && this->resourceGroupIdentifier_ != nullptr; };
    // requestedCu Field Functions 
    bool hasRequestedCu() const { return this->requestedCu_ != nullptr;};
    void deleteRequestedCu() { this->requestedCu_ = nullptr;};
    inline double requestedCu() const { DARABONBA_PTR_GET_DEFAULT(requestedCu_, 0.0) };
    inline GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings& setRequestedCu(double requestedCu) { DARABONBA_PTR_SET_VALUE(requestedCu_, requestedCu) };


    // resourceGroupIdentifier Field Functions 
    bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
    void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
    inline string resourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
    inline GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


  protected:
    // The number of CUs in the resource group for Data Integration that are used for real-time synchronization.
    std::shared_ptr<double> requestedCu_ = nullptr;
    // The identifier of the resource group for Data Integration used for real-time synchronization.
    std::shared_ptr<string> resourceGroupIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
