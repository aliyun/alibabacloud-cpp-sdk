// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLARFSINSTANCEDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLARFSINSTANCEDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyPolarFsInstanceDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolarFsInstanceDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceDescription, polarFsInstanceDescription_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolarFsInstanceDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceDescription, polarFsInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyPolarFsInstanceDescriptionRequest() = default ;
    ModifyPolarFsInstanceDescriptionRequest(const ModifyPolarFsInstanceDescriptionRequest &) = default ;
    ModifyPolarFsInstanceDescriptionRequest(ModifyPolarFsInstanceDescriptionRequest &&) = default ;
    ModifyPolarFsInstanceDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolarFsInstanceDescriptionRequest() = default ;
    ModifyPolarFsInstanceDescriptionRequest& operator=(const ModifyPolarFsInstanceDescriptionRequest &) = default ;
    ModifyPolarFsInstanceDescriptionRequest& operator=(ModifyPolarFsInstanceDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->polarFsInstanceDescription_ == nullptr && this->polarFsInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyPolarFsInstanceDescriptionRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // polarFsInstanceDescription Field Functions 
    bool hasPolarFsInstanceDescription() const { return this->polarFsInstanceDescription_ != nullptr;};
    void deletePolarFsInstanceDescription() { this->polarFsInstanceDescription_ = nullptr;};
    inline string getPolarFsInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceDescription_, "") };
    inline ModifyPolarFsInstanceDescriptionRequest& setPolarFsInstanceDescription(string polarFsInstanceDescription) { DARABONBA_PTR_SET_VALUE(polarFsInstanceDescription_, polarFsInstanceDescription) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline ModifyPolarFsInstanceDescriptionRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPolarFsInstanceDescriptionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query all clusters in the specified region, including cluster IDs.
    shared_ptr<string> DBClusterId_ {};
    // The description of the PolarFS instance.
    // 
    // This parameter is required.
    shared_ptr<string> polarFsInstanceDescription_ {};
    // The PolarFS instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query all available regions for the current account, including region IDs.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
