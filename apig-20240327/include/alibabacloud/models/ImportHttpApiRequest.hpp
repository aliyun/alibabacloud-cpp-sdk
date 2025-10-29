// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTHTTPAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTHTTPAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiDeployConfig.hpp>
#include <alibabacloud/models/ImportHttpApiRequestSpecOssConfig.hpp>
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
    virtual bool empty() const override { return this->deployConfigs_ == nullptr
        && return this->description_ == nullptr && return this->dryRun_ == nullptr && return this->gatewayId_ == nullptr && return this->mcpRouteId_ == nullptr && return this->name_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->specContentBase64_ == nullptr && return this->specFileUrl_ == nullptr && return this->specOssConfig_ == nullptr && return this->strategy_ == nullptr
        && return this->targetHttpApiId_ == nullptr && return this->versionConfig_ == nullptr; };
    // deployConfigs Field Functions 
    bool hasDeployConfigs() const { return this->deployConfigs_ != nullptr;};
    void deleteDeployConfigs() { this->deployConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig> & deployConfigs() const { DARABONBA_PTR_GET_CONST(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline vector<HttpApiDeployConfig> deployConfigs() { DARABONBA_PTR_GET(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline ImportHttpApiRequest& setDeployConfigs(const vector<HttpApiDeployConfig> & deployConfigs) { DARABONBA_PTR_SET_VALUE(deployConfigs_, deployConfigs) };
    inline ImportHttpApiRequest& setDeployConfigs(vector<HttpApiDeployConfig> && deployConfigs) { DARABONBA_PTR_SET_RVALUE(deployConfigs_, deployConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ImportHttpApiRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ImportHttpApiRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ImportHttpApiRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // mcpRouteId Field Functions 
    bool hasMcpRouteId() const { return this->mcpRouteId_ != nullptr;};
    void deleteMcpRouteId() { this->mcpRouteId_ = nullptr;};
    inline string mcpRouteId() const { DARABONBA_PTR_GET_DEFAULT(mcpRouteId_, "") };
    inline ImportHttpApiRequest& setMcpRouteId(string mcpRouteId) { DARABONBA_PTR_SET_VALUE(mcpRouteId_, mcpRouteId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImportHttpApiRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ImportHttpApiRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // specContentBase64 Field Functions 
    bool hasSpecContentBase64() const { return this->specContentBase64_ != nullptr;};
    void deleteSpecContentBase64() { this->specContentBase64_ = nullptr;};
    inline string specContentBase64() const { DARABONBA_PTR_GET_DEFAULT(specContentBase64_, "") };
    inline ImportHttpApiRequest& setSpecContentBase64(string specContentBase64) { DARABONBA_PTR_SET_VALUE(specContentBase64_, specContentBase64) };


    // specFileUrl Field Functions 
    bool hasSpecFileUrl() const { return this->specFileUrl_ != nullptr;};
    void deleteSpecFileUrl() { this->specFileUrl_ = nullptr;};
    inline string specFileUrl() const { DARABONBA_PTR_GET_DEFAULT(specFileUrl_, "") };
    inline ImportHttpApiRequest& setSpecFileUrl(string specFileUrl) { DARABONBA_PTR_SET_VALUE(specFileUrl_, specFileUrl) };


    // specOssConfig Field Functions 
    bool hasSpecOssConfig() const { return this->specOssConfig_ != nullptr;};
    void deleteSpecOssConfig() { this->specOssConfig_ = nullptr;};
    inline const ImportHttpApiRequestSpecOssConfig & specOssConfig() const { DARABONBA_PTR_GET_CONST(specOssConfig_, ImportHttpApiRequestSpecOssConfig) };
    inline ImportHttpApiRequestSpecOssConfig specOssConfig() { DARABONBA_PTR_GET(specOssConfig_, ImportHttpApiRequestSpecOssConfig) };
    inline ImportHttpApiRequest& setSpecOssConfig(const ImportHttpApiRequestSpecOssConfig & specOssConfig) { DARABONBA_PTR_SET_VALUE(specOssConfig_, specOssConfig) };
    inline ImportHttpApiRequest& setSpecOssConfig(ImportHttpApiRequestSpecOssConfig && specOssConfig) { DARABONBA_PTR_SET_RVALUE(specOssConfig_, specOssConfig) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline ImportHttpApiRequest& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // targetHttpApiId Field Functions 
    bool hasTargetHttpApiId() const { return this->targetHttpApiId_ != nullptr;};
    void deleteTargetHttpApiId() { this->targetHttpApiId_ = nullptr;};
    inline string targetHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(targetHttpApiId_, "") };
    inline ImportHttpApiRequest& setTargetHttpApiId(string targetHttpApiId) { DARABONBA_PTR_SET_VALUE(targetHttpApiId_, targetHttpApiId) };


    // versionConfig Field Functions 
    bool hasVersionConfig() const { return this->versionConfig_ != nullptr;};
    void deleteVersionConfig() { this->versionConfig_ = nullptr;};
    inline const HttpApiVersionConfig & versionConfig() const { DARABONBA_PTR_GET_CONST(versionConfig_, HttpApiVersionConfig) };
    inline HttpApiVersionConfig versionConfig() { DARABONBA_PTR_GET(versionConfig_, HttpApiVersionConfig) };
    inline ImportHttpApiRequest& setVersionConfig(const HttpApiVersionConfig & versionConfig) { DARABONBA_PTR_SET_VALUE(versionConfig_, versionConfig) };
    inline ImportHttpApiRequest& setVersionConfig(HttpApiVersionConfig && versionConfig) { DARABONBA_PTR_SET_RVALUE(versionConfig_, versionConfig) };


  protected:
    // The deployment configuration.
    std::shared_ptr<vector<HttpApiDeployConfig>> deployConfigs_ = nullptr;
    // The API description, which cannot exceed 255 bytes in length. If you do not specify a description, a description is extracted from the definition file.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to perform a dry run. If this parameter is set to true, a dry run is performed without importing the file.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The MCP route ID.
    std::shared_ptr<string> mcpRouteId_ = nullptr;
    // The API name. If you do not specify a name, a name is extracted from the definition file. If a name and a versioning configuration already exist, the existing API definition is updated based on the strategy field.
    std::shared_ptr<string> name_ = nullptr;
    // [The resource group ID](https://help.aliyun.com/document_detail/151181.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The Base64-encoded API definition. OAS 2.0 and OAS 3.0 specifications are supported. YAML and JSON formats are supported. This parameter precedes over the specFileUrl parameter. However, if the file size exceeds 10 MB, use the specFileUrl parameter to pass the definition.
    std::shared_ptr<string> specContentBase64_ = nullptr;
    // The download URL of the API definition file. You can download the file over the Internet or by using an Object Storage Service (OSS) internal download URL that belongs to the current region. You must obtain the required permissions to download the file. For OSS URLs that are not publicly readable, refer to [Download objects using presigned URLs](https://help.aliyun.com/document_detail/39607.html) to specify URLs that provide download permissions. Currently, only OSS URLs are supported.
    std::shared_ptr<string> specFileUrl_ = nullptr;
    // The OSS information.
    std::shared_ptr<ImportHttpApiRequestSpecOssConfig> specOssConfig_ = nullptr;
    // The update policy when the API to be imported has the same version and name as an existing one. Valid values:
    // 
    // *   SpectOnly: All configurations in the file take effect.
    // *   SpecFirst: The file takes precedence. New APIs are created and existing ones are updated. APIs not included in the file remain unchanged.
    // *   ExistFirst (default): The existing APIs take precedence. New APIs are created but existing ones remain unchanged. If this parameter is not specified, the ExistFirst policy takes effect.
    std::shared_ptr<string> strategy_ = nullptr;
    // The API to be updated. If this parameter is specified, this import updates only the specified API. New APIs are not created and unspecified existing APIs are not updated. Only REST APIs can be specified.
    std::shared_ptr<string> targetHttpApiId_ = nullptr;
    // The API versioning configuration. If versioning is enabled for an API and the version and name of an API to be imported are the same as those of the existing API, the existing API is updated by this import. If versioning is not enabled for an API and the name of an API to be imported are the same as that of the existing API, the existing API is updated by this import.
    std::shared_ptr<HttpApiVersionConfig> versionConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
