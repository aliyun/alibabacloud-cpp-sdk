// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OSSCHECKRESULTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OSSCHECKRESULTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class OssCheckResultListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OssCheckResultListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, OssCheckResultListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    OssCheckResultListResponseBody() = default ;
    OssCheckResultListResponseBody(const OssCheckResultListResponseBody &) = default ;
    OssCheckResultListResponseBody(OssCheckResultListResponseBody &&) = default ;
    OssCheckResultListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OssCheckResultListResponseBody() = default ;
    OssCheckResultListResponseBody& operator=(const OssCheckResultListResponseBody &) = default ;
    OssCheckResultListResponseBody& operator=(OssCheckResultListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(CopyFrom, copyFrom_);
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(IsCopy, isCopy_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Labels2, labels2_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(Msg, msg_);
        DARABONBA_PTR_TO_JSON(Object, object_);
        DARABONBA_PTR_TO_JSON(ScanResult, scanResult_);
        DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(CopyFrom, copyFrom_);
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(IsCopy, isCopy_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Labels2, labels2_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(Msg, msg_);
        DARABONBA_PTR_FROM_JSON(Object, object_);
        DARABONBA_PTR_FROM_JSON(ScanResult, scanResult_);
        DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucket_ == nullptr
        && this->code_ == nullptr && this->contentType_ == nullptr && this->copyFrom_ == nullptr && this->imageUrl_ == nullptr && this->isCopy_ == nullptr
        && this->jobName_ == nullptr && this->labels_ == nullptr && this->labels2_ == nullptr && this->md5_ == nullptr && this->msg_ == nullptr
        && this->object_ == nullptr && this->scanResult_ == nullptr && this->serviceCode_ == nullptr && this->serviceName_ == nullptr && this->taskId_ == nullptr
        && this->url_ == nullptr; };
      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline Items& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Items& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Items& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // copyFrom Field Functions 
      bool hasCopyFrom() const { return this->copyFrom_ != nullptr;};
      void deleteCopyFrom() { this->copyFrom_ = nullptr;};
      inline string getCopyFrom() const { DARABONBA_PTR_GET_DEFAULT(copyFrom_, "") };
      inline Items& setCopyFrom(string copyFrom) { DARABONBA_PTR_SET_VALUE(copyFrom_, copyFrom) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline Items& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // isCopy Field Functions 
      bool hasIsCopy() const { return this->isCopy_ != nullptr;};
      void deleteIsCopy() { this->isCopy_ = nullptr;};
      inline bool getIsCopy() const { DARABONBA_PTR_GET_DEFAULT(isCopy_, false) };
      inline Items& setIsCopy(bool isCopy) { DARABONBA_PTR_SET_VALUE(isCopy_, isCopy) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline Items& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
      inline vector<string> getLabels() { DARABONBA_PTR_GET(labels_, vector<string>) };
      inline Items& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Items& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // labels2 Field Functions 
      bool hasLabels2() const { return this->labels2_ != nullptr;};
      void deleteLabels2() { this->labels2_ = nullptr;};
      inline const vector<string> & getLabels2() const { DARABONBA_PTR_GET_CONST(labels2_, vector<string>) };
      inline vector<string> getLabels2() { DARABONBA_PTR_GET(labels2_, vector<string>) };
      inline Items& setLabels2(const vector<string> & labels2) { DARABONBA_PTR_SET_VALUE(labels2_, labels2) };
      inline Items& setLabels2(vector<string> && labels2) { DARABONBA_PTR_SET_RVALUE(labels2_, labels2) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Items& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // msg Field Functions 
      bool hasMsg() const { return this->msg_ != nullptr;};
      void deleteMsg() { this->msg_ = nullptr;};
      inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
      inline Items& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      // object Field Functions 
      bool hasObject() const { return this->object_ != nullptr;};
      void deleteObject() { this->object_ = nullptr;};
      inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
      inline Items& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      // scanResult Field Functions 
      bool hasScanResult() const { return this->scanResult_ != nullptr;};
      void deleteScanResult() { this->scanResult_ = nullptr;};
      inline string getScanResult() const { DARABONBA_PTR_GET_DEFAULT(scanResult_, "") };
      inline Items& setScanResult(string scanResult) { DARABONBA_PTR_SET_VALUE(scanResult_, scanResult) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline Items& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Items& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Items& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // Data of the current page.
      shared_ptr<string> bucket_ {};
      // Service code.
      shared_ptr<string> code_ {};
      // Primary service.
      shared_ptr<string> contentType_ {};
      // Whether to copy.
      shared_ptr<string> copyFrom_ {};
      // Details of the result.
      shared_ptr<string> imageUrl_ {};
      // Service name.
      shared_ptr<bool> isCopy_ {};
      // Image URL.
      shared_ptr<string> jobName_ {};
      // Further description of the error code.
      shared_ptr<vector<string>> labels_ {};
      // Job name.
      shared_ptr<vector<string>> labels2_ {};
      // Object name.
      shared_ptr<string> md5_ {};
      // Status code. 200 indicates success.
      shared_ptr<string> msg_ {};
      // OSS Bucket name.
      shared_ptr<string> object_ {};
      // Image labels.
      shared_ptr<string> scanResult_ {};
      // File MD5.
      shared_ptr<string> serviceCode_ {};
      // Task ID.
      shared_ptr<string> serviceName_ {};
      // Task URL.
      shared_ptr<string> taskId_ {};
      // Text labels.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->authStatus_ == nullptr
        && this->currentPage_ == nullptr && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // authStatus Field Functions 
    bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
    void deleteAuthStatus() { this->authStatus_ = nullptr;};
    inline string getAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, "") };
    inline OssCheckResultListResponseBody& setAuthStatus(string authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline OssCheckResultListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<OssCheckResultListResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<OssCheckResultListResponseBody::Items>) };
    inline vector<OssCheckResultListResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<OssCheckResultListResponseBody::Items>) };
    inline OssCheckResultListResponseBody& setItems(const vector<OssCheckResultListResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline OssCheckResultListResponseBody& setItems(vector<OssCheckResultListResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline OssCheckResultListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OssCheckResultListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline OssCheckResultListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Backend-assigned ID, used to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> authStatus_ {};
    // Page size.
    shared_ptr<int32_t> currentPage_ {};
    // Current page number.
    shared_ptr<vector<OssCheckResultListResponseBody::Items>> items_ {};
    // Total number of records.
    shared_ptr<int32_t> pageSize_ {};
    // Task status.
    shared_ptr<string> requestId_ {};
    // Authorization status.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
