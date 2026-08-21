// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAPHSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGRAPHSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetGraphSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGraphSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(schemaVersion, schemaVersion_);
      DARABONBA_PTR_TO_JSON(yamlEdit, yamlEdit_);
    };
    friend void from_json(const Darabonba::Json& j, GetGraphSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(schemaVersion, schemaVersion_);
      DARABONBA_PTR_FROM_JSON(yamlEdit, yamlEdit_);
    };
    GetGraphSchemaResponseBody() = default ;
    GetGraphSchemaResponseBody(const GetGraphSchemaResponseBody &) = default ;
    GetGraphSchemaResponseBody(GetGraphSchemaResponseBody &&) = default ;
    GetGraphSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGraphSchemaResponseBody() = default ;
    GetGraphSchemaResponseBody& operator=(const GetGraphSchemaResponseBody &) = default ;
    GetGraphSchemaResponseBody& operator=(GetGraphSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->graphName_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->schemaVersion_ == nullptr && this->yamlEdit_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGraphSchemaResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline GetGraphSchemaResponseBody& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGraphSchemaResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGraphSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaVersion Field Functions 
    bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
    void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
    inline string getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, "") };
    inline GetGraphSchemaResponseBody& setSchemaVersion(string schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


    // yamlEdit Field Functions 
    bool hasYamlEdit() const { return this->yamlEdit_ != nullptr;};
    void deleteYamlEdit() { this->yamlEdit_ = nullptr;};
    inline string getYamlEdit() const { DARABONBA_PTR_GET_DEFAULT(yamlEdit_, "") };
    inline GetGraphSchemaResponseBody& setYamlEdit(string yamlEdit) { DARABONBA_PTR_SET_VALUE(yamlEdit_, yamlEdit) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The knowledge graph name.
    // 
    // This parameter is required.
    shared_ptr<string> graphName_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The version.
    // 
    // This parameter is required.
    shared_ptr<string> schemaVersion_ {};
    // The raw YAML text of the Graph Schema trimmed by READ permissions, retaining $ref references within the authorized subgraph.
    // 
    // This parameter is required.
    shared_ptr<string> yamlEdit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
