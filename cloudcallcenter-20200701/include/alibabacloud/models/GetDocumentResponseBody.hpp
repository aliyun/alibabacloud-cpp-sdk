// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataSchemaPropertiesValue.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class GetDocumentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDocumentResponseBody() = default ;
    GetDocumentResponseBody(const GetDocumentResponseBody &) = default ;
    GetDocumentResponseBody(GetDocumentResponseBody &&) = default ;
    GetDocumentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentResponseBody() = default ;
    GetDocumentResponseBody& operator=(const GetDocumentResponseBody &) = default ;
    GetDocumentResponseBody& operator=(GetDocumentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(Document, document_);
        DARABONBA_PTR_TO_JSON(Schema, schema_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(Document, document_);
        DARABONBA_PTR_FROM_JSON(Schema, schema_);
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
      class Schema : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Schema& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Deleted, deleted_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Properties, properties_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        };
        friend void from_json(const Darabonba::Json& j, Schema& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Properties, properties_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        };
        Schema() = default ;
        Schema(const Schema &) = default ;
        Schema(Schema &&) = default ;
        Schema(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Schema() = default ;
        Schema& operator=(const Schema &) = default ;
        Schema& operator=(Schema &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->deleted_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->properties_ == nullptr
        && this->updatedTime_ == nullptr; };
        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline Schema& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // deleted Field Functions 
        bool hasDeleted() const { return this->deleted_ != nullptr;};
        void deleteDeleted() { this->deleted_ = nullptr;};
        inline bool getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
        inline Schema& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Schema& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Schema& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Schema& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline const map<string, DataSchemaPropertiesValue> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, map<string, DataSchemaPropertiesValue>) };
        inline map<string, DataSchemaPropertiesValue> getProperties() { DARABONBA_PTR_GET(properties_, map<string, DataSchemaPropertiesValue>) };
        inline Schema& setProperties(const map<string, DataSchemaPropertiesValue> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
        inline Schema& setProperties(map<string, DataSchemaPropertiesValue> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
        inline Schema& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      protected:
        shared_ptr<string> createdTime_ {};
        shared_ptr<bool> deleted_ {};
        shared_ptr<string> description_ {};
        // schame id
        shared_ptr<string> id_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<map<string, DataSchemaPropertiesValue>> properties_ {};
        shared_ptr<string> updatedTime_ {};
      };

      virtual bool empty() const override { return this->document_ == nullptr
        && this->schema_ == nullptr; };
      // document Field Functions 
      bool hasDocument() const { return this->document_ != nullptr;};
      void deleteDocument() { this->document_ = nullptr;};
      inline       const Darabonba::Json & getDocument() const { DARABONBA_GET(document_) };
      Darabonba::Json & getDocument() { DARABONBA_GET(document_) };
      inline Data& setDocument(const Darabonba::Json & document) { DARABONBA_SET_VALUE(document_, document) };
      inline Data& setDocument(Darabonba::Json && document) { DARABONBA_SET_RVALUE(document_, document) };


      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline const Data::Schema & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, Data::Schema) };
      inline Data::Schema getSchema() { DARABONBA_PTR_GET(schema_, Data::Schema) };
      inline Data& setSchema(const Data::Schema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
      inline Data& setSchema(Data::Schema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    protected:
      Darabonba::Json document_ {};
      // scheme
      shared_ptr<Data::Schema> schema_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDocumentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDocumentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDocumentResponseBody::Data) };
    inline GetDocumentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDocumentResponseBody::Data) };
    inline GetDocumentResponseBody& setData(const GetDocumentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDocumentResponseBody& setData(GetDocumentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDocumentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDocumentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline GetDocumentResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetDocumentResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDocumentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetDocumentResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
