// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIMCPSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIMCPSERVERREQUEST_HPP_
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
  class UpdateApiMcpServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiMcpServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(additionalApiDescriptions, additionalApiDescriptions_);
      DARABONBA_PTR_TO_JSON(apis, apis_);
      DARABONBA_PTR_TO_JSON(assumeRoleExtraPolicy, assumeRoleExtraPolicy_);
      DARABONBA_PTR_TO_JSON(assumeRoleName, assumeRoleName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enableAssumeRole, enableAssumeRole_);
      DARABONBA_PTR_TO_JSON(enableCustomVpcWhitelist, enableCustomVpcWhitelist_);
      DARABONBA_PTR_TO_JSON(instructions, instructions_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(oauthClientId, oauthClientId_);
      DARABONBA_PTR_TO_JSON(prompts, prompts_);
      DARABONBA_PTR_TO_JSON(publicAccess, publicAccess_);
      DARABONBA_PTR_TO_JSON(systemTools, systemTools_);
      DARABONBA_PTR_TO_JSON(terraformTools, terraformTools_);
      DARABONBA_PTR_TO_JSON(vpcWhitelists, vpcWhitelists_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiMcpServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalApiDescriptions, additionalApiDescriptions_);
      DARABONBA_PTR_FROM_JSON(apis, apis_);
      DARABONBA_PTR_FROM_JSON(assumeRoleExtraPolicy, assumeRoleExtraPolicy_);
      DARABONBA_PTR_FROM_JSON(assumeRoleName, assumeRoleName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enableAssumeRole, enableAssumeRole_);
      DARABONBA_PTR_FROM_JSON(enableCustomVpcWhitelist, enableCustomVpcWhitelist_);
      DARABONBA_PTR_FROM_JSON(instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(oauthClientId, oauthClientId_);
      DARABONBA_PTR_FROM_JSON(prompts, prompts_);
      DARABONBA_PTR_FROM_JSON(publicAccess, publicAccess_);
      DARABONBA_PTR_FROM_JSON(systemTools, systemTools_);
      DARABONBA_PTR_FROM_JSON(terraformTools, terraformTools_);
      DARABONBA_PTR_FROM_JSON(vpcWhitelists, vpcWhitelists_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    UpdateApiMcpServerRequest() = default ;
    UpdateApiMcpServerRequest(const UpdateApiMcpServerRequest &) = default ;
    UpdateApiMcpServerRequest(UpdateApiMcpServerRequest &&) = default ;
    UpdateApiMcpServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiMcpServerRequest() = default ;
    UpdateApiMcpServerRequest& operator=(const UpdateApiMcpServerRequest &) = default ;
    UpdateApiMcpServerRequest& operator=(UpdateApiMcpServerRequest &&) = default ;
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
      // Specifies whether to execute the task asynchronously. If this is enabled, the system immediately proceeds to the next task after it initiates a task execution, without waiting for each resource operation to complete.
      shared_ptr<bool> async_ {};
      // The Terraform tool code. For more information, see [HCL language overview](https://www.alibabacloud.com/help/en/terraform/latest/hcl-language-overview).
      shared_ptr<string> code_ {};
      // The description of the Terraform tool.
      shared_ptr<string> description_ {};
      // The deletion policy. After a task is executed, the system applies one of the following cleanup policies to the temporary resources based on the task execution status.
      // 
      // - NEVER: Does not delete any created resources, regardless of whether the task succeeds or fails.
      // 
      // - ALWAYS: Immediately destroys all related resources after execution, regardless of whether the task succeeds or fails.
      // 
      // - ON_FAILURE: Deletes related resources only if the task fails. If the task succeeds, the resources are retained.
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
      // A list of parameters that the prompt supports.
      shared_ptr<vector<Prompts::Arguments>> arguments_ {};
      // The content of the prompt. Variables are specified in the {{xxx}} format. The xxx variable must be defined in the arguments parameter.
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
      shared_ptr<string> apiVersion_ {};
      // The product code.
      // 
      // - Call the GetRequestLog operation to obtain the product code from the response.
      // 
      // - Find the product code from the URL of the product in OpenAPI Explorer. For example, the URL for Short Message Service is https\\://api.alibabacloud.com/product/Dysmsapi. The product code is \\`Dysmsapi\\`.
      shared_ptr<string> product_ {};
      // A list of API name matching rules.
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
        // The parameter name. Only first-level parameter names are supported. For ROA-style APIs, you can set parameters such as body.xx. You cannot set values for parameters beyond the top level.
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
      // The API metadata in JSON format. For more information about the format, see https\\://api.aliyun.com/meta/v1/products/Ecs/versions/2014-05-26/apis/DescribeInstances/api.json. You can overwrite the summary and parameters fields.
      shared_ptr<string> apiOverrideJson_ {};
      // The POP version of the API that is exposed to the MCP server.
      shared_ptr<string> apiVersion_ {};
      // A list of constant input parameters. These parameters are not included in the output during API parameter parsing.
      shared_ptr<vector<AdditionalApiDescriptions::ConstParameters>> constParameters_ {};
      // Specifies whether to return the schema of the response parameters. Returning the response parameter schema increases the overall size of the API MCP server. The default value is null, which means the response parameter schema is not returned.
      shared_ptr<bool> enableOutputSchema_ {};
      // Specifies whether to return the command-line interface (CLI) command for execution. In this mode, the API call is not actually executed. Instead, the corresponding CLI command is returned. This is suitable for long-running tasks that need to be executed using Alibaba Cloud CLI.
      shared_ptr<bool> executeCliCommand_ {};
      // The product code.
      // 
      // - Call the GetRequestLog operation to obtain the product code from the response.
      // 
      // - Find the product code from the URL of the product in OpenAPI Explorer. For example, the URL for Short Message Service is https\\://api.alibabacloud.com/product/Dysmsapi. The product code is \\`Dysmsapi\\`.
      shared_ptr<string> product_ {};
    };

    virtual bool empty() const override { return this->additionalApiDescriptions_ == nullptr
        && this->apis_ == nullptr && this->assumeRoleExtraPolicy_ == nullptr && this->assumeRoleName_ == nullptr && this->description_ == nullptr && this->enableAssumeRole_ == nullptr
        && this->enableCustomVpcWhitelist_ == nullptr && this->instructions_ == nullptr && this->language_ == nullptr && this->oauthClientId_ == nullptr && this->prompts_ == nullptr
        && this->publicAccess_ == nullptr && this->systemTools_ == nullptr && this->terraformTools_ == nullptr && this->vpcWhitelists_ == nullptr && this->clientToken_ == nullptr
        && this->id_ == nullptr; };
    // additionalApiDescriptions Field Functions 
    bool hasAdditionalApiDescriptions() const { return this->additionalApiDescriptions_ != nullptr;};
    void deleteAdditionalApiDescriptions() { this->additionalApiDescriptions_ = nullptr;};
    inline const vector<UpdateApiMcpServerRequest::AdditionalApiDescriptions> & getAdditionalApiDescriptions() const { DARABONBA_PTR_GET_CONST(additionalApiDescriptions_, vector<UpdateApiMcpServerRequest::AdditionalApiDescriptions>) };
    inline vector<UpdateApiMcpServerRequest::AdditionalApiDescriptions> getAdditionalApiDescriptions() { DARABONBA_PTR_GET(additionalApiDescriptions_, vector<UpdateApiMcpServerRequest::AdditionalApiDescriptions>) };
    inline UpdateApiMcpServerRequest& setAdditionalApiDescriptions(const vector<UpdateApiMcpServerRequest::AdditionalApiDescriptions> & additionalApiDescriptions) { DARABONBA_PTR_SET_VALUE(additionalApiDescriptions_, additionalApiDescriptions) };
    inline UpdateApiMcpServerRequest& setAdditionalApiDescriptions(vector<UpdateApiMcpServerRequest::AdditionalApiDescriptions> && additionalApiDescriptions) { DARABONBA_PTR_SET_RVALUE(additionalApiDescriptions_, additionalApiDescriptions) };


    // apis Field Functions 
    bool hasApis() const { return this->apis_ != nullptr;};
    void deleteApis() { this->apis_ = nullptr;};
    inline const vector<UpdateApiMcpServerRequest::Apis> & getApis() const { DARABONBA_PTR_GET_CONST(apis_, vector<UpdateApiMcpServerRequest::Apis>) };
    inline vector<UpdateApiMcpServerRequest::Apis> getApis() { DARABONBA_PTR_GET(apis_, vector<UpdateApiMcpServerRequest::Apis>) };
    inline UpdateApiMcpServerRequest& setApis(const vector<UpdateApiMcpServerRequest::Apis> & apis) { DARABONBA_PTR_SET_VALUE(apis_, apis) };
    inline UpdateApiMcpServerRequest& setApis(vector<UpdateApiMcpServerRequest::Apis> && apis) { DARABONBA_PTR_SET_RVALUE(apis_, apis) };


    // assumeRoleExtraPolicy Field Functions 
    bool hasAssumeRoleExtraPolicy() const { return this->assumeRoleExtraPolicy_ != nullptr;};
    void deleteAssumeRoleExtraPolicy() { this->assumeRoleExtraPolicy_ = nullptr;};
    inline string getAssumeRoleExtraPolicy() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleExtraPolicy_, "") };
    inline UpdateApiMcpServerRequest& setAssumeRoleExtraPolicy(string assumeRoleExtraPolicy) { DARABONBA_PTR_SET_VALUE(assumeRoleExtraPolicy_, assumeRoleExtraPolicy) };


    // assumeRoleName Field Functions 
    bool hasAssumeRoleName() const { return this->assumeRoleName_ != nullptr;};
    void deleteAssumeRoleName() { this->assumeRoleName_ = nullptr;};
    inline string getAssumeRoleName() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleName_, "") };
    inline UpdateApiMcpServerRequest& setAssumeRoleName(string assumeRoleName) { DARABONBA_PTR_SET_VALUE(assumeRoleName_, assumeRoleName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApiMcpServerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAssumeRole Field Functions 
    bool hasEnableAssumeRole() const { return this->enableAssumeRole_ != nullptr;};
    void deleteEnableAssumeRole() { this->enableAssumeRole_ = nullptr;};
    inline bool getEnableAssumeRole() const { DARABONBA_PTR_GET_DEFAULT(enableAssumeRole_, false) };
    inline UpdateApiMcpServerRequest& setEnableAssumeRole(bool enableAssumeRole) { DARABONBA_PTR_SET_VALUE(enableAssumeRole_, enableAssumeRole) };


    // enableCustomVpcWhitelist Field Functions 
    bool hasEnableCustomVpcWhitelist() const { return this->enableCustomVpcWhitelist_ != nullptr;};
    void deleteEnableCustomVpcWhitelist() { this->enableCustomVpcWhitelist_ = nullptr;};
    inline bool getEnableCustomVpcWhitelist() const { DARABONBA_PTR_GET_DEFAULT(enableCustomVpcWhitelist_, false) };
    inline UpdateApiMcpServerRequest& setEnableCustomVpcWhitelist(bool enableCustomVpcWhitelist) { DARABONBA_PTR_SET_VALUE(enableCustomVpcWhitelist_, enableCustomVpcWhitelist) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string getInstructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline UpdateApiMcpServerRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline UpdateApiMcpServerRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // oauthClientId Field Functions 
    bool hasOauthClientId() const { return this->oauthClientId_ != nullptr;};
    void deleteOauthClientId() { this->oauthClientId_ = nullptr;};
    inline string getOauthClientId() const { DARABONBA_PTR_GET_DEFAULT(oauthClientId_, "") };
    inline UpdateApiMcpServerRequest& setOauthClientId(string oauthClientId) { DARABONBA_PTR_SET_VALUE(oauthClientId_, oauthClientId) };


    // prompts Field Functions 
    bool hasPrompts() const { return this->prompts_ != nullptr;};
    void deletePrompts() { this->prompts_ = nullptr;};
    inline const vector<UpdateApiMcpServerRequest::Prompts> & getPrompts() const { DARABONBA_PTR_GET_CONST(prompts_, vector<UpdateApiMcpServerRequest::Prompts>) };
    inline vector<UpdateApiMcpServerRequest::Prompts> getPrompts() { DARABONBA_PTR_GET(prompts_, vector<UpdateApiMcpServerRequest::Prompts>) };
    inline UpdateApiMcpServerRequest& setPrompts(const vector<UpdateApiMcpServerRequest::Prompts> & prompts) { DARABONBA_PTR_SET_VALUE(prompts_, prompts) };
    inline UpdateApiMcpServerRequest& setPrompts(vector<UpdateApiMcpServerRequest::Prompts> && prompts) { DARABONBA_PTR_SET_RVALUE(prompts_, prompts) };


    // publicAccess Field Functions 
    bool hasPublicAccess() const { return this->publicAccess_ != nullptr;};
    void deletePublicAccess() { this->publicAccess_ = nullptr;};
    inline string getPublicAccess() const { DARABONBA_PTR_GET_DEFAULT(publicAccess_, "") };
    inline UpdateApiMcpServerRequest& setPublicAccess(string publicAccess) { DARABONBA_PTR_SET_VALUE(publicAccess_, publicAccess) };


    // systemTools Field Functions 
    bool hasSystemTools() const { return this->systemTools_ != nullptr;};
    void deleteSystemTools() { this->systemTools_ = nullptr;};
    inline const vector<string> & getSystemTools() const { DARABONBA_PTR_GET_CONST(systemTools_, vector<string>) };
    inline vector<string> getSystemTools() { DARABONBA_PTR_GET(systemTools_, vector<string>) };
    inline UpdateApiMcpServerRequest& setSystemTools(const vector<string> & systemTools) { DARABONBA_PTR_SET_VALUE(systemTools_, systemTools) };
    inline UpdateApiMcpServerRequest& setSystemTools(vector<string> && systemTools) { DARABONBA_PTR_SET_RVALUE(systemTools_, systemTools) };


    // terraformTools Field Functions 
    bool hasTerraformTools() const { return this->terraformTools_ != nullptr;};
    void deleteTerraformTools() { this->terraformTools_ = nullptr;};
    inline const vector<UpdateApiMcpServerRequest::TerraformTools> & getTerraformTools() const { DARABONBA_PTR_GET_CONST(terraformTools_, vector<UpdateApiMcpServerRequest::TerraformTools>) };
    inline vector<UpdateApiMcpServerRequest::TerraformTools> getTerraformTools() { DARABONBA_PTR_GET(terraformTools_, vector<UpdateApiMcpServerRequest::TerraformTools>) };
    inline UpdateApiMcpServerRequest& setTerraformTools(const vector<UpdateApiMcpServerRequest::TerraformTools> & terraformTools) { DARABONBA_PTR_SET_VALUE(terraformTools_, terraformTools) };
    inline UpdateApiMcpServerRequest& setTerraformTools(vector<UpdateApiMcpServerRequest::TerraformTools> && terraformTools) { DARABONBA_PTR_SET_RVALUE(terraformTools_, terraformTools) };


    // vpcWhitelists Field Functions 
    bool hasVpcWhitelists() const { return this->vpcWhitelists_ != nullptr;};
    void deleteVpcWhitelists() { this->vpcWhitelists_ = nullptr;};
    inline const vector<string> & getVpcWhitelists() const { DARABONBA_PTR_GET_CONST(vpcWhitelists_, vector<string>) };
    inline vector<string> getVpcWhitelists() { DARABONBA_PTR_GET(vpcWhitelists_, vector<string>) };
    inline UpdateApiMcpServerRequest& setVpcWhitelists(const vector<string> & vpcWhitelists) { DARABONBA_PTR_SET_VALUE(vpcWhitelists_, vpcWhitelists) };
    inline UpdateApiMcpServerRequest& setVpcWhitelists(vector<string> && vpcWhitelists) { DARABONBA_PTR_SET_RVALUE(vpcWhitelists_, vpcWhitelists) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateApiMcpServerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateApiMcpServerRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // A list of supplementary API descriptions.
    shared_ptr<vector<UpdateApiMcpServerRequest::AdditionalApiDescriptions>> additionalApiDescriptions_ {};
    // The list of APIs to modify.
    shared_ptr<vector<UpdateApiMcpServerRequest::Apis>> apis_ {};
    // An additional policy for role assumption when multi-account access is enabled. If this policy exists, the permissions for the role assumption are based on this policy, which overwrites the permissions defined for the role itself.
    shared_ptr<string> assumeRoleExtraPolicy_ {};
    // The name of the RAM role in the destination account that is assumed for cross-account operations when multi-account access is enabled.
    shared_ptr<string> assumeRoleName_ {};
    // The description of the API MCP server.
    shared_ptr<string> description_ {};
    // Specifies whether to enable multi-account access.
    shared_ptr<bool> enableAssumeRole_ {};
    // Specifies whether to enable a custom VPC whitelist. If this is disabled, the account-level configuration is used.
    shared_ptr<bool> enableCustomVpcWhitelist_ {};
    // The MCP instruction. It prompts the large language model on how to use this MCP. The client must support the Instructions field of the standard MCP protocol.
    shared_ptr<string> instructions_ {};
    // The language of the API documentation for the API MCP service. You can select Chinese or English. Different language prompts may affect the AI\\"s response.
    shared_ptr<string> language_ {};
    // The custom OAuth client ID to use when you select a custom OAuth configuration.
    // 
    // `Only web and native applications are supported. The OAuth scope must include /acs/mcp-server.`
    shared_ptr<string> oauthClientId_ {};
    // A list of prompt configurations.
    shared_ptr<vector<UpdateApiMcpServerRequest::Prompts>> prompts_ {};
    // Specifies whether to enable public network access.
    shared_ptr<string> publicAccess_ {};
    // A list of system tools.
    shared_ptr<vector<string>> systemTools_ {};
    // A list of Terraform tools.
    shared_ptr<vector<UpdateApiMcpServerRequest::TerraformTools>> terraformTools_ {};
    // The VPC whitelist that specifies the allowed source VPCs after public network access is disabled. If you do not set this parameter or leave it empty, access from all sources is allowed.
    shared_ptr<vector<string>> vpcWhitelists_ {};
    // A client token that you can use to ensure the idempotence of the request. Generate a unique value from your client. The token can contain only ASCII characters and must be no more than 64 characters long. We recommend that you use a UUID. The token is valid for three days.
    shared_ptr<string> clientToken_ {};
    // The ID of the API MCP service.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
