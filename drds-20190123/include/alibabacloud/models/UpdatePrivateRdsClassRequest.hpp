// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATERDSCLASSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATERDSCLASSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class UpdatePrivateRdsClassRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateRdsClassRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(PrePayDuration, prePayDuration_);
      DARABONBA_PTR_TO_JSON(RdsClass, rdsClass_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateRdsClassRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(PrePayDuration, prePayDuration_);
      DARABONBA_PTR_FROM_JSON(RdsClass, rdsClass_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
    };
    UpdatePrivateRdsClassRequest() = default ;
    UpdatePrivateRdsClassRequest(const UpdatePrivateRdsClassRequest &) = default ;
    UpdatePrivateRdsClassRequest(UpdatePrivateRdsClassRequest &&) = default ;
    UpdatePrivateRdsClassRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateRdsClassRequest() = default ;
    UpdatePrivateRdsClassRequest& operator=(const UpdatePrivateRdsClassRequest &) = default ;
    UpdatePrivateRdsClassRequest& operator=(UpdatePrivateRdsClassRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoUseCoupon_ != nullptr
        && this->DBInstanceId_ != nullptr && this->drdsInstanceId_ != nullptr && this->prePayDuration_ != nullptr && this->rdsClass_ != nullptr && this->storage_ != nullptr; };
    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool autoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline UpdatePrivateRdsClassRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpdatePrivateRdsClassRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline UpdatePrivateRdsClassRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // prePayDuration Field Functions 
    bool hasPrePayDuration() const { return this->prePayDuration_ != nullptr;};
    void deletePrePayDuration() { this->prePayDuration_ = nullptr;};
    inline int32_t prePayDuration() const { DARABONBA_PTR_GET_DEFAULT(prePayDuration_, 0) };
    inline UpdatePrivateRdsClassRequest& setPrePayDuration(int32_t prePayDuration) { DARABONBA_PTR_SET_VALUE(prePayDuration_, prePayDuration) };


    // rdsClass Field Functions 
    bool hasRdsClass() const { return this->rdsClass_ != nullptr;};
    void deleteRdsClass() { this->rdsClass_ = nullptr;};
    inline string rdsClass() const { DARABONBA_PTR_GET_DEFAULT(rdsClass_, "") };
    inline UpdatePrivateRdsClassRequest& setRdsClass(string rdsClass) { DARABONBA_PTR_SET_VALUE(rdsClass_, rdsClass) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline string storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, "") };
    inline UpdatePrivateRdsClassRequest& setStorage(string storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


  protected:
    // Specifies whether to use vouchers to offset the purchase fees. Valid values: **true** and **false**. Default value: false.
    // 
    // > If you downgrade the specifications of an instance after you use the vouchers, the vouchers used for the purchase cannot be refunded.
    std::shared_ptr<bool> autoUseCoupon_ = nullptr;
    // The ID of the custom ApsaraDB RDS instance at the storage layer.
    // 
    // > You can call the [DescribeDrdsRdsInstances](~~xxxx~~) operation to query the details of all ApsaraDB RDS instances at the storage layer of a PolarDB-X 1.0 instance, including the IDs of the ApsaraDB RDS instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // > You can call the [DescribeDrdsInstances](https://help.aliyun.com/document_detail/139284.html) operation to query the details of all PolarDB-X 1.0 instances within an Alibaba Cloud account, including the IDs of the instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // This parameter is discontinued.
    std::shared_ptr<int32_t> prePayDuration_ = nullptr;
    // The new instance type of the custom ApsaraDB RDS instance at the storage layer.
    // 
    // > You can call the [DescribeAvailableClasses](https://help.aliyun.com/document_detail/196546.html) operation to view the specifications that are supported for a custom ApsaraDB RDS instance. The specifications include the instance type and the storage capacity.
    std::shared_ptr<string> rdsClass_ = nullptr;
    // The new storage capacity of the custom ApsaraDB RDS instance at the storage layer.
    // 
    // > You can call the [DescribeAvailableClasses](https://help.aliyun.com/document_detail/196546.html) operation to view the specifications that are supported for a custom ApsaraDB RDS instance. The specifications include the instance type and the storage capacity.
    std::shared_ptr<string> storage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
