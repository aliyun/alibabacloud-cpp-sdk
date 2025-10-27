// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class RefreshAssetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshAssetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(CloudAssetSubType, cloudAssetSubType_);
      DARABONBA_PTR_TO_JSON(CloudAssetType, cloudAssetType_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(CloudAssetSubType, cloudAssetSubType_);
      DARABONBA_PTR_FROM_JSON(CloudAssetType, cloudAssetType_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    RefreshAssetsRequest() = default ;
    RefreshAssetsRequest(const RefreshAssetsRequest &) = default ;
    RefreshAssetsRequest(RefreshAssetsRequest &&) = default ;
    RefreshAssetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshAssetsRequest() = default ;
    RefreshAssetsRequest& operator=(const RefreshAssetsRequest &) = default ;
    RefreshAssetsRequest& operator=(RefreshAssetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetType_ == nullptr
        && return this->cloudAssetSubType_ == nullptr && return this->cloudAssetType_ == nullptr && return this->vendor_ == nullptr; };
    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline RefreshAssetsRequest& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // cloudAssetSubType Field Functions 
    bool hasCloudAssetSubType() const { return this->cloudAssetSubType_ != nullptr;};
    void deleteCloudAssetSubType() { this->cloudAssetSubType_ = nullptr;};
    inline int32_t cloudAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(cloudAssetSubType_, 0) };
    inline RefreshAssetsRequest& setCloudAssetSubType(int32_t cloudAssetSubType) { DARABONBA_PTR_SET_VALUE(cloudAssetSubType_, cloudAssetSubType) };


    // cloudAssetType Field Functions 
    bool hasCloudAssetType() const { return this->cloudAssetType_ != nullptr;};
    void deleteCloudAssetType() { this->cloudAssetType_ = nullptr;};
    inline int32_t cloudAssetType() const { DARABONBA_PTR_GET_DEFAULT(cloudAssetType_, 0) };
    inline RefreshAssetsRequest& setCloudAssetType(int32_t cloudAssetType) { DARABONBA_PTR_SET_VALUE(cloudAssetType_, cloudAssetType) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline RefreshAssetsRequest& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The type of the asset that you want to synchronize. Valid values:
    // 
    // *   **cloud_product**: Alibaba Cloud service
    // *   **ecs**: Elastic Compute Service (ECS) instance
    // *   **container_image**: container image
    std::shared_ptr<string> assetType_ = nullptr;
    // The subtype of the cloud service.
    // 
    // >  The following list describes the subtypes of cloud services.
    std::shared_ptr<int32_t> cloudAssetSubType_ = nullptr;
    // The type of the cloud service. Valid values:
    // 
    // *   **0**: ECS
    // *   **1**: Server Load Balancer (SLB)
    // *   **3**: ApsaraDB RDS
    // *   **4**: ApsaraDB for MongoDB (MongoDB)
    // *   **5**: ApsaraDB for Redis (Redis)
    // *   **6**: Container Registry
    // *   **8**: Container Service for Kubernetes (ACK)
    // *   **9**: Virtual Private Cloud (VPC)
    // *   **11**: ActionTrail
    // *   **12**: Alibaba Cloud CDN (CDN)
    // *   **13**: Certificate Management Service (formerly SSL Certificates Service)
    // *   **14**: Apsara Devops
    // *   **15**: Resource Access Management (RAM)
    // *   **16**: Anti-DDoS
    // *   **17**: Web Application Firewall (WAF)
    // *   **18**: Object Storage Service (OSS)
    // *   **19**: PolarDB
    // *   **20**: ApsaraDB RDS for PostgreSQL
    // *   **21**: Microservices Engine (MSE)
    // *   **22**: File Storage NAS (NAS)
    // *   **23**: Data Security Center (DSC)
    // *   **24**: Elastic IP Address (EIP)
    std::shared_ptr<int32_t> cloudAssetType_ = nullptr;
    // The type of the server. Valid values:
    // 
    // *   **0**: an asset provided by Alibaba Cloud
    // *   **1**: a third-party cloud asset
    // *   **2**: an asset in a data center
    // *   **3**, **4**, **5**, and **7**: an asset provided by another cloud
    // *   **8**: a lightweight asset
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
