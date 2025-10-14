// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILESYSTEMREQUESTORDERDETAILS_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILESYSTEMREQUESTORDERDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateFileSystemRequestOrderDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileSystemRequestOrderDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(StorgeType, storgeType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileSystemRequestOrderDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(StorgeType, storgeType_);
    };
    CreateFileSystemRequestOrderDetails() = default ;
    CreateFileSystemRequestOrderDetails(const CreateFileSystemRequestOrderDetails &) = default ;
    CreateFileSystemRequestOrderDetails(CreateFileSystemRequestOrderDetails &&) = default ;
    CreateFileSystemRequestOrderDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileSystemRequestOrderDetails() = default ;
    CreateFileSystemRequestOrderDetails& operator=(const CreateFileSystemRequestOrderDetails &) = default ;
    CreateFileSystemRequestOrderDetails& operator=(CreateFileSystemRequestOrderDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->ensRegionId_ == nullptr && return this->fileSystemName_ == nullptr && return this->mountTargetDomain_ == nullptr && return this->networkId_ == nullptr && return this->orderType_ == nullptr
        && return this->protocolType_ == nullptr && return this->storgeType_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateFileSystemRequestOrderDetails& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateFileSystemRequestOrderDetails& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // fileSystemName Field Functions 
    bool hasFileSystemName() const { return this->fileSystemName_ != nullptr;};
    void deleteFileSystemName() { this->fileSystemName_ = nullptr;};
    inline string fileSystemName() const { DARABONBA_PTR_GET_DEFAULT(fileSystemName_, "") };
    inline CreateFileSystemRequestOrderDetails& setFileSystemName(string fileSystemName) { DARABONBA_PTR_SET_VALUE(fileSystemName_, fileSystemName) };


    // mountTargetDomain Field Functions 
    bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
    void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
    inline string mountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
    inline CreateFileSystemRequestOrderDetails& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline CreateFileSystemRequestOrderDetails& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline CreateFileSystemRequestOrderDetails& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline CreateFileSystemRequestOrderDetails& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // storgeType Field Functions 
    bool hasStorgeType() const { return this->storgeType_ != nullptr;};
    void deleteStorgeType() { this->storgeType_ = nullptr;};
    inline string storgeType() const { DARABONBA_PTR_GET_DEFAULT(storgeType_, "") };
    inline CreateFileSystemRequestOrderDetails& setStorgeType(string storgeType) { DARABONBA_PTR_SET_VALUE(storgeType_, storgeType) };


  protected:
    // The billing method of the NAS file system. Valid values:
    // 
    // *   PrePaid: subscription. This billing method is not supported.
    // *   PostPaid: pay-as-you-go.
    // 
    // This parameter is required.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The ID of the edge node.
    // 
    // This parameter is required.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The name of the file system. The name must be 1 to 80 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemName_ = nullptr;
    // The name of the mount target. The name must be 1 to 80 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    // 
    // This parameter is required.
    std::shared_ptr<string> mountTargetDomain_ = nullptr;
    // The ID of the VPC.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkId_ = nullptr;
    // The type of the order. Set the value to BUY.
    // 
    // This parameter is required.
    std::shared_ptr<string> orderType_ = nullptr;
    // The storage protocol. Set the value to nfs.
    // 
    // This parameter is required.
    std::shared_ptr<string> protocolType_ = nullptr;
    // The storage type. Valid values:
    // 
    // *   Capacity.
    // *   Performance.
    // 
    // This parameter is required.
    std::shared_ptr<string> storgeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
