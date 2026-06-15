// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTHTTPAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTHTTPAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiDeployConfig.hpp>
#include <alibabacloud/models/HttpApiVersionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ImportHttpApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportHttpApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(mcpRouteId, mcpRouteId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(specContentBase64, specContentBase64_);
      DARABONBA_PTR_TO_JSON(specFileUrl, specFileUrl_);
      DARABONBA_PTR_TO_JSON(specOssConfig, specOssConfig_);
      DARABONBA_PTR_TO_JSON(strategy, strategy_);
      DARABONBA_PTR_TO_JSON(targetHttpApiId, targetHttpApiId_);
      DARABONBA_PTR_TO_JSON(versionConfig, versionConfig_);
      DARABONBA_PTR_TO_JSON(withGatewayExtension, withGatewayExtension_);
    };
    friend void from_json(const Darabonba::Json& j, ImportHttpApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(mcpRouteId, mcpRouteId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(specContentBase64, specContentBase64_);
      DARABONBA_PTR_FROM_JSON(specFileUrl, specFileUrl_);
      DARABONBA_PTR_FROM_JSON(specOssConfig, specOssConfig_);
      DARABONBA_PTR_FROM_JSON(strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(targetHttpApiId, targetHttpApiId_);
      DARABONBA_PTR_FROM_JSON(versionConfig, versionConfig_);
      DARABONBA_PTR_FROM_JSON(withGatewayExtension, withGatewayExtension_);
    };
    ImportHttpApiRequest() = default ;
    ImportHttpApiRequest(const ImportHttpApiRequest &) = default ;
    ImportHttpApiRequest(ImportHttpApiRequest &&) = default ;
    ImportHttpApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportHttpApiRequest() = default ;
    ImportHttpApiRequest& operator=(const ImportHttpApiRequest &) = default ;
    ImportHttpApiRequest& operator=(ImportHttpApiRequest &&) = default ;
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
      // The bucket name.
      shared_ptr<string> bucketName_ {};
      // The full path of the file.
      shared_ptr<string> objectKey_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->deployConfigs_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->gatewayId_ == nullptr && this->mcpRouteId_ == nullptr && this->name_ == nullptr
        && this->resourceGroupId_ == nullptr && this->specContentBase64_ == nullptr && this->specFileUrl_ == nullptr && this->specOssConfig_ == nullptr && this->strategy_ == nullptr
        && this->targetHttpApiId_ == nullptr && this->versionConfig_ == nullptr && this->withGatewayExtension_ == nullptr; };
    // deployConfigs Field Functions 
    bool hasDeployConfigs() const { return this->deployConfigs_ != nullptr;};
    void deleteDeployConfigs() { this->deployConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig> & getDeployConfigs() const { DARABONBA_PTR_GET_CONST(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline vector<HttpApiDeployConfig> getDeployConfigs() { DARABONBA_PTR_GET(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline ImportHttpApiRequest& setDeployConfigs(const vector<HttpApiDeployConfig> & deployConfigs) { DARABONBA_PTR_SET_VALUE(deployConfigs_, deployConfigs) };
    inline ImportHttpApiRequest& setDeployConfigs(vector<HttpApiDeployConfig> && deployConfigs) { DARABONBA_PTR_SET_RVALUE(deployConfigs_, deployConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ImportHttpApiRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ImportHttpApiRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ImportHttpApiRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // mcpRouteId Field Functions 
    bool hasMcpRouteId() const { return this->mcpRouteId_ != nullptr;};
    void deleteMcpRouteId() { this->mcpRouteId_ = nullptr;};
    inline string getMcpRouteId() const { DARABONBA_PTR_GET_DEFAULT(mcpRouteId_, "") };
    inline ImportHttpApiRequest& setMcpRouteId(string mcpRouteId) { DARABONBA_PTR_SET_VALUE(mcpRouteId_, mcpRouteId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImportHttpApiRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ImportHttpApiRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // specContentBase64 Field Functions 
    bool hasSpecContentBase64() const { return this->specContentBase64_ != nullptr;};
    void deleteSpecContentBase64() { this->specContentBase64_ = nullptr;};
    inline string getSpecContentBase64() const { DARABONBA_PTR_GET_DEFAULT(specContentBase64_, "") };
    inline ImportHttpApiRequest& setSpecContentBase64(string specContentBase64) { DARABONBA_PTR_SET_VALUE(specContentBase64_, specContentBase64) };


    // specFileUrl Field Functions 
    bool hasSpecFileUrl() const { return this->specFileUrl_ != nullptr;};
    void deleteSpecFileUrl() { this->specFileUrl_ = nullptr;};
    inline string getSpecFileUrl() const { DARABONBA_PTR_GET_DEFAULT(specFileUrl_, "") };
    inline ImportHttpApiRequest& setSpecFileUrl(string specFileUrl) { DARABONBA_PTR_SET_VALUE(specFileUrl_, specFileUrl) };


    // specOssConfig Field Functions 
    bool hasSpecOssConfig() const { return this->specOssConfig_ != nullptr;};
    void deleteSpecOssConfig() { this->specOssConfig_ = nullptr;};
    inline const ImportHttpApiRequest::SpecOssConfig & getSpecOssConfig() const { DARABONBA_PTR_GET_CONST(specOssConfig_, ImportHttpApiRequest::SpecOssConfig) };
    inline ImportHttpApiRequest::SpecOssConfig getSpecOssConfig() { DARABONBA_PTR_GET(specOssConfig_, ImportHttpApiRequest::SpecOssConfig) };
    inline ImportHttpApiRequest& setSpecOssConfig(const ImportHttpApiRequest::SpecOssConfig & specOssConfig) { DARABONBA_PTR_SET_VALUE(specOssConfig_, specOssConfig) };
    inline ImportHttpApiRequest& setSpecOssConfig(ImportHttpApiRequest::SpecOssConfig && specOssConfig) { DARABONBA_PTR_SET_RVALUE(specOssConfig_, specOssConfig) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline ImportHttpApiRequest& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // targetHttpApiId Field Functions 
    bool hasTargetHttpApiId() const { return this->targetHttpApiId_ != nullptr;};
    void deleteTargetHttpApiId() { this->targetHttpApiId_ = nullptr;};
    inline string getTargetHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(targetHttpApiId_, "") };
    inline ImportHttpApiRequest& setTargetHttpApiId(string targetHttpApiId) { DARABONBA_PTR_SET_VALUE(targetHttpApiId_, targetHttpApiId) };


    // versionConfig Field Functions 
    bool hasVersionConfig() const { return this->versionConfig_ != nullptr;};
    void deleteVersionConfig() { this->versionConfig_ = nullptr;};
    inline const HttpApiVersionConfig & getVersionConfig() const { DARABONBA_PTR_GET_CONST(versionConfig_, HttpApiVersionConfig) };
    inline HttpApiVersionConfig getVersionConfig() { DARABONBA_PTR_GET(versionConfig_, HttpApiVersionConfig) };
    inline ImportHttpApiRequest& setVersionConfig(const HttpApiVersionConfig & versionConfig) { DARABONBA_PTR_SET_VALUE(versionConfig_, versionConfig) };
    inline ImportHttpApiRequest& setVersionConfig(HttpApiVersionConfig && versionConfig) { DARABONBA_PTR_SET_RVALUE(versionConfig_, versionConfig) };


    // withGatewayExtension Field Functions 
    bool hasWithGatewayExtension() const { return this->withGatewayExtension_ != nullptr;};
    void deleteWithGatewayExtension() { this->withGatewayExtension_ = nullptr;};
    inline bool getWithGatewayExtension() const { DARABONBA_PTR_GET_DEFAULT(withGatewayExtension_, false) };
    inline ImportHttpApiRequest& setWithGatewayExtension(bool withGatewayExtension) { DARABONBA_PTR_SET_VALUE(withGatewayExtension_, withGatewayExtension) };


  protected:
    // The API deployment configurations.
    shared_ptr<vector<HttpApiDeployConfig>> deployConfigs_ {};
    // The description of the imported API. If this parameter is not specified, the description is extracted from the API definition. Maximum length: 255 bytes.
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run. If this parameter is enabled, only validation is performed without the actual import.
    shared_ptr<bool> dryRun_ {};
    // The gateway ID.
    shared_ptr<string> gatewayId_ {};
    // The MCP route ID.
    shared_ptr<string> mcpRouteId_ {};
    // The name of the imported API. If this parameter is not specified, the name is extracted from the API definition file. If an API with the same name and version configuration already exists, this import updates the existing API definition based on the strategy parameter.
    shared_ptr<string> name_ {};
    // The [resource group ID](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    // The Base64-encoded API definition. OAS 2.0 and OAS 3.0 specifications are supported in YAML or JSON format. This parameter takes priority over the specFileUrl parameter. If the file size exceeds 10 MB, use the specFileUrl parameter instead.
    shared_ptr<string> specContentBase64_ {};
    // The download URL of the API definition file. The URL must be accessible over the public network or be an internal network OSS download URL in the same region. The URL must have download permissions. For OSS files that are not publicly readable, refer to References [Download objects using presigned URLs](https://help.aliyun.com/document_detail/39607.html) and provide a URL with download permissions. Only API definition files stored in OSS are supported.
    shared_ptr<string> specFileUrl_ {};
    // The OSS configuration.
    shared_ptr<ImportHttpApiRequest::SpecOssConfig> specOssConfig_ {};
    // The update strategy to use when the imported API has the same name and version management configuration as an existing API. Valid values:
    // - SpecOnly: uses the imported file as the single source of truth.
    // - SpecFirst: prioritizes the imported file. New operations are added and existing operations are updated. Operations not mentioned in the file remain unchanged.
    // - ExistFirst: prioritizes the existing API. Only new operations are added. Existing operations are not updated.
    // 
    // Default value: ExistFirst.
    shared_ptr<string> strategy_ {};
    // The ID of the target HTTP API. If this parameter is specified, this import updates the specified API instead of creating a new one or searching for an existing API by name and version management configuration. The target API must be of the REST type.
    shared_ptr<string> targetHttpApiId_ {};
    // The API version configuration. If version configuration is enabled and an API with the same version number and name already exists, this import is treated as an update. If version configuration is not enabled and an API with the same name already exists, this import is treated as an update.
    shared_ptr<HttpApiVersionConfig> versionConfig_ {};
    shared_ptr<bool> withGatewayExtension_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
