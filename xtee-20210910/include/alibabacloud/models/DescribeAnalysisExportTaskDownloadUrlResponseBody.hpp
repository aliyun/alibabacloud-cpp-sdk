// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANALYSISEXPORTTASKDOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANALYSISEXPORTTASKDOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAnalysisExportTaskDownloadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnalysisExportTaskDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnalysisExportTaskDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeAnalysisExportTaskDownloadUrlResponseBody() = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBody(const DescribeAnalysisExportTaskDownloadUrlResponseBody &) = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBody(DescribeAnalysisExportTaskDownloadUrlResponseBody &&) = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnalysisExportTaskDownloadUrlResponseBody() = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBody& operator=(const DescribeAnalysisExportTaskDownloadUrlResponseBody &) = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBody& operator=(DescribeAnalysisExportTaskDownloadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(downloadFileUrl, downloadFileUrl_);
        DARABONBA_PTR_TO_JSON(executeTime, executeTime_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(downloadFileUrl, downloadFileUrl_);
        DARABONBA_PTR_FROM_JSON(executeTime, executeTime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadFileUrl_ == nullptr
        && this->executeTime_ == nullptr && this->status_ == nullptr; };
      // downloadFileUrl Field Functions 
      bool hasDownloadFileUrl() const { return this->downloadFileUrl_ != nullptr;};
      void deleteDownloadFileUrl() { this->downloadFileUrl_ = nullptr;};
      inline string getDownloadFileUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadFileUrl_, "") };
      inline ResultObject& setDownloadFileUrl(string downloadFileUrl) { DARABONBA_PTR_SET_VALUE(downloadFileUrl_, downloadFileUrl) };


      // executeTime Field Functions 
      bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
      void deleteExecuteTime() { this->executeTime_ = nullptr;};
      inline int64_t getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
      inline ResultObject& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Download URL.
      shared_ptr<string> downloadFileUrl_ {};
      // Download execution time
      shared_ptr<int64_t> executeTime_ {};
      // Task status.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAnalysisExportTaskDownloadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeAnalysisExportTaskDownloadUrlResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeAnalysisExportTaskDownloadUrlResponseBody::ResultObject) };
    inline DescribeAnalysisExportTaskDownloadUrlResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeAnalysisExportTaskDownloadUrlResponseBody::ResultObject) };
    inline DescribeAnalysisExportTaskDownloadUrlResponseBody& setResultObject(const DescribeAnalysisExportTaskDownloadUrlResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeAnalysisExportTaskDownloadUrlResponseBody& setResultObject(DescribeAnalysisExportTaskDownloadUrlResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<DescribeAnalysisExportTaskDownloadUrlResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
