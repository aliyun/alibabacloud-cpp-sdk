// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEDICATEDBLOCKSTORAGECLUSTERDISKTHROUGHPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDEDICATEDBLOCKSTORAGECLUSTERDISKTHROUGHPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class SetDedicatedBlockStorageClusterDiskThroughputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDedicatedBlockStorageClusterDiskThroughputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDedicatedBlockStorageClusterDiskThroughputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetDedicatedBlockStorageClusterDiskThroughputRequest() = default ;
    SetDedicatedBlockStorageClusterDiskThroughputRequest(const SetDedicatedBlockStorageClusterDiskThroughputRequest &) = default ;
    SetDedicatedBlockStorageClusterDiskThroughputRequest(SetDedicatedBlockStorageClusterDiskThroughputRequest &&) = default ;
    SetDedicatedBlockStorageClusterDiskThroughputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDedicatedBlockStorageClusterDiskThroughputRequest() = default ;
    SetDedicatedBlockStorageClusterDiskThroughputRequest& operator=(const SetDedicatedBlockStorageClusterDiskThroughputRequest &) = default ;
    SetDedicatedBlockStorageClusterDiskThroughputRequest& operator=(SetDedicatedBlockStorageClusterDiskThroughputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bps_ == nullptr
        && return this->clientToken_ == nullptr && return this->diskId_ == nullptr && return this->regionId_ == nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline int32_t bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0) };
    inline SetDedicatedBlockStorageClusterDiskThroughputRequest& setBps(int32_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SetDedicatedBlockStorageClusterDiskThroughputRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline SetDedicatedBlockStorageClusterDiskThroughputRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetDedicatedBlockStorageClusterDiskThroughputRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Target throughput.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> bps_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that the value is unique among different requests. The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> diskId_ = nullptr;
    // The region ID of disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
