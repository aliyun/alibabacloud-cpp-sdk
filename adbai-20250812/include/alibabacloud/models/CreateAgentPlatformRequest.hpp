// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTPLATFORMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTPLATFORMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class CreateAgentPlatformRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentPlatformRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AiPlatformConfig, aiPlatformConfig_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentPlatformRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AiPlatformConfig, aiPlatformConfig_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateAgentPlatformRequest() = default ;
    CreateAgentPlatformRequest(const CreateAgentPlatformRequest &) = default ;
    CreateAgentPlatformRequest(CreateAgentPlatformRequest &&) = default ;
    CreateAgentPlatformRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentPlatformRequest() = default ;
    CreateAgentPlatformRequest& operator=(const CreateAgentPlatformRequest &) = default ;
    CreateAgentPlatformRequest& operator=(CreateAgentPlatformRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AiPlatformConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AiPlatformConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ServeApiKey, serveApiKey_);
        DARABONBA_PTR_TO_JSON(ServeEmbeddingEndpoint, serveEmbeddingEndpoint_);
        DARABONBA_PTR_TO_JSON(ServeEmbeddingModelName, serveEmbeddingModelName_);
        DARABONBA_PTR_TO_JSON(ServeEndpoint, serveEndpoint_);
        DARABONBA_PTR_TO_JSON(ServeModelName, serveModelName_);
        DARABONBA_PTR_TO_JSON(SpecName, specName_);
      };
      friend void from_json(const Darabonba::Json& j, AiPlatformConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ServeApiKey, serveApiKey_);
        DARABONBA_PTR_FROM_JSON(ServeEmbeddingEndpoint, serveEmbeddingEndpoint_);
        DARABONBA_PTR_FROM_JSON(ServeEmbeddingModelName, serveEmbeddingModelName_);
        DARABONBA_PTR_FROM_JSON(ServeEndpoint, serveEndpoint_);
        DARABONBA_PTR_FROM_JSON(ServeModelName, serveModelName_);
        DARABONBA_PTR_FROM_JSON(SpecName, specName_);
      };
      AiPlatformConfig() = default ;
      AiPlatformConfig(const AiPlatformConfig &) = default ;
      AiPlatformConfig(AiPlatformConfig &&) = default ;
      AiPlatformConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AiPlatformConfig() = default ;
      AiPlatformConfig& operator=(const AiPlatformConfig &) = default ;
      AiPlatformConfig& operator=(AiPlatformConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->serveApiKey_ == nullptr
        && this->serveEmbeddingEndpoint_ == nullptr && this->serveEmbeddingModelName_ == nullptr && this->serveEndpoint_ == nullptr && this->serveModelName_ == nullptr && this->specName_ == nullptr; };
      // serveApiKey Field Functions 
      bool hasServeApiKey() const { return this->serveApiKey_ != nullptr;};
      void deleteServeApiKey() { this->serveApiKey_ = nullptr;};
      inline string getServeApiKey() const { DARABONBA_PTR_GET_DEFAULT(serveApiKey_, "") };
      inline AiPlatformConfig& setServeApiKey(string serveApiKey) { DARABONBA_PTR_SET_VALUE(serveApiKey_, serveApiKey) };


      // serveEmbeddingEndpoint Field Functions 
      bool hasServeEmbeddingEndpoint() const { return this->serveEmbeddingEndpoint_ != nullptr;};
      void deleteServeEmbeddingEndpoint() { this->serveEmbeddingEndpoint_ = nullptr;};
      inline string getServeEmbeddingEndpoint() const { DARABONBA_PTR_GET_DEFAULT(serveEmbeddingEndpoint_, "") };
      inline AiPlatformConfig& setServeEmbeddingEndpoint(string serveEmbeddingEndpoint) { DARABONBA_PTR_SET_VALUE(serveEmbeddingEndpoint_, serveEmbeddingEndpoint) };


      // serveEmbeddingModelName Field Functions 
      bool hasServeEmbeddingModelName() const { return this->serveEmbeddingModelName_ != nullptr;};
      void deleteServeEmbeddingModelName() { this->serveEmbeddingModelName_ = nullptr;};
      inline string getServeEmbeddingModelName() const { DARABONBA_PTR_GET_DEFAULT(serveEmbeddingModelName_, "") };
      inline AiPlatformConfig& setServeEmbeddingModelName(string serveEmbeddingModelName) { DARABONBA_PTR_SET_VALUE(serveEmbeddingModelName_, serveEmbeddingModelName) };


      // serveEndpoint Field Functions 
      bool hasServeEndpoint() const { return this->serveEndpoint_ != nullptr;};
      void deleteServeEndpoint() { this->serveEndpoint_ = nullptr;};
      inline string getServeEndpoint() const { DARABONBA_PTR_GET_DEFAULT(serveEndpoint_, "") };
      inline AiPlatformConfig& setServeEndpoint(string serveEndpoint) { DARABONBA_PTR_SET_VALUE(serveEndpoint_, serveEndpoint) };


      // serveModelName Field Functions 
      bool hasServeModelName() const { return this->serveModelName_ != nullptr;};
      void deleteServeModelName() { this->serveModelName_ = nullptr;};
      inline string getServeModelName() const { DARABONBA_PTR_GET_DEFAULT(serveModelName_, "") };
      inline AiPlatformConfig& setServeModelName(string serveModelName) { DARABONBA_PTR_SET_VALUE(serveModelName_, serveModelName) };


      // specName Field Functions 
      bool hasSpecName() const { return this->specName_ != nullptr;};
      void deleteSpecName() { this->specName_ = nullptr;};
      inline string getSpecName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
      inline AiPlatformConfig& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


    protected:
      // This parameter is required.
      shared_ptr<string> serveApiKey_ {};
      // This parameter is required.
      shared_ptr<string> serveEmbeddingEndpoint_ {};
      // This parameter is required.
      shared_ptr<string> serveEmbeddingModelName_ {};
      // This parameter is required.
      shared_ptr<string> serveEndpoint_ {};
      // This parameter is required.
      shared_ptr<string> serveModelName_ {};
      // This parameter is required.
      shared_ptr<string> specName_ {};
    };

    virtual bool empty() const override { return this->aiPlatformConfig_ == nullptr
        && this->DBClusterId_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr; };
    // aiPlatformConfig Field Functions 
    bool hasAiPlatformConfig() const { return this->aiPlatformConfig_ != nullptr;};
    void deleteAiPlatformConfig() { this->aiPlatformConfig_ = nullptr;};
    inline const CreateAgentPlatformRequest::AiPlatformConfig & getAiPlatformConfig() const { DARABONBA_PTR_GET_CONST(aiPlatformConfig_, CreateAgentPlatformRequest::AiPlatformConfig) };
    inline CreateAgentPlatformRequest::AiPlatformConfig getAiPlatformConfig() { DARABONBA_PTR_GET(aiPlatformConfig_, CreateAgentPlatformRequest::AiPlatformConfig) };
    inline CreateAgentPlatformRequest& setAiPlatformConfig(const CreateAgentPlatformRequest::AiPlatformConfig & aiPlatformConfig) { DARABONBA_PTR_SET_VALUE(aiPlatformConfig_, aiPlatformConfig) };
    inline CreateAgentPlatformRequest& setAiPlatformConfig(CreateAgentPlatformRequest::AiPlatformConfig && aiPlatformConfig) { DARABONBA_PTR_SET_RVALUE(aiPlatformConfig_, aiPlatformConfig) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAgentPlatformRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAgentPlatformRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAgentPlatformRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateAgentPlatformRequest::AiPlatformConfig> aiPlatformConfig_ {};
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
