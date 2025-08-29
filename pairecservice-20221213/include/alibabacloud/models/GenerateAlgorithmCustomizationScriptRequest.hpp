// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEALGORITHMCUSTOMIZATIONSCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEALGORITHMCUSTOMIZATIONSCRIPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GenerateAlgorithmCustomizationScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAlgorithmCustomizationScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_ANY_TO_JSON(ModuleFieldTypes, moduleFieldTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAlgorithmCustomizationScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_ANY_FROM_JSON(ModuleFieldTypes, moduleFieldTypes_);
    };
    GenerateAlgorithmCustomizationScriptRequest() = default ;
    GenerateAlgorithmCustomizationScriptRequest(const GenerateAlgorithmCustomizationScriptRequest &) = default ;
    GenerateAlgorithmCustomizationScriptRequest(GenerateAlgorithmCustomizationScriptRequest &&) = default ;
    GenerateAlgorithmCustomizationScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAlgorithmCustomizationScriptRequest() = default ;
    GenerateAlgorithmCustomizationScriptRequest& operator=(const GenerateAlgorithmCustomizationScriptRequest &) = default ;
    GenerateAlgorithmCustomizationScriptRequest& operator=(GenerateAlgorithmCustomizationScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deployMode_ != nullptr
        && this->instanceId_ != nullptr && this->moduleFieldTypes_ != nullptr; };
    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string deployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline GenerateAlgorithmCustomizationScriptRequest& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateAlgorithmCustomizationScriptRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleFieldTypes Field Functions 
    bool hasModuleFieldTypes() const { return this->moduleFieldTypes_ != nullptr;};
    void deleteModuleFieldTypes() { this->moduleFieldTypes_ = nullptr;};
    inline     const Darabonba::Json & moduleFieldTypes() const { DARABONBA_GET(moduleFieldTypes_) };
    Darabonba::Json & moduleFieldTypes() { DARABONBA_GET(moduleFieldTypes_) };
    inline GenerateAlgorithmCustomizationScriptRequest& setModuleFieldTypes(const Darabonba::Json & moduleFieldTypes) { DARABONBA_SET_VALUE(moduleFieldTypes_, moduleFieldTypes) };
    inline GenerateAlgorithmCustomizationScriptRequest& setModuleFieldTypes(Darabonba::Json & moduleFieldTypes) { DARABONBA_SET_RVALUE(moduleFieldTypes_, moduleFieldTypes) };


  protected:
    std::shared_ptr<string> deployMode_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    Darabonba::Json moduleFieldTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
