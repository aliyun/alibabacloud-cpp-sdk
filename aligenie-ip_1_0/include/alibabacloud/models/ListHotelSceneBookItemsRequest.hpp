// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELSCENEBOOKITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELSCENEBOOKITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelSceneBookItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelSceneBookItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelSceneBookItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListHotelSceneBookItemsRequest() = default ;
    ListHotelSceneBookItemsRequest(const ListHotelSceneBookItemsRequest &) = default ;
    ListHotelSceneBookItemsRequest(ListHotelSceneBookItemsRequest &&) = default ;
    ListHotelSceneBookItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelSceneBookItemsRequest() = default ;
    ListHotelSceneBookItemsRequest& operator=(const ListHotelSceneBookItemsRequest &) = default ;
    ListHotelSceneBookItemsRequest& operator=(ListHotelSceneBookItemsRequest &&) = default ;
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
      // This parameter is required.
      shared_ptr<int32_t> pageNumber_ {};
      // This parameter is required.
      shared_ptr<int32_t> pageSize_ {};
    };

    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->page_ == nullptr && this->type_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ListHotelSceneBookItemsRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListHotelSceneBookItemsRequest::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, ListHotelSceneBookItemsRequest::Page) };
    inline ListHotelSceneBookItemsRequest::Page getPage() { DARABONBA_PTR_GET(page_, ListHotelSceneBookItemsRequest::Page) };
    inline ListHotelSceneBookItemsRequest& setPage(const ListHotelSceneBookItemsRequest::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListHotelSceneBookItemsRequest& setPage(ListHotelSceneBookItemsRequest::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListHotelSceneBookItemsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // hotelID
    // 
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<ListHotelSceneBookItemsRequest::Page> page_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
