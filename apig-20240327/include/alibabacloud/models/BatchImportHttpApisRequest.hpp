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
      // This parameter is required.
      shared_ptr<string> bucketName_ {};
      // This parameter is required.
      shared_ptr<string> objectKey_ {};
      // This parameter is required.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->allowUpdate_ == nullptr
        && this->apiType_ == nullptr && this->dryRun_ == nullptr && this->gatewayId_ == nullptr && this->resourceGroupId_ == nullptr && this->specFileUrl_ == nullptr
        && this->specOssConfig_ == nullptr && this->strategy_ == nullptr && this->withGatewayExtension_ == nullptr; };
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
    shared_ptr<bool> allowUpdate_ {};
    // This parameter is required.
    shared_ptr<string> apiType_ {};
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> gatewayId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> specFileUrl_ {};
    shared_ptr<BatchImportHttpApisRequest::SpecOssConfig> specOssConfig_ {};
    shared_ptr<string> strategy_ {};
    shared_ptr<bool> withGatewayExtension_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
