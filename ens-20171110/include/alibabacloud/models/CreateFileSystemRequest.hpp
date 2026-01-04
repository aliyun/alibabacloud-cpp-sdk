// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILESYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILESYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateFileSystemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileSystemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderDetails, orderDetails_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderDetails, orderDetails_);
    };
    CreateFileSystemRequest() = default ;
    CreateFileSystemRequest(const CreateFileSystemRequest &) = default ;
    CreateFileSystemRequest(CreateFileSystemRequest &&) = default ;
    CreateFileSystemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileSystemRequest() = default ;
    CreateFileSystemRequest& operator=(const CreateFileSystemRequest &) = default ;
    CreateFileSystemRequest& operator=(CreateFileSystemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrderDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderDetails& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(FileSystemName, fileSystemName_);
        DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
        DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(StorgeType, storgeType_);
      };
      friend void from_json(const Darabonba::Json& j, OrderDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(FileSystemName, fileSystemName_);
        DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
        DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(StorgeType, storgeType_);
      };
      OrderDetails() = default ;
      OrderDetails(const OrderDetails &) = default ;
      OrderDetails(OrderDetails &&) = default ;
      OrderDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderDetails() = default ;
      OrderDetails& operator=(const OrderDetails &) = default ;
      OrderDetails& operator=(OrderDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->ensRegionId_ == nullptr && this->fileSystemName_ == nullptr && this->mountTargetDomain_ == nullptr && this->networkId_ == nullptr && this->orderType_ == nullptr
        && this->protocolType_ == nullptr && this->storgeType_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline OrderDetails& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline OrderDetails& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // fileSystemName Field Functions 
      bool hasFileSystemName() const { return this->fileSystemName_ != nullptr;};
      void deleteFileSystemName() { this->fileSystemName_ = nullptr;};
      inline string getFileSystemName() const { DARABONBA_PTR_GET_DEFAULT(fileSystemName_, "") };
      inline OrderDetails& setFileSystemName(string fileSystemName) { DARABONBA_PTR_SET_VALUE(fileSystemName_, fileSystemName) };


      // mountTargetDomain Field Functions 
      bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
      void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
      inline string getMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
      inline OrderDetails& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


      // networkId Field Functions 
      bool hasNetworkId() const { return this->networkId_ != nullptr;};
      void deleteNetworkId() { this->networkId_ = nullptr;};
      inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
      inline OrderDetails& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline OrderDetails& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline OrderDetails& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // storgeType Field Functions 
      bool hasStorgeType() const { return this->storgeType_ != nullptr;};
      void deleteStorgeType() { this->storgeType_ = nullptr;};
      inline string getStorgeType() const { DARABONBA_PTR_GET_DEFAULT(storgeType_, "") };
      inline OrderDetails& setStorgeType(string storgeType) { DARABONBA_PTR_SET_VALUE(storgeType_, storgeType) };


    protected:
      // The billing method of the NAS file system. Valid values:
      // 
      // *   PrePaid: subscription. This billing method is not supported.
      // *   PostPaid: pay-as-you-go.
      // 
      // This parameter is required.
      shared_ptr<string> chargeType_ {};
      // The ID of the edge node.
      // 
      // This parameter is required.
      shared_ptr<string> ensRegionId_ {};
      // The name of the file system. The name must be 1 to 80 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
      // 
      // This parameter is required.
      shared_ptr<string> fileSystemName_ {};
      // The name of the mount target. The name must be 1 to 80 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
      // 
      // This parameter is required.
      shared_ptr<string> mountTargetDomain_ {};
      // The ID of the VPC.
      // 
      // This parameter is required.
      shared_ptr<string> networkId_ {};
      // The type of the order. Set the value to BUY.
      // 
      // This parameter is required.
      shared_ptr<string> orderType_ {};
      // The storage protocol. Set the value to nfs.
      // 
      // This parameter is required.
      shared_ptr<string> protocolType_ {};
      // The storage type. Valid values:
      // 
      // *   Capacity.
      // *   Performance.
      // 
      // This parameter is required.
      shared_ptr<string> storgeType_ {};
    };

    virtual bool empty() const override { return this->orderDetails_ == nullptr; };
    // orderDetails Field Functions 
    bool hasOrderDetails() const { return this->orderDetails_ != nullptr;};
    void deleteOrderDetails() { this->orderDetails_ = nullptr;};
    inline const vector<CreateFileSystemRequest::OrderDetails> & getOrderDetails() const { DARABONBA_PTR_GET_CONST(orderDetails_, vector<CreateFileSystemRequest::OrderDetails>) };
    inline vector<CreateFileSystemRequest::OrderDetails> getOrderDetails() { DARABONBA_PTR_GET(orderDetails_, vector<CreateFileSystemRequest::OrderDetails>) };
    inline CreateFileSystemRequest& setOrderDetails(const vector<CreateFileSystemRequest::OrderDetails> & orderDetails) { DARABONBA_PTR_SET_VALUE(orderDetails_, orderDetails) };
    inline CreateFileSystemRequest& setOrderDetails(vector<CreateFileSystemRequest::OrderDetails> && orderDetails) { DARABONBA_PTR_SET_RVALUE(orderDetails_, orderDetails) };


  protected:
    // The information about the orders.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateFileSystemRequest::OrderDetails>> orderDetails_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
