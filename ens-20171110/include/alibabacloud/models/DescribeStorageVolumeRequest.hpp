// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEVOLUMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEVOLUMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeStorageVolumeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageVolumeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StorageId, storageId_);
      DARABONBA_PTR_TO_JSON(VolumeId, volumeId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageVolumeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StorageId, storageId_);
      DARABONBA_PTR_FROM_JSON(VolumeId, volumeId_);
    };
    DescribeStorageVolumeRequest() = default ;
    DescribeStorageVolumeRequest(const DescribeStorageVolumeRequest &) = default ;
    DescribeStorageVolumeRequest(DescribeStorageVolumeRequest &&) = default ;
    DescribeStorageVolumeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageVolumeRequest() = default ;
    DescribeStorageVolumeRequest& operator=(const DescribeStorageVolumeRequest &) = default ;
    DescribeStorageVolumeRequest& operator=(DescribeStorageVolumeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && return this->gatewayId_ == nullptr && return this->isEnable_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->storageId_ == nullptr
        && return this->volumeId_ == nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeStorageVolumeRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline DescribeStorageVolumeRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // isEnable Field Functions 
    bool hasIsEnable() const { return this->isEnable_ != nullptr;};
    void deleteIsEnable() { this->isEnable_ = nullptr;};
    inline int32_t isEnable() const { DARABONBA_PTR_GET_DEFAULT(isEnable_, 0) };
    inline DescribeStorageVolumeRequest& setIsEnable(int32_t isEnable) { DARABONBA_PTR_SET_VALUE(isEnable_, isEnable) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeStorageVolumeRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeStorageVolumeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // storageId Field Functions 
    bool hasStorageId() const { return this->storageId_ != nullptr;};
    void deleteStorageId() { this->storageId_ = nullptr;};
    inline string storageId() const { DARABONBA_PTR_GET_DEFAULT(storageId_, "") };
    inline DescribeStorageVolumeRequest& setStorageId(string storageId) { DARABONBA_PTR_SET_VALUE(storageId_, storageId) };


    // volumeId Field Functions 
    bool hasVolumeId() const { return this->volumeId_ != nullptr;};
    void deleteVolumeId() { this->volumeId_ = nullptr;};
    inline string volumeId() const { DARABONBA_PTR_GET_DEFAULT(volumeId_, "") };
    inline DescribeStorageVolumeRequest& setVolumeId(string volumeId) { DARABONBA_PTR_SET_VALUE(volumeId_, volumeId) };


  protected:
    // The ID of the node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // Specifies whether to enable the volume. Valid values:
    // 
    // *   **1** (default): enables the volume.
    // *   **0**: disables the volume.
    std::shared_ptr<int32_t> isEnable_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the storage medium.
    std::shared_ptr<string> storageId_ = nullptr;
    // The ID of the volume.
    std::shared_ptr<string> volumeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
