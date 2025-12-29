// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELSCENEITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELSCENEITEMRESPONSEBODY_HPP_
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
  class ListHotelSceneItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelSceneItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelSceneItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListHotelSceneItemResponseBody() = default ;
    ListHotelSceneItemResponseBody(const ListHotelSceneItemResponseBody &) = default ;
    ListHotelSceneItemResponseBody(ListHotelSceneItemResponseBody &&) = default ;
    ListHotelSceneItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelSceneItemResponseBody() = default ;
    ListHotelSceneItemResponseBody& operator=(const ListHotelSceneItemResponseBody &) = default ;
    ListHotelSceneItemResponseBody& operator=(ListHotelSceneItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(SecondCategoryList, secondCategoryList_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(SecondCategoryList, secondCategoryList_);
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
      class SecondCategoryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecondCategoryList& obj) { 
          DARABONBA_PTR_TO_JSON(ItemList, itemList_);
          DARABONBA_PTR_TO_JSON(SecondCategoryName, secondCategoryName_);
        };
        friend void from_json(const Darabonba::Json& j, SecondCategoryList& obj) { 
          DARABONBA_PTR_FROM_JSON(ItemList, itemList_);
          DARABONBA_PTR_FROM_JSON(SecondCategoryName, secondCategoryName_);
        };
        SecondCategoryList() = default ;
        SecondCategoryList(const SecondCategoryList &) = default ;
        SecondCategoryList(SecondCategoryList &&) = default ;
        SecondCategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecondCategoryList() = default ;
        SecondCategoryList& operator=(const SecondCategoryList &) = default ;
        SecondCategoryList& operator=(SecondCategoryList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ItemList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ItemList& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(Icon, icon_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Price, price_);
            DARABONBA_PTR_TO_JSON(ResidueLimit, residueLimit_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ItemList& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(Icon, icon_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Price, price_);
            DARABONBA_PTR_FROM_JSON(ResidueLimit, residueLimit_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          ItemList() = default ;
          ItemList(const ItemList &) = default ;
          ItemList(ItemList &&) = default ;
          ItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ItemList() = default ;
          ItemList& operator=(const ItemList &) = default ;
          ItemList& operator=(ItemList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->category_ == nullptr
        && this->icon_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->price_ == nullptr && this->residueLimit_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline ItemList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // icon Field Functions 
          bool hasIcon() const { return this->icon_ != nullptr;};
          void deleteIcon() { this->icon_ = nullptr;};
          inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
          inline ItemList& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline ItemList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ItemList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // price Field Functions 
          bool hasPrice() const { return this->price_ != nullptr;};
          void deletePrice() { this->price_ = nullptr;};
          inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
          inline ItemList& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


          // residueLimit Field Functions 
          bool hasResidueLimit() const { return this->residueLimit_ != nullptr;};
          void deleteResidueLimit() { this->residueLimit_ = nullptr;};
          inline int64_t getResidueLimit() const { DARABONBA_PTR_GET_DEFAULT(residueLimit_, 0L) };
          inline ItemList& setResidueLimit(int64_t residueLimit) { DARABONBA_PTR_SET_VALUE(residueLimit_, residueLimit) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline ItemList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ItemList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> category_ {};
          shared_ptr<string> icon_ {};
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
          shared_ptr<int64_t> price_ {};
          shared_ptr<int64_t> residueLimit_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->itemList_ == nullptr
        && this->secondCategoryName_ == nullptr; };
        // itemList Field Functions 
        bool hasItemList() const { return this->itemList_ != nullptr;};
        void deleteItemList() { this->itemList_ = nullptr;};
        inline const vector<SecondCategoryList::ItemList> & getItemList() const { DARABONBA_PTR_GET_CONST(itemList_, vector<SecondCategoryList::ItemList>) };
        inline vector<SecondCategoryList::ItemList> getItemList() { DARABONBA_PTR_GET(itemList_, vector<SecondCategoryList::ItemList>) };
        inline SecondCategoryList& setItemList(const vector<SecondCategoryList::ItemList> & itemList) { DARABONBA_PTR_SET_VALUE(itemList_, itemList) };
        inline SecondCategoryList& setItemList(vector<SecondCategoryList::ItemList> && itemList) { DARABONBA_PTR_SET_RVALUE(itemList_, itemList) };


        // secondCategoryName Field Functions 
        bool hasSecondCategoryName() const { return this->secondCategoryName_ != nullptr;};
        void deleteSecondCategoryName() { this->secondCategoryName_ = nullptr;};
        inline string getSecondCategoryName() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryName_, "") };
        inline SecondCategoryList& setSecondCategoryName(string secondCategoryName) { DARABONBA_PTR_SET_VALUE(secondCategoryName_, secondCategoryName) };


      protected:
        shared_ptr<vector<SecondCategoryList::ItemList>> itemList_ {};
        shared_ptr<string> secondCategoryName_ {};
      };

      virtual bool empty() const override { return this->secondCategoryList_ == nullptr; };
      // secondCategoryList Field Functions 
      bool hasSecondCategoryList() const { return this->secondCategoryList_ != nullptr;};
      void deleteSecondCategoryList() { this->secondCategoryList_ = nullptr;};
      inline const vector<Result::SecondCategoryList> & getSecondCategoryList() const { DARABONBA_PTR_GET_CONST(secondCategoryList_, vector<Result::SecondCategoryList>) };
      inline vector<Result::SecondCategoryList> getSecondCategoryList() { DARABONBA_PTR_GET(secondCategoryList_, vector<Result::SecondCategoryList>) };
      inline Result& setSecondCategoryList(const vector<Result::SecondCategoryList> & secondCategoryList) { DARABONBA_PTR_SET_VALUE(secondCategoryList_, secondCategoryList) };
      inline Result& setSecondCategoryList(vector<Result::SecondCategoryList> && secondCategoryList) { DARABONBA_PTR_SET_RVALUE(secondCategoryList_, secondCategoryList) };


    protected:
      shared_ptr<vector<Result::SecondCategoryList>> secondCategoryList_ {};
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

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->page_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListHotelSceneItemResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHotelSceneItemResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListHotelSceneItemResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, ListHotelSceneItemResponseBody::Page) };
    inline ListHotelSceneItemResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, ListHotelSceneItemResponseBody::Page) };
    inline ListHotelSceneItemResponseBody& setPage(const ListHotelSceneItemResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListHotelSceneItemResponseBody& setPage(ListHotelSceneItemResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotelSceneItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListHotelSceneItemResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListHotelSceneItemResponseBody::Result) };
    inline ListHotelSceneItemResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListHotelSceneItemResponseBody::Result) };
    inline ListHotelSceneItemResponseBody& setResult(const ListHotelSceneItemResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListHotelSceneItemResponseBody& setResult(ListHotelSceneItemResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListHotelSceneItemResponseBody::Page> page_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<ListHotelSceneItemResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
