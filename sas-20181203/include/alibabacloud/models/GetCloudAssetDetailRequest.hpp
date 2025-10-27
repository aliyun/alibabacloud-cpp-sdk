// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCloudAssetDetailRequestCloudAssetInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(CloudAssetInstances, cloudAssetInstances_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(CloudAssetInstances, cloudAssetInstances_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    GetCloudAssetDetailRequest() = default ;
    GetCloudAssetDetailRequest(const GetCloudAssetDetailRequest &) = default ;
    GetCloudAssetDetailRequest(GetCloudAssetDetailRequest &&) = default ;
    GetCloudAssetDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetDetailRequest() = default ;
    GetCloudAssetDetailRequest& operator=(const GetCloudAssetDetailRequest &) = default ;
    GetCloudAssetDetailRequest& operator=(GetCloudAssetDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetSubType_ == nullptr
        && return this->assetType_ == nullptr && return this->cloudAssetInstances_ == nullptr && return this->vendor_ == nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline GetCloudAssetDetailRequest& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline GetCloudAssetDetailRequest& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // cloudAssetInstances Field Functions 
    bool hasCloudAssetInstances() const { return this->cloudAssetInstances_ != nullptr;};
    void deleteCloudAssetInstances() { this->cloudAssetInstances_ = nullptr;};
    inline const vector<GetCloudAssetDetailRequestCloudAssetInstances> & cloudAssetInstances() const { DARABONBA_PTR_GET_CONST(cloudAssetInstances_, vector<GetCloudAssetDetailRequestCloudAssetInstances>) };
    inline vector<GetCloudAssetDetailRequestCloudAssetInstances> cloudAssetInstances() { DARABONBA_PTR_GET(cloudAssetInstances_, vector<GetCloudAssetDetailRequestCloudAssetInstances>) };
    inline GetCloudAssetDetailRequest& setCloudAssetInstances(const vector<GetCloudAssetDetailRequestCloudAssetInstances> & cloudAssetInstances) { DARABONBA_PTR_SET_VALUE(cloudAssetInstances_, cloudAssetInstances) };
    inline GetCloudAssetDetailRequest& setCloudAssetInstances(vector<GetCloudAssetDetailRequestCloudAssetInstances> && cloudAssetInstances) { DARABONBA_PTR_SET_RVALUE(cloudAssetInstances_, cloudAssetInstances) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline GetCloudAssetDetailRequest& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The subtype of the cloud service.
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // The type of the cloud asset. Valid values:
    // 
    // *   **0**: Elastic Compute Service (ECS).
    // *   **1**: Server Load Balancer (SLB).
    // *   **3**: ApsaraDB RDS.
    // *   **4**: ApsaraDB for MongoDB.
    // *   **5**: ApsaraDB for Redis.
    // *   **6**: Container Registry.
    // *   **8**: Container Service for Kubernetes.
    // *   **9**: Virtual Private Cloud (VPC).
    // *   **11**: ActionTrail.
    // *   **12**: Alibaba Cloud CDN (CDN).
    // *   **13**: Certificate Management Service.
    // *   **14**: Apsara Devops.
    // *   **15**: Resource Access Management (RAM).
    // *   **16**: Anti-DDoS.
    // *   **17**: Web Application Firewall (WAF).
    // *   **18**: Object Storage Service (OSS).
    // *   **19**: PolarDB.
    // *   **20**: ApsaraDB RDS for PostgreSQL.
    // *   **21**: Microservices Engine (MSE).
    // *   **22**: File Storage NAS (NAS).
    // *   **23**: Data Security Center (DSC).
    // *   **24**: Elastic IP Address (EIP).
    // *   **25**: Identity as a Service (IDaaS)-Employee Identity and Access Management (EIAM).
    // *   **26**: PolarDB-X.
    // *   **27**: Elasticsearch.
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // The details of the assets.
    std::shared_ptr<vector<GetCloudAssetDetailRequestCloudAssetInstances>> cloudAssetInstances_ = nullptr;
    // The service provider of the cloud asset. Valid values:
    // 
    // *   **0**: Alibaba Cloud.
    // *   **1**: service provider that is unrecognized.
    // *   **2**: data center.
    // *   **3**, **4**, **5**, and **7**: third-party service provider.
    // *   **8**: simple application server.
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
