// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelRequest, hotelRequest_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelRequest, hotelRequest_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListHotelsRequest() = default ;
    ListHotelsRequest(const ListHotelsRequest &) = default ;
    ListHotelsRequest(ListHotelsRequest &&) = default ;
    ListHotelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelsRequest() = default ;
    ListHotelsRequest& operator=(const ListHotelsRequest &) = default ;
    ListHotelsRequest& operator=(ListHotelsRequest &&) = default ;
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

    class HotelRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HotelRequest& obj) { 
        DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      };
      friend void from_json(const Darabonba::Json& j, HotelRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      };
      HotelRequest() = default ;
      HotelRequest(const HotelRequest &) = default ;
      HotelRequest(HotelRequest &&) = default ;
      HotelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HotelRequest() = default ;
      HotelRequest& operator=(const HotelRequest &) = default ;
      HotelRequest& operator=(HotelRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hotelId_ == nullptr; };
      // hotelId Field Functions 
      bool hasHotelId() const { return this->hotelId_ != nullptr;};
      void deleteHotelId() { this->hotelId_ = nullptr;};
      inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
      inline HotelRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    protected:
      shared_ptr<string> hotelId_ {};
    };

    virtual bool empty() const override { return this->hotelRequest_ == nullptr
        && this->page_ == nullptr && this->status_ == nullptr; };
    // hotelRequest Field Functions 
    bool hasHotelRequest() const { return this->hotelRequest_ != nullptr;};
    void deleteHotelRequest() { this->hotelRequest_ = nullptr;};
    inline const ListHotelsRequest::HotelRequest & getHotelRequest() const { DARABONBA_PTR_GET_CONST(hotelRequest_, ListHotelsRequest::HotelRequest) };
    inline ListHotelsRequest::HotelRequest getHotelRequest() { DARABONBA_PTR_GET(hotelRequest_, ListHotelsRequest::HotelRequest) };
    inline ListHotelsRequest& setHotelRequest(const ListHotelsRequest::HotelRequest & hotelRequest) { DARABONBA_PTR_SET_VALUE(hotelRequest_, hotelRequest) };
    inline ListHotelsRequest& setHotelRequest(ListHotelsRequest::HotelRequest && hotelRequest) { DARABONBA_PTR_SET_RVALUE(hotelRequest_, hotelRequest) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListHotelsRequest::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, ListHotelsRequest::Page) };
    inline ListHotelsRequest::Page getPage() { DARABONBA_PTR_GET(page_, ListHotelsRequest::Page) };
    inline ListHotelsRequest& setPage(const ListHotelsRequest::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListHotelsRequest& setPage(ListHotelsRequest::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListHotelsRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<ListHotelsRequest::HotelRequest> hotelRequest_ {};
    // This parameter is required.
    shared_ptr<ListHotelsRequest::Page> page_ {};
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
