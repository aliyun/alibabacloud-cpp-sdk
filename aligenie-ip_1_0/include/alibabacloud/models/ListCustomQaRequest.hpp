// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMQAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMQAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListCustomQARequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomQARequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Page, page_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomQARequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
    };
    ListCustomQARequest() = default ;
    ListCustomQARequest(const ListCustomQARequest &) = default ;
    ListCustomQARequest(ListCustomQARequest &&) = default ;
    ListCustomQARequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomQARequest() = default ;
    ListCustomQARequest& operator=(const ListCustomQARequest &) = default ;
    ListCustomQARequest& operator=(ListCustomQARequest &&) = default ;
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
        && this->keyword_ == nullptr && this->page_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ListCustomQARequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListCustomQARequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListCustomQARequest::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, ListCustomQARequest::Page) };
    inline ListCustomQARequest::Page getPage() { DARABONBA_PTR_GET(page_, ListCustomQARequest::Page) };
    inline ListCustomQARequest& setPage(const ListCustomQARequest::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListCustomQARequest& setPage(ListCustomQARequest::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> keyword_ {};
    // This parameter is required.
    shared_ptr<ListCustomQARequest::Page> page_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
