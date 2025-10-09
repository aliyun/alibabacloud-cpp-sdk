// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTSOURCEDATASOURCESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTSOURCEDATASOURCESETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIJobRequestSourceDataSourceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequestSourceDataSourceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceProperties, dataSourceProperties_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequestSourceDataSourceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceProperties, dataSourceProperties_);
    };
    CreateDIJobRequestSourceDataSourceSettings() = default ;
    CreateDIJobRequestSourceDataSourceSettings(const CreateDIJobRequestSourceDataSourceSettings &) = default ;
    CreateDIJobRequestSourceDataSourceSettings(CreateDIJobRequestSourceDataSourceSettings &&) = default ;
    CreateDIJobRequestSourceDataSourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequestSourceDataSourceSettings() = default ;
    CreateDIJobRequestSourceDataSourceSettings& operator=(const CreateDIJobRequestSourceDataSourceSettings &) = default ;
    CreateDIJobRequestSourceDataSourceSettings& operator=(CreateDIJobRequestSourceDataSourceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceName_ != nullptr
        && this->dataSourceProperties_ != nullptr; };
    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline CreateDIJobRequestSourceDataSourceSettings& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceProperties Field Functions 
    bool hasDataSourceProperties() const { return this->dataSourceProperties_ != nullptr;};
    void deleteDataSourceProperties() { this->dataSourceProperties_ = nullptr;};
    inline const Models::CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties & dataSourceProperties() const { DARABONBA_PTR_GET_CONST(dataSourceProperties_, Models::CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties) };
    inline Models::CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties dataSourceProperties() { DARABONBA_PTR_GET(dataSourceProperties_, Models::CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties) };
    inline CreateDIJobRequestSourceDataSourceSettings& setDataSourceProperties(const Models::CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties & dataSourceProperties) { DARABONBA_PTR_SET_VALUE(dataSourceProperties_, dataSourceProperties) };
    inline CreateDIJobRequestSourceDataSourceSettings& setDataSourceProperties(Models::CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties && dataSourceProperties) { DARABONBA_PTR_SET_RVALUE(dataSourceProperties_, dataSourceProperties) };


  protected:
    std::shared_ptr<string> dataSourceName_ = nullptr;
    std::shared_ptr<Models::CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties> dataSourceProperties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
