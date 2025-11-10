// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSRESPONSEBODYAPIMCPSERVERSADDITIONALAPIDESCRIPTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSRESPONSEBODYAPIMCPSERVERSADDITIONALAPIDESCRIPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptionsConstParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions& obj) { 
      DARABONBA_PTR_TO_JSON(apiName, apiName_);
      DARABONBA_PTR_TO_JSON(apiOverrideJson, apiOverrideJson_);
      DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(constParameters, constParameters_);
      DARABONBA_PTR_TO_JSON(enableOutputSchema, enableOutputSchema_);
      DARABONBA_PTR_TO_JSON(executeCliCommand, executeCliCommand_);
      DARABONBA_PTR_TO_JSON(product, product_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions& obj) { 
      DARABONBA_PTR_FROM_JSON(apiName, apiName_);
      DARABONBA_PTR_FROM_JSON(apiOverrideJson, apiOverrideJson_);
      DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(constParameters, constParameters_);
      DARABONBA_PTR_FROM_JSON(enableOutputSchema, enableOutputSchema_);
      DARABONBA_PTR_FROM_JSON(executeCliCommand, executeCliCommand_);
      DARABONBA_PTR_FROM_JSON(product, product_);
    };
    ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions() = default ;
    ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions(const ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions &) = default ;
    ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions(ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions &&) = default ;
    ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions() = default ;
    ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions& operator=(const ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions &) = default ;
    ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions& operator=(ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiName_ == nullptr
        && return this->apiOverrideJson_ == nullptr && return this->apiVersion_ == nullptr && return this->constParameters_ == nullptr && return this->enableOutputSchema_ == nullptr && return this->executeCliCommand_ == nullptr
        && return this->product_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiOverrideJson Field Functions 
    bool hasApiOverrideJson() const { return this->apiOverrideJson_ != nullptr;};
    void deleteApiOverrideJson() { this->apiOverrideJson_ = nullptr;};
    inline string apiOverrideJson() const { DARABONBA_PTR_GET_DEFAULT(apiOverrideJson_, "") };
    inline ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions& setApiOverrideJson(string apiOverrideJson) { DARABONBA_PTR_SET_VALUE(apiOverrideJson_, apiOverrideJson) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // constParameters Field Functions 
    bool hasConstParameters() const { return this->constParameters_ != nullptr;};
    void deleteConstParameters() { this->constParameters_ = nullptr;};
    inline const vector<Models::ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptionsConstParameters> & constParameters() const { DARABONBA_PTR_GET_CONST(constParameters_, vector<Models::ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptionsConstParameters>) };
    inline vector<Models::ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptionsConstParameters> constParameters() { DARABONBA_PTR_GET(constParameters_, vector<Models::ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptionsConstParameters>) };
    inline ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions& setConstParameters(const vector<Models::ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptionsConstParameters> & constParameters) { DARABONBA_PTR_SET_VALUE(constParameters_, constParameters) };
    inline ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions& setConstParameters(vector<Models::ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptionsConstParameters> && constParameters) { DARABONBA_PTR_SET_RVALUE(constParameters_, constParameters) };


    // enableOutputSchema Field Functions 
    bool hasEnableOutputSchema() const { return this->enableOutputSchema_ != nullptr;};
    void deleteEnableOutputSchema() { this->enableOutputSchema_ = nullptr;};
    inline bool enableOutputSchema() const { DARABONBA_PTR_GET_DEFAULT(enableOutputSchema_, false) };
    inline ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions& setEnableOutputSchema(bool enableOutputSchema) { DARABONBA_PTR_SET_VALUE(enableOutputSchema_, enableOutputSchema) };


    // executeCliCommand Field Functions 
    bool hasExecuteCliCommand() const { return this->executeCliCommand_ != nullptr;};
    void deleteExecuteCliCommand() { this->executeCliCommand_ = nullptr;};
    inline bool executeCliCommand() const { DARABONBA_PTR_GET_DEFAULT(executeCliCommand_, false) };
    inline ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions& setExecuteCliCommand(bool executeCliCommand) { DARABONBA_PTR_SET_VALUE(executeCliCommand_, executeCliCommand) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptions& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    std::shared_ptr<string> apiName_ = nullptr;
    std::shared_ptr<string> apiOverrideJson_ = nullptr;
    std::shared_ptr<string> apiVersion_ = nullptr;
    std::shared_ptr<vector<Models::ListApiMcpServersResponseBodyApiMcpServersAdditionalApiDescriptionsConstParameters>> constParameters_ = nullptr;
    std::shared_ptr<bool> enableOutputSchema_ = nullptr;
    std::shared_ptr<bool> executeCliCommand_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
