// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDRESOURCECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDRESOURCECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class BindResourceControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindResourceControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceControlName, resourceControlName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
    };
    friend void from_json(const Darabonba::Json& j, BindResourceControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceControlName, resourceControlName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
    };
    BindResourceControlRequest() = default ;
    BindResourceControlRequest(const BindResourceControlRequest &) = default ;
    BindResourceControlRequest(BindResourceControlRequest &&) = default ;
    BindResourceControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindResourceControlRequest() = default ;
    BindResourceControlRequest& operator=(const BindResourceControlRequest &) = default ;
    BindResourceControlRequest& operator=(BindResourceControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->regionId_ == nullptr && this->resourceControlName_ == nullptr && this->targetType_ == nullptr && this->targetValue_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline BindResourceControlRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BindResourceControlRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceControlName Field Functions 
    bool hasResourceControlName() const { return this->resourceControlName_ != nullptr;};
    void deleteResourceControlName() { this->resourceControlName_ = nullptr;};
    inline string getResourceControlName() const { DARABONBA_PTR_GET_DEFAULT(resourceControlName_, "") };
    inline BindResourceControlRequest& setResourceControlName(string resourceControlName) { DARABONBA_PTR_SET_VALUE(resourceControlName_, resourceControlName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline BindResourceControlRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline BindResourceControlRequest& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // The PolarDB cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The region ID of the PolarDB cluster.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query available regions.
    shared_ptr<string> regionId_ {};
    // The name of the resource control rule. The name must be 1 to 63 ASCII bytes in length, start with a letter, and can contain only letters, digits, and underscores.
    // 
    // This parameter is required.
    shared_ptr<string> resourceControlName_ {};
    // The type of the binding target. Valid values: USER, DATABASE, QUERY, CONNECTION. The value is case-insensitive.
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
    // The value of the binding target. The format depends on the value of TargetType. For more information, see the table below.
    // 
    // This parameter is required.
    shared_ptr<string> targetValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
