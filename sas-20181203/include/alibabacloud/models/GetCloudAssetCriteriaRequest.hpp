// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETCRITERIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETCRITERIAREQUEST_HPP_
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
  class GetCloudAssetCriteriaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetCriteriaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetCriteriaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetCloudAssetCriteriaRequest() = default ;
    GetCloudAssetCriteriaRequest(const GetCloudAssetCriteriaRequest &) = default ;
    GetCloudAssetCriteriaRequest(GetCloudAssetCriteriaRequest &&) = default ;
    GetCloudAssetCriteriaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetCriteriaRequest() = default ;
    GetCloudAssetCriteriaRequest& operator=(const GetCloudAssetCriteriaRequest &) = default ;
    GetCloudAssetCriteriaRequest& operator=(GetCloudAssetCriteriaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAssetTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAssetTypes& obj) { 
        DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAssetTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      };
      CloudAssetTypes() = default ;
      CloudAssetTypes(const CloudAssetTypes &) = default ;
      CloudAssetTypes(CloudAssetTypes &&) = default ;
      CloudAssetTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAssetTypes() = default ;
      CloudAssetTypes& operator=(const CloudAssetTypes &) = default ;
      CloudAssetTypes& operator=(CloudAssetTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr; };
      // assetSubType Field Functions 
      bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
      void deleteAssetSubType() { this->assetSubType_ = nullptr;};
      inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
      inline CloudAssetTypes& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
      inline CloudAssetTypes& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    protected:
      // The subtype of the cloud service or asset. Valid values:
      // 
      // *   **0**: ECS
      // 
      //     *   **0**: instance
      //     *   **1**: disk (storage)
      //     *   **2**: security group
      // 
      // *   **1**: SLB
      // 
      //     *   **0**: SLB
      //     *   **1**: Application Load Balancer (ALB)
      // 
      // *   **3**: ApsaraDB RDS
      // 
      //     *   **0**: instance
      // 
      // *   **4**: MongoDB
      // 
      //     *   **0**: instance
      // 
      // *   **5**: Redis
      // 
      //     *   **0**: instance
      // 
      // *   **6**: Container Registry
      // 
      //     *   **1**: Enterprise Edition
      //     *   **2**: Personal Edition
      // 
      // *   **8**: ACK
      // 
      //     *   **0**: cluster
      // 
      // *   **9**: VPC
      // 
      //     *   **0**: NAT gateway
      //     *   **1**: Elastic IP address (EIP)
      //     *   **2**: VPN
      //     *   **3**: VPC Flow Logs
      // 
      // *   **11**: ActionTrail
      // 
      //     *   **0**: trail
      // 
      // *   **12**: CDN
      // 
      //     *   **0**: instance
      // 
      // *   **13**: Certificate Management Service (formerly SSL Certificates Service)
      // 
      //     *   **0**: certificate
      // 
      // *   **14**: Apsara Devops
      // 
      //     *   **0**: organization
      // 
      // *   **16**: Anti-DDoS
      // 
      //     *   **0**: instance
      // 
      // *   **17**: WAF
      // 
      //     *   **0**: domain name
      // 
      // *   **18**: OSS
      // 
      //     *   **0**: bucket
      // 
      // *   **19**: PolarDB
      // 
      //     *   **0**: cluster
      // 
      // *   **20**: ApsaraDB RDS for PostgreSQL
      // 
      //     *   **0**: instance
      // 
      // *   **21**: MSE
      // 
      //     *   **0**: cluster
      // 
      // *   **22**: NAS
      // 
      //     *   **0**: file system
      // 
      // *   **23**: DSC
      // 
      //     *   **0**: instance
      // 
      // *   **24**: EIP
      // 
      //     *   **0**: Anycast EIP
      // 
      // *   **25**: IDaaS EIAM
      // 
      //     *   **0**: instance
      // 
      // *   **26**: PolarDB-X
      // 
      //     *   **0**: instance
      // 
      // *   **27**: Elasticsearch
      // 
      //     *   **0**: instance
      shared_ptr<int32_t> assetSubType_ {};
      // The type of the asset. Valid values:
      // 
      // *   **0**: Elastic Compute Service (ECS)
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
      // *   **16**: Anti-DDoS
      // *   **17**: Web Application Firewall (WAF)
      // *   **18**: Object Storage Service (OSS)
      // *   **19**: PolarDB
      // *   **20**: ApsaraDB RDS for PostgreSQL
      // *   **21**: Microservices Engine (MSE)
      // *   **22**: File Storage NAS (NAS)
      // *   **23**: Data Security Center (DSC)
      // *   **24**: Elastic IP Address (EIP)
      // *   **25**: IDaaS EIAM
      // *   **26**: PolarDB-X
      // *   **27**: Elasticsearch
      shared_ptr<int32_t> assetType_ {};
    };

    virtual bool empty() const override { return this->cloudAssetTypes_ == nullptr
        && this->value_ == nullptr; };
    // cloudAssetTypes Field Functions 
    bool hasCloudAssetTypes() const { return this->cloudAssetTypes_ != nullptr;};
    void deleteCloudAssetTypes() { this->cloudAssetTypes_ = nullptr;};
    inline const vector<GetCloudAssetCriteriaRequest::CloudAssetTypes> & getCloudAssetTypes() const { DARABONBA_PTR_GET_CONST(cloudAssetTypes_, vector<GetCloudAssetCriteriaRequest::CloudAssetTypes>) };
    inline vector<GetCloudAssetCriteriaRequest::CloudAssetTypes> getCloudAssetTypes() { DARABONBA_PTR_GET(cloudAssetTypes_, vector<GetCloudAssetCriteriaRequest::CloudAssetTypes>) };
    inline GetCloudAssetCriteriaRequest& setCloudAssetTypes(const vector<GetCloudAssetCriteriaRequest::CloudAssetTypes> & cloudAssetTypes) { DARABONBA_PTR_SET_VALUE(cloudAssetTypes_, cloudAssetTypes) };
    inline GetCloudAssetCriteriaRequest& setCloudAssetTypes(vector<GetCloudAssetCriteriaRequest::CloudAssetTypes> && cloudAssetTypes) { DARABONBA_PTR_SET_RVALUE(cloudAssetTypes_, cloudAssetTypes) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetCloudAssetCriteriaRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The types of cloud assets.
    shared_ptr<vector<GetCloudAssetCriteriaRequest::CloudAssetTypes>> cloudAssetTypes_ {};
    // The keyword for fuzzy search when you query the asset.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
