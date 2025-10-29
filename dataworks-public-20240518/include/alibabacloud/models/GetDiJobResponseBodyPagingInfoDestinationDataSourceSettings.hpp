// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFODESTINATIONDATASOURCESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFODESTINATIONDATASOURCESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
    };
    GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings() = default ;
    GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings(const GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings &) = default ;
    GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings(GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings &&) = default ;
    GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings() = default ;
    GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings& operator=(const GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings &) = default ;
    GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings& operator=(GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceName_ == nullptr; };
    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


  protected:
    // The name of the data source.
    std::shared_ptr<string> dataSourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
