// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDRESOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDRESOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCloudResourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertIds, certIdsShrink_);
      DARABONBA_PTR_TO_JSON(CloudName, cloudName_);
      DARABONBA_PTR_TO_JSON(CloudProduct, cloudProduct_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertIds, certIdsShrink_);
      DARABONBA_PTR_FROM_JSON(CloudName, cloudName_);
      DARABONBA_PTR_FROM_JSON(CloudProduct, cloudProduct_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
    };
    ListCloudResourcesShrinkRequest() = default ;
    ListCloudResourcesShrinkRequest(const ListCloudResourcesShrinkRequest &) = default ;
    ListCloudResourcesShrinkRequest(ListCloudResourcesShrinkRequest &&) = default ;
    ListCloudResourcesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudResourcesShrinkRequest() = default ;
    ListCloudResourcesShrinkRequest& operator=(const ListCloudResourcesShrinkRequest &) = default ;
    ListCloudResourcesShrinkRequest& operator=(ListCloudResourcesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certIdsShrink_ == nullptr
        && return this->cloudName_ == nullptr && return this->cloudProduct_ == nullptr && return this->currentPage_ == nullptr && return this->keyword_ == nullptr && return this->secretId_ == nullptr
        && return this->showSize_ == nullptr; };
    // certIdsShrink Field Functions 
    bool hasCertIdsShrink() const { return this->certIdsShrink_ != nullptr;};
    void deleteCertIdsShrink() { this->certIdsShrink_ = nullptr;};
    inline string certIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(certIdsShrink_, "") };
    inline ListCloudResourcesShrinkRequest& setCertIdsShrink(string certIdsShrink) { DARABONBA_PTR_SET_VALUE(certIdsShrink_, certIdsShrink) };


    // cloudName Field Functions 
    bool hasCloudName() const { return this->cloudName_ != nullptr;};
    void deleteCloudName() { this->cloudName_ = nullptr;};
    inline string cloudName() const { DARABONBA_PTR_GET_DEFAULT(cloudName_, "") };
    inline ListCloudResourcesShrinkRequest& setCloudName(string cloudName) { DARABONBA_PTR_SET_VALUE(cloudName_, cloudName) };


    // cloudProduct Field Functions 
    bool hasCloudProduct() const { return this->cloudProduct_ != nullptr;};
    void deleteCloudProduct() { this->cloudProduct_ = nullptr;};
    inline string cloudProduct() const { DARABONBA_PTR_GET_DEFAULT(cloudProduct_, "") };
    inline ListCloudResourcesShrinkRequest& setCloudProduct(string cloudProduct) { DARABONBA_PTR_SET_VALUE(cloudProduct_, cloudProduct) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCloudResourcesShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListCloudResourcesShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string secretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline ListCloudResourcesShrinkRequest& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t showSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListCloudResourcesShrinkRequest& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


  protected:
    // The certificate IDs.
    std::shared_ptr<string> certIdsShrink_ = nullptr;
    // The cloud service provider.
    // 
    // Valid values:
    // 
    // *   Tencent
    // *   Huawei
    // *   Aws
    // *   aliyun
    std::shared_ptr<string> cloudName_ = nullptr;
    // The cloud service.
    // 
    // Valid values when CloudName is set to aliyun:
    // 
    // *   SLB: Classic Load Balancer (CLB). This value is available only on the China site (aliyun.com).
    // *   LIVE: ApsaraVideo Live. This value is available only on the China site (aliyun.com).
    // *   webHosting: Cloud Web Hosting. This value is available only on the China site (aliyun.com).
    // *   VOD: ApsaraVideo VOD. This value is available only on the China site (aliyun.com).
    // *   CR: Container Registry. This value is available only on the China site (aliyun.com).
    // *   DCDN: Dynamic Content Delivery Network (DCDN).
    // *   DDOS: Anti-DDoS.
    // *   CDN: Alibaba Cloud CDN (CDN).
    // *   ALB: Application Load Balancer (ALB).
    // *   APIGateway: API Gateway.
    // *   FC: Function Compute.
    // *   GA: Global Accelerator (GA).
    // *   MSE: Microservices Engine (MSE).
    // *   NLB: Network Load Balancer (NLB).
    // *   OSS: Object Storage Service (OSS).
    // *   SAE: Serverless App Engine (SAE).
    // *   WAF: Web Application Firewall (WAF).
    // 
    // Valid values when CloudName is set to Tencent:
    // 
    // *   TencentCDN: Content Delivery Network (CDN).
    // *   TencentCLB: CLB.
    // *   TencentWAF: WAF.
    // 
    // Valid value when CloudName is set to Huawei:
    // 
    // *   HuaweiCDN: CDN.
    // 
    // Valid values when CloudName is set to Aws:
    // 
    // *   AwsCloudFront: Amazon CloudFront.
    // *   AwsCLB: CLB.
    // *   AwsALB: ALB.
    // *   AwsNLB: NLB.
    std::shared_ptr<string> cloudProduct_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The keyword of the domain name or instance ID bound to the cloud resource.
    std::shared_ptr<string> keyword_ = nullptr;
    // The AccessKey ID that is used to access cloud resources.
    std::shared_ptr<string> secretId_ = nullptr;
    // The number of entries per page. Default value: **20**.
    std::shared_ptr<int32_t> showSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
