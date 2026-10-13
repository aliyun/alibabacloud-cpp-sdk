// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCPPRODUCTTOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCPPRODUCTTOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListMcpProductToolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcpProductToolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcpProductToolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMcpProductToolsResponseBody() = default ;
    ListMcpProductToolsResponseBody(const ListMcpProductToolsResponseBody &) = default ;
    ListMcpProductToolsResponseBody(ListMcpProductToolsResponseBody &&) = default ;
    ListMcpProductToolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcpProductToolsResponseBody() = default ;
    ListMcpProductToolsResponseBody& operator=(const ListMcpProductToolsResponseBody &) = default ;
    ListMcpProductToolsResponseBody& operator=(ListMcpProductToolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(tools, tools_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(tools, tools_);
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
      class Tools : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tools& obj) { 
          DARABONBA_ANY_TO_JSON(annotations, annotations_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_ANY_TO_JSON(inputSchema, inputSchema_);
          DARABONBA_ANY_TO_JSON(meta, meta_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_ANY_TO_JSON(outputSchema, outputSchema_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Tools& obj) { 
          DARABONBA_ANY_FROM_JSON(annotations, annotations_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_ANY_FROM_JSON(inputSchema, inputSchema_);
          DARABONBA_ANY_FROM_JSON(meta, meta_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_ANY_FROM_JSON(outputSchema, outputSchema_);
          DARABONBA_PTR_FROM_JSON(title, title_);
        };
        Tools() = default ;
        Tools(const Tools &) = default ;
        Tools(Tools &&) = default ;
        Tools(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tools() = default ;
        Tools& operator=(const Tools &) = default ;
        Tools& operator=(Tools &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->annotations_ == nullptr
        && this->description_ == nullptr && this->inputSchema_ == nullptr && this->meta_ == nullptr && this->name_ == nullptr && this->outputSchema_ == nullptr
        && this->title_ == nullptr; };
        // annotations Field Functions 
        bool hasAnnotations() const { return this->annotations_ != nullptr;};
        void deleteAnnotations() { this->annotations_ = nullptr;};
        inline         const Darabonba::Json & getAnnotations() const { DARABONBA_GET(annotations_) };
        Darabonba::Json & getAnnotations() { DARABONBA_GET(annotations_) };
        inline Tools& setAnnotations(const Darabonba::Json & annotations) { DARABONBA_SET_VALUE(annotations_, annotations) };
        inline Tools& setAnnotations(Darabonba::Json && annotations) { DARABONBA_SET_RVALUE(annotations_, annotations) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Tools& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // inputSchema Field Functions 
        bool hasInputSchema() const { return this->inputSchema_ != nullptr;};
        void deleteInputSchema() { this->inputSchema_ = nullptr;};
        inline         const Darabonba::Json & getInputSchema() const { DARABONBA_GET(inputSchema_) };
        Darabonba::Json & getInputSchema() { DARABONBA_GET(inputSchema_) };
        inline Tools& setInputSchema(const Darabonba::Json & inputSchema) { DARABONBA_SET_VALUE(inputSchema_, inputSchema) };
        inline Tools& setInputSchema(Darabonba::Json && inputSchema) { DARABONBA_SET_RVALUE(inputSchema_, inputSchema) };


        // meta Field Functions 
        bool hasMeta() const { return this->meta_ != nullptr;};
        void deleteMeta() { this->meta_ = nullptr;};
        inline         const Darabonba::Json & getMeta() const { DARABONBA_GET(meta_) };
        Darabonba::Json & getMeta() { DARABONBA_GET(meta_) };
        inline Tools& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
        inline Tools& setMeta(Darabonba::Json && meta) { DARABONBA_SET_RVALUE(meta_, meta) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Tools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outputSchema Field Functions 
        bool hasOutputSchema() const { return this->outputSchema_ != nullptr;};
        void deleteOutputSchema() { this->outputSchema_ = nullptr;};
        inline         const Darabonba::Json & getOutputSchema() const { DARABONBA_GET(outputSchema_) };
        Darabonba::Json & getOutputSchema() { DARABONBA_GET(outputSchema_) };
        inline Tools& setOutputSchema(const Darabonba::Json & outputSchema) { DARABONBA_SET_VALUE(outputSchema_, outputSchema) };
        inline Tools& setOutputSchema(Darabonba::Json && outputSchema) { DARABONBA_SET_RVALUE(outputSchema_, outputSchema) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Tools& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The annotation information of the tool, which is a map structure. The API definition declares it only as map<any> without specifying its members or purposes.
        Darabonba::Json annotations_ {};
        // The description of the tool.
        shared_ptr<string> description_ {};
        // The input parameter structure definition of the tool, which is a map structure. The API definition declares it only as map<any> without specifying its members or constraints.
        Darabonba::Json inputSchema_ {};
        // The metadata information of the tool, which is a map structure. The API definition declares it only as map<any> without specifying its members or purposes.
        Darabonba::Json meta_ {};
        // The name of the tool.
        shared_ptr<string> name_ {};
        // The output result structure definition of the tool, which is a map structure. The API definition declares it only as map<any> without specifying its members or constraints.
        Darabonba::Json outputSchema_ {};
        // The title of the tool.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->tools_ == nullptr; };
      // tools Field Functions 
      bool hasTools() const { return this->tools_ != nullptr;};
      void deleteTools() { this->tools_ = nullptr;};
      inline const vector<Data::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Data::Tools>) };
      inline vector<Data::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<Data::Tools>) };
      inline Data& setTools(const vector<Data::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
      inline Data& setTools(vector<Data::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    protected:
      // The list of MCP tools. Each element in the list represents an MCP tool.
      shared_ptr<vector<Data::Tools>> tools_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListMcpProductToolsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMcpProductToolsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListMcpProductToolsResponseBody::Data) };
    inline ListMcpProductToolsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListMcpProductToolsResponseBody::Data) };
    inline ListMcpProductToolsResponseBody& setData(const ListMcpProductToolsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMcpProductToolsResponseBody& setData(ListMcpProductToolsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMcpProductToolsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcpProductToolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<ListMcpProductToolsResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
