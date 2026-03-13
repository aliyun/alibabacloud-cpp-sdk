// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNNOTIFYCOMPONENTWITHMESSAGECENTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNNOTIFYCOMPONENTWITHMESSAGECENTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class RunNotifyComponentWithMessageCenterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunNotifyComponentWithMessageCenterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunNotifyComponentWithMessageCenterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunNotifyComponentWithMessageCenterResponseBody() = default ;
    RunNotifyComponentWithMessageCenterResponseBody(const RunNotifyComponentWithMessageCenterResponseBody &) = default ;
    RunNotifyComponentWithMessageCenterResponseBody(RunNotifyComponentWithMessageCenterResponseBody &&) = default ;
    RunNotifyComponentWithMessageCenterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunNotifyComponentWithMessageCenterResponseBody() = default ;
    RunNotifyComponentWithMessageCenterResponseBody& operator=(const RunNotifyComponentWithMessageCenterResponseBody &) = default ;
    RunNotifyComponentWithMessageCenterResponseBody& operator=(RunNotifyComponentWithMessageCenterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
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


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Page& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Page number in pagination queries.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of items to display per page when performing a paginated query.
      shared_ptr<int32_t> pageSize_ {};
      // Number of list entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->page_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline RunNotifyComponentWithMessageCenterResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const RunNotifyComponentWithMessageCenterResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, RunNotifyComponentWithMessageCenterResponseBody::Page) };
    inline RunNotifyComponentWithMessageCenterResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, RunNotifyComponentWithMessageCenterResponseBody::Page) };
    inline RunNotifyComponentWithMessageCenterResponseBody& setPage(const RunNotifyComponentWithMessageCenterResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline RunNotifyComponentWithMessageCenterResponseBody& setPage(RunNotifyComponentWithMessageCenterResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunNotifyComponentWithMessageCenterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Data returned by the interface.
    shared_ptr<string> data_ {};
    // Pagination query information.
    shared_ptr<RunNotifyComponentWithMessageCenterResponseBody::Page> page_ {};
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for the request, and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
