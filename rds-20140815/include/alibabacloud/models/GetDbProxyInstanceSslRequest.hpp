// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBPROXYINSTANCESSLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDBPROXYINSTANCESSLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class GetDbProxyInstanceSslRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDbProxyInstanceSslRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDbProxyInstanceSslRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetDbProxyInstanceSslRequest() = default ;
    GetDbProxyInstanceSslRequest(const GetDbProxyInstanceSslRequest &) = default ;
    GetDbProxyInstanceSslRequest(GetDbProxyInstanceSslRequest &&) = default ;
    GetDbProxyInstanceSslRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDbProxyInstanceSslRequest() = default ;
    GetDbProxyInstanceSslRequest& operator=(const GetDbProxyInstanceSslRequest &) = default ;
    GetDbProxyInstanceSslRequest& operator=(GetDbProxyInstanceSslRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBProxyEngineType_ == nullptr
        && return this->dbInstanceId_ == nullptr && return this->regionId_ == nullptr; };
    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string DBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline GetDbProxyInstanceSslRequest& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline GetDbProxyInstanceSslRequest& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDbProxyInstanceSslRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // A reserved parameter. You do not need to specify this parameter.
    std::shared_ptr<string> DBProxyEngineType_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
