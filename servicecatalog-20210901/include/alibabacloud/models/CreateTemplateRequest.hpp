// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CreateTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(TerraformVariables, terraformVariables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(TerraformVariables, terraformVariables_);
    };
    CreateTemplateRequest() = default ;
    CreateTemplateRequest(const CreateTemplateRequest &) = default ;
    CreateTemplateRequest(CreateTemplateRequest &&) = default ;
    CreateTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateRequest() = default ;
    CreateTemplateRequest& operator=(const CreateTemplateRequest &) = default ;
    CreateTemplateRequest& operator=(CreateTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TerraformVariables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TerraformVariables& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(VariableName, variableName_);
      };
      friend void from_json(const Darabonba::Json& j, TerraformVariables& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(VariableName, variableName_);
      };
      TerraformVariables() = default ;
      TerraformVariables(const TerraformVariables &) = default ;
      TerraformVariables(TerraformVariables &&) = default ;
      TerraformVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TerraformVariables() = default ;
      TerraformVariables& operator=(const TerraformVariables &) = default ;
      TerraformVariables& operator=(TerraformVariables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->variableName_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TerraformVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // variableName Field Functions 
      bool hasVariableName() const { return this->variableName_ != nullptr;};
      void deleteVariableName() { this->variableName_ = nullptr;};
      inline string getVariableName() const { DARABONBA_PTR_GET_DEFAULT(variableName_, "") };
      inline TerraformVariables& setVariableName(string variableName) { DARABONBA_PTR_SET_VALUE(variableName_, variableName) };


    protected:
      // The description of the variable.
      // 
      // For more information about the format of variable descriptions, see [Methods and suggestions for Terraform code development](https://help.aliyun.com/document_detail/322216.html).
      shared_ptr<string> description_ {};
      // The name of the variable.
      shared_ptr<string> variableName_ {};
    };

    virtual bool empty() const override { return this->templateBody_ == nullptr
        && this->templateType_ == nullptr && this->terraformVariables_ == nullptr; };
    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string getTemplateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline CreateTemplateRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateTemplateRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // terraformVariables Field Functions 
    bool hasTerraformVariables() const { return this->terraformVariables_ != nullptr;};
    void deleteTerraformVariables() { this->terraformVariables_ = nullptr;};
    inline const vector<CreateTemplateRequest::TerraformVariables> & getTerraformVariables() const { DARABONBA_PTR_GET_CONST(terraformVariables_, vector<CreateTemplateRequest::TerraformVariables>) };
    inline vector<CreateTemplateRequest::TerraformVariables> getTerraformVariables() { DARABONBA_PTR_GET(terraformVariables_, vector<CreateTemplateRequest::TerraformVariables>) };
    inline CreateTemplateRequest& setTerraformVariables(const vector<CreateTemplateRequest::TerraformVariables> & terraformVariables) { DARABONBA_PTR_SET_VALUE(terraformVariables_, terraformVariables) };
    inline CreateTemplateRequest& setTerraformVariables(vector<CreateTemplateRequest::TerraformVariables> && terraformVariables) { DARABONBA_PTR_SET_RVALUE(terraformVariables_, terraformVariables) };


  protected:
    // The content of the template.
    // 
    // For more information about the template syntax, see [Structure of Terraform templates](https://help.aliyun.com/document_detail/184397.html).
    // 
    // This parameter is required.
    shared_ptr<string> templateBody_ {};
    // The type of the product template. Valid values:
    // 
    // *   RosTerraformTemplate: the Terraform template that is supported by Resource Orchestration Service (ROS).
    // *   RosStandardTemplate: the standard ROS template.
    // 
    // This parameter is required.
    shared_ptr<string> templateType_ {};
    // The variable settings of the Terraform template. You can configure the variables in a structured manner. Service Catalog applies the variable settings to the template.
    // 
    // >  The variables must be defined in the Terraform template.
    shared_ptr<vector<CreateTemplateRequest::TerraformVariables>> terraformVariables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
