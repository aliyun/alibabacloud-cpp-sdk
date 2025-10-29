// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTRESOURCESETTINGSSCHEDULERESOURCESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTRESOURCESETTINGSSCHEDULERESOURCESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIJobRequestResourceSettingsScheduleResourceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequestResourceSettingsScheduleResourceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(RequestedCu, requestedCu_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequestResourceSettingsScheduleResourceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestedCu, requestedCu_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
    };
    CreateDIJobRequestResourceSettingsScheduleResourceSettings() = default ;
    CreateDIJobRequestResourceSettingsScheduleResourceSettings(const CreateDIJobRequestResourceSettingsScheduleResourceSettings &) = default ;
    CreateDIJobRequestResourceSettingsScheduleResourceSettings(CreateDIJobRequestResourceSettingsScheduleResourceSettings &&) = default ;
    CreateDIJobRequestResourceSettingsScheduleResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequestResourceSettingsScheduleResourceSettings() = default ;
    CreateDIJobRequestResourceSettingsScheduleResourceSettings& operator=(const CreateDIJobRequestResourceSettingsScheduleResourceSettings &) = default ;
    CreateDIJobRequestResourceSettingsScheduleResourceSettings& operator=(CreateDIJobRequestResourceSettingsScheduleResourceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestedCu_ == nullptr
        && return this->resourceGroupIdentifier_ == nullptr; };
    // requestedCu Field Functions 
    bool hasRequestedCu() const { return this->requestedCu_ != nullptr;};
    void deleteRequestedCu() { this->requestedCu_ = nullptr;};
    inline double requestedCu() const { DARABONBA_PTR_GET_DEFAULT(requestedCu_, 0.0) };
    inline CreateDIJobRequestResourceSettingsScheduleResourceSettings& setRequestedCu(double requestedCu) { DARABONBA_PTR_SET_VALUE(requestedCu_, requestedCu) };


    // resourceGroupIdentifier Field Functions 
    bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
    void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
    inline string resourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
    inline CreateDIJobRequestResourceSettingsScheduleResourceSettings& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


  protected:
    std::shared_ptr<double> requestedCu_ = nullptr;
    std::shared_ptr<string> resourceGroupIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
