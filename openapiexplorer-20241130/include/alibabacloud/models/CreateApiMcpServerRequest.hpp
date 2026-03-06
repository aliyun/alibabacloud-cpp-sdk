// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIMCPSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIMCPSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class CreateApiMcpServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiMcpServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(additionalApiDescriptions, additionalApiDescriptions_);
      DARABONBA_PTR_TO_JSON(apis, apis_);
      DARABONBA_PTR_TO_JSON(assumeRoleExtraPolicy, assumeRoleExtraPolicy_);
      DARABONBA_PTR_TO_JSON(assumeRoleName, assumeRoleName_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enableAssumeRole, enableAssumeRole_);
      DARABONBA_PTR_TO_JSON(enableCustomVpcWhitelist, enableCustomVpcWhitelist_);
      DARABONBA_PTR_TO_JSON(instructions, instructions_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(oauthClientId, oauthClientId_);
      DARABONBA_PTR_TO_JSON(prompts, prompts_);
      DARABONBA_PTR_TO_JSON(publicAccess, publicAccess_);
      DARABONBA_PTR_TO_JSON(systemTools, systemTools_);
      DARABONBA_PTR_TO_JSON(terraformTools, terraformTools_);
      DARABONBA_PTR_TO_JSON(vpcWhitelists, vpcWhitelists_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiMcpServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalApiDescriptions, additionalApiDescriptions_);
      DARABONBA_PTR_FROM_JSON(apis, apis_);
      DARABONBA_PTR_FROM_JSON(assumeRoleExtraPolicy, assumeRoleExtraPolicy_);
      DARABONBA_PTR_FROM_JSON(assumeRoleName, assumeRoleName_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enableAssumeRole, enableAssumeRole_);
      DARABONBA_PTR_FROM_JSON(enableCustomVpcWhitelist, enableCustomVpcWhitelist_);
      DARABONBA_PTR_FROM_JSON(instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(oauthClientId, oauthClientId_);
      DARABONBA_PTR_FROM_JSON(prompts, prompts_);
      DARABONBA_PTR_FROM_JSON(publicAccess, publicAccess_);
      DARABONBA_PTR_FROM_JSON(systemTools, systemTools_);
      DARABONBA_PTR_FROM_JSON(terraformTools, terraformTools_);
      DARABONBA_PTR_FROM_JSON(vpcWhitelists, vpcWhitelists_);
    };
    CreateApiMcpServerRequest() = default ;
    CreateApiMcpServerRequest(const CreateApiMcpServerRequest &) = default ;
    CreateApiMcpServerRequest(CreateApiMcpServerRequest &&) = default ;
    CreateApiMcpServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiMcpServerRequest() = default ;
    CreateApiMcpServerRequest& operator=(const CreateApiMcpServerRequest &) = default ;
    CreateApiMcpServerRequest& operator=(CreateApiMcpServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TerraformTools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TerraformTools& obj) { 
        DARABONBA_PTR_TO_JSON(async, async_);
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(destroyPolicy, destroyPolicy_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, TerraformTools& obj) { 
        DARABONBA_PTR_FROM_JSON(async, async_);
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(destroyPolicy, destroyPolicy_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      TerraformTools() = default ;
      TerraformTools(const TerraformTools &) = default ;
      TerraformTools(TerraformTools &&) = default ;
      TerraformTools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TerraformTools() = default ;
      TerraformTools& operator=(const TerraformTools &) = default ;
      TerraformTools& operator=(TerraformTools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->async_ == nullptr
        && this->code_ == nullptr && this->description_ == nullptr && this->destroyPolicy_ == nullptr && this->name_ == nullptr; };
      // async Field Functions 
      bool hasAsync() const { return this->async_ != nullptr;};
      void deleteAsync() { this->async_ = nullptr;};
      inline bool getAsync() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
      inline TerraformTools& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline TerraformTools& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TerraformTools& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destroyPolicy Field Functions 
      bool hasDestroyPolicy() const { return this->destroyPolicy_ != nullptr;};
      void deleteDestroyPolicy() { this->destroyPolicy_ = nullptr;};
      inline string getDestroyPolicy() const { DARABONBA_PTR_GET_DEFAULT(destroyPolicy_, "") };
      inline TerraformTools& setDestroyPolicy(string destroyPolicy) { DARABONBA_PTR_SET_VALUE(destroyPolicy_, destroyPolicy) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TerraformTools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // Specifies whether to execute the task asynchronously. If set to true, the system immediately proceeds to the next task after initiating a task execution, without waiting for each resource operation to complete.
      shared_ptr<bool> async_ {};
      // The code of the Terraform tool. For more information, see [HCL language overview](https://www.alibabacloud.com/help/en/terraform/terraform-configuration-and-hcl-language-overview).
      shared_ptr<string> code_ {};
      // The description of the Terraform tool.
      shared_ptr<string> description_ {};
      // The deletion policy. After a task is executed, the system applies the following cleanup policy to temporary resources based on the task execution status.
      // 
      // - NEVER: Does not delete any created resources, regardless of whether the task execution succeeds or fails.
      // 
      // - ALWAYS: Immediately destroys all related resources after the task is executed, regardless of whether the execution succeeds or fails.
      // 
      // - ON_FAILURE: Deletes related resources only when the task execution fails. If the task execution succeeds, the resources are retained.
      shared_ptr<string> destroyPolicy_ {};
      // The name of the Terraform tool.
      shared_ptr<string> name_ {};
    };

    class Prompts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Prompts& obj) { 
        DARABONBA_PTR_TO_JSON(arguments, arguments_);
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Prompts& obj) { 
        DARABONBA_PTR_FROM_JSON(arguments, arguments_);
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      Prompts() = default ;
      Prompts(const Prompts &) = default ;
      Prompts(Prompts &&) = default ;
      Prompts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Prompts() = default ;
      Prompts& operator=(const Prompts &) = default ;
      Prompts& operator=(Prompts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Arguments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Arguments& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(required, required_);
        };
        friend void from_json(const Darabonba::Json& j, Arguments& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(required, required_);
        };
        Arguments() = default ;
        Arguments(const Arguments &) = default ;
        Arguments(Arguments &&) = default ;
        Arguments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Arguments() = default ;
        Arguments& operator=(const Arguments &) = default ;
        Arguments& operator=(Arguments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->required_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Arguments& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Arguments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // required Field Functions 
        bool hasRequired() const { return this->required_ != nullptr;};
        void deleteRequired() { this->required_ = nullptr;};
        inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
        inline Arguments& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


      protected:
        // The description of the parameter.
        shared_ptr<string> description_ {};
        // The parameter name.
        shared_ptr<string> name_ {};
        // Specifies whether the parameter is required.
        shared_ptr<bool> required_ {};
      };

      virtual bool empty() const override { return this->arguments_ == nullptr
        && this->content_ == nullptr && this->description_ == nullptr && this->name_ == nullptr; };
      // arguments Field Functions 
      bool hasArguments() const { return this->arguments_ != nullptr;};
      void deleteArguments() { this->arguments_ = nullptr;};
      inline const vector<Prompts::Arguments> & getArguments() const { DARABONBA_PTR_GET_CONST(arguments_, vector<Prompts::Arguments>) };
      inline vector<Prompts::Arguments> getArguments() { DARABONBA_PTR_GET(arguments_, vector<Prompts::Arguments>) };
      inline Prompts& setArguments(const vector<Prompts::Arguments> & arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };
      inline Prompts& setArguments(vector<Prompts::Arguments> && arguments) { DARABONBA_PTR_SET_RVALUE(arguments_, arguments) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Prompts& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Prompts& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Prompts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The list of parameters supported by the prompt.
      shared_ptr<vector<Prompts::Arguments>> arguments_ {};
      // The content of the prompt. Variables are specified in the {{xxx}} format. xxx is a variable that must be defined in the arguments parameter.
      shared_ptr<string> content_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The prompt name.
      shared_ptr<string> name_ {};
    };

    class Apis : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Apis& obj) { 
        DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
        DARABONBA_PTR_TO_JSON(product, product_);
        DARABONBA_PTR_TO_JSON(selectors, selectors_);
      };
      friend void from_json(const Darabonba::Json& j, Apis& obj) { 
        DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
        DARABONBA_PTR_FROM_JSON(product, product_);
        DARABONBA_PTR_FROM_JSON(selectors, selectors_);
      };
      Apis() = default ;
      Apis(const Apis &) = default ;
      Apis(Apis &&) = default ;
      Apis(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Apis() = default ;
      Apis& operator=(const Apis &) = default ;
      Apis& operator=(Apis &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiVersion_ == nullptr
        && this->product_ == nullptr && this->selectors_ == nullptr; };
      // apiVersion Field Functions 
      bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
      void deleteApiVersion() { this->apiVersion_ = nullptr;};
      inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
      inline Apis& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline Apis& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // selectors Field Functions 
      bool hasSelectors() const { return this->selectors_ != nullptr;};
      void deleteSelectors() { this->selectors_ = nullptr;};
      inline const vector<string> & getSelectors() const { DARABONBA_PTR_GET_CONST(selectors_, vector<string>) };
      inline vector<string> getSelectors() { DARABONBA_PTR_GET(selectors_, vector<string>) };
      inline Apis& setSelectors(const vector<string> & selectors) { DARABONBA_PTR_SET_VALUE(selectors_, selectors) };
      inline Apis& setSelectors(vector<string> && selectors) { DARABONBA_PTR_SET_RVALUE(selectors_, selectors) };


    protected:
      // The POP version of the API that is exposed to the MCP server.
      // 
      // This parameter is required.
      shared_ptr<string> apiVersion_ {};
      // The product code.
      // 
      // - Call the GetRequestLog operation to obtain the product code from the response.
      // 
      // - Find the product code from the URL of the product in OpenAPI Portal. For example, the URL of Short Message Service in OpenAPI Portal is https\\://api.alibabacloud.com/product/Dysmsapi. The product code is Dysmsapi.
      // 
      // This parameter is required.
      shared_ptr<string> product_ {};
      // The list of API name matching rules. This parameter cannot be empty.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> selectors_ {};
    };

    class AdditionalApiDescriptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdditionalApiDescriptions& obj) { 
        DARABONBA_PTR_TO_JSON(apiName, apiName_);
        DARABONBA_PTR_TO_JSON(apiOverrideJson, apiOverrideJson_);
        DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
        DARABONBA_PTR_TO_JSON(constParameters, constParameters_);
        DARABONBA_PTR_TO_JSON(enableOutputSchema, enableOutputSchema_);
        DARABONBA_PTR_TO_JSON(executeCliCommand, executeCliCommand_);
        DARABONBA_PTR_TO_JSON(product, product_);
      };
      friend void from_json(const Darabonba::Json& j, AdditionalApiDescriptions& obj) { 
        DARABONBA_PTR_FROM_JSON(apiName, apiName_);
        DARABONBA_PTR_FROM_JSON(apiOverrideJson, apiOverrideJson_);
        DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
        DARABONBA_PTR_FROM_JSON(constParameters, constParameters_);
        DARABONBA_PTR_FROM_JSON(enableOutputSchema, enableOutputSchema_);
        DARABONBA_PTR_FROM_JSON(executeCliCommand, executeCliCommand_);
        DARABONBA_PTR_FROM_JSON(product, product_);
      };
      AdditionalApiDescriptions() = default ;
      AdditionalApiDescriptions(const AdditionalApiDescriptions &) = default ;
      AdditionalApiDescriptions(AdditionalApiDescriptions &&) = default ;
      AdditionalApiDescriptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdditionalApiDescriptions() = default ;
      AdditionalApiDescriptions& operator=(const AdditionalApiDescriptions &) = default ;
      AdditionalApiDescriptions& operator=(AdditionalApiDescriptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConstParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConstParameters& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_ANY_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ConstParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_ANY_FROM_JSON(value, value_);
        };
        ConstParameters() = default ;
        ConstParameters(const ConstParameters &) = default ;
        ConstParameters(ConstParameters &&) = default ;
        ConstParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConstParameters() = default ;
        ConstParameters& operator=(const ConstParameters &) = default ;
        ConstParameters& operator=(ConstParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ConstParameters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline         const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
        Darabonba::Json & getValue() { DARABONBA_GET(value_) };
        inline ConstParameters& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
        inline ConstParameters& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


      protected:
        // The parameter name. Only first-level parameter names are supported. For ROA-style APIs, you can set the parameter to body.xx. You cannot set values that exceed the top-level parameters.
        shared_ptr<string> key_ {};
        // The value of the parameter.
        Darabonba::Json value_ {};
      };

      virtual bool empty() const override { return this->apiName_ == nullptr
        && this->apiOverrideJson_ == nullptr && this->apiVersion_ == nullptr && this->constParameters_ == nullptr && this->enableOutputSchema_ == nullptr && this->executeCliCommand_ == nullptr
        && this->product_ == nullptr; };
      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline AdditionalApiDescriptions& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // apiOverrideJson Field Functions 
      bool hasApiOverrideJson() const { return this->apiOverrideJson_ != nullptr;};
      void deleteApiOverrideJson() { this->apiOverrideJson_ = nullptr;};
      inline string getApiOverrideJson() const { DARABONBA_PTR_GET_DEFAULT(apiOverrideJson_, "") };
      inline AdditionalApiDescriptions& setApiOverrideJson(string apiOverrideJson) { DARABONBA_PTR_SET_VALUE(apiOverrideJson_, apiOverrideJson) };


      // apiVersion Field Functions 
      bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
      void deleteApiVersion() { this->apiVersion_ = nullptr;};
      inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
      inline AdditionalApiDescriptions& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


      // constParameters Field Functions 
      bool hasConstParameters() const { return this->constParameters_ != nullptr;};
      void deleteConstParameters() { this->constParameters_ = nullptr;};
      inline const vector<AdditionalApiDescriptions::ConstParameters> & getConstParameters() const { DARABONBA_PTR_GET_CONST(constParameters_, vector<AdditionalApiDescriptions::ConstParameters>) };
      inline vector<AdditionalApiDescriptions::ConstParameters> getConstParameters() { DARABONBA_PTR_GET(constParameters_, vector<AdditionalApiDescriptions::ConstParameters>) };
      inline AdditionalApiDescriptions& setConstParameters(const vector<AdditionalApiDescriptions::ConstParameters> & constParameters) { DARABONBA_PTR_SET_VALUE(constParameters_, constParameters) };
      inline AdditionalApiDescriptions& setConstParameters(vector<AdditionalApiDescriptions::ConstParameters> && constParameters) { DARABONBA_PTR_SET_RVALUE(constParameters_, constParameters) };


      // enableOutputSchema Field Functions 
      bool hasEnableOutputSchema() const { return this->enableOutputSchema_ != nullptr;};
      void deleteEnableOutputSchema() { this->enableOutputSchema_ = nullptr;};
      inline bool getEnableOutputSchema() const { DARABONBA_PTR_GET_DEFAULT(enableOutputSchema_, false) };
      inline AdditionalApiDescriptions& setEnableOutputSchema(bool enableOutputSchema) { DARABONBA_PTR_SET_VALUE(enableOutputSchema_, enableOutputSchema) };


      // executeCliCommand Field Functions 
      bool hasExecuteCliCommand() const { return this->executeCliCommand_ != nullptr;};
      void deleteExecuteCliCommand() { this->executeCliCommand_ = nullptr;};
      inline bool getExecuteCliCommand() const { DARABONBA_PTR_GET_DEFAULT(executeCliCommand_, false) };
      inline AdditionalApiDescriptions& setExecuteCliCommand(bool executeCliCommand) { DARABONBA_PTR_SET_VALUE(executeCliCommand_, executeCliCommand) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline AdditionalApiDescriptions& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    protected:
      // The API name.
      shared_ptr<string> apiName_ {};
      // The API metadata in JSON format. For more information about the format, see https\\://api.aliyun.com/meta/v1/products/Ecs/versions/2014-05-26/apis/DescribeInstances/api.json. You can overwrite the summary and parameters.
      shared_ptr<string> apiOverrideJson_ {};
      // The POP version of the API that is exposed to the MCP server.
      shared_ptr<string> apiVersion_ {};
      // The list of constant input parameters. These parameters are not included in the output during API parameter parsing.
      shared_ptr<vector<AdditionalApiDescriptions::ConstParameters>> constParameters_ {};
      // Specifies whether to return the schema of the response parameters. Returning the schema increases the size of the entire API MCP server. The default value is null, which means the schema is not returned.
      shared_ptr<bool> enableOutputSchema_ {};
      // Specifies whether to return the command-line interface (CLI) command for execution. In this mode, the API call is not executed. Instead, the corresponding CLI command is returned. This is suitable for long-running tasks that need to be executed using Alibaba Cloud CLI.
      shared_ptr<bool> executeCliCommand_ {};
      // The product code.
      // 
      // - Call the GetRequestLog operation to obtain the product code from the response.
      // 
      // - Find the product code from the URL of the product in OpenAPI Portal. For example, the URL of Short Message Service in OpenAPI Portal is https\\://api.alibabacloud.com/product/Dysmsapi. The product code is Dysmsapi.
      shared_ptr<string> product_ {};
    };

    virtual bool empty() const override { return this->additionalApiDescriptions_ == nullptr
        && this->apis_ == nullptr && this->assumeRoleExtraPolicy_ == nullptr && this->assumeRoleName_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr
        && this->enableAssumeRole_ == nullptr && this->enableCustomVpcWhitelist_ == nullptr && this->instructions_ == nullptr && this->language_ == nullptr && this->name_ == nullptr
        && this->oauthClientId_ == nullptr && this->prompts_ == nullptr && this->publicAccess_ == nullptr && this->systemTools_ == nullptr && this->terraformTools_ == nullptr
        && this->vpcWhitelists_ == nullptr; };
    // additionalApiDescriptions Field Functions 
    bool hasAdditionalApiDescriptions() const { return this->additionalApiDescriptions_ != nullptr;};
    void deleteAdditionalApiDescriptions() { this->additionalApiDescriptions_ = nullptr;};
    inline const vector<CreateApiMcpServerRequest::AdditionalApiDescriptions> & getAdditionalApiDescriptions() const { DARABONBA_PTR_GET_CONST(additionalApiDescriptions_, vector<CreateApiMcpServerRequest::AdditionalApiDescriptions>) };
    inline vector<CreateApiMcpServerRequest::AdditionalApiDescriptions> getAdditionalApiDescriptions() { DARABONBA_PTR_GET(additionalApiDescriptions_, vector<CreateApiMcpServerRequest::AdditionalApiDescriptions>) };
    inline CreateApiMcpServerRequest& setAdditionalApiDescriptions(const vector<CreateApiMcpServerRequest::AdditionalApiDescriptions> & additionalApiDescriptions) { DARABONBA_PTR_SET_VALUE(additionalApiDescriptions_, additionalApiDescriptions) };
    inline CreateApiMcpServerRequest& setAdditionalApiDescriptions(vector<CreateApiMcpServerRequest::AdditionalApiDescriptions> && additionalApiDescriptions) { DARABONBA_PTR_SET_RVALUE(additionalApiDescriptions_, additionalApiDescriptions) };


    // apis Field Functions 
    bool hasApis() const { return this->apis_ != nullptr;};
    void deleteApis() { this->apis_ = nullptr;};
    inline const vector<CreateApiMcpServerRequest::Apis> & getApis() const { DARABONBA_PTR_GET_CONST(apis_, vector<CreateApiMcpServerRequest::Apis>) };
    inline vector<CreateApiMcpServerRequest::Apis> getApis() { DARABONBA_PTR_GET(apis_, vector<CreateApiMcpServerRequest::Apis>) };
    inline CreateApiMcpServerRequest& setApis(const vector<CreateApiMcpServerRequest::Apis> & apis) { DARABONBA_PTR_SET_VALUE(apis_, apis) };
    inline CreateApiMcpServerRequest& setApis(vector<CreateApiMcpServerRequest::Apis> && apis) { DARABONBA_PTR_SET_RVALUE(apis_, apis) };


    // assumeRoleExtraPolicy Field Functions 
    bool hasAssumeRoleExtraPolicy() const { return this->assumeRoleExtraPolicy_ != nullptr;};
    void deleteAssumeRoleExtraPolicy() { this->assumeRoleExtraPolicy_ = nullptr;};
    inline string getAssumeRoleExtraPolicy() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleExtraPolicy_, "") };
    inline CreateApiMcpServerRequest& setAssumeRoleExtraPolicy(string assumeRoleExtraPolicy) { DARABONBA_PTR_SET_VALUE(assumeRoleExtraPolicy_, assumeRoleExtraPolicy) };


    // assumeRoleName Field Functions 
    bool hasAssumeRoleName() const { return this->assumeRoleName_ != nullptr;};
    void deleteAssumeRoleName() { this->assumeRoleName_ = nullptr;};
    inline string getAssumeRoleName() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleName_, "") };
    inline CreateApiMcpServerRequest& setAssumeRoleName(string assumeRoleName) { DARABONBA_PTR_SET_VALUE(assumeRoleName_, assumeRoleName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateApiMcpServerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApiMcpServerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAssumeRole Field Functions 
    bool hasEnableAssumeRole() const { return this->enableAssumeRole_ != nullptr;};
    void deleteEnableAssumeRole() { this->enableAssumeRole_ = nullptr;};
    inline bool getEnableAssumeRole() const { DARABONBA_PTR_GET_DEFAULT(enableAssumeRole_, false) };
    inline CreateApiMcpServerRequest& setEnableAssumeRole(bool enableAssumeRole) { DARABONBA_PTR_SET_VALUE(enableAssumeRole_, enableAssumeRole) };


    // enableCustomVpcWhitelist Field Functions 
    bool hasEnableCustomVpcWhitelist() const { return this->enableCustomVpcWhitelist_ != nullptr;};
    void deleteEnableCustomVpcWhitelist() { this->enableCustomVpcWhitelist_ = nullptr;};
    inline bool getEnableCustomVpcWhitelist() const { DARABONBA_PTR_GET_DEFAULT(enableCustomVpcWhitelist_, false) };
    inline CreateApiMcpServerRequest& setEnableCustomVpcWhitelist(bool enableCustomVpcWhitelist) { DARABONBA_PTR_SET_VALUE(enableCustomVpcWhitelist_, enableCustomVpcWhitelist) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string getInstructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline CreateApiMcpServerRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateApiMcpServerRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApiMcpServerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oauthClientId Field Functions 
    bool hasOauthClientId() const { return this->oauthClientId_ != nullptr;};
    void deleteOauthClientId() { this->oauthClientId_ = nullptr;};
    inline string getOauthClientId() const { DARABONBA_PTR_GET_DEFAULT(oauthClientId_, "") };
    inline CreateApiMcpServerRequest& setOauthClientId(string oauthClientId) { DARABONBA_PTR_SET_VALUE(oauthClientId_, oauthClientId) };


    // prompts Field Functions 
    bool hasPrompts() const { return this->prompts_ != nullptr;};
    void deletePrompts() { this->prompts_ = nullptr;};
    inline const vector<CreateApiMcpServerRequest::Prompts> & getPrompts() const { DARABONBA_PTR_GET_CONST(prompts_, vector<CreateApiMcpServerRequest::Prompts>) };
    inline vector<CreateApiMcpServerRequest::Prompts> getPrompts() { DARABONBA_PTR_GET(prompts_, vector<CreateApiMcpServerRequest::Prompts>) };
    inline CreateApiMcpServerRequest& setPrompts(const vector<CreateApiMcpServerRequest::Prompts> & prompts) { DARABONBA_PTR_SET_VALUE(prompts_, prompts) };
    inline CreateApiMcpServerRequest& setPrompts(vector<CreateApiMcpServerRequest::Prompts> && prompts) { DARABONBA_PTR_SET_RVALUE(prompts_, prompts) };


    // publicAccess Field Functions 
    bool hasPublicAccess() const { return this->publicAccess_ != nullptr;};
    void deletePublicAccess() { this->publicAccess_ = nullptr;};
    inline string getPublicAccess() const { DARABONBA_PTR_GET_DEFAULT(publicAccess_, "") };
    inline CreateApiMcpServerRequest& setPublicAccess(string publicAccess) { DARABONBA_PTR_SET_VALUE(publicAccess_, publicAccess) };


    // systemTools Field Functions 
    bool hasSystemTools() const { return this->systemTools_ != nullptr;};
    void deleteSystemTools() { this->systemTools_ = nullptr;};
    inline const vector<string> & getSystemTools() const { DARABONBA_PTR_GET_CONST(systemTools_, vector<string>) };
    inline vector<string> getSystemTools() { DARABONBA_PTR_GET(systemTools_, vector<string>) };
    inline CreateApiMcpServerRequest& setSystemTools(const vector<string> & systemTools) { DARABONBA_PTR_SET_VALUE(systemTools_, systemTools) };
    inline CreateApiMcpServerRequest& setSystemTools(vector<string> && systemTools) { DARABONBA_PTR_SET_RVALUE(systemTools_, systemTools) };


    // terraformTools Field Functions 
    bool hasTerraformTools() const { return this->terraformTools_ != nullptr;};
    void deleteTerraformTools() { this->terraformTools_ = nullptr;};
    inline const vector<CreateApiMcpServerRequest::TerraformTools> & getTerraformTools() const { DARABONBA_PTR_GET_CONST(terraformTools_, vector<CreateApiMcpServerRequest::TerraformTools>) };
    inline vector<CreateApiMcpServerRequest::TerraformTools> getTerraformTools() { DARABONBA_PTR_GET(terraformTools_, vector<CreateApiMcpServerRequest::TerraformTools>) };
    inline CreateApiMcpServerRequest& setTerraformTools(const vector<CreateApiMcpServerRequest::TerraformTools> & terraformTools) { DARABONBA_PTR_SET_VALUE(terraformTools_, terraformTools) };
    inline CreateApiMcpServerRequest& setTerraformTools(vector<CreateApiMcpServerRequest::TerraformTools> && terraformTools) { DARABONBA_PTR_SET_RVALUE(terraformTools_, terraformTools) };


    // vpcWhitelists Field Functions 
    bool hasVpcWhitelists() const { return this->vpcWhitelists_ != nullptr;};
    void deleteVpcWhitelists() { this->vpcWhitelists_ = nullptr;};
    inline const vector<string> & getVpcWhitelists() const { DARABONBA_PTR_GET_CONST(vpcWhitelists_, vector<string>) };
    inline vector<string> getVpcWhitelists() { DARABONBA_PTR_GET(vpcWhitelists_, vector<string>) };
    inline CreateApiMcpServerRequest& setVpcWhitelists(const vector<string> & vpcWhitelists) { DARABONBA_PTR_SET_VALUE(vpcWhitelists_, vpcWhitelists) };
    inline CreateApiMcpServerRequest& setVpcWhitelists(vector<string> && vpcWhitelists) { DARABONBA_PTR_SET_RVALUE(vpcWhitelists_, vpcWhitelists) };


  protected:
    // The list of supplementary API descriptions.
    shared_ptr<vector<CreateApiMcpServerRequest::AdditionalApiDescriptions>> additionalApiDescriptions_ {};
    // The list of APIs to add. This parameter cannot be empty.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateApiMcpServerRequest::Apis>> apis_ {};
    // An additional policy for role assumption when multi-account access is enabled. If this policy exists, the permissions for role assumption are based on this policy, which overwrites the permissions defined for the role itself.
    shared_ptr<string> assumeRoleExtraPolicy_ {};
    // The name of the RAM role in the destination account that is assumed for cross-account operations when multi-account access is enabled.
    shared_ptr<string> assumeRoleName_ {};
    // Ensures the idempotence of the request. Generate a parameter value from your client to make sure that the value is unique among different requests. The client token can contain only ASCII characters and cannot exceed 64 characters in length. Use a universally unique identifier (UUID). The token expires in three days.
    shared_ptr<string> clientToken_ {};
    // The description of the API MCP service.
    shared_ptr<string> description_ {};
    // Specifies whether to enable multi-account access.
    shared_ptr<bool> enableAssumeRole_ {};
    // Specifies whether to enable a custom VPC whitelist. If not enabled, the account-level configuration is used.
    shared_ptr<bool> enableCustomVpcWhitelist_ {};
    // The MCP instruction. It prompts the large language model on how to use the MCP. The client must support the Instructions field of the standard MCP protocol.
    shared_ptr<string> instructions_ {};
    // The language of the API documentation for the API MCP service. You can select Chinese or English API documentation. The prompts in different languages may affect the AI\\"s response.
    shared_ptr<string> language_ {};
    // The name of the MCP server. The name must be 3 to 64 characters in length and can contain only lowercase letters, digits, underscores (_), and hyphens (-). It cannot start with a digit. The name must be unique within the same Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The custom OAuth client ID when you select a custom OAuth configuration.
    // 
    // `Only web and native applications are supported. The OAuth scope must include /acs/mcp-server.`
    shared_ptr<string> oauthClientId_ {};
    // The list of prompt configurations.
    shared_ptr<vector<CreateApiMcpServerRequest::Prompts>> prompts_ {};
    // Specifies whether to enable public network access.
    shared_ptr<string> publicAccess_ {};
    // The list of system tools.
    shared_ptr<vector<string>> systemTools_ {};
    // The list of Terraform tools.
    shared_ptr<vector<CreateApiMcpServerRequest::TerraformTools>> terraformTools_ {};
    // The VPC whitelist that restricts the source of access after public network access is disabled. If you do not set this parameter or leave it empty, the source is not restricted.
    shared_ptr<vector<string>> vpcWhitelists_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
