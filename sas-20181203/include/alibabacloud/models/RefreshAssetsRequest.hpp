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
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(CloudAssetSubType, cloudAssetSubType_);
      DARABONBA_PTR_FROM_JSON(CloudAssetType, cloudAssetType_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
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
        && this->cloudAssetSubType_ == nullptr && this->cloudAssetType_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->vendor_ == nullptr; };
    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline RefreshAssetsRequest& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // cloudAssetSubType Field Functions 
    bool hasCloudAssetSubType() const { return this->cloudAssetSubType_ != nullptr;};
    void deleteCloudAssetSubType() { this->cloudAssetSubType_ = nullptr;};
    inline int32_t getCloudAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(cloudAssetSubType_, 0) };
    inline RefreshAssetsRequest& setCloudAssetSubType(int32_t cloudAssetSubType) { DARABONBA_PTR_SET_VALUE(cloudAssetSubType_, cloudAssetSubType) };


    // cloudAssetType Field Functions 
    bool hasCloudAssetType() const { return this->cloudAssetType_ != nullptr;};
    void deleteCloudAssetType() { this->cloudAssetType_ = nullptr;};
    inline int32_t getCloudAssetType() const { DARABONBA_PTR_GET_DEFAULT(cloudAssetType_, 0) };
    inline RefreshAssetsRequest& setCloudAssetType(int32_t cloudAssetType) { DARABONBA_PTR_SET_VALUE(cloudAssetType_, cloudAssetType) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline RefreshAssetsRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline RefreshAssetsRequest& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The type of asset to synchronize. Default value: **ecs**. Valid values:
    // - **cloud_product**: cloud product
    // - **ecs**: server
    // - **container_image**: container image
    shared_ptr<string> assetType_ {};
    // The subtype of the cloud product.
    // 
    // > Refer to the following list for valid values.
    shared_ptr<int32_t> cloudAssetSubType_ {};
    // The type of cloud product. Valid values:
    // 
    // - **0**: server
    // - **1**: load balancing
    // - **3**: ApsaraDB RDS database
    // - **4**: ApsaraDB for MongoDB database
    // - **5**: Tair (Redis® OSS-Compatible) database
    // - **6**: Container Registry
    // - **8**: container service for Kubernetes
    // - **9**: VPC
    // - **11**: ActionTrail
    // - **12**: CDN
    // - **13**: Certificate Management Service (formerly SSL Certificates Service)
    // - **14**: Apsara Devops
    // - **15**: access control
    // - **16**: Anti-DDoS
    // - **17**: Web Application Firewall
    // - **18**: OSS
    // - **19**: cloud-native relational database PolarDB
    // - **20**: ApsaraDB RDS for PostgreSQL database
    // - **21**: Microservices Engine
    // - **22**: File Storage NAS
    // - **23**: Data Security Center
    // - **24**: EIP
    shared_ptr<int32_t> cloudAssetType_ {};
    // The ID of the Alibaba Cloud account of the member accounts in the resource directory.
    // > Call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The server vendor. Valid values:
    // 
    // - **0**: Alibaba Cloud asset
    // - **1**: asset outside the cloud
    // - **2**: IDC asset
    // - **3**, **4**, **5**, **7**: third-party cloud asset
    // - **8**: lightweight asset
    shared_ptr<int32_t> vendor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
