// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLUGINCLASSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPLUGINCLASSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetPluginClassResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPluginClassResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPluginClassResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetPluginClassResponseBody() = default ;
    GetPluginClassResponseBody(const GetPluginClassResponseBody &) = default ;
    GetPluginClassResponseBody(GetPluginClassResponseBody &&) = default ;
    GetPluginClassResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPluginClassResponseBody() = default ;
    GetPluginClassResponseBody& operator=(const GetPluginClassResponseBody &) = default ;
    GetPluginClassResponseBody& operator=(GetPluginClassResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(alias, alias_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(document, document_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(publishStatus, publishStatus_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(wasmLanguage, wasmLanguage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(alias, alias_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(document, document_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(publishStatus, publishStatus_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(wasmLanguage, wasmLanguage_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->description_ == nullptr && this->document_ == nullptr && this->name_ == nullptr && this->publishStatus_ == nullptr && this->type_ == nullptr
        && this->wasmLanguage_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Data& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // document Field Functions 
      bool hasDocument() const { return this->document_ != nullptr;};
      void deleteDocument() { this->document_ = nullptr;};
      inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
      inline Data& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // publishStatus Field Functions 
      bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
      void deletePublishStatus() { this->publishStatus_ = nullptr;};
      inline string getPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
      inline Data& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // wasmLanguage Field Functions 
      bool hasWasmLanguage() const { return this->wasmLanguage_ != nullptr;};
      void deleteWasmLanguage() { this->wasmLanguage_ = nullptr;};
      inline string getWasmLanguage() const { DARABONBA_PTR_GET_DEFAULT(wasmLanguage_, "") };
      inline Data& setWasmLanguage(string wasmLanguage) { DARABONBA_PTR_SET_VALUE(wasmLanguage_, wasmLanguage) };


    protected:
      // The plug-in alias.
      shared_ptr<string> alias_ {};
      // The plug-in description.
      shared_ptr<string> description_ {};
      // The document key.
      shared_ptr<string> document_ {};
      // The plug-in name.
      shared_ptr<string> name_ {};
      // The publish status.
      shared_ptr<string> publishStatus_ {};
      // The plug-in type.
      shared_ptr<string> type_ {};
      // The Wasm plug-in programming language.
      shared_ptr<string> wasmLanguage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPluginClassResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPluginClassResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPluginClassResponseBody::Data) };
    inline GetPluginClassResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPluginClassResponseBody::Data) };
    inline GetPluginClassResponseBody& setData(const GetPluginClassResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPluginClassResponseBody& setData(GetPluginClassResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPluginClassResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPluginClassResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetPluginClassResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
