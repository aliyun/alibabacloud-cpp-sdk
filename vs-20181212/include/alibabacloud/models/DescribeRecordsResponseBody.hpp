// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextStartTime, nextStartTime_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextStartTime, nextStartTime_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRecordsResponseBody() = default ;
    DescribeRecordsResponseBody(const DescribeRecordsResponseBody &) = default ;
    DescribeRecordsResponseBody(DescribeRecordsResponseBody &&) = default ;
    DescribeRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordsResponseBody() = default ;
    DescribeRecordsResponseBody& operator=(const DescribeRecordsResponseBody &) = default ;
    DescribeRecordsResponseBody& operator=(DescribeRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
        DARABONBA_PTR_TO_JSON(OssObject, ossObject_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(StreamId, streamId_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(Width, width_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
        DARABONBA_PTR_FROM_JSON(OssObject, ossObject_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(StreamId, streamId_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
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
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->fileFormat_ == nullptr && this->height_ == nullptr && this->id_ == nullptr && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr
        && this->ossObject_ == nullptr && this->startTime_ == nullptr && this->streamId_ == nullptr && this->templateId_ == nullptr && this->type_ == nullptr
        && this->url_ == nullptr && this->width_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Records& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // fileFormat Field Functions 
      bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
      void deleteFileFormat() { this->fileFormat_ = nullptr;};
      inline string getFileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
      inline Records& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline int64_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
      inline Records& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Records& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ossBucket Field Functions 
      bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
      void deleteOssBucket() { this->ossBucket_ = nullptr;};
      inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
      inline Records& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


      // ossEndpoint Field Functions 
      bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
      void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
      inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
      inline Records& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


      // ossObject Field Functions 
      bool hasOssObject() const { return this->ossObject_ != nullptr;};
      void deleteOssObject() { this->ossObject_ = nullptr;};
      inline string getOssObject() const { DARABONBA_PTR_GET_DEFAULT(ossObject_, "") };
      inline Records& setOssObject(string ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Records& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // streamId Field Functions 
      bool hasStreamId() const { return this->streamId_ != nullptr;};
      void deleteStreamId() { this->streamId_ = nullptr;};
      inline string getStreamId() const { DARABONBA_PTR_GET_DEFAULT(streamId_, "") };
      inline Records& setStreamId(string streamId) { DARABONBA_PTR_SET_VALUE(streamId_, streamId) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Records& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Records& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Records& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline int64_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
      inline Records& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      shared_ptr<string> endTime_ {};
      shared_ptr<string> fileFormat_ {};
      shared_ptr<int64_t> height_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> ossBucket_ {};
      shared_ptr<string> ossEndpoint_ {};
      shared_ptr<string> ossObject_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> streamId_ {};
      shared_ptr<string> templateId_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> url_ {};
      shared_ptr<int64_t> width_ {};
    };

    virtual bool empty() const override { return this->nextStartTime_ == nullptr
        && this->pageCount_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->records_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // nextStartTime Field Functions 
    bool hasNextStartTime() const { return this->nextStartTime_ != nullptr;};
    void deleteNextStartTime() { this->nextStartTime_ = nullptr;};
    inline string getNextStartTime() const { DARABONBA_PTR_GET_DEFAULT(nextStartTime_, "") };
    inline DescribeRecordsResponseBody& setNextStartTime(string nextStartTime) { DARABONBA_PTR_SET_VALUE(nextStartTime_, nextStartTime) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int64_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0L) };
    inline DescribeRecordsResponseBody& setPageCount(int64_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribeRecordsResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeRecordsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribeRecordsResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribeRecordsResponseBody::Records>) };
    inline vector<DescribeRecordsResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<DescribeRecordsResponseBody::Records>) };
    inline DescribeRecordsResponseBody& setRecords(const vector<DescribeRecordsResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeRecordsResponseBody& setRecords(vector<DescribeRecordsResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeRecordsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> nextStartTime_ {};
    shared_ptr<int64_t> pageCount_ {};
    shared_ptr<int64_t> pageNum_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<vector<DescribeRecordsResponseBody::Records>> records_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
