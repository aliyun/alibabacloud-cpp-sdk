// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIPATHFIELDTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPIPATHFIELDTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/DataFieldPathsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetApiPathFieldTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiPathFieldTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiPathFieldTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetApiPathFieldTemplateResponseBody() = default ;
    GetApiPathFieldTemplateResponseBody(const GetApiPathFieldTemplateResponseBody &) = default ;
    GetApiPathFieldTemplateResponseBody(GetApiPathFieldTemplateResponseBody &&) = default ;
    GetApiPathFieldTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiPathFieldTemplateResponseBody() = default ;
    GetApiPathFieldTemplateResponseBody& operator=(const GetApiPathFieldTemplateResponseBody &) = default ;
    GetApiPathFieldTemplateResponseBody& operator=(GetApiPathFieldTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(fieldPaths, fieldPaths_);
        DARABONBA_PTR_TO_JSON(path, path_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(templateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(fieldPaths, fieldPaths_);
        DARABONBA_PTR_FROM_JSON(path, path_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(templateName, templateName_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->fieldPaths_ == nullptr && this->path_ == nullptr && this->protocol_ == nullptr && this->templateName_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fieldPaths Field Functions 
      bool hasFieldPaths() const { return this->fieldPaths_ != nullptr;};
      void deleteFieldPaths() { this->fieldPaths_ = nullptr;};
      inline const map<string, vector<DataFieldPathsValue>> & getFieldPaths() const { DARABONBA_PTR_GET_CONST(fieldPaths_, map<string, vector<DataFieldPathsValue>>) };
      inline map<string, vector<DataFieldPathsValue>> getFieldPaths() { DARABONBA_PTR_GET(fieldPaths_, map<string, vector<DataFieldPathsValue>>) };
      inline Data& setFieldPaths(const map<string, vector<DataFieldPathsValue>> & fieldPaths) { DARABONBA_PTR_SET_VALUE(fieldPaths_, fieldPaths) };
      inline Data& setFieldPaths(map<string, vector<DataFieldPathsValue>> && fieldPaths) { DARABONBA_PTR_SET_RVALUE(fieldPaths_, fieldPaths) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Data& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The description text of the field template.
      shared_ptr<string> description_ {};
      // The set of fields defined by the field template, grouped by mapping key. Each group contains a set of template field items.
      shared_ptr<map<string, vector<DataFieldPathsValue>>> fieldPaths_ {};
      // The API request path corresponding to the field template.
      shared_ptr<string> path_ {};
      // The API protocol applicable to the field template, such as openai.
      shared_ptr<string> protocol_ {};
      // The name of the field template.
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetApiPathFieldTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetApiPathFieldTemplateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetApiPathFieldTemplateResponseBody::Data) };
    inline GetApiPathFieldTemplateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetApiPathFieldTemplateResponseBody::Data) };
    inline GetApiPathFieldTemplateResponseBody& setData(const GetApiPathFieldTemplateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetApiPathFieldTemplateResponseBody& setData(GetApiPathFieldTemplateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetApiPathFieldTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApiPathFieldTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetApiPathFieldTemplateResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
