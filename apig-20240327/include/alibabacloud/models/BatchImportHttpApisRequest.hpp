// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHIMPORTHTTPAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHIMPORTHTTPAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class BatchImportHttpApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchImportHttpApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(allowUpdate, allowUpdate_);
      DARABONBA_PTR_TO_JSON(apiType, apiType_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(specContentBase64, specContentBase64_);
      DARABONBA_PTR_TO_JSON(specFileUrl, specFileUrl_);
      DARABONBA_PTR_TO_JSON(specOssConfig, specOssConfig_);
      DARABONBA_PTR_TO_JSON(strategy, strategy_);
      DARABONBA_PTR_TO_JSON(withGatewayExtension, withGatewayExtension_);
    };
    friend void from_json(const Darabonba::Json& j, BatchImportHttpApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(allowUpdate, allowUpdate_);
      DARABONBA_PTR_FROM_JSON(apiType, apiType_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(specContentBase64, specContentBase64_);
      DARABONBA_PTR_FROM_JSON(specFileUrl, specFileUrl_);
      DARABONBA_PTR_FROM_JSON(specOssConfig, specOssConfig_);
      DARABONBA_PTR_FROM_JSON(strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(withGatewayExtension, withGatewayExtension_);
    };
    BatchImportHttpApisRequest() = default ;
    BatchImportHttpApisRequest(const BatchImportHttpApisRequest &) = default ;
    BatchImportHttpApisRequest(BatchImportHttpApisRequest &&) = default ;
    BatchImportHttpApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchImportHttpApisRequest() = default ;
    BatchImportHttpApisRequest& operator=(const BatchImportHttpApisRequest &) = default ;
    BatchImportHttpApisRequest& operator=(BatchImportHttpApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SpecOssConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SpecOssConfig& obj) { 
        DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(objectKey, objectKey_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, SpecOssConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(objectKey, objectKey_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      };
      SpecOssConfig() = default ;
      SpecOssConfig(const SpecOssConfig &) = default ;
      SpecOssConfig(SpecOssConfig &&) = default ;
      SpecOssConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SpecOssConfig() = default ;
      SpecOssConfig& operator=(const SpecOssConfig &) = default ;
      SpecOssConfig& operator=(SpecOssConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->objectKey_ == nullptr && this->regionId_ == nullptr; };
      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline SpecOssConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // objectKey Field Functions 
      bool hasObjectKey() const { return this->objectKey_ != nullptr;};
      void deleteObjectKey() { this->objectKey_ = nullptr;};
      inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
      inline SpecOssConfig& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SpecOssConfig& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The OSS bucket name.
      // 
      // This parameter is required.
      shared_ptr<string> bucketName_ {};
      // OSS Object Key。
      // 
      // This parameter is required.
      shared_ptr<string> objectKey_ {};
      // The region ID of the OSS bucket.
      // 
      // This parameter is required.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->allowUpdate_ == nullptr
        && this->apiType_ == nullptr && this->dryRun_ == nullptr && this->gatewayId_ == nullptr && this->resourceGroupId_ == nullptr && this->specContentBase64_ == nullptr
        && this->specFileUrl_ == nullptr && this->specOssConfig_ == nullptr && this->strategy_ == nullptr && this->withGatewayExtension_ == nullptr; };
    // allowUpdate Field Functions 
    bool hasAllowUpdate() const { return this->allowUpdate_ != nullptr;};
    void deleteAllowUpdate() { this->allowUpdate_ = nullptr;};
    inline bool getAllowUpdate() const { DARABONBA_PTR_GET_DEFAULT(allowUpdate_, false) };
    inline BatchImportHttpApisRequest& setAllowUpdate(bool allowUpdate) { DARABONBA_PTR_SET_VALUE(allowUpdate_, allowUpdate) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline BatchImportHttpApisRequest& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline BatchImportHttpApisRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline BatchImportHttpApisRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline BatchImportHttpApisRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // specContentBase64 Field Functions 
    bool hasSpecContentBase64() const { return this->specContentBase64_ != nullptr;};
    void deleteSpecContentBase64() { this->specContentBase64_ = nullptr;};
    inline string getSpecContentBase64() const { DARABONBA_PTR_GET_DEFAULT(specContentBase64_, "") };
    inline BatchImportHttpApisRequest& setSpecContentBase64(string specContentBase64) { DARABONBA_PTR_SET_VALUE(specContentBase64_, specContentBase64) };


    // specFileUrl Field Functions 
    bool hasSpecFileUrl() const { return this->specFileUrl_ != nullptr;};
    void deleteSpecFileUrl() { this->specFileUrl_ = nullptr;};
    inline string getSpecFileUrl() const { DARABONBA_PTR_GET_DEFAULT(specFileUrl_, "") };
    inline BatchImportHttpApisRequest& setSpecFileUrl(string specFileUrl) { DARABONBA_PTR_SET_VALUE(specFileUrl_, specFileUrl) };


    // specOssConfig Field Functions 
    bool hasSpecOssConfig() const { return this->specOssConfig_ != nullptr;};
    void deleteSpecOssConfig() { this->specOssConfig_ = nullptr;};
    inline const BatchImportHttpApisRequest::SpecOssConfig & getSpecOssConfig() const { DARABONBA_PTR_GET_CONST(specOssConfig_, BatchImportHttpApisRequest::SpecOssConfig) };
    inline BatchImportHttpApisRequest::SpecOssConfig getSpecOssConfig() { DARABONBA_PTR_GET(specOssConfig_, BatchImportHttpApisRequest::SpecOssConfig) };
    inline BatchImportHttpApisRequest& setSpecOssConfig(const BatchImportHttpApisRequest::SpecOssConfig & specOssConfig) { DARABONBA_PTR_SET_VALUE(specOssConfig_, specOssConfig) };
    inline BatchImportHttpApisRequest& setSpecOssConfig(BatchImportHttpApisRequest::SpecOssConfig && specOssConfig) { DARABONBA_PTR_SET_RVALUE(specOssConfig_, specOssConfig) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline BatchImportHttpApisRequest& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // withGatewayExtension Field Functions 
    bool hasWithGatewayExtension() const { return this->withGatewayExtension_ != nullptr;};
    void deleteWithGatewayExtension() { this->withGatewayExtension_ = nullptr;};
    inline bool getWithGatewayExtension() const { DARABONBA_PTR_GET_DEFAULT(withGatewayExtension_, false) };
    inline BatchImportHttpApisRequest& setWithGatewayExtension(bool withGatewayExtension) { DARABONBA_PTR_SET_VALUE(withGatewayExtension_, withGatewayExtension) };


  protected:
    // Specifies whether to overwrite existing APIs. If set to true, gatewayId is required.
    shared_ptr<bool> allowUpdate_ {};
    // The API type.
    // 
    // This parameter is required.
    shared_ptr<string> apiType_ {};
    // Enables the dry run feature, which validates the definition without performing the actual import.
    shared_ptr<bool> dryRun_ {};
    // The gateway instance ID. For REST APIs, this parameter is required when withGatewayExtension is set to true or allowUpdate is set to true. For batch import of HTTP APIs, this parameter is always required.
    shared_ptr<string> gatewayId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The standard Base64 encoding of the raw bytes of the OAS ZIP package. The decoded size cannot exceed 10 MiB. This parameter cannot be specified together with specFileUrl or specOssConfig. Dry run is supported and returns validation results, but the dry run task result does not return a replayable importRequest.
    shared_ptr<string> specContentBase64_ {};
    // The download URL of the OAS ZIP file. The URL must support unauthenticated downloads. OSS URLs and whitelisted backend domain names are supported. At least one of specFileUrl and specOssConfig must be specified.
    shared_ptr<string> specFileUrl_ {};
    // The OSS configuration for the OAS file in ZIP format. At least one of specFileUrl and specOssConfig must be specified.
    shared_ptr<BatchImportHttpApisRequest::SpecOssConfig> specOssConfig_ {};
    // The conflict merge strategy during import. Default value: ExistFirst.
    shared_ptr<string> strategy_ {};
    // Specifies whether to import with gateway extension configurations. This parameter must be set to true for batch import of HTTP APIs.
    shared_ptr<bool> withGatewayExtension_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
