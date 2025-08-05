// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYJDBCDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYJDBCDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyJDBCDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyJDBCDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(JDBCConnectionString, JDBCConnectionString_);
      DARABONBA_PTR_TO_JSON(JDBCPassword, JDBCPassword_);
      DARABONBA_PTR_TO_JSON(JDBCUserName, JDBCUserName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyJDBCDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(JDBCConnectionString, JDBCConnectionString_);
      DARABONBA_PTR_FROM_JSON(JDBCPassword, JDBCPassword_);
      DARABONBA_PTR_FROM_JSON(JDBCUserName, JDBCUserName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyJDBCDataSourceRequest() = default ;
    ModifyJDBCDataSourceRequest(const ModifyJDBCDataSourceRequest &) = default ;
    ModifyJDBCDataSourceRequest(ModifyJDBCDataSourceRequest &&) = default ;
    ModifyJDBCDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyJDBCDataSourceRequest() = default ;
    ModifyJDBCDataSourceRequest& operator=(const ModifyJDBCDataSourceRequest &) = default ;
    ModifyJDBCDataSourceRequest& operator=(ModifyJDBCDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->dataSourceDescription_ != nullptr && this->dataSourceId_ != nullptr && this->dataSourceType_ != nullptr && this->JDBCConnectionString_ != nullptr && this->JDBCPassword_ != nullptr
        && this->JDBCUserName_ != nullptr && this->regionId_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyJDBCDataSourceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dataSourceDescription Field Functions 
    bool hasDataSourceDescription() const { return this->dataSourceDescription_ != nullptr;};
    void deleteDataSourceDescription() { this->dataSourceDescription_ = nullptr;};
    inline string dataSourceDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDescription_, "") };
    inline ModifyJDBCDataSourceRequest& setDataSourceDescription(string dataSourceDescription) { DARABONBA_PTR_SET_VALUE(dataSourceDescription_, dataSourceDescription) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline ModifyJDBCDataSourceRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ModifyJDBCDataSourceRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // JDBCConnectionString Field Functions 
    bool hasJDBCConnectionString() const { return this->JDBCConnectionString_ != nullptr;};
    void deleteJDBCConnectionString() { this->JDBCConnectionString_ = nullptr;};
    inline string JDBCConnectionString() const { DARABONBA_PTR_GET_DEFAULT(JDBCConnectionString_, "") };
    inline ModifyJDBCDataSourceRequest& setJDBCConnectionString(string JDBCConnectionString) { DARABONBA_PTR_SET_VALUE(JDBCConnectionString_, JDBCConnectionString) };


    // JDBCPassword Field Functions 
    bool hasJDBCPassword() const { return this->JDBCPassword_ != nullptr;};
    void deleteJDBCPassword() { this->JDBCPassword_ = nullptr;};
    inline string JDBCPassword() const { DARABONBA_PTR_GET_DEFAULT(JDBCPassword_, "") };
    inline ModifyJDBCDataSourceRequest& setJDBCPassword(string JDBCPassword) { DARABONBA_PTR_SET_VALUE(JDBCPassword_, JDBCPassword) };


    // JDBCUserName Field Functions 
    bool hasJDBCUserName() const { return this->JDBCUserName_ != nullptr;};
    void deleteJDBCUserName() { this->JDBCUserName_ = nullptr;};
    inline string JDBCUserName() const { DARABONBA_PTR_GET_DEFAULT(JDBCUserName_, "") };
    inline ModifyJDBCDataSourceRequest& setJDBCUserName(string JDBCUserName) { DARABONBA_PTR_SET_VALUE(JDBCUserName_, JDBCUserName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyJDBCDataSourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Data source description.
    std::shared_ptr<string> dataSourceDescription_ = nullptr;
    // Data source ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // Database type: - mysql - postgresql - sqlserver
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The JDBC connection string.
    std::shared_ptr<string> JDBCConnectionString_ = nullptr;
    // The password of the database account.
    std::shared_ptr<string> JDBCPassword_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> JDBCUserName_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
