// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveRecordTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecordTemplateList, recordTemplateList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecordTemplateList, recordTemplateList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLiveRecordTemplatesResponseBody() = default ;
    ListLiveRecordTemplatesResponseBody(const ListLiveRecordTemplatesResponseBody &) = default ;
    ListLiveRecordTemplatesResponseBody(ListLiveRecordTemplatesResponseBody &&) = default ;
    ListLiveRecordTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordTemplatesResponseBody() = default ;
    ListLiveRecordTemplatesResponseBody& operator=(const ListLiveRecordTemplatesResponseBody &) = default ;
    ListLiveRecordTemplatesResponseBody& operator=(ListLiveRecordTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordTemplateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordTemplateList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RecordFormatList, recordFormatList_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RecordTemplateList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RecordFormatList, recordFormatList_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RecordTemplateList() = default ;
      RecordTemplateList(const RecordTemplateList &) = default ;
      RecordTemplateList(RecordTemplateList &&) = default ;
      RecordTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordTemplateList() = default ;
      RecordTemplateList& operator=(const RecordTemplateList &) = default ;
      RecordTemplateList& operator=(RecordTemplateList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecordFormatList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordFormatList& obj) { 
          DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(OssObjectPrefix, ossObjectPrefix_);
          DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
          DARABONBA_PTR_TO_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
        };
        friend void from_json(const Darabonba::Json& j, RecordFormatList& obj) { 
          DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(OssObjectPrefix, ossObjectPrefix_);
          DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
          DARABONBA_PTR_FROM_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
        };
        RecordFormatList() = default ;
        RecordFormatList(const RecordFormatList &) = default ;
        RecordFormatList(RecordFormatList &&) = default ;
        RecordFormatList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordFormatList() = default ;
        RecordFormatList& operator=(const RecordFormatList &) = default ;
        RecordFormatList& operator=(RecordFormatList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cycleDuration_ == nullptr
        && this->format_ == nullptr && this->ossObjectPrefix_ == nullptr && this->sliceDuration_ == nullptr && this->sliceOssObjectPrefix_ == nullptr; };
        // cycleDuration Field Functions 
        bool hasCycleDuration() const { return this->cycleDuration_ != nullptr;};
        void deleteCycleDuration() { this->cycleDuration_ = nullptr;};
        inline int32_t getCycleDuration() const { DARABONBA_PTR_GET_DEFAULT(cycleDuration_, 0) };
        inline RecordFormatList& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline RecordFormatList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // ossObjectPrefix Field Functions 
        bool hasOssObjectPrefix() const { return this->ossObjectPrefix_ != nullptr;};
        void deleteOssObjectPrefix() { this->ossObjectPrefix_ = nullptr;};
        inline string getOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPrefix_, "") };
        inline RecordFormatList& setOssObjectPrefix(string ossObjectPrefix) { DARABONBA_PTR_SET_VALUE(ossObjectPrefix_, ossObjectPrefix) };


        // sliceDuration Field Functions 
        bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
        void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
        inline int32_t getSliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
        inline RecordFormatList& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


        // sliceOssObjectPrefix Field Functions 
        bool hasSliceOssObjectPrefix() const { return this->sliceOssObjectPrefix_ != nullptr;};
        void deleteSliceOssObjectPrefix() { this->sliceOssObjectPrefix_ = nullptr;};
        inline string getSliceOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(sliceOssObjectPrefix_, "") };
        inline RecordFormatList& setSliceOssObjectPrefix(string sliceOssObjectPrefix) { DARABONBA_PTR_SET_VALUE(sliceOssObjectPrefix_, sliceOssObjectPrefix) };


      protected:
        // The duration of the recording cycle. Unit: seconds.
        shared_ptr<int32_t> cycleDuration_ {};
        // The output file format.
        shared_ptr<string> format_ {};
        // The name of the recording file that is stored in Object Storage Service (OSS).
        shared_ptr<string> ossObjectPrefix_ {};
        // The duration of a single segment. Unit: seconds.
        shared_ptr<int32_t> sliceDuration_ {};
        // The name of the TS segment.
        shared_ptr<string> sliceOssObjectPrefix_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->lastModified_ == nullptr && this->name_ == nullptr && this->recordFormatList_ == nullptr && this->templateId_ == nullptr && this->type_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline RecordTemplateList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline RecordTemplateList& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RecordTemplateList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // recordFormatList Field Functions 
      bool hasRecordFormatList() const { return this->recordFormatList_ != nullptr;};
      void deleteRecordFormatList() { this->recordFormatList_ = nullptr;};
      inline const vector<RecordTemplateList::RecordFormatList> & getRecordFormatList() const { DARABONBA_PTR_GET_CONST(recordFormatList_, vector<RecordTemplateList::RecordFormatList>) };
      inline vector<RecordTemplateList::RecordFormatList> getRecordFormatList() { DARABONBA_PTR_GET(recordFormatList_, vector<RecordTemplateList::RecordFormatList>) };
      inline RecordTemplateList& setRecordFormatList(const vector<RecordTemplateList::RecordFormatList> & recordFormatList) { DARABONBA_PTR_SET_VALUE(recordFormatList_, recordFormatList) };
      inline RecordTemplateList& setRecordFormatList(vector<RecordTemplateList::RecordFormatList> && recordFormatList) { DARABONBA_PTR_SET_RVALUE(recordFormatList_, recordFormatList) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline RecordTemplateList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RecordTemplateList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The time when the job was created.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> createTime_ {};
      // The time when the template was last modified.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> lastModified_ {};
      // The template name.
      shared_ptr<string> name_ {};
      // The list of recording formats.
      shared_ptr<vector<RecordTemplateList::RecordFormatList>> recordFormatList_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The type of the template.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->recordTemplateList_ == nullptr && this->requestId_ == nullptr && this->sortBy_ == nullptr && this->totalCount_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListLiveRecordTemplatesResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListLiveRecordTemplatesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recordTemplateList Field Functions 
    bool hasRecordTemplateList() const { return this->recordTemplateList_ != nullptr;};
    void deleteRecordTemplateList() { this->recordTemplateList_ = nullptr;};
    inline const vector<ListLiveRecordTemplatesResponseBody::RecordTemplateList> & getRecordTemplateList() const { DARABONBA_PTR_GET_CONST(recordTemplateList_, vector<ListLiveRecordTemplatesResponseBody::RecordTemplateList>) };
    inline vector<ListLiveRecordTemplatesResponseBody::RecordTemplateList> getRecordTemplateList() { DARABONBA_PTR_GET(recordTemplateList_, vector<ListLiveRecordTemplatesResponseBody::RecordTemplateList>) };
    inline ListLiveRecordTemplatesResponseBody& setRecordTemplateList(const vector<ListLiveRecordTemplatesResponseBody::RecordTemplateList> & recordTemplateList) { DARABONBA_PTR_SET_VALUE(recordTemplateList_, recordTemplateList) };
    inline ListLiveRecordTemplatesResponseBody& setRecordTemplateList(vector<ListLiveRecordTemplatesResponseBody::RecordTemplateList> && recordTemplateList) { DARABONBA_PTR_SET_RVALUE(recordTemplateList_, recordTemplateList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveRecordTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLiveRecordTemplatesResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLiveRecordTemplatesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The list of recording templates.
    shared_ptr<vector<ListLiveRecordTemplatesResponseBody::RecordTemplateList>> recordTemplateList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The sorting order. By default, the query results are sorted by creation time in descending order.
    // 
    // Valid values:
    // 
    // *   asc: sorts the query results in ascending order.
    // *   desc: sorts the query results in descending order.
    shared_ptr<string> sortBy_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
