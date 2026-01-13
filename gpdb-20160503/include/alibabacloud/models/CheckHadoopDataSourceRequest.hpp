// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKHADOOPDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKHADOOPDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CheckHadoopDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckHadoopDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckDir, checkDir_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckHadoopDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckDir, checkDir_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CheckHadoopDataSourceRequest() = default ;
    CheckHadoopDataSourceRequest(const CheckHadoopDataSourceRequest &) = default ;
    CheckHadoopDataSourceRequest(CheckHadoopDataSourceRequest &&) = default ;
    CheckHadoopDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckHadoopDataSourceRequest() = default ;
    CheckHadoopDataSourceRequest& operator=(const CheckHadoopDataSourceRequest &) = default ;
    CheckHadoopDataSourceRequest& operator=(CheckHadoopDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkDir_ == nullptr
        && this->DBInstanceId_ == nullptr && this->dataSourceId_ == nullptr && this->regionId_ == nullptr; };
    // checkDir Field Functions 
    bool hasCheckDir() const { return this->checkDir_ != nullptr;};
    void deleteCheckDir() { this->checkDir_ = nullptr;};
    inline string getCheckDir() const { DARABONBA_PTR_GET_DEFAULT(checkDir_, "") };
    inline CheckHadoopDataSourceRequest& setCheckDir(string checkDir) { DARABONBA_PTR_SET_VALUE(checkDir_, checkDir) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CheckHadoopDataSourceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline CheckHadoopDataSourceRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckHadoopDataSourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The Hadoop path that you want to check.
    // 
    // This parameter is required.
    shared_ptr<string> checkDir_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
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
