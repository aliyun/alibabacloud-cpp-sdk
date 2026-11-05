// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSITMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSITMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class GetTransitMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransitMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ExpireAt, expireAt_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TransitId, transitId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransitMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ExpireAt, expireAt_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TransitId, transitId_);
    };
    GetTransitMetaResponseBody() = default ;
    GetTransitMetaResponseBody(const GetTransitMetaResponseBody &) = default ;
    GetTransitMetaResponseBody(GetTransitMetaResponseBody &&) = default ;
    GetTransitMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransitMetaResponseBody() = default ;
    GetTransitMetaResponseBody& operator=(const GetTransitMetaResponseBody &) = default ;
    GetTransitMetaResponseBody& operator=(GetTransitMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->expireAt_ == nullptr && this->filePath_ == nullptr && this->requestId_ == nullptr && this->size_ == nullptr && this->status_ == nullptr
        && this->transitId_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline GetTransitMetaResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // expireAt Field Functions 
    bool hasExpireAt() const { return this->expireAt_ != nullptr;};
    void deleteExpireAt() { this->expireAt_ = nullptr;};
    inline int64_t getExpireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, 0L) };
    inline GetTransitMetaResponseBody& setExpireAt(int64_t expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline GetTransitMetaResponseBody& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTransitMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetTransitMetaResponseBody& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTransitMetaResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transitId Field Functions 
    bool hasTransitId() const { return this->transitId_ != nullptr;};
    void deleteTransitId() { this->transitId_ = nullptr;};
    inline string getTransitId() const { DARABONBA_PTR_GET_DEFAULT(transitId_, "") };
    inline GetTransitMetaResponseBody& setTransitId(string transitId) { DARABONBA_PTR_SET_VALUE(transitId_, transitId) };


  protected:
    // The temporary download URL. If Network is not specified, null is returned. The URL may be unavailable if the file is not yet available. Do not write this URL to logs, store it for a long time, or forward it to irrelevant users.
    shared_ptr<string> downloadUrl_ {};
    // The expiration time of the transit record. The value is a UTC UNIX timestamp in milliseconds, which is the number of milliseconds that have elapsed since 00:00:00 UTC on January 1, 1970. You can directly compare this value with the current UNIX timestamp in milliseconds without adding or subtracting 8 hours. Do not continue to use the record after this time.
    shared_ptr<int64_t> expireAt_ {};
    // The opaque object path corresponding to the file. Callers must not parse or construct this value.
    shared_ptr<string> filePath_ {};
    // The request ID, which is used for Tracing Analysis and troubleshooting.
    shared_ptr<string> requestId_ {};
    // The file size, in bytes. If no available file is detected, null may be returned.
    shared_ptr<int64_t> size_ {};
    // The status of the transit file. A value of PENDING indicates that the file is not yet available, and the caller can query again later. A value of SUCCESS indicates that the file is available.
    shared_ptr<string> status_ {};
    // The transit ID.
    shared_ptr<string> transitId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
