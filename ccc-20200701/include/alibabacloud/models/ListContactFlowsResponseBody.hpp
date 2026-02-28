// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTACTFLOWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTACTFLOWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListContactFlowsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContactFlowsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListContactFlowsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListContactFlowsResponseBody() = default ;
    ListContactFlowsResponseBody(const ListContactFlowsResponseBody &) = default ;
    ListContactFlowsResponseBody(ListContactFlowsResponseBody &&) = default ;
    ListContactFlowsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContactFlowsResponseBody() = default ;
    ListContactFlowsResponseBody& operator=(const ListContactFlowsResponseBody &) = default ;
    ListContactFlowsResponseBody& operator=(ListContactFlowsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Definition, definition_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DraftId, draftId_);
          DARABONBA_PTR_TO_JSON(Editor, editor_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NumberList, numberList_);
          DARABONBA_PTR_TO_JSON(Published, published_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Definition, definition_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DraftId, draftId_);
          DARABONBA_PTR_FROM_JSON(Editor, editor_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
          DARABONBA_PTR_FROM_JSON(Published, published_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contactFlowId_ == nullptr
        && this->createdTime_ == nullptr && this->definition_ == nullptr && this->description_ == nullptr && this->draftId_ == nullptr && this->editor_ == nullptr
        && this->instanceId_ == nullptr && this->name_ == nullptr && this->numberList_ == nullptr && this->published_ == nullptr && this->type_ == nullptr
        && this->updatedTime_ == nullptr; };
        // contactFlowId Field Functions 
        bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
        void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
        inline string getContactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
        inline List& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline List& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // definition Field Functions 
        bool hasDefinition() const { return this->definition_ != nullptr;};
        void deleteDefinition() { this->definition_ = nullptr;};
        inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
        inline List& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // draftId Field Functions 
        bool hasDraftId() const { return this->draftId_ != nullptr;};
        void deleteDraftId() { this->draftId_ = nullptr;};
        inline string getDraftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
        inline List& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


        // editor Field Functions 
        bool hasEditor() const { return this->editor_ != nullptr;};
        void deleteEditor() { this->editor_ = nullptr;};
        inline string getEditor() const { DARABONBA_PTR_GET_DEFAULT(editor_, "") };
        inline List& setEditor(string editor) { DARABONBA_PTR_SET_VALUE(editor_, editor) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // numberList Field Functions 
        bool hasNumberList() const { return this->numberList_ != nullptr;};
        void deleteNumberList() { this->numberList_ = nullptr;};
        inline const vector<string> & getNumberList() const { DARABONBA_PTR_GET_CONST(numberList_, vector<string>) };
        inline vector<string> getNumberList() { DARABONBA_PTR_GET(numberList_, vector<string>) };
        inline List& setNumberList(const vector<string> & numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };
        inline List& setNumberList(vector<string> && numberList) { DARABONBA_PTR_SET_RVALUE(numberList_, numberList) };


        // published Field Functions 
        bool hasPublished() const { return this->published_ != nullptr;};
        void deletePublished() { this->published_ = nullptr;};
        inline bool getPublished() const { DARABONBA_PTR_GET_DEFAULT(published_, false) };
        inline List& setPublished(bool published) { DARABONBA_PTR_SET_VALUE(published_, published) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline List& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
        inline List& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      protected:
        shared_ptr<string> contactFlowId_ {};
        shared_ptr<string> createdTime_ {};
        shared_ptr<string> definition_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> draftId_ {};
        shared_ptr<string> editor_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<string>> numberList_ {};
        shared_ptr<bool> published_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> updatedTime_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListContactFlowsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListContactFlowsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListContactFlowsResponseBody::Data) };
    inline ListContactFlowsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListContactFlowsResponseBody::Data) };
    inline ListContactFlowsResponseBody& setData(const ListContactFlowsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListContactFlowsResponseBody& setData(ListContactFlowsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListContactFlowsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListContactFlowsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContactFlowsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListContactFlowsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
