// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYREQUESTCLOUDASSETTYPES_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYREQUESTCLOUDASSETTYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetSummaryRequestCloudAssetTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetSummaryRequestCloudAssetTypes& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetSummaryRequestCloudAssetTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    GetCloudAssetSummaryRequestCloudAssetTypes() = default ;
    GetCloudAssetSummaryRequestCloudAssetTypes(const GetCloudAssetSummaryRequestCloudAssetTypes &) = default ;
    GetCloudAssetSummaryRequestCloudAssetTypes(GetCloudAssetSummaryRequestCloudAssetTypes &&) = default ;
    GetCloudAssetSummaryRequestCloudAssetTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetSummaryRequestCloudAssetTypes() = default ;
    GetCloudAssetSummaryRequestCloudAssetTypes& operator=(const GetCloudAssetSummaryRequestCloudAssetTypes &) = default ;
    GetCloudAssetSummaryRequestCloudAssetTypes& operator=(GetCloudAssetSummaryRequestCloudAssetTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetSubType_ == nullptr
        && return this->assetType_ == nullptr && return this->vendor_ == nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline GetCloudAssetSummaryRequestCloudAssetTypes& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline GetCloudAssetSummaryRequestCloudAssetTypes& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline GetCloudAssetSummaryRequestCloudAssetTypes& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // 云产品的子类型。
    // 资产的类型-子类型。取值：
    // 
    // - **0**：云服务器 ECS 
    //     *  **1**：磁盘（存储）
    //     *  **2**：安全组
    //     *  **100**：实例
    // - **1**：负载均衡
    //     *  **0**：负载均衡
    //     *  **1**：应用型负载均衡
    // - **3**：云数据库 RDS
    //     *  **0**：实例
    // - **4**：云数据库 MongoDB 版
    //     *  **0**：实例
    // - **5**：云数据库 Tair（兼容 Redis）
    //     *  **0**：实例
    // - **6**：容器镜像服务
    //     *  **1**：企业版
    //     *  **2**：个人版
    // - **8**：容器服务Kubernetes版
    //     *  **0**：集群
    // - **9**：专有网络VPC
    //     *  **0**：NAT网关
    //     *  **1**：EIP
    //     *  **2**：VPN
    //     *  **3**：FLOW_LOG
    // - **11**：操作审计
    //     *  **0**：跟踪
    // - **12**：CDN
    //     *  **0**：实例
    // - **13**：数字证书管理服务（原SSL证书）
    //     *  **0**：证书
    // - **14**：云效
    //     *  **0**：组织
    // - **16**：DDoS防护
    //     *  **0**：实例
    // - **17**：Web应用防火墙
    //     *  **0**：域名
    // - **18**：对象存储
    //     *  **0**：Bucket
    // - **19**：云原生关系型数据库 PolarDB
    //     *  **0**：集群
    // - **20**：云数据库 PostgreSQL 版
    //     *  **0**：实例
    // - **21**：微服务引擎
    //     *  **0**：集群
    // - **22**：文件存储NAS
    //     *  **0**：文件系统
    // - **23**：数据安全中心
    //     *  **0**：实例
    // - **24**：弹性公网IP
    //     *  **0**：任播弹性公网IP
    // - **25**：云身份服务-EIAM
    //     *  **0**：实例
    // - **26**：PolarDB-X
    //     *  **0**：实例
    // - **27**：Elasticsearch
    //     *  **0**：实例
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // The type of asset. Values:
    // - **0**: Elastic Compute Service (ECS) 
    // - **1**: Load Balancer 
    // - **3**: ApsaraDB for RDS 
    // - **4**: ApsaraDB for MongoDB 
    // - **5**: ApsaraDB for Tair (Redis compatible) 
    // - **6**: Container Registry 
    // - **8**: Container Service for Kubernetes 
    // - **9**: Virtual Private Cloud (VPC) 
    // - **11**: ActionTrail 
    // - **12**: Content Delivery Network (CDN) 
    // - **13**: SSL Certificates (now known as Certificate Management Service) 
    // - **14**: DevOps 
    // - **16**: DDoS Protection 
    // - **17**: Web Application Firewall 
    // - **18**: Object Storage Service (OSS) 
    // - **19**: PolarDB 
    // - **20**: ApsaraDB for PostgreSQL 
    // - **21**: Microservices Engine 
    // - **22**: File Storage NAS 
    // - **23**: Data Security Center 
    // - **24**: Elastic IP Address 
    // - **25**: Cloud Identity Service - EIAM 
    // - **26**: PolarDB-X 
    // - **27**: Elasticsearch
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // Server vendor. Values:
    // - **0**: Alibaba Cloud Asset 
    // - **1**: Non-cloud Asset 
    // - **2**: IDC Asset 
    // - **3**, **4**, **5**, **7**: Other Cloud Assets 
    // - **8**: Lightweight Asset
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
