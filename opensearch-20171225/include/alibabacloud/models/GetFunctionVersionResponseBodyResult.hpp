// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONVERSIONRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONVERSIONRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFunctionVersionResponseBodyResultVersionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionVersionResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionVersionResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(VersionConfig, versionConfig_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionVersionResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(VersionConfig, versionConfig_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    GetFunctionVersionResponseBodyResult() = default ;
    GetFunctionVersionResponseBodyResult(const GetFunctionVersionResponseBodyResult &) = default ;
    GetFunctionVersionResponseBodyResult(GetFunctionVersionResponseBodyResult &&) = default ;
    GetFunctionVersionResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionVersionResponseBodyResult() = default ;
    GetFunctionVersionResponseBodyResult& operator=(const GetFunctionVersionResponseBodyResult &) = default ;
    GetFunctionVersionResponseBodyResult& operator=(GetFunctionVersionResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionName_ == nullptr
        && return this->functionType_ == nullptr && return this->modelType_ == nullptr && return this->versionConfig_ == nullptr && return this->versionId_ == nullptr && return this->versionName_ == nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline GetFunctionVersionResponseBodyResult& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline GetFunctionVersionResponseBodyResult& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline GetFunctionVersionResponseBodyResult& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // versionConfig Field Functions 
    bool hasVersionConfig() const { return this->versionConfig_ != nullptr;};
    void deleteVersionConfig() { this->versionConfig_ = nullptr;};
    inline const Models::GetFunctionVersionResponseBodyResultVersionConfig & versionConfig() const { DARABONBA_PTR_GET_CONST(versionConfig_, Models::GetFunctionVersionResponseBodyResultVersionConfig) };
    inline Models::GetFunctionVersionResponseBodyResultVersionConfig versionConfig() { DARABONBA_PTR_GET(versionConfig_, Models::GetFunctionVersionResponseBodyResultVersionConfig) };
    inline GetFunctionVersionResponseBodyResult& setVersionConfig(const Models::GetFunctionVersionResponseBodyResultVersionConfig & versionConfig) { DARABONBA_PTR_SET_VALUE(versionConfig_, versionConfig) };
    inline GetFunctionVersionResponseBodyResult& setVersionConfig(Models::GetFunctionVersionResponseBodyResultVersionConfig && versionConfig) { DARABONBA_PTR_SET_RVALUE(versionConfig_, versionConfig) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline int64_t versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0L) };
    inline GetFunctionVersionResponseBodyResult& setVersionId(int64_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline GetFunctionVersionResponseBodyResult& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The name of the feature.
    std::shared_ptr<string> functionName_ = nullptr;
    // The type of the feature. Valid values:
    // 
    // *   PAAS
    // *   SAAS
    std::shared_ptr<string> functionType_ = nullptr;
    // The type of the model.
    std::shared_ptr<string> modelType_ = nullptr;
    // The configuration information.
    std::shared_ptr<Models::GetFunctionVersionResponseBodyResultVersionConfig> versionConfig_ = nullptr;
    // The ID of the version.
    std::shared_ptr<int64_t> versionId_ = nullptr;
    // The name of the version.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
