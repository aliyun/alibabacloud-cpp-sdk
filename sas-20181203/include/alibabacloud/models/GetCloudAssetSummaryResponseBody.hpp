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
        DARABONBA_PTR_TO_JSON(InstanceSaleCountTotal, instanceSaleCountTotal_);
      };
      friend void from_json(const Darabonba::Json& j, GroupedFields& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudAssetSummaryMetas, cloudAssetSummaryMetas_);
        DARABONBA_PTR_FROM_JSON(InstanceCountTotal, instanceCountTotal_);
        DARABONBA_PTR_FROM_JSON(InstanceRiskCountTotal, instanceRiskCountTotal_);
        DARABONBA_PTR_FROM_JSON(InstanceSaleCountTotal, instanceSaleCountTotal_);
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
          DARABONBA_PTR_TO_JSON(InstanceSaleCount, instanceSaleCount_);
          DARABONBA_PTR_TO_JSON(IsInstanceSale, isInstanceSale_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, CloudAssetSummaryMetas& obj) { 
          DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_FROM_JSON(InstanceRiskCount, instanceRiskCount_);
          DARABONBA_PTR_FROM_JSON(InstanceSaleCount, instanceSaleCount_);
          DARABONBA_PTR_FROM_JSON(IsInstanceSale, isInstanceSale_);
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
        && this->assetType_ == nullptr && this->instanceCount_ == nullptr && this->instanceRiskCount_ == nullptr && this->instanceSaleCount_ == nullptr && this->isInstanceSale_ == nullptr
        && this->vendor_ == nullptr; };
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


        // instanceSaleCount Field Functions 
        bool hasInstanceSaleCount() const { return this->instanceSaleCount_ != nullptr;};
        void deleteInstanceSaleCount() { this->instanceSaleCount_ = nullptr;};
        inline int32_t getInstanceSaleCount() const { DARABONBA_PTR_GET_DEFAULT(instanceSaleCount_, 0) };
        inline CloudAssetSummaryMetas& setInstanceSaleCount(int32_t instanceSaleCount) { DARABONBA_PTR_SET_VALUE(instanceSaleCount_, instanceSaleCount) };


        // isInstanceSale Field Functions 
        bool hasIsInstanceSale() const { return this->isInstanceSale_ != nullptr;};
        void deleteIsInstanceSale() { this->isInstanceSale_ = nullptr;};
        inline bool getIsInstanceSale() const { DARABONBA_PTR_GET_DEFAULT(isInstanceSale_, false) };
        inline CloudAssetSummaryMetas& setIsInstanceSale(bool isInstanceSale) { DARABONBA_PTR_SET_VALUE(isInstanceSale_, isInstanceSale) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
        inline CloudAssetSummaryMetas& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        // The subtype of the cloud service.
        shared_ptr<int32_t> assetSubType_ {};
        // The type of cloud service. Valid values:
        // 
        // - **0**: Elastic Compute Service (ECS)
        // - **1**: Server Load Balancer (SLB)
        // - **3**: ApsaraDB RDS
        // - **4**: ApsaraDB for MongoDB
        // - **5**: ApsaraDB for Tair (compatible with Redis)
        // - **6**: Container Registry
        // - **8**: Container Service for Kubernetes (ACK)
        // - **9**: Virtual Private Cloud (VPC)
        // - **11**: ActionTrail
        // - **12**: Alibaba Cloud CDN
        // - **13**: Certificate Management Service (formerly SSL Certificates Service)
        // - **14**: Apsara Devops
        // - **15**: Resource Access Management (RAM)
        // - **16**: Anti-DDoS
        // - **17**: Web Application Firewall (WAF)
        // - **18**: Object Storage Service (OSS)
        // - **19**: PolarDB
        // - **20**: ApsaraDB RDS for PostgreSQL
        // - **21**: Microservices Engine (MSE)
        // - **22**: Apsara File Storage NAS
        // - **23**: Data Security Center (DSC)
        // - **24**: Elastic IP Address (EIP)
        // - **25**: Identity as a Service - EIAM
        // - **26**: PolarDB-X
        // - **27**: Elasticsearch
        shared_ptr<int32_t> assetType_ {};
        // The total number of instances of cloud services of this type.
        shared_ptr<int32_t> instanceCount_ {};
        // The total number of risky instances of cloud services of this type.
        shared_ptr<int32_t> instanceRiskCount_ {};
        shared_ptr<int32_t> instanceSaleCount_ {};
        shared_ptr<bool> isInstanceSale_ {};
        // Server vendor. Valid values:
        // 
        // - **0**: Alibaba Cloud assets
        // - **1**: Off-cloud assets
        // - **2**: IDC assets
        // - **3**, **4**, **5**, **7**: Other cloud assets
        // - **8**: Lightweight assets
        shared_ptr<int32_t> vendor_ {};
      };

      virtual bool empty() const override { return this->cloudAssetSummaryMetas_ == nullptr
        && this->instanceCountTotal_ == nullptr && this->instanceRiskCountTotal_ == nullptr && this->instanceSaleCountTotal_ == nullptr; };
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


      // instanceSaleCountTotal Field Functions 
      bool hasInstanceSaleCountTotal() const { return this->instanceSaleCountTotal_ != nullptr;};
      void deleteInstanceSaleCountTotal() { this->instanceSaleCountTotal_ = nullptr;};
      inline int32_t getInstanceSaleCountTotal() const { DARABONBA_PTR_GET_DEFAULT(instanceSaleCountTotal_, 0) };
      inline GroupedFields& setInstanceSaleCountTotal(int32_t instanceSaleCountTotal) { DARABONBA_PTR_SET_VALUE(instanceSaleCountTotal_, instanceSaleCountTotal) };


    protected:
      // The list of cloud service statistics.
      shared_ptr<vector<GroupedFields::CloudAssetSummaryMetas>> cloudAssetSummaryMetas_ {};
      // The total number of cloud service instances.
      shared_ptr<int32_t> instanceCountTotal_ {};
      // The total number of risky cloud service instances.
      shared_ptr<int32_t> instanceRiskCountTotal_ {};
      shared_ptr<int32_t> instanceSaleCountTotal_ {};
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
    // The summary information of cloud assets.
    shared_ptr<GetCloudAssetSummaryResponseBody::GroupedFields> groupedFields_ {};
    // The ID of the request, which is a unique identifier generated by Alibaba Cloud for the request and can be used to troubleshoot and diagnose issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
