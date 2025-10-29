// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOSOURCEDATASOURCESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOSOURCEDATASOURCESETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfoSourceDataSourceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfoSourceDataSourceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceProperties, dataSourceProperties_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfoSourceDataSourceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceProperties, dataSourceProperties_);
    };
    GetDIJobResponseBodyPagingInfoSourceDataSourceSettings() = default ;
    GetDIJobResponseBodyPagingInfoSourceDataSourceSettings(const GetDIJobResponseBodyPagingInfoSourceDataSourceSettings &) = default ;
    GetDIJobResponseBodyPagingInfoSourceDataSourceSettings(GetDIJobResponseBodyPagingInfoSourceDataSourceSettings &&) = default ;
    GetDIJobResponseBodyPagingInfoSourceDataSourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfoSourceDataSourceSettings() = default ;
    GetDIJobResponseBodyPagingInfoSourceDataSourceSettings& operator=(const GetDIJobResponseBodyPagingInfoSourceDataSourceSettings &) = default ;
    GetDIJobResponseBodyPagingInfoSourceDataSourceSettings& operator=(GetDIJobResponseBodyPagingInfoSourceDataSourceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceName_ == nullptr
        && return this->dataSourceProperties_ == nullptr; };
    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline GetDIJobResponseBodyPagingInfoSourceDataSourceSettings& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceProperties Field Functions 
    bool hasDataSourceProperties() const { return this->dataSourceProperties_ != nullptr;};
    void deleteDataSourceProperties() { this->dataSourceProperties_ = nullptr;};
    inline const Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties & dataSourceProperties() const { DARABONBA_PTR_GET_CONST(dataSourceProperties_, Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties) };
    inline Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties dataSourceProperties() { DARABONBA_PTR_GET(dataSourceProperties_, Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties) };
    inline GetDIJobResponseBodyPagingInfoSourceDataSourceSettings& setDataSourceProperties(const Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties & dataSourceProperties) { DARABONBA_PTR_SET_VALUE(dataSourceProperties_, dataSourceProperties) };
    inline GetDIJobResponseBodyPagingInfoSourceDataSourceSettings& setDataSourceProperties(Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties && dataSourceProperties) { DARABONBA_PTR_SET_RVALUE(dataSourceProperties_, dataSourceProperties) };


  protected:
    // The name of the data source.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The properties of the data source.
    std::shared_ptr<Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties> dataSourceProperties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
