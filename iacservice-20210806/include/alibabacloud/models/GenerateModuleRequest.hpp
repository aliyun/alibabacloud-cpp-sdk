// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEMODULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEMODULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GenerateModuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateModuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(generateSource, generateSource_);
      DARABONBA_ANY_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(syntax, syntax_);
      DARABONBA_PTR_TO_JSON(template, template_);
      DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_TO_JSON(terraformResourceType, terraformResourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateModuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(generateSource, generateSource_);
      DARABONBA_ANY_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(syntax, syntax_);
      DARABONBA_PTR_FROM_JSON(template, template_);
      DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_FROM_JSON(terraformResourceType, terraformResourceType_);
    };
    GenerateModuleRequest() = default ;
    GenerateModuleRequest(const GenerateModuleRequest &) = default ;
    GenerateModuleRequest(GenerateModuleRequest &&) = default ;
    GenerateModuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateModuleRequest() = default ;
    GenerateModuleRequest& operator=(const GenerateModuleRequest &) = default ;
    GenerateModuleRequest& operator=(GenerateModuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generateSource_ == nullptr
        && this->parameters_ == nullptr && this->regionId_ == nullptr && this->syntax_ == nullptr && this->template_ == nullptr && this->terraformProviderVersion_ == nullptr
        && this->terraformResourceType_ == nullptr; };
    // generateSource Field Functions 
    bool hasGenerateSource() const { return this->generateSource_ != nullptr;};
    void deleteGenerateSource() { this->generateSource_ = nullptr;};
    inline string getGenerateSource() const { DARABONBA_PTR_GET_DEFAULT(generateSource_, "") };
    inline GenerateModuleRequest& setGenerateSource(string generateSource) { DARABONBA_PTR_SET_VALUE(generateSource_, generateSource) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
    inline GenerateModuleRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline GenerateModuleRequest& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateModuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // syntax Field Functions 
    bool hasSyntax() const { return this->syntax_ != nullptr;};
    void deleteSyntax() { this->syntax_ = nullptr;};
    inline string getSyntax() const { DARABONBA_PTR_GET_DEFAULT(syntax_, "") };
    inline GenerateModuleRequest& setSyntax(string syntax) { DARABONBA_PTR_SET_VALUE(syntax_, syntax) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline GenerateModuleRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string getTerraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline GenerateModuleRequest& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    // terraformResourceType Field Functions 
    bool hasTerraformResourceType() const { return this->terraformResourceType_ != nullptr;};
    void deleteTerraformResourceType() { this->terraformResourceType_ = nullptr;};
    inline string getTerraformResourceType() const { DARABONBA_PTR_GET_DEFAULT(terraformResourceType_, "") };
    inline GenerateModuleRequest& setTerraformResourceType(string terraformResourceType) { DARABONBA_PTR_SET_VALUE(terraformResourceType_, terraformResourceType) };


  protected:
    shared_ptr<string> generateSource_ {};
    Darabonba::Json parameters_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> syntax_ {};
    shared_ptr<string> template_ {};
    shared_ptr<string> terraformProviderVersion_ {};
    shared_ptr<string> terraformResourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
