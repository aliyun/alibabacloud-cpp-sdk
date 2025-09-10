// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateResourceInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(EcsInstanceCount, ecsInstanceCount_);
      DARABONBA_PTR_TO_JSON(EcsInstanceType, ecsInstanceType_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceCount, ecsInstanceCount_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceType, ecsInstanceType_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    CreateResourceInstancesRequest() = default ;
    CreateResourceInstancesRequest(const CreateResourceInstancesRequest &) = default ;
    CreateResourceInstancesRequest(CreateResourceInstancesRequest &&) = default ;
    CreateResourceInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceInstancesRequest() = default ;
    CreateResourceInstancesRequest& operator=(const CreateResourceInstancesRequest &) = default ;
    CreateResourceInstancesRequest& operator=(CreateResourceInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenewal_ != nullptr
        && this->chargeType_ != nullptr && this->ecsInstanceCount_ != nullptr && this->ecsInstanceType_ != nullptr && this->labels_ != nullptr && this->systemDiskSize_ != nullptr
        && this->userData_ != nullptr && this->zone_ != nullptr; };
    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool autoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline CreateResourceInstancesRequest& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateResourceInstancesRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // ecsInstanceCount Field Functions 
    bool hasEcsInstanceCount() const { return this->ecsInstanceCount_ != nullptr;};
    void deleteEcsInstanceCount() { this->ecsInstanceCount_ = nullptr;};
    inline int32_t ecsInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceCount_, 0) };
    inline CreateResourceInstancesRequest& setEcsInstanceCount(int32_t ecsInstanceCount) { DARABONBA_PTR_SET_VALUE(ecsInstanceCount_, ecsInstanceCount) };


    // ecsInstanceType Field Functions 
    bool hasEcsInstanceType() const { return this->ecsInstanceType_ != nullptr;};
    void deleteEcsInstanceType() { this->ecsInstanceType_ = nullptr;};
    inline string ecsInstanceType() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceType_, "") };
    inline CreateResourceInstancesRequest& setEcsInstanceType(string ecsInstanceType) { DARABONBA_PTR_SET_VALUE(ecsInstanceType_, ecsInstanceType) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline CreateResourceInstancesRequest& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateResourceInstancesRequest& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateResourceInstancesRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateResourceInstancesRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline CreateResourceInstancesRequest& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // *   false (default)
    // *   true
    std::shared_ptr<bool> autoRenewal_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   PrePaid: subscription.
    // *   PostPaid: pay-as-you-go.
    // 
    // This parameter is required.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The number of instances that you want to create. Valid values: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> ecsInstanceCount_ = nullptr;
    // The type of the Elastic Compute Service (ECS) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> ecsInstanceType_ = nullptr;
    // The custom service tag.
    std::shared_ptr<map<string, string>> labels_ = nullptr;
    // The size of the system disk. Unit: GiB. Valid values: 200 to 2000. Default value: 200.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The user-defined information. This parameter is not in use.
    std::shared_ptr<string> userData_ = nullptr;
    // The zone to which the instance belongs.
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
