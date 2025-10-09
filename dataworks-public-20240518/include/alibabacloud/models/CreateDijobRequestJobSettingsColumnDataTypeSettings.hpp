// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTJOBSETTINGSCOLUMNDATATYPESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTJOBSETTINGSCOLUMNDATATYPESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIJobRequestJobSettingsColumnDataTypeSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequestJobSettingsColumnDataTypeSettings& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationDataType, destinationDataType_);
      DARABONBA_PTR_TO_JSON(SourceDataType, sourceDataType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequestJobSettingsColumnDataTypeSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationDataType, destinationDataType_);
      DARABONBA_PTR_FROM_JSON(SourceDataType, sourceDataType_);
    };
    CreateDIJobRequestJobSettingsColumnDataTypeSettings() = default ;
    CreateDIJobRequestJobSettingsColumnDataTypeSettings(const CreateDIJobRequestJobSettingsColumnDataTypeSettings &) = default ;
    CreateDIJobRequestJobSettingsColumnDataTypeSettings(CreateDIJobRequestJobSettingsColumnDataTypeSettings &&) = default ;
    CreateDIJobRequestJobSettingsColumnDataTypeSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequestJobSettingsColumnDataTypeSettings() = default ;
    CreateDIJobRequestJobSettingsColumnDataTypeSettings& operator=(const CreateDIJobRequestJobSettingsColumnDataTypeSettings &) = default ;
    CreateDIJobRequestJobSettingsColumnDataTypeSettings& operator=(CreateDIJobRequestJobSettingsColumnDataTypeSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationDataType_ != nullptr
        && this->sourceDataType_ != nullptr; };
    // destinationDataType Field Functions 
    bool hasDestinationDataType() const { return this->destinationDataType_ != nullptr;};
    void deleteDestinationDataType() { this->destinationDataType_ = nullptr;};
    inline string destinationDataType() const { DARABONBA_PTR_GET_DEFAULT(destinationDataType_, "") };
    inline CreateDIJobRequestJobSettingsColumnDataTypeSettings& setDestinationDataType(string destinationDataType) { DARABONBA_PTR_SET_VALUE(destinationDataType_, destinationDataType) };


    // sourceDataType Field Functions 
    bool hasSourceDataType() const { return this->sourceDataType_ != nullptr;};
    void deleteSourceDataType() { this->sourceDataType_ = nullptr;};
    inline string sourceDataType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataType_, "") };
    inline CreateDIJobRequestJobSettingsColumnDataTypeSettings& setSourceDataType(string sourceDataType) { DARABONBA_PTR_SET_VALUE(sourceDataType_, sourceDataType) };


  protected:
    std::shared_ptr<string> destinationDataType_ = nullptr;
    std::shared_ptr<string> sourceDataType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
