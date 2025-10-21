// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyDBInstanceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeType, attributeType_);
      DARABONBA_PTR_TO_JSON(AttributeValue, attributeValue_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeType, attributeType_);
      DARABONBA_PTR_FROM_JSON(AttributeValue, attributeValue_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDBInstanceAttributeRequest() = default ;
    ModifyDBInstanceAttributeRequest(const ModifyDBInstanceAttributeRequest &) = default ;
    ModifyDBInstanceAttributeRequest(ModifyDBInstanceAttributeRequest &&) = default ;
    ModifyDBInstanceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceAttributeRequest() = default ;
    ModifyDBInstanceAttributeRequest& operator=(const ModifyDBInstanceAttributeRequest &) = default ;
    ModifyDBInstanceAttributeRequest& operator=(ModifyDBInstanceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributeType_ == nullptr
        && return this->attributeValue_ == nullptr && return this->DBInstanceId_ == nullptr && return this->product_ == nullptr && return this->regionId_ == nullptr; };
    // attributeType Field Functions 
    bool hasAttributeType() const { return this->attributeType_ != nullptr;};
    void deleteAttributeType() { this->attributeType_ = nullptr;};
    inline string attributeType() const { DARABONBA_PTR_GET_DEFAULT(attributeType_, "") };
    inline ModifyDBInstanceAttributeRequest& setAttributeType(string attributeType) { DARABONBA_PTR_SET_VALUE(attributeType_, attributeType) };


    // attributeValue Field Functions 
    bool hasAttributeValue() const { return this->attributeValue_ != nullptr;};
    void deleteAttributeValue() { this->attributeValue_ = nullptr;};
    inline string attributeValue() const { DARABONBA_PTR_GET_DEFAULT(attributeValue_, "") };
    inline ModifyDBInstanceAttributeRequest& setAttributeValue(string attributeValue) { DARABONBA_PTR_SET_VALUE(attributeValue_, attributeValue) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceAttributeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline ModifyDBInstanceAttributeRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBInstanceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The configuration that you want to modify.
    // 
    // *   MaintainTime: the O\\&M time
    // *   DBInstanceDescription: the cluster name
    // 
    // This parameter is required.
    std::shared_ptr<string> attributeType_ = nullptr;
    // The new value of the configuration.
    // 
    // This parameter is required.
    std::shared_ptr<string> attributeValue_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The code of the cloud service.
    std::shared_ptr<string> product_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
