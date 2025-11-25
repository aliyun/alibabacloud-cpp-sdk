// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYRESPONSEBODYGROUPEDFIELDSCLOUDASSETSUMMARYMETAS_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYRESPONSEBODYGROUPEDFIELDSCLOUDASSETSUMMARYMETAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceRiskCount, instanceRiskCount_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceRiskCount, instanceRiskCount_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas() = default ;
    GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas(const GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas &) = default ;
    GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas(GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas &&) = default ;
    GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas() = default ;
    GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& operator=(const GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas &) = default ;
    GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& operator=(GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetSubType_ == nullptr
        && return this->assetType_ == nullptr && return this->instanceCount_ == nullptr && return this->instanceRiskCount_ == nullptr && return this->vendor_ == nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceRiskCount Field Functions 
    bool hasInstanceRiskCount() const { return this->instanceRiskCount_ != nullptr;};
    void deleteInstanceRiskCount() { this->instanceRiskCount_ = nullptr;};
    inline int32_t instanceRiskCount() const { DARABONBA_PTR_GET_DEFAULT(instanceRiskCount_, 0) };
    inline GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& setInstanceRiskCount(int32_t instanceRiskCount) { DARABONBA_PTR_SET_VALUE(instanceRiskCount_, instanceRiskCount) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Subtype of the cloud product
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // 云产品的类型。取值：
    // 
    // - **0**：云服务器 ECS
    // - **1**：负载均衡
    // - **3**：云数据库 RDS
    // - **4**：云数据库 MongoDB 版
    // - **5**：云数据库 Tair（兼容 Redis）
    // - **6**：容器镜像服务
    // - **8**：容器服务Kubernetes版
    // - **9**：专有网络VPC
    // - **11**：操作审计
    // - **12**：CDN
    // - **13**：数字证书管理服务（原SSL证书）
    // - **14**：云效
    // - **15**：访问控制
    // - **16**：DDoS防护
    // - **17**：Web应用防火墙
    // - **18**：对象存储
    // - **19**：云原生关系型数据库 PolarDB
    // - **20**：云数据库 PostgreSQL 版
    // - **21**：微服务引擎
    // - **22**：文件存储NAS
    // - **23**：数据安全中心
    // - **24**：弹性公网IP
    // - **25**：云身份服务-EIAM
    // - **26**：PolarDB-X
    // - **27**：Elasticsearch
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // Total number of this type of cloud product instances.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // Total number of risky instances for this type of cloud product.
    std::shared_ptr<int32_t> instanceRiskCount_ = nullptr;
    // 服务器厂商。取值：
    // 
    // - **0**：阿里云资产
    // - **1**：云外资产
    // - **2**：IDC资产
    // - **3**、**4**、**5**、**7**：其它云资产
    // - **8**：轻量级资产
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
