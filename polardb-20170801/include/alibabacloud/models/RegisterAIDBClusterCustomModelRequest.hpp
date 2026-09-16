// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERAIDBCLUSTERCUSTOMMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERAIDBCLUSTERCUSTOMMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RegisterAIDBClusterCustomModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterAIDBClusterCustomModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomOssBucketName, customOssBucketName_);
      DARABONBA_PTR_TO_JSON(CustomOssBucketPath, customOssBucketPath_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DisplayModelName, displayModelName_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterAIDBClusterCustomModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomOssBucketName, customOssBucketName_);
      DARABONBA_PTR_FROM_JSON(CustomOssBucketPath, customOssBucketPath_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DisplayModelName, displayModelName_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RegisterAIDBClusterCustomModelRequest() = default ;
    RegisterAIDBClusterCustomModelRequest(const RegisterAIDBClusterCustomModelRequest &) = default ;
    RegisterAIDBClusterCustomModelRequest(RegisterAIDBClusterCustomModelRequest &&) = default ;
    RegisterAIDBClusterCustomModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterAIDBClusterCustomModelRequest() = default ;
    RegisterAIDBClusterCustomModelRequest& operator=(const RegisterAIDBClusterCustomModelRequest &) = default ;
    RegisterAIDBClusterCustomModelRequest& operator=(RegisterAIDBClusterCustomModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customOssBucketName_ == nullptr
        && this->customOssBucketPath_ == nullptr && this->DBClusterId_ == nullptr && this->displayModelName_ == nullptr && this->modelName_ == nullptr && this->regionId_ == nullptr; };
    // customOssBucketName Field Functions 
    bool hasCustomOssBucketName() const { return this->customOssBucketName_ != nullptr;};
    void deleteCustomOssBucketName() { this->customOssBucketName_ = nullptr;};
    inline string getCustomOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(customOssBucketName_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setCustomOssBucketName(string customOssBucketName) { DARABONBA_PTR_SET_VALUE(customOssBucketName_, customOssBucketName) };


    // customOssBucketPath Field Functions 
    bool hasCustomOssBucketPath() const { return this->customOssBucketPath_ != nullptr;};
    void deleteCustomOssBucketPath() { this->customOssBucketPath_ = nullptr;};
    inline string getCustomOssBucketPath() const { DARABONBA_PTR_GET_DEFAULT(customOssBucketPath_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setCustomOssBucketPath(string customOssBucketPath) { DARABONBA_PTR_SET_VALUE(customOssBucketPath_, customOssBucketPath) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // displayModelName Field Functions 
    bool hasDisplayModelName() const { return this->displayModelName_ != nullptr;};
    void deleteDisplayModelName() { this->displayModelName_ = nullptr;};
    inline string getDisplayModelName() const { DARABONBA_PTR_GET_DEFAULT(displayModelName_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setDisplayModelName(string displayModelName) { DARABONBA_PTR_SET_VALUE(displayModelName_, displayModelName) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the OSS bucket.
    // 
    // This parameter is required.
    shared_ptr<string> customOssBucketName_ {};
    // The model path within the OSS bucket.
    // 
    // This parameter is required.
    shared_ptr<string> customOssBucketPath_ {};
    // The ID of the PolarDB AI 3.0 logical instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The display name shown in the candidate list and the initial client-facing invocation name.
    shared_ptr<string> displayModelName_ {};
    // The custom model registration key and model directory name.
    // 
    // This parameter is required.
    shared_ptr<string> modelName_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
