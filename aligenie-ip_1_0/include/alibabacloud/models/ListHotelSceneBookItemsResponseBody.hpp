// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELSCENEBOOKITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELSCENEBOOKITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelSceneBookItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelSceneBookItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelSceneBookItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListHotelSceneBookItemsResponseBody() = default ;
    ListHotelSceneBookItemsResponseBody(const ListHotelSceneBookItemsResponseBody &) = default ;
    ListHotelSceneBookItemsResponseBody(ListHotelSceneBookItemsResponseBody &&) = default ;
    ListHotelSceneBookItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelSceneBookItemsResponseBody() = default ;
    ListHotelSceneBookItemsResponseBody& operator=(const ListHotelSceneBookItemsResponseBody &) = default ;
    ListHotelSceneBookItemsResponseBody& operator=(ListHotelSceneBookItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(SceneItemList, sceneItemList_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(SceneItemList, sceneItemList_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SceneItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SceneItemList& obj) { 
          DARABONBA_PTR_TO_JSON(Icon, icon_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Price, price_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, SceneItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(Icon, icon_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Price, price_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        SceneItemList() = default ;
        SceneItemList(const SceneItemList &) = default ;
        SceneItemList(SceneItemList &&) = default ;
        SceneItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SceneItemList() = default ;
        SceneItemList& operator=(const SceneItemList &) = default ;
        SceneItemList& operator=(SceneItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->icon_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->price_ == nullptr && this->status_ == nullptr && this->type_ == nullptr
        && this->updateTime_ == nullptr; };
        // icon Field Functions 
        bool hasIcon() const { return this->icon_ != nullptr;};
        void deleteIcon() { this->icon_ = nullptr;};
        inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
        inline SceneItemList& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SceneItemList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SceneItemList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
        inline SceneItemList& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SceneItemList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SceneItemList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline SceneItemList& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> icon_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> price_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> updateTime_ {};
      };

      class Page : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Page& obj) { 
          DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
          DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
        };
        friend void from_json(const Darabonba::Json& j, Page& obj) { 
          DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
          DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
        };
        Page() = default ;
        Page(const Page &) = default ;
        Page(Page &&) = default ;
        Page(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Page() = default ;
        Page& operator=(const Page &) = default ;
        Page& operator=(Page &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hasNext_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr && this->totalPage_ == nullptr; };
        // hasNext Field Functions 
        bool hasHasNext() const { return this->hasNext_ != nullptr;};
        void deleteHasNext() { this->hasNext_ = nullptr;};
        inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
        inline Page& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


        // pageNumber Field Functions 
        bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
        void deletePageNumber() { this->pageNumber_ = nullptr;};
        inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
        inline Page& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline Page& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // totalPage Field Functions 
        bool hasTotalPage() const { return this->totalPage_ != nullptr;};
        void deleteTotalPage() { this->totalPage_ = nullptr;};
        inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
        inline Page& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


      protected:
        shared_ptr<bool> hasNext_ {};
        shared_ptr<int32_t> pageNumber_ {};
        shared_ptr<int32_t> pageSize_ {};
        shared_ptr<int32_t> total_ {};
        shared_ptr<int32_t> totalPage_ {};
      };

      virtual bool empty() const override { return this->page_ == nullptr
        && this->sceneItemList_ == nullptr; };
      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline const Result::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, Result::Page) };
      inline Result::Page getPage() { DARABONBA_PTR_GET(page_, Result::Page) };
      inline Result& setPage(const Result::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
      inline Result& setPage(Result::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


      // sceneItemList Field Functions 
      bool hasSceneItemList() const { return this->sceneItemList_ != nullptr;};
      void deleteSceneItemList() { this->sceneItemList_ = nullptr;};
      inline const vector<Result::SceneItemList> & getSceneItemList() const { DARABONBA_PTR_GET_CONST(sceneItemList_, vector<Result::SceneItemList>) };
      inline vector<Result::SceneItemList> getSceneItemList() { DARABONBA_PTR_GET(sceneItemList_, vector<Result::SceneItemList>) };
      inline Result& setSceneItemList(const vector<Result::SceneItemList> & sceneItemList) { DARABONBA_PTR_SET_VALUE(sceneItemList_, sceneItemList) };
      inline Result& setSceneItemList(vector<Result::SceneItemList> && sceneItemList) { DARABONBA_PTR_SET_RVALUE(sceneItemList_, sceneItemList) };


    protected:
      shared_ptr<Result::Page> page_ {};
      shared_ptr<vector<Result::SceneItemList>> sceneItemList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListHotelSceneBookItemsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHotelSceneBookItemsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotelSceneBookItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListHotelSceneBookItemsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListHotelSceneBookItemsResponseBody::Result) };
    inline ListHotelSceneBookItemsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListHotelSceneBookItemsResponseBody::Result) };
    inline ListHotelSceneBookItemsResponseBody& setResult(const ListHotelSceneBookItemsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListHotelSceneBookItemsResponseBody& setResult(ListHotelSceneBookItemsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<ListHotelSceneBookItemsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
