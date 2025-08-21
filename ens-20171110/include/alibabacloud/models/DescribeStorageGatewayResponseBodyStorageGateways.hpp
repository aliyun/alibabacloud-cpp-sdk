// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEGATEWAYRESPONSEBODYSTORAGEGATEWAYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEGATEWAYRESPONSEBODYSTORAGEGATEWAYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeStorageGatewayResponseBodyStorageGateways : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageGatewayResponseBodyStorageGateways& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(ServiceIp, serviceIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageGatewayId, storageGatewayId_);
      DARABONBA_PTR_TO_JSON(StorageGatewayName, storageGatewayName_);
      DARABONBA_PTR_TO_JSON(StorageGatewayType, storageGatewayType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageGatewayResponseBodyStorageGateways& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(ServiceIp, serviceIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageGatewayId, storageGatewayId_);
      DARABONBA_PTR_FROM_JSON(StorageGatewayName, storageGatewayName_);
      DARABONBA_PTR_FROM_JSON(StorageGatewayType, storageGatewayType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeStorageGatewayResponseBodyStorageGateways() = default ;
    DescribeStorageGatewayResponseBodyStorageGateways(const DescribeStorageGatewayResponseBodyStorageGateways &) = default ;
    DescribeStorageGatewayResponseBodyStorageGateways(DescribeStorageGatewayResponseBodyStorageGateways &&) = default ;
    DescribeStorageGatewayResponseBodyStorageGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageGatewayResponseBodyStorageGateways() = default ;
    DescribeStorageGatewayResponseBodyStorageGateways& operator=(const DescribeStorageGatewayResponseBodyStorageGateways &) = default ;
    DescribeStorageGatewayResponseBodyStorageGateways& operator=(DescribeStorageGatewayResponseBodyStorageGateways &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrBlock_ != nullptr
        && this->creationTime_ != nullptr && this->description_ != nullptr && this->ensRegionId_ != nullptr && this->serviceIp_ != nullptr && this->status_ != nullptr
        && this->storageGatewayId_ != nullptr && this->storageGatewayName_ != nullptr && this->storageGatewayType_ != nullptr && this->vpcId_ != nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeStorageGatewayResponseBodyStorageGateways& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeStorageGatewayResponseBodyStorageGateways& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeStorageGatewayResponseBodyStorageGateways& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeStorageGatewayResponseBodyStorageGateways& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // serviceIp Field Functions 
    bool hasServiceIp() const { return this->serviceIp_ != nullptr;};
    void deleteServiceIp() { this->serviceIp_ = nullptr;};
    inline string serviceIp() const { DARABONBA_PTR_GET_DEFAULT(serviceIp_, "") };
    inline DescribeStorageGatewayResponseBodyStorageGateways& setServiceIp(string serviceIp) { DARABONBA_PTR_SET_VALUE(serviceIp_, serviceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeStorageGatewayResponseBodyStorageGateways& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageGatewayId Field Functions 
    bool hasStorageGatewayId() const { return this->storageGatewayId_ != nullptr;};
    void deleteStorageGatewayId() { this->storageGatewayId_ = nullptr;};
    inline string storageGatewayId() const { DARABONBA_PTR_GET_DEFAULT(storageGatewayId_, "") };
    inline DescribeStorageGatewayResponseBodyStorageGateways& setStorageGatewayId(string storageGatewayId) { DARABONBA_PTR_SET_VALUE(storageGatewayId_, storageGatewayId) };


    // storageGatewayName Field Functions 
    bool hasStorageGatewayName() const { return this->storageGatewayName_ != nullptr;};
    void deleteStorageGatewayName() { this->storageGatewayName_ = nullptr;};
    inline string storageGatewayName() const { DARABONBA_PTR_GET_DEFAULT(storageGatewayName_, "") };
    inline DescribeStorageGatewayResponseBodyStorageGateways& setStorageGatewayName(string storageGatewayName) { DARABONBA_PTR_SET_VALUE(storageGatewayName_, storageGatewayName) };


    // storageGatewayType Field Functions 
    bool hasStorageGatewayType() const { return this->storageGatewayType_ != nullptr;};
    void deleteStorageGatewayType() { this->storageGatewayType_ = nullptr;};
    inline int32_t storageGatewayType() const { DARABONBA_PTR_GET_DEFAULT(storageGatewayType_, 0) };
    inline DescribeStorageGatewayResponseBodyStorageGateways& setStorageGatewayType(int32_t storageGatewayType) { DARABONBA_PTR_SET_VALUE(storageGatewayType_, storageGatewayType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeStorageGatewayResponseBodyStorageGateways& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The internal CIDR block.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The time when the storage gateway was created. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the storage gateway.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The IP address of the service.
    std::shared_ptr<string> serviceIp_ = nullptr;
    // The status of the storage gateway. Valid values:
    // 
    // *   creating
    // *   available
    // *   deleting
    // *   deleted
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the storage gateway.
    std::shared_ptr<string> storageGatewayId_ = nullptr;
    // The name of the storage gateway.
    std::shared_ptr<string> storageGatewayName_ = nullptr;
    // The type of the storage gateway. Default value: 1, which indicates iSCSI.
    std::shared_ptr<int32_t> storageGatewayType_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
