// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKJDBCSOURCENETCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKJDBCSOURCENETCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CheckJDBCSourceNetConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckJDBCSourceNetConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(JdbcConnectionString, jdbcConnectionString_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckJDBCSourceNetConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(JdbcConnectionString, jdbcConnectionString_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CheckJDBCSourceNetConnectionRequest() = default ;
    CheckJDBCSourceNetConnectionRequest(const CheckJDBCSourceNetConnectionRequest &) = default ;
    CheckJDBCSourceNetConnectionRequest(CheckJDBCSourceNetConnectionRequest &&) = default ;
    CheckJDBCSourceNetConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckJDBCSourceNetConnectionRequest() = default ;
    CheckJDBCSourceNetConnectionRequest& operator=(const CheckJDBCSourceNetConnectionRequest &) = default ;
    CheckJDBCSourceNetConnectionRequest& operator=(CheckJDBCSourceNetConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->dataSourceId_ != nullptr && this->jdbcConnectionString_ != nullptr && this->regionId_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CheckJDBCSourceNetConnectionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline CheckJDBCSourceNetConnectionRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // jdbcConnectionString Field Functions 
    bool hasJdbcConnectionString() const { return this->jdbcConnectionString_ != nullptr;};
    void deleteJdbcConnectionString() { this->jdbcConnectionString_ = nullptr;};
    inline string jdbcConnectionString() const { DARABONBA_PTR_GET_DEFAULT(jdbcConnectionString_, "") };
    inline CheckJDBCSourceNetConnectionRequest& setJdbcConnectionString(string jdbcConnectionString) { DARABONBA_PTR_SET_VALUE(jdbcConnectionString_, jdbcConnectionString) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckJDBCSourceNetConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Either DataSourceId or JdbcConnectionString must be specified as input, otherwise an error will occur. If both parameters are specified, JdbcConnectionString will be used preferentially.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // JDBC connection string.
    std::shared_ptr<string> jdbcConnectionString_ = nullptr;
    // The ID of the region where the instance is located.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
