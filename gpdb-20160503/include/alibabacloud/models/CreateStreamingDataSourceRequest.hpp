// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTREAMINGDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTREAMINGDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateStreamingDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStreamingDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceConfig, dataSourceConfig_);
      DARABONBA_PTR_TO_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStreamingDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceConfig, dataSourceConfig_);
      DARABONBA_PTR_FROM_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
    };
    CreateStreamingDataSourceRequest() = default ;
    CreateStreamingDataSourceRequest(const CreateStreamingDataSourceRequest &) = default ;
    CreateStreamingDataSourceRequest(CreateStreamingDataSourceRequest &&) = default ;
    CreateStreamingDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStreamingDataSourceRequest() = default ;
    CreateStreamingDataSourceRequest& operator=(const CreateStreamingDataSourceRequest &) = default ;
    CreateStreamingDataSourceRequest& operator=(CreateStreamingDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->dataSourceConfig_ == nullptr && return this->dataSourceDescription_ == nullptr && return this->dataSourceName_ == nullptr && return this->dataSourceType_ == nullptr && return this->regionId_ == nullptr
        && return this->serviceId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateStreamingDataSourceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dataSourceConfig Field Functions 
    bool hasDataSourceConfig() const { return this->dataSourceConfig_ != nullptr;};
    void deleteDataSourceConfig() { this->dataSourceConfig_ = nullptr;};
    inline string dataSourceConfig() const { DARABONBA_PTR_GET_DEFAULT(dataSourceConfig_, "") };
    inline CreateStreamingDataSourceRequest& setDataSourceConfig(string dataSourceConfig) { DARABONBA_PTR_SET_VALUE(dataSourceConfig_, dataSourceConfig) };


    // dataSourceDescription Field Functions 
    bool hasDataSourceDescription() const { return this->dataSourceDescription_ != nullptr;};
    void deleteDataSourceDescription() { this->dataSourceDescription_ = nullptr;};
    inline string dataSourceDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDescription_, "") };
    inline CreateStreamingDataSourceRequest& setDataSourceDescription(string dataSourceDescription) { DARABONBA_PTR_SET_VALUE(dataSourceDescription_, dataSourceDescription) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline CreateStreamingDataSourceRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline CreateStreamingDataSourceRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateStreamingDataSourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int32_t serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0) };
    inline CreateStreamingDataSourceRequest& setServiceId(int32_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // Instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Data source configuration information.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceConfig_ = nullptr;
    // Data source description.
    std::shared_ptr<string> dataSourceDescription_ = nullptr;
    // Data source name.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // Data source type. Values:
    //  -  kafka
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // Region ID.
    // 
    // > You can view available region IDs through the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) interface.
    std::shared_ptr<string> regionId_ = nullptr;
    // Real-time data service ID.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> serviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
