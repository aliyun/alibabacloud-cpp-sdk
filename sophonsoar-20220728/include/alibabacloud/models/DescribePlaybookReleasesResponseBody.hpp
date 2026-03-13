// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKRELEASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKRELEASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookReleasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookReleasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookReleasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePlaybookReleasesResponseBody() = default ;
    DescribePlaybookReleasesResponseBody(const DescribePlaybookReleasesResponseBody &) = default ;
    DescribePlaybookReleasesResponseBody(DescribePlaybookReleasesResponseBody &&) = default ;
    DescribePlaybookReleasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookReleasesResponseBody() = default ;
    DescribePlaybookReleasesResponseBody& operator=(const DescribePlaybookReleasesResponseBody &) = default ;
    DescribePlaybookReleasesResponseBody& operator=(DescribePlaybookReleasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(TaskflowMd5, taskflowMd5_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(TaskflowMd5, taskflowMd5_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creator_ == nullptr
        && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->taskflowMd5_ == nullptr; };
      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Records& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Records& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Records& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Records& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline Records& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // taskflowMd5 Field Functions 
      bool hasTaskflowMd5() const { return this->taskflowMd5_ != nullptr;};
      void deleteTaskflowMd5() { this->taskflowMd5_ = nullptr;};
      inline string getTaskflowMd5() const { DARABONBA_PTR_GET_DEFAULT(taskflowMd5_, "") };
      inline Records& setTaskflowMd5(string taskflowMd5) { DARABONBA_PTR_SET_VALUE(taskflowMd5_, taskflowMd5) };


    protected:
      // The ID of the Alibaba Cloud account that is used to publish the version.
      shared_ptr<string> creator_ {};
      // The description of the layer version.
      shared_ptr<string> description_ {};
      // The time when the version was created. The value is a 13-digit timestamp.
      shared_ptr<int64_t> gmtCreate_ {};
      // The time when the version was modified. The value is a 13-digit timestamp.
      shared_ptr<int64_t> gmtModified_ {};
      // The record ID.
      shared_ptr<int32_t> id_ {};
      // The MD5 value configured for the published version of the playbook.
      shared_ptr<string> taskflowMd5_ {};
    };

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
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->page_ == nullptr
        && this->records_ == nullptr && this->requestId_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribePlaybookReleasesResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, DescribePlaybookReleasesResponseBody::Page) };
    inline DescribePlaybookReleasesResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, DescribePlaybookReleasesResponseBody::Page) };
    inline DescribePlaybookReleasesResponseBody& setPage(const DescribePlaybookReleasesResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribePlaybookReleasesResponseBody& setPage(DescribePlaybookReleasesResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribePlaybookReleasesResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribePlaybookReleasesResponseBody::Records>) };
    inline vector<DescribePlaybookReleasesResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<DescribePlaybookReleasesResponseBody::Records>) };
    inline DescribePlaybookReleasesResponseBody& setRecords(const vector<DescribePlaybookReleasesResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribePlaybookReleasesResponseBody& setRecords(vector<DescribePlaybookReleasesResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlaybookReleasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<DescribePlaybookReleasesResponseBody::Page> page_ {};
    // The information about the playbook version.
    shared_ptr<vector<DescribePlaybookReleasesResponseBody::Records>> records_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
