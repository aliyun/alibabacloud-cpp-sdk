// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTRESOURCESETTINGSOFFLINERESOURCESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTRESOURCESETTINGSOFFLINERESOURCESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDIJobRequestResourceSettingsOfflineResourceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequestResourceSettingsOfflineResourceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequestResourceSettingsOfflineResourceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
    };
    CreateDIJobRequestResourceSettingsOfflineResourceSettings() = default ;
    CreateDIJobRequestResourceSettingsOfflineResourceSettings(const CreateDIJobRequestResourceSettingsOfflineResourceSettings &) = default ;
    CreateDIJobRequestResourceSettingsOfflineResourceSettings(CreateDIJobRequestResourceSettingsOfflineResourceSettings &&) = default ;
    CreateDIJobRequestResourceSettingsOfflineResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequestResourceSettingsOfflineResourceSettings() = default ;
    CreateDIJobRequestResourceSettingsOfflineResourceSettings& operator=(const CreateDIJobRequestResourceSettingsOfflineResourceSettings &) = default ;
    CreateDIJobRequestResourceSettingsOfflineResourceSettings& operator=(CreateDIJobRequestResourceSettingsOfflineResourceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceGroupIdentifier_ != nullptr; };
    // resourceGroupIdentifier Field Functions 
    bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
    void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
    inline string resourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
    inline CreateDIJobRequestResourceSettingsOfflineResourceSettings& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


  protected:
    // The identifier of the resource group for Data Integration used for batch synchronization.
    std::shared_ptr<string> resourceGroupIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
