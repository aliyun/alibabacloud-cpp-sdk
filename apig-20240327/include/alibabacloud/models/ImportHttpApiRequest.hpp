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
      // The OSS bucket name.
      shared_ptr<string> bucketName_ {};
      // The full file path in OSS.
      shared_ptr<string> objectKey_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->deployConfigs_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->gatewayId_ == nullptr && this->mcpRouteId_ == nullptr && this->name_ == nullptr
        && this->resourceGroupId_ == nullptr && this->specContentBase64_ == nullptr && this->specFileUrl_ == nullptr && this->specOssConfig_ == nullptr && this->strategy_ == nullptr
        && this->targetHttpApiId_ == nullptr && this->versionConfig_ == nullptr; };
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


  protected:
    // The API deployment configuration.
    shared_ptr<vector<HttpApiDeployConfig>> deployConfigs_ {};
    // The imported API description (255-byte limit). If not specified, a description is extracted from the API definition file. A maximum of 255 bytes is supported.
    shared_ptr<string> description_ {};
    // Specifies whether to perform a precheck. If set to true, a check is performed without actual import.
    shared_ptr<bool> dryRun_ {};
    // Gateway ID.
    shared_ptr<string> gatewayId_ {};
    // The MCP route ID.
    shared_ptr<string> mcpRouteId_ {};
    // The imported API name. If not specified, a name is extracted from the API definition file. If the API name and versioning configuration already exist, this import will update the existing API definition based on the strategy field.
    shared_ptr<string> name_ {};
    // The [resource group ID](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    // The Base64-encoded API definition (supports OAS 2.0/OAS 3.0 in YAML/JSON). This parameter has higher priority than the specFileUrl parameter. However, if the file size exceeds 10 MB, use the specFileUrl parameter to pass the definition.
    shared_ptr<string> specContentBase64_ {};
    // The download URL of the API definition file. Must be either a publicly accessible Object Storage Service (OSS) URL or an OSS intranet endpoint within the same region. Requires download permissions. For OSS URLs that are not publicly readable, refer to [https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects](https://help.aliyun.com/document_detail/39607.html) and use URLs with download permissions. Currently, only OSS URLs are supported.
    shared_ptr<string> specFileUrl_ {};
    // The OSS configuration details.
    shared_ptr<ImportHttpApiRequest::SpecOssConfig> specOssConfig_ {};
    // The conflict resolution strategy when the API to be imported has the same name and version as an existing one. Valid values:
    // 
    // *   SpecOnly: full override.
    // *   SpecFirst: Merge with priority on the newly imported file. New APIs are created and existing ones are updated. APIs not included in the file remain unchanged.
    // *   ExistFirst (default): Merge with priority on existing APIs. New APIs are created but existing ones remain unchanged. If this parameter is not specified, the ExistFirst policy takes effect.
    shared_ptr<string> strategy_ {};
    // The target REST API ID for direct updates. If specified, the import operation will directly update the designated API instead of creating new APIs or updating existing APIs based on the name and version. Only REST APIs can be specified.
    shared_ptr<string> targetHttpApiId_ {};
    // The API versioning configuration. If versioning is enabled, an imported API that matches both the version number and the API name of an existing API will update that API. If versioning is disabled, an imported API that matches the API name of an existing API will update it.
    shared_ptr<HttpApiVersionConfig> versionConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
