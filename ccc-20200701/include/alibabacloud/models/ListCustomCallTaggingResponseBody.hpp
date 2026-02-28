// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMCALLTAGGINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMCALLTAGGINGRESPONSEBODY_HPP_
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
  class ListCustomCallTaggingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomCallTaggingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomCallTaggingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCustomCallTaggingResponseBody() = default ;
    ListCustomCallTaggingResponseBody(const ListCustomCallTaggingResponseBody &) = default ;
    ListCustomCallTaggingResponseBody(ListCustomCallTaggingResponseBody &&) = default ;
    ListCustomCallTaggingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomCallTaggingResponseBody() = default ;
    ListCustomCallTaggingResponseBody& operator=(const ListCustomCallTaggingResponseBody &) = default ;
    ListCustomCallTaggingResponseBody& operator=(ListCustomCallTaggingResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CallTagList, callTagList_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(CallTagList, callTagList_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
        class CallTagList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CallTagList& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(TagName, tagName_);
          };
          friend void from_json(const Darabonba::Json& j, CallTagList& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(TagName, tagName_);
          };
          CallTagList() = default ;
          CallTagList(const CallTagList &) = default ;
          CallTagList(CallTagList &&) = default ;
          CallTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CallTagList() = default ;
          CallTagList& operator=(const CallTagList &) = default ;
          CallTagList& operator=(CallTagList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->tagName_ == nullptr; };
          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline CallTagList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // tagName Field Functions 
          bool hasTagName() const { return this->tagName_ != nullptr;};
          void deleteTagName() { this->tagName_ = nullptr;};
          inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
          inline CallTagList& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


        protected:
          shared_ptr<string> instanceId_ {};
          shared_ptr<string> tagName_ {};
        };

        virtual bool empty() const override { return this->callTagList_ == nullptr
        && this->creator_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->number_ == nullptr && this->updateTime_ == nullptr; };
        // callTagList Field Functions 
        bool hasCallTagList() const { return this->callTagList_ != nullptr;};
        void deleteCallTagList() { this->callTagList_ = nullptr;};
        inline const vector<List::CallTagList> & getCallTagList() const { DARABONBA_PTR_GET_CONST(callTagList_, vector<List::CallTagList>) };
        inline vector<List::CallTagList> getCallTagList() { DARABONBA_PTR_GET(callTagList_, vector<List::CallTagList>) };
        inline List& setCallTagList(const vector<List::CallTagList> & callTagList) { DARABONBA_PTR_SET_VALUE(callTagList_, callTagList) };
        inline List& setCallTagList(vector<List::CallTagList> && callTagList) { DARABONBA_PTR_SET_RVALUE(callTagList_, callTagList) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline List& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline List& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline List& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<vector<List::CallTagList>> callTagList_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> number_ {};
        shared_ptr<string> updateTime_ {};
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
    inline ListCustomCallTaggingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCustomCallTaggingResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCustomCallTaggingResponseBody::Data) };
    inline ListCustomCallTaggingResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCustomCallTaggingResponseBody::Data) };
    inline ListCustomCallTaggingResponseBody& setData(const ListCustomCallTaggingResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCustomCallTaggingResponseBody& setData(ListCustomCallTaggingResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCustomCallTaggingResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCustomCallTaggingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomCallTaggingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListCustomCallTaggingResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
