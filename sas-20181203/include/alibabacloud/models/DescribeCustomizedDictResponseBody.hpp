// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDDICTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDDICTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomizedDictResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizedDictResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizedDictResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
    };
    DescribeCustomizedDictResponseBody() = default ;
    DescribeCustomizedDictResponseBody(const DescribeCustomizedDictResponseBody &) = default ;
    DescribeCustomizedDictResponseBody(DescribeCustomizedDictResponseBody &&) = default ;
    DescribeCustomizedDictResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizedDictResponseBody() = default ;
    DescribeCustomizedDictResponseBody& operator=(const DescribeCustomizedDictResponseBody &) = default ;
    DescribeCustomizedDictResponseBody& operator=(DescribeCustomizedDictResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->fileName_ == nullptr && return this->fileSize_ == nullptr && return this->limit_ == nullptr && return this->ossUrl_ == nullptr && return this->requestId_ == nullptr
        && return this->uploadTime_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeCustomizedDictResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeCustomizedDictResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline DescribeCustomizedDictResponseBody& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline DescribeCustomizedDictResponseBody& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string ossUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline DescribeCustomizedDictResponseBody& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomizedDictResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadTime Field Functions 
    bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
    void deleteUploadTime() { this->uploadTime_ = nullptr;};
    inline int64_t uploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, 0L) };
    inline DescribeCustomizedDictResponseBody& setUploadTime(int64_t uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


  protected:
    // The current number of added weak password rules.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The name of the OSS file containing weak passwords.
    std::shared_ptr<string> fileName_ = nullptr;
    // File size, in bytes.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // The upper limit for adding weak password rules.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The URL of the OSS object.
    std::shared_ptr<string> ossUrl_ = nullptr;
    // A unique identifier generated by Alibaba Cloud for this request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Upload timestamp, in milliseconds.
    std::shared_ptr<int64_t> uploadTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
