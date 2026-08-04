// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDRESOURCECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDRESOURCECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UnbindResourceControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindResourceControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceControlName, resourceControlName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindResourceControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceControlName, resourceControlName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
    };
    UnbindResourceControlRequest() = default ;
    UnbindResourceControlRequest(const UnbindResourceControlRequest &) = default ;
    UnbindResourceControlRequest(UnbindResourceControlRequest &&) = default ;
    UnbindResourceControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindResourceControlRequest() = default ;
    UnbindResourceControlRequest& operator=(const UnbindResourceControlRequest &) = default ;
    UnbindResourceControlRequest& operator=(UnbindResourceControlRequest &&) = default ;
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
    inline UnbindResourceControlRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UnbindResourceControlRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceControlName Field Functions 
    bool hasResourceControlName() const { return this->resourceControlName_ != nullptr;};
    void deleteResourceControlName() { this->resourceControlName_ = nullptr;};
    inline string getResourceControlName() const { DARABONBA_PTR_GET_DEFAULT(resourceControlName_, "") };
    inline UnbindResourceControlRequest& setResourceControlName(string resourceControlName) { DARABONBA_PTR_SET_VALUE(resourceControlName_, resourceControlName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline UnbindResourceControlRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline UnbindResourceControlRequest& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // The PolarDB cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The region ID of the PolarDB cluster.
    // >You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query region IDs.
    shared_ptr<string> regionId_ {};
    // The name of the resource control rule. The name must be 1 to 63 ASCII bytes in length, start with a letter, and can contain only letters, digits, and underscores.
    // 
    // This parameter is required.
    shared_ptr<string> resourceControlName_ {};
    // The type of the target to unbind. Valid values: USER, DATABASE, QUERY, CONNECTION. The value is case-insensitive.
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
    // The value of the target to unbind. The format is the same as the TargetValue for the corresponding target type in the BindResourceControl operation.
    // 
    // This parameter is required.
    shared_ptr<string> targetValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
