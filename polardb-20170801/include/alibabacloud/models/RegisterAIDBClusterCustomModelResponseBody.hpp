// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERAIDBCLUSTERCUSTOMMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REGISTERAIDBCLUSTERCUSTOMMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RegisterAIDBClusterCustomModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterAIDBClusterCustomModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(DisplayModelName, displayModelName_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterAIDBClusterCustomModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(DisplayModelName, displayModelName_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RegisterAIDBClusterCustomModelResponseBody() = default ;
    RegisterAIDBClusterCustomModelResponseBody(const RegisterAIDBClusterCustomModelResponseBody &) = default ;
    RegisterAIDBClusterCustomModelResponseBody(RegisterAIDBClusterCustomModelResponseBody &&) = default ;
    RegisterAIDBClusterCustomModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterAIDBClusterCustomModelResponseBody() = default ;
    RegisterAIDBClusterCustomModelResponseBody& operator=(const RegisterAIDBClusterCustomModelResponseBody &) = default ;
    RegisterAIDBClusterCustomModelResponseBody& operator=(RegisterAIDBClusterCustomModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->created_ == nullptr
        && this->displayModelName_ == nullptr && this->modelId_ == nullptr && this->modelName_ == nullptr && this->modelType_ == nullptr && this->ossPath_ == nullptr
        && this->requestId_ == nullptr; };
    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline bool getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, false) };
    inline RegisterAIDBClusterCustomModelResponseBody& setCreated(bool created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // displayModelName Field Functions 
    bool hasDisplayModelName() const { return this->displayModelName_ != nullptr;};
    void deleteDisplayModelName() { this->displayModelName_ = nullptr;};
    inline string getDisplayModelName() const { DARABONBA_PTR_GET_DEFAULT(displayModelName_, "") };
    inline RegisterAIDBClusterCustomModelResponseBody& setDisplayModelName(string displayModelName) { DARABONBA_PTR_SET_VALUE(displayModelName_, displayModelName) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline RegisterAIDBClusterCustomModelResponseBody& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RegisterAIDBClusterCustomModelResponseBody& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline RegisterAIDBClusterCustomModelResponseBody& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string getOssPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline RegisterAIDBClusterCustomModelResponseBody& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RegisterAIDBClusterCustomModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the registration is newly created. A value of false indicates that an existing registration was updated.
    shared_ptr<bool> created_ {};
    // The display name and initial client-facing invocation name.
    shared_ptr<string> displayModelName_ {};
    // The model registration ID.
    shared_ptr<int64_t> modelId_ {};
    // The custom model registration key.
    shared_ptr<string> modelName_ {};
    // The model type.
    shared_ptr<string> modelType_ {};
    // The normalized OSS path.
    shared_ptr<string> ossPath_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
