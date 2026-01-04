// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEGATEWAYRESPONSEBODY_HPP_
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
  class DescribeStorageGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageGateways, storageGateways_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageGateways, storageGateways_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeStorageGatewayResponseBody() = default ;
    DescribeStorageGatewayResponseBody(const DescribeStorageGatewayResponseBody &) = default ;
    DescribeStorageGatewayResponseBody(DescribeStorageGatewayResponseBody &&) = default ;
    DescribeStorageGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageGatewayResponseBody() = default ;
    DescribeStorageGatewayResponseBody& operator=(const DescribeStorageGatewayResponseBody &) = default ;
    DescribeStorageGatewayResponseBody& operator=(DescribeStorageGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StorageGateways : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageGateways& obj) { 
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
      friend void from_json(const Darabonba::Json& j, StorageGateways& obj) { 
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
      StorageGateways() = default ;
      StorageGateways(const StorageGateways &) = default ;
      StorageGateways(StorageGateways &&) = default ;
      StorageGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StorageGateways() = default ;
      StorageGateways& operator=(const StorageGateways &) = default ;
      StorageGateways& operator=(StorageGateways &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->ensRegionId_ == nullptr && this->serviceIp_ == nullptr && this->status_ == nullptr
        && this->storageGatewayId_ == nullptr && this->storageGatewayName_ == nullptr && this->storageGatewayType_ == nullptr && this->vpcId_ == nullptr; };
      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline StorageGateways& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline StorageGateways& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline StorageGateways& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline StorageGateways& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // serviceIp Field Functions 
      bool hasServiceIp() const { return this->serviceIp_ != nullptr;};
      void deleteServiceIp() { this->serviceIp_ = nullptr;};
      inline string getServiceIp() const { DARABONBA_PTR_GET_DEFAULT(serviceIp_, "") };
      inline StorageGateways& setServiceIp(string serviceIp) { DARABONBA_PTR_SET_VALUE(serviceIp_, serviceIp) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StorageGateways& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageGatewayId Field Functions 
      bool hasStorageGatewayId() const { return this->storageGatewayId_ != nullptr;};
      void deleteStorageGatewayId() { this->storageGatewayId_ = nullptr;};
      inline string getStorageGatewayId() const { DARABONBA_PTR_GET_DEFAULT(storageGatewayId_, "") };
      inline StorageGateways& setStorageGatewayId(string storageGatewayId) { DARABONBA_PTR_SET_VALUE(storageGatewayId_, storageGatewayId) };


      // storageGatewayName Field Functions 
      bool hasStorageGatewayName() const { return this->storageGatewayName_ != nullptr;};
      void deleteStorageGatewayName() { this->storageGatewayName_ = nullptr;};
      inline string getStorageGatewayName() const { DARABONBA_PTR_GET_DEFAULT(storageGatewayName_, "") };
      inline StorageGateways& setStorageGatewayName(string storageGatewayName) { DARABONBA_PTR_SET_VALUE(storageGatewayName_, storageGatewayName) };


      // storageGatewayType Field Functions 
      bool hasStorageGatewayType() const { return this->storageGatewayType_ != nullptr;};
      void deleteStorageGatewayType() { this->storageGatewayType_ = nullptr;};
      inline int32_t getStorageGatewayType() const { DARABONBA_PTR_GET_DEFAULT(storageGatewayType_, 0) };
      inline StorageGateways& setStorageGatewayType(int32_t storageGatewayType) { DARABONBA_PTR_SET_VALUE(storageGatewayType_, storageGatewayType) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline StorageGateways& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The internal CIDR block.
      shared_ptr<string> cidrBlock_ {};
      // The time when the storage gateway was created. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description of the storage gateway.
      shared_ptr<string> description_ {};
      // The ID of the node.
      shared_ptr<string> ensRegionId_ {};
      // The IP address of the service.
      shared_ptr<string> serviceIp_ {};
      // The status of the storage gateway. Valid values:
      // 
      // *   creating
      // *   available
      // *   deleting
      // *   deleted
      shared_ptr<string> status_ {};
      // The ID of the storage gateway.
      shared_ptr<string> storageGatewayId_ {};
      // The name of the storage gateway.
      shared_ptr<string> storageGatewayName_ {};
      // The type of the storage gateway. Default value: 1, which indicates iSCSI.
      shared_ptr<int32_t> storageGatewayType_ {};
      // The ID of the VPC.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->storageGateways_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeStorageGatewayResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeStorageGatewayResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStorageGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageGateways Field Functions 
    bool hasStorageGateways() const { return this->storageGateways_ != nullptr;};
    void deleteStorageGateways() { this->storageGateways_ = nullptr;};
    inline const vector<DescribeStorageGatewayResponseBody::StorageGateways> & getStorageGateways() const { DARABONBA_PTR_GET_CONST(storageGateways_, vector<DescribeStorageGatewayResponseBody::StorageGateways>) };
    inline vector<DescribeStorageGatewayResponseBody::StorageGateways> getStorageGateways() { DARABONBA_PTR_GET(storageGateways_, vector<DescribeStorageGatewayResponseBody::StorageGateways>) };
    inline DescribeStorageGatewayResponseBody& setStorageGateways(const vector<DescribeStorageGatewayResponseBody::StorageGateways> & storageGateways) { DARABONBA_PTR_SET_VALUE(storageGateways_, storageGateways) };
    inline DescribeStorageGatewayResponseBody& setStorageGateways(vector<DescribeStorageGatewayResponseBody::StorageGateways> && storageGateways) { DARABONBA_PTR_SET_RVALUE(storageGateways_, storageGateways) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeStorageGatewayResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The list information.
    shared_ptr<vector<DescribeStorageGatewayResponseBody::StorageGateways>> storageGateways_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
