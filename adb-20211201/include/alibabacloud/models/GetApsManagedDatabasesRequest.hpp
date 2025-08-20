// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPSMANAGEDDATABASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPSMANAGEDDATABASESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetApsManagedDatabasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApsManagedDatabasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApsManagedDatabasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetApsManagedDatabasesRequest() = default ;
    GetApsManagedDatabasesRequest(const GetApsManagedDatabasesRequest &) = default ;
    GetApsManagedDatabasesRequest(GetApsManagedDatabasesRequest &&) = default ;
    GetApsManagedDatabasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApsManagedDatabasesRequest() = default ;
    GetApsManagedDatabasesRequest& operator=(const GetApsManagedDatabasesRequest &) = default ;
    GetApsManagedDatabasesRequest& operator=(GetApsManagedDatabasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->regionId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetApsManagedDatabasesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetApsManagedDatabasesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the AnalyticDB for MySQL cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
