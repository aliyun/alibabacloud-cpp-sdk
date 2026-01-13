// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHADOOPCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHADOOPCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHadoopConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHadoopConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigName, configName_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EmrInstanceId, emrInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHadoopConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EmrInstanceId, emrInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeHadoopConfigsRequest() = default ;
    DescribeHadoopConfigsRequest(const DescribeHadoopConfigsRequest &) = default ;
    DescribeHadoopConfigsRequest(DescribeHadoopConfigsRequest &&) = default ;
    DescribeHadoopConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHadoopConfigsRequest() = default ;
    DescribeHadoopConfigsRequest& operator=(const DescribeHadoopConfigsRequest &) = default ;
    DescribeHadoopConfigsRequest& operator=(DescribeHadoopConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configName_ == nullptr
        && this->DBInstanceId_ == nullptr && this->emrInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline DescribeHadoopConfigsRequest& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeHadoopConfigsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // emrInstanceId Field Functions 
    bool hasEmrInstanceId() const { return this->emrInstanceId_ != nullptr;};
    void deleteEmrInstanceId() { this->emrInstanceId_ = nullptr;};
    inline string getEmrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(emrInstanceId_, "") };
    inline DescribeHadoopConfigsRequest& setEmrInstanceId(string emrInstanceId) { DARABONBA_PTR_SET_VALUE(emrInstanceId_, emrInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHadoopConfigsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the configuration file. Valid values:
    // 
    // *   hdfs-site
    // *   core-site
    // *   yarn-site
    // *   mapred-site
    // *   hive-site
    // 
    // This parameter is required.
    shared_ptr<string> configName_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The E-MapReduce (EMR) Hadoop cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> emrInstanceId_ {};
    // The region ID of the instance.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
