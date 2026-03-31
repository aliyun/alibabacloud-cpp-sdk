// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIEXPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIEXPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApiExportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiExportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiExports, apiExports_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiExportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiExports, apiExports_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeApiExportsResponseBody() = default ;
    DescribeApiExportsResponseBody(const DescribeApiExportsResponseBody &) = default ;
    DescribeApiExportsResponseBody(DescribeApiExportsResponseBody &&) = default ;
    DescribeApiExportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiExportsResponseBody() = default ;
    DescribeApiExportsResponseBody& operator=(const DescribeApiExportsResponseBody &) = default ;
    DescribeApiExportsResponseBody& operator=(DescribeApiExportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiExports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiExports& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ApiExports& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ApiExports() = default ;
      ApiExports(const ApiExports &) = default ;
      ApiExports(ApiExports &&) = default ;
      ApiExports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiExports() = default ;
      ApiExports& operator=(const ApiExports &) = default ;
      ApiExports& operator=(ApiExports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->fileName_ == nullptr && this->fileUrl_ == nullptr && this->format_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ApiExports& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline ApiExports& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileUrl Field Functions 
      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
      void deleteFileUrl() { this->fileUrl_ = nullptr;};
      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
      inline ApiExports& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline ApiExports& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ApiExports& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ApiExports& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The time when the data export task was created. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> createTime_ {};
      // The name of the file.
      shared_ptr<string> fileName_ {};
      // The download URL of the exported file.
      shared_ptr<string> fileUrl_ {};
      // The format of the exported file.
      shared_ptr<string> format_ {};
      // The status of the data export task. Valid values:
      // 
      // * **expired**: The file is expired.
      // 
      // * **exporting**: Data is being exported.
      // 
      // * **completed**: Data is exported.
      shared_ptr<string> status_ {};
      // The type of the data export task. Valid values:
      // 
      // * **apisec_api**: API tasks
      // 
      // * **apisec_abnormal**: API risk tasks
      // 
      // * **apisec_event**: API security event tasks
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->apiExports_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // apiExports Field Functions 
    bool hasApiExports() const { return this->apiExports_ != nullptr;};
    void deleteApiExports() { this->apiExports_ = nullptr;};
    inline const vector<DescribeApiExportsResponseBody::ApiExports> & getApiExports() const { DARABONBA_PTR_GET_CONST(apiExports_, vector<DescribeApiExportsResponseBody::ApiExports>) };
    inline vector<DescribeApiExportsResponseBody::ApiExports> getApiExports() { DARABONBA_PTR_GET(apiExports_, vector<DescribeApiExportsResponseBody::ApiExports>) };
    inline DescribeApiExportsResponseBody& setApiExports(const vector<DescribeApiExportsResponseBody::ApiExports> & apiExports) { DARABONBA_PTR_SET_VALUE(apiExports_, apiExports) };
    inline DescribeApiExportsResponseBody& setApiExports(vector<DescribeApiExportsResponseBody::ApiExports> && apiExports) { DARABONBA_PTR_SET_RVALUE(apiExports_, apiExports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiExportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeApiExportsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The returned data export tasks.
    shared_ptr<vector<DescribeApiExportsResponseBody::ApiExports>> apiExports_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the data export task. Valid values:
    // 
    // *   **expired**: The file is expired.
    // *   **exporting**: Data is being exported.
    // *   **completed**: Data is exported.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
