// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOJOBSETTINGSCOLUMNDATATYPESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOJOBSETTINGSCOLUMNDATATYPESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationDataType, destinationDataType_);
      DARABONBA_PTR_TO_JSON(SourceDataType, sourceDataType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationDataType, destinationDataType_);
      DARABONBA_PTR_FROM_JSON(SourceDataType, sourceDataType_);
    };
    GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings() = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings(const GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings &) = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings(GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings &&) = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings() = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings& operator=(const GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings &) = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings& operator=(GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings &&) = default ;
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
    inline GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings& setDestinationDataType(string destinationDataType) { DARABONBA_PTR_SET_VALUE(destinationDataType_, destinationDataType) };


    // sourceDataType Field Functions 
    bool hasSourceDataType() const { return this->sourceDataType_ != nullptr;};
    void deleteSourceDataType() { this->sourceDataType_ = nullptr;};
    inline string sourceDataType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataType_, "") };
    inline GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings& setSourceDataType(string sourceDataType) { DARABONBA_PTR_SET_VALUE(sourceDataType_, sourceDataType) };


  protected:
    // The data type of the destination field. Valid values: bigint, boolean, string, text, datetime, timestamp, decimal, and binary. Different types of data sources support different data types.
    std::shared_ptr<string> destinationDataType_ = nullptr;
    // The data type of the source field. Valid values: bigint, boolean, string, text, datetime, timestamp, decimal, and binary. Different types of data sources support different data types.
    std::shared_ptr<string> sourceDataType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
