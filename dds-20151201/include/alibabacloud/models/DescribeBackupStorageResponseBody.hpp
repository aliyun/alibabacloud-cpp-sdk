// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSTORAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSTORAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeBackupStorageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupStorageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FreeSize, freeSize_);
      DARABONBA_PTR_TO_JSON(FullStorageSize, fullStorageSize_);
      DARABONBA_PTR_TO_JSON(LogStorageSize, logStorageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupStorageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FreeSize, freeSize_);
      DARABONBA_PTR_FROM_JSON(FullStorageSize, fullStorageSize_);
      DARABONBA_PTR_FROM_JSON(LogStorageSize, logStorageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupStorageResponseBody() = default ;
    DescribeBackupStorageResponseBody(const DescribeBackupStorageResponseBody &) = default ;
    DescribeBackupStorageResponseBody(DescribeBackupStorageResponseBody &&) = default ;
    DescribeBackupStorageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupStorageResponseBody() = default ;
    DescribeBackupStorageResponseBody& operator=(const DescribeBackupStorageResponseBody &) = default ;
    DescribeBackupStorageResponseBody& operator=(DescribeBackupStorageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->freeSize_ == nullptr
        && this->fullStorageSize_ == nullptr && this->logStorageSize_ == nullptr && this->requestId_ == nullptr; };
    // freeSize Field Functions 
    bool hasFreeSize() const { return this->freeSize_ != nullptr;};
    void deleteFreeSize() { this->freeSize_ = nullptr;};
    inline int64_t getFreeSize() const { DARABONBA_PTR_GET_DEFAULT(freeSize_, 0L) };
    inline DescribeBackupStorageResponseBody& setFreeSize(int64_t freeSize) { DARABONBA_PTR_SET_VALUE(freeSize_, freeSize) };


    // fullStorageSize Field Functions 
    bool hasFullStorageSize() const { return this->fullStorageSize_ != nullptr;};
    void deleteFullStorageSize() { this->fullStorageSize_ = nullptr;};
    inline int64_t getFullStorageSize() const { DARABONBA_PTR_GET_DEFAULT(fullStorageSize_, 0L) };
    inline DescribeBackupStorageResponseBody& setFullStorageSize(int64_t fullStorageSize) { DARABONBA_PTR_SET_VALUE(fullStorageSize_, fullStorageSize) };


    // logStorageSize Field Functions 
    bool hasLogStorageSize() const { return this->logStorageSize_ != nullptr;};
    void deleteLogStorageSize() { this->logStorageSize_ = nullptr;};
    inline int64_t getLogStorageSize() const { DARABONBA_PTR_GET_DEFAULT(logStorageSize_, 0L) };
    inline DescribeBackupStorageResponseBody& setLogStorageSize(int64_t logStorageSize) { DARABONBA_PTR_SET_VALUE(logStorageSize_, logStorageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupStorageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The free quota for the storage capacity used for backup. Unit: bytes.
    shared_ptr<int64_t> freeSize_ {};
    // The storage capacity used for the full backup. Unit: bytes.
    // 
    // >  Instances that use cloud disks support snapshot backup. The size of the storage used for the current full backup is the size of the snapshot chain.
    shared_ptr<int64_t> fullStorageSize_ {};
    // The storage capacity used for the log backup. Unit: bytes.
    shared_ptr<int64_t> logStorageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
