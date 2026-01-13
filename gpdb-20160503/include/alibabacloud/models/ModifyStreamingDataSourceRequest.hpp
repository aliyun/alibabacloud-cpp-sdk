// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTREAMINGDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTREAMINGDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyStreamingDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStreamingDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceConfig, dataSourceConfig_);
      DARABONBA_PTR_TO_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStreamingDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceConfig, dataSourceConfig_);
      DARABONBA_PTR_FROM_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyStreamingDataSourceRequest() = default ;
    ModifyStreamingDataSourceRequest(const ModifyStreamingDataSourceRequest &) = default ;
    ModifyStreamingDataSourceRequest(ModifyStreamingDataSourceRequest &&) = default ;
    ModifyStreamingDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStreamingDataSourceRequest() = default ;
    ModifyStreamingDataSourceRequest& operator=(const ModifyStreamingDataSourceRequest &) = default ;
    ModifyStreamingDataSourceRequest& operator=(ModifyStreamingDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->dataSourceConfig_ == nullptr && this->dataSourceDescription_ == nullptr && this->dataSourceId_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyStreamingDataSourceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dataSourceConfig Field Functions 
    bool hasDataSourceConfig() const { return this->dataSourceConfig_ != nullptr;};
    void deleteDataSourceConfig() { this->dataSourceConfig_ = nullptr;};
    inline string getDataSourceConfig() const { DARABONBA_PTR_GET_DEFAULT(dataSourceConfig_, "") };
    inline ModifyStreamingDataSourceRequest& setDataSourceConfig(string dataSourceConfig) { DARABONBA_PTR_SET_VALUE(dataSourceConfig_, dataSourceConfig) };


    // dataSourceDescription Field Functions 
    bool hasDataSourceDescription() const { return this->dataSourceDescription_ != nullptr;};
    void deleteDataSourceDescription() { this->dataSourceDescription_ = nullptr;};
    inline string getDataSourceDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDescription_, "") };
    inline ModifyStreamingDataSourceRequest& setDataSourceDescription(string dataSourceDescription) { DARABONBA_PTR_SET_VALUE(dataSourceDescription_, dataSourceDescription) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline ModifyStreamingDataSourceRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyStreamingDataSourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/196830.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The configurations of the data source.
    shared_ptr<string> dataSourceConfig_ {};
    // The description of the data source.
    shared_ptr<string> dataSourceDescription_ {};
    // The data source ID.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceId_ {};
    // The region ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
