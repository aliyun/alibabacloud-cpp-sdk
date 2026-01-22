// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigName, configName_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDBInstanceConfigRequest() = default ;
    DescribeDBInstanceConfigRequest(const DescribeDBInstanceConfigRequest &) = default ;
    DescribeDBInstanceConfigRequest(DescribeDBInstanceConfigRequest &&) = default ;
    DescribeDBInstanceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceConfigRequest() = default ;
    DescribeDBInstanceConfigRequest& operator=(const DescribeDBInstanceConfigRequest &) = default ;
    DescribeDBInstanceConfigRequest& operator=(DescribeDBInstanceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configName_ == nullptr
        && this->DBInstanceName_ == nullptr && this->regionId_ == nullptr; };
    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline DescribeDBInstanceConfigRequest& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBInstanceConfigRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstanceConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> configName_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
