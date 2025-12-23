// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONCURRENTVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONCURRENTVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionCurrentVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionCurrentVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(functionType, functionType_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionCurrentVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(functionType, functionType_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
    };
    GetFunctionCurrentVersionRequest() = default ;
    GetFunctionCurrentVersionRequest(const GetFunctionCurrentVersionRequest &) = default ;
    GetFunctionCurrentVersionRequest(GetFunctionCurrentVersionRequest &&) = default ;
    GetFunctionCurrentVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionCurrentVersionRequest() = default ;
    GetFunctionCurrentVersionRequest& operator=(const GetFunctionCurrentVersionRequest &) = default ;
    GetFunctionCurrentVersionRequest& operator=(GetFunctionCurrentVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->domain_ == nullptr && return this->functionType_ == nullptr && return this->modelType_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetFunctionCurrentVersionRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetFunctionCurrentVersionRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline GetFunctionCurrentVersionRequest& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline GetFunctionCurrentVersionRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


  protected:
    // The category. By default, this parameter is left empty.
    std::shared_ptr<string> category_ = nullptr;
    // The industry. By default, this parameter is left empty, which indicates General-purpose Edition.
    std::shared_ptr<string> domain_ = nullptr;
    // The type of the feature. Valid values:
    // 
    // *   PAAS. This is the default value.
    // *   SAAS.
    std::shared_ptr<string> functionType_ = nullptr;
    // The type of the model. The following features correspond to different model types:
    // 
    // *   CTR model: tf_checkpoint
    // *   Popularity model: pop
    // *   Category model: offline_inference
    // *   Hotword model: offline_inference
    // *   Shading model: offline_inference
    // *   Drop-down suggestion model: offline_inference
    // *   Word segmentation model: text
    // *   Word weight model: tf_checkpoint
    // 
    // This parameter is required.
    std::shared_ptr<string> modelType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
