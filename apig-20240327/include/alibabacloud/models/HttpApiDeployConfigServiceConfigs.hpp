// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIGSERVICECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIGSERVICECONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiDeployConfigServiceConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiDeployConfigServiceConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelNamePattern, modelNamePattern_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiDeployConfigServiceConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelNamePattern, modelNamePattern_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    HttpApiDeployConfigServiceConfigs() = default ;
    HttpApiDeployConfigServiceConfigs(const HttpApiDeployConfigServiceConfigs &) = default ;
    HttpApiDeployConfigServiceConfigs(HttpApiDeployConfigServiceConfigs &&) = default ;
    HttpApiDeployConfigServiceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiDeployConfigServiceConfigs() = default ;
    HttpApiDeployConfigServiceConfigs& operator=(const HttpApiDeployConfigServiceConfigs &) = default ;
    HttpApiDeployConfigServiceConfigs& operator=(HttpApiDeployConfigServiceConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelName_ == nullptr
        && return this->modelNamePattern_ == nullptr && return this->serviceId_ == nullptr && return this->weight_ == nullptr; };
    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline HttpApiDeployConfigServiceConfigs& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelNamePattern Field Functions 
    bool hasModelNamePattern() const { return this->modelNamePattern_ != nullptr;};
    void deleteModelNamePattern() { this->modelNamePattern_ = nullptr;};
    inline string modelNamePattern() const { DARABONBA_PTR_GET_DEFAULT(modelNamePattern_, "") };
    inline HttpApiDeployConfigServiceConfigs& setModelNamePattern(string modelNamePattern) { DARABONBA_PTR_SET_VALUE(modelNamePattern_, modelNamePattern) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline HttpApiDeployConfigServiceConfigs& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int64_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
    inline HttpApiDeployConfigServiceConfigs& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<string> modelNamePattern_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<int64_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
