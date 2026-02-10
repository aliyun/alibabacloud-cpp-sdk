// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupedFields, groupedFields_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupedFields, groupedFields_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCloudAssetSummaryResponseBody() = default ;
    GetCloudAssetSummaryResponseBody(const GetCloudAssetSummaryResponseBody &) = default ;
    GetCloudAssetSummaryResponseBody(GetCloudAssetSummaryResponseBody &&) = default ;
    GetCloudAssetSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetSummaryResponseBody() = default ;
    GetCloudAssetSummaryResponseBody& operator=(const GetCloudAssetSummaryResponseBody &) = default ;
    GetCloudAssetSummaryResponseBody& operator=(GetCloudAssetSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupedFields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupedFields& obj) { 
        DARABONBA_PTR_TO_JSON(CloudAssetSummaryMetas, cloudAssetSummaryMetas_);
        DARABONBA_PTR_TO_JSON(InstanceCountTotal, instanceCountTotal_);
        DARABONBA_PTR_TO_JSON(InstanceRiskCountTotal, instanceRiskCountTotal_);
      };
      friend void from_json(const Darabonba::Json& j, GroupedFields& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudAssetSummaryMetas, cloudAssetSummaryMetas_);
        DARABONBA_PTR_FROM_JSON(InstanceCountTotal, instanceCountTotal_);
        DARABONBA_PTR_FROM_JSON(InstanceRiskCountTotal, instanceRiskCountTotal_);
      };
      GroupedFields() = default ;
      GroupedFields(const GroupedFields &) = default ;
      GroupedFields(GroupedFields &&) = default ;
      GroupedFields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupedFields() = default ;
      GroupedFields& operator=(const GroupedFields &) = default ;
      GroupedFields& operator=(GroupedFields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CloudAssetSummaryMetas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudAssetSummaryMetas& obj) { 
          DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_TO_JSON(AssetType, assetType_);
          DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_TO_JSON(InstanceRiskCount, instanceRiskCount_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, CloudAssetSummaryMetas& obj) { 
          DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_FROM_JSON(InstanceRiskCount, instanceRiskCount_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        };
        CloudAssetSummaryMetas() = default ;
        CloudAssetSummaryMetas(const CloudAssetSummaryMetas &) = default ;
        CloudAssetSummaryMetas(CloudAssetSummaryMetas &&) = default ;
        CloudAssetSummaryMetas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudAssetSummaryMetas() = default ;
        CloudAssetSummaryMetas& operator=(const CloudAssetSummaryMetas &) = default ;
        CloudAssetSummaryMetas& operator=(CloudAssetSummaryMetas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->instanceCount_ == nullptr && this->instanceRiskCount_ == nullptr && this->vendor_ == nullptr; };
        // assetSubType Field Functions 
        bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
        void deleteAssetSubType() { this->assetSubType_ = nullptr;};
        inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
        inline CloudAssetSummaryMetas& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


        // assetType Field Functions 
        bool hasAssetType() const { return this->assetType_ != nullptr;};
        void deleteAssetType() { this->assetType_ = nullptr;};
        inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
        inline CloudAssetSummaryMetas& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


        // instanceCount Field Functions 
        bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
        void deleteInstanceCount() { this->instanceCount_ = nullptr;};
        inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
        inline CloudAssetSummaryMetas& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


        // instanceRiskCount Field Functions 
        bool hasInstanceRiskCount() const { return this->instanceRiskCount_ != nullptr;};
        void deleteInstanceRiskCount() { this->instanceRiskCount_ = nullptr;};
        inline int32_t getInstanceRiskCount() const { DARABONBA_PTR_GET_DEFAULT(instanceRiskCount_, 0) };
        inline CloudAssetSummaryMetas& setInstanceRiskCount(int32_t instanceRiskCount) { DARABONBA_PTR_SET_VALUE(instanceRiskCount_, instanceRiskCount) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
        inline CloudAssetSummaryMetas& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        // Subtype of the cloud product
        shared_ptr<int32_t> assetSubType_ {};
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
        shared_ptr<int32_t> assetType_ {};
        // Total number of this type of cloud product instances.
        shared_ptr<int32_t> instanceCount_ {};
        // Total number of risky instances for this type of cloud product.
        shared_ptr<int32_t> instanceRiskCount_ {};
        // 服务器厂商。取值：
        // 
        // - **0**：阿里云资产
        // - **1**：云外资产
        // - **2**：IDC资产
        // - **3**、**4**、**5**、**7**：其它云资产
        // - **8**：轻量级资产
        shared_ptr<int32_t> vendor_ {};
      };

      virtual bool empty() const override { return this->cloudAssetSummaryMetas_ == nullptr
        && this->instanceCountTotal_ == nullptr && this->instanceRiskCountTotal_ == nullptr; };
      // cloudAssetSummaryMetas Field Functions 
      bool hasCloudAssetSummaryMetas() const { return this->cloudAssetSummaryMetas_ != nullptr;};
      void deleteCloudAssetSummaryMetas() { this->cloudAssetSummaryMetas_ = nullptr;};
      inline const vector<GroupedFields::CloudAssetSummaryMetas> & getCloudAssetSummaryMetas() const { DARABONBA_PTR_GET_CONST(cloudAssetSummaryMetas_, vector<GroupedFields::CloudAssetSummaryMetas>) };
      inline vector<GroupedFields::CloudAssetSummaryMetas> getCloudAssetSummaryMetas() { DARABONBA_PTR_GET(cloudAssetSummaryMetas_, vector<GroupedFields::CloudAssetSummaryMetas>) };
      inline GroupedFields& setCloudAssetSummaryMetas(const vector<GroupedFields::CloudAssetSummaryMetas> & cloudAssetSummaryMetas) { DARABONBA_PTR_SET_VALUE(cloudAssetSummaryMetas_, cloudAssetSummaryMetas) };
      inline GroupedFields& setCloudAssetSummaryMetas(vector<GroupedFields::CloudAssetSummaryMetas> && cloudAssetSummaryMetas) { DARABONBA_PTR_SET_RVALUE(cloudAssetSummaryMetas_, cloudAssetSummaryMetas) };


      // instanceCountTotal Field Functions 
      bool hasInstanceCountTotal() const { return this->instanceCountTotal_ != nullptr;};
      void deleteInstanceCountTotal() { this->instanceCountTotal_ = nullptr;};
      inline int32_t getInstanceCountTotal() const { DARABONBA_PTR_GET_DEFAULT(instanceCountTotal_, 0) };
      inline GroupedFields& setInstanceCountTotal(int32_t instanceCountTotal) { DARABONBA_PTR_SET_VALUE(instanceCountTotal_, instanceCountTotal) };


      // instanceRiskCountTotal Field Functions 
      bool hasInstanceRiskCountTotal() const { return this->instanceRiskCountTotal_ != nullptr;};
      void deleteInstanceRiskCountTotal() { this->instanceRiskCountTotal_ = nullptr;};
      inline int32_t getInstanceRiskCountTotal() const { DARABONBA_PTR_GET_DEFAULT(instanceRiskCountTotal_, 0) };
      inline GroupedFields& setInstanceRiskCountTotal(int32_t instanceRiskCountTotal) { DARABONBA_PTR_SET_VALUE(instanceRiskCountTotal_, instanceRiskCountTotal) };


    protected:
      // List of cloud product statistics
      shared_ptr<vector<GroupedFields::CloudAssetSummaryMetas>> cloudAssetSummaryMetas_ {};
      // Total number of cloud product instances.
      shared_ptr<int32_t> instanceCountTotal_ {};
      // Total number of cloud product instances at risk
      shared_ptr<int32_t> instanceRiskCountTotal_ {};
    };

    virtual bool empty() const override { return this->groupedFields_ == nullptr
        && this->requestId_ == nullptr; };
    // groupedFields Field Functions 
    bool hasGroupedFields() const { return this->groupedFields_ != nullptr;};
    void deleteGroupedFields() { this->groupedFields_ = nullptr;};
    inline const GetCloudAssetSummaryResponseBody::GroupedFields & getGroupedFields() const { DARABONBA_PTR_GET_CONST(groupedFields_, GetCloudAssetSummaryResponseBody::GroupedFields) };
    inline GetCloudAssetSummaryResponseBody::GroupedFields getGroupedFields() { DARABONBA_PTR_GET(groupedFields_, GetCloudAssetSummaryResponseBody::GroupedFields) };
    inline GetCloudAssetSummaryResponseBody& setGroupedFields(const GetCloudAssetSummaryResponseBody::GroupedFields & groupedFields) { DARABONBA_PTR_SET_VALUE(groupedFields_, groupedFields) };
    inline GetCloudAssetSummaryResponseBody& setGroupedFields(GetCloudAssetSummaryResponseBody::GroupedFields && groupedFields) { DARABONBA_PTR_SET_RVALUE(groupedFields_, groupedFields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCloudAssetSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Summary information of cloud assets.
    shared_ptr<GetCloudAssetSummaryResponseBody::GroupedFields> groupedFields_ {};
    // 本次调用请求的ID，是由阿里云为该请求生成的唯一标识符，可用于排查和定位问题。
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
