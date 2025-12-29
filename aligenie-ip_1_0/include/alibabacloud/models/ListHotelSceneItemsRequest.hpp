// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELSCENEITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELSCENEITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelSceneItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelSceneItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(ListHotelSceneReq, listHotelSceneReq_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelSceneItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(ListHotelSceneReq, listHotelSceneReq_);
    };
    ListHotelSceneItemsRequest() = default ;
    ListHotelSceneItemsRequest(const ListHotelSceneItemsRequest &) = default ;
    ListHotelSceneItemsRequest(ListHotelSceneItemsRequest &&) = default ;
    ListHotelSceneItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelSceneItemsRequest() = default ;
    ListHotelSceneItemsRequest& operator=(const ListHotelSceneItemsRequest &) = default ;
    ListHotelSceneItemsRequest& operator=(ListHotelSceneItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListHotelSceneReq : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListHotelSceneReq& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Keywords, keywords_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ListHotelSceneReq& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ListHotelSceneReq() = default ;
      ListHotelSceneReq(const ListHotelSceneReq &) = default ;
      ListHotelSceneReq(ListHotelSceneReq &&) = default ;
      ListHotelSceneReq(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListHotelSceneReq() = default ;
      ListHotelSceneReq& operator=(const ListHotelSceneReq &) = default ;
      ListHotelSceneReq& operator=(ListHotelSceneReq &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Page : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Page& obj) { 
          DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        };
        friend void from_json(const Darabonba::Json& j, Page& obj) { 
          DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
        virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr; };
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


      protected:
        shared_ptr<int32_t> pageNumber_ {};
        shared_ptr<int32_t> pageSize_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->keywords_ == nullptr && this->page_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline ListHotelSceneReq& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // keywords Field Functions 
      bool hasKeywords() const { return this->keywords_ != nullptr;};
      void deleteKeywords() { this->keywords_ = nullptr;};
      inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
      inline ListHotelSceneReq& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline const ListHotelSceneReq::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, ListHotelSceneReq::Page) };
      inline ListHotelSceneReq::Page getPage() { DARABONBA_PTR_GET(page_, ListHotelSceneReq::Page) };
      inline ListHotelSceneReq& setPage(const ListHotelSceneReq::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
      inline ListHotelSceneReq& setPage(ListHotelSceneReq::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ListHotelSceneReq& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ListHotelSceneReq& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<string> keywords_ {};
      // This parameter is required.
      shared_ptr<ListHotelSceneReq::Page> page_ {};
      shared_ptr<string> status_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->listHotelSceneReq_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ListHotelSceneItemsRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // listHotelSceneReq Field Functions 
    bool hasListHotelSceneReq() const { return this->listHotelSceneReq_ != nullptr;};
    void deleteListHotelSceneReq() { this->listHotelSceneReq_ = nullptr;};
    inline const ListHotelSceneItemsRequest::ListHotelSceneReq & getListHotelSceneReq() const { DARABONBA_PTR_GET_CONST(listHotelSceneReq_, ListHotelSceneItemsRequest::ListHotelSceneReq) };
    inline ListHotelSceneItemsRequest::ListHotelSceneReq getListHotelSceneReq() { DARABONBA_PTR_GET(listHotelSceneReq_, ListHotelSceneItemsRequest::ListHotelSceneReq) };
    inline ListHotelSceneItemsRequest& setListHotelSceneReq(const ListHotelSceneItemsRequest::ListHotelSceneReq & listHotelSceneReq) { DARABONBA_PTR_SET_VALUE(listHotelSceneReq_, listHotelSceneReq) };
    inline ListHotelSceneItemsRequest& setListHotelSceneReq(ListHotelSceneItemsRequest::ListHotelSceneReq && listHotelSceneReq) { DARABONBA_PTR_SET_RVALUE(listHotelSceneReq_, listHotelSceneReq) };


  protected:
    // hotelID
    // 
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // ListHotelSceneReq
    // 
    // This parameter is required.
    shared_ptr<ListHotelSceneItemsRequest::ListHotelSceneReq> listHotelSceneReq_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
