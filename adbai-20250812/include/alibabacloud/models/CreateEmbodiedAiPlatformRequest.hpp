// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEMBODIEDAIPLATFORMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEMBODIEDAIPLATFORMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEmbodiedAIPlatformRequestRayConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class CreateEmbodiedAIPlatformRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEmbodiedAIPlatformRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PlatformName, platformName_);
      DARABONBA_PTR_TO_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WebserverSpecName, webserverSpecName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEmbodiedAIPlatformRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PlatformName, platformName_);
      DARABONBA_PTR_FROM_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WebserverSpecName, webserverSpecName_);
    };
    CreateEmbodiedAIPlatformRequest() = default ;
    CreateEmbodiedAIPlatformRequest(const CreateEmbodiedAIPlatformRequest &) = default ;
    CreateEmbodiedAIPlatformRequest(CreateEmbodiedAIPlatformRequest &&) = default ;
    CreateEmbodiedAIPlatformRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEmbodiedAIPlatformRequest() = default ;
    CreateEmbodiedAIPlatformRequest& operator=(const CreateEmbodiedAIPlatformRequest &) = default ;
    CreateEmbodiedAIPlatformRequest& operator=(CreateEmbodiedAIPlatformRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->platformName_ == nullptr && return this->rayConfig_ == nullptr && return this->regionId_ == nullptr && return this->webserverSpecName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateEmbodiedAIPlatformRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // platformName Field Functions 
    bool hasPlatformName() const { return this->platformName_ != nullptr;};
    void deletePlatformName() { this->platformName_ = nullptr;};
    inline string platformName() const { DARABONBA_PTR_GET_DEFAULT(platformName_, "") };
    inline CreateEmbodiedAIPlatformRequest& setPlatformName(string platformName) { DARABONBA_PTR_SET_VALUE(platformName_, platformName) };


    // rayConfig Field Functions 
    bool hasRayConfig() const { return this->rayConfig_ != nullptr;};
    void deleteRayConfig() { this->rayConfig_ = nullptr;};
    inline const CreateEmbodiedAIPlatformRequestRayConfig & rayConfig() const { DARABONBA_PTR_GET_CONST(rayConfig_, CreateEmbodiedAIPlatformRequestRayConfig) };
    inline CreateEmbodiedAIPlatformRequestRayConfig rayConfig() { DARABONBA_PTR_GET(rayConfig_, CreateEmbodiedAIPlatformRequestRayConfig) };
    inline CreateEmbodiedAIPlatformRequest& setRayConfig(const CreateEmbodiedAIPlatformRequestRayConfig & rayConfig) { DARABONBA_PTR_SET_VALUE(rayConfig_, rayConfig) };
    inline CreateEmbodiedAIPlatformRequest& setRayConfig(CreateEmbodiedAIPlatformRequestRayConfig && rayConfig) { DARABONBA_PTR_SET_RVALUE(rayConfig_, rayConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEmbodiedAIPlatformRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // webserverSpecName Field Functions 
    bool hasWebserverSpecName() const { return this->webserverSpecName_ != nullptr;};
    void deleteWebserverSpecName() { this->webserverSpecName_ = nullptr;};
    inline string webserverSpecName() const { DARABONBA_PTR_GET_DEFAULT(webserverSpecName_, "") };
    inline CreateEmbodiedAIPlatformRequest& setWebserverSpecName(string webserverSpecName) { DARABONBA_PTR_SET_VALUE(webserverSpecName_, webserverSpecName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> platformName_ = nullptr;
    std::shared_ptr<CreateEmbodiedAIPlatformRequestRayConfig> rayConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> webserverSpecName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
