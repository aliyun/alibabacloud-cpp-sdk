// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEMBODIEDAIPLATFORMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEMBODIEDAIPLATFORMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class CreateEmbodiedAIPlatformShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEmbodiedAIPlatformShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PlatformName, platformName_);
      DARABONBA_PTR_TO_JSON(RayConfig, rayConfigShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WebserverSpecName, webserverSpecName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEmbodiedAIPlatformShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PlatformName, platformName_);
      DARABONBA_PTR_FROM_JSON(RayConfig, rayConfigShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WebserverSpecName, webserverSpecName_);
    };
    CreateEmbodiedAIPlatformShrinkRequest() = default ;
    CreateEmbodiedAIPlatformShrinkRequest(const CreateEmbodiedAIPlatformShrinkRequest &) = default ;
    CreateEmbodiedAIPlatformShrinkRequest(CreateEmbodiedAIPlatformShrinkRequest &&) = default ;
    CreateEmbodiedAIPlatformShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEmbodiedAIPlatformShrinkRequest() = default ;
    CreateEmbodiedAIPlatformShrinkRequest& operator=(const CreateEmbodiedAIPlatformShrinkRequest &) = default ;
    CreateEmbodiedAIPlatformShrinkRequest& operator=(CreateEmbodiedAIPlatformShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->platformName_ == nullptr && this->rayConfigShrink_ == nullptr && this->regionId_ == nullptr && this->webserverSpecName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateEmbodiedAIPlatformShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // platformName Field Functions 
    bool hasPlatformName() const { return this->platformName_ != nullptr;};
    void deletePlatformName() { this->platformName_ = nullptr;};
    inline string getPlatformName() const { DARABONBA_PTR_GET_DEFAULT(platformName_, "") };
    inline CreateEmbodiedAIPlatformShrinkRequest& setPlatformName(string platformName) { DARABONBA_PTR_SET_VALUE(platformName_, platformName) };


    // rayConfigShrink Field Functions 
    bool hasRayConfigShrink() const { return this->rayConfigShrink_ != nullptr;};
    void deleteRayConfigShrink() { this->rayConfigShrink_ = nullptr;};
    inline string getRayConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(rayConfigShrink_, "") };
    inline CreateEmbodiedAIPlatformShrinkRequest& setRayConfigShrink(string rayConfigShrink) { DARABONBA_PTR_SET_VALUE(rayConfigShrink_, rayConfigShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEmbodiedAIPlatformShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // webserverSpecName Field Functions 
    bool hasWebserverSpecName() const { return this->webserverSpecName_ != nullptr;};
    void deleteWebserverSpecName() { this->webserverSpecName_ = nullptr;};
    inline string getWebserverSpecName() const { DARABONBA_PTR_GET_DEFAULT(webserverSpecName_, "") };
    inline CreateEmbodiedAIPlatformShrinkRequest& setWebserverSpecName(string webserverSpecName) { DARABONBA_PTR_SET_VALUE(webserverSpecName_, webserverSpecName) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> platformName_ {};
    shared_ptr<string> rayConfigShrink_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> webserverSpecName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
