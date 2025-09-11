// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDBCLUSTERBINDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDBCLUSTERBINDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DeleteDBClusterBindingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDBClusterBindingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterIdBak, DBClusterIdBak_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDBClusterBindingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterIdBak, DBClusterIdBak_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteDBClusterBindingRequest() = default ;
    DeleteDBClusterBindingRequest(const DeleteDBClusterBindingRequest &) = default ;
    DeleteDBClusterBindingRequest(DeleteDBClusterBindingRequest &&) = default ;
    DeleteDBClusterBindingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDBClusterBindingRequest() = default ;
    DeleteDBClusterBindingRequest& operator=(const DeleteDBClusterBindingRequest &) = default ;
    DeleteDBClusterBindingRequest& operator=(DeleteDBClusterBindingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->DBClusterIdBak_ != nullptr && this->DBInstanceId_ != nullptr && this->regionId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteDBClusterBindingRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterIdBak Field Functions 
    bool hasDBClusterIdBak() const { return this->DBClusterIdBak_ != nullptr;};
    void deleteDBClusterIdBak() { this->DBClusterIdBak_ = nullptr;};
    inline string DBClusterIdBak() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIdBak_, "") };
    inline DeleteDBClusterBindingRequest& setDBClusterIdBak(string DBClusterIdBak) { DARABONBA_PTR_SET_VALUE(DBClusterIdBak_, DBClusterIdBak) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteDBClusterBindingRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDBClusterBindingRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of Cluster 1.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The ID of Cluster 2.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterIdBak_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
