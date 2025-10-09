// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTDESTINATIONDATASOURCESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTDESTINATIONDATASOURCESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIJobRequestDestinationDataSourceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequestDestinationDataSourceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequestDestinationDataSourceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
    };
    CreateDIJobRequestDestinationDataSourceSettings() = default ;
    CreateDIJobRequestDestinationDataSourceSettings(const CreateDIJobRequestDestinationDataSourceSettings &) = default ;
    CreateDIJobRequestDestinationDataSourceSettings(CreateDIJobRequestDestinationDataSourceSettings &&) = default ;
    CreateDIJobRequestDestinationDataSourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequestDestinationDataSourceSettings() = default ;
    CreateDIJobRequestDestinationDataSourceSettings& operator=(const CreateDIJobRequestDestinationDataSourceSettings &) = default ;
    CreateDIJobRequestDestinationDataSourceSettings& operator=(CreateDIJobRequestDestinationDataSourceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceName_ != nullptr; };
    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline CreateDIJobRequestDestinationDataSourceSettings& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


  protected:
    std::shared_ptr<string> dataSourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
