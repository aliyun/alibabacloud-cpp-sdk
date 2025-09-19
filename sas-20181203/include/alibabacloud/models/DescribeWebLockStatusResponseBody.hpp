// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCount, authCount_);
      DARABONBA_PTR_TO_JSON(BindCount, bindCount_);
      DARABONBA_PTR_TO_JSON(BlockCount, blockCount_);
      DARABONBA_PTR_TO_JSON(DirCount, dirCount_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WhiteCount, whiteCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCount, authCount_);
      DARABONBA_PTR_FROM_JSON(BindCount, bindCount_);
      DARABONBA_PTR_FROM_JSON(BlockCount, blockCount_);
      DARABONBA_PTR_FROM_JSON(DirCount, dirCount_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WhiteCount, whiteCount_);
    };
    DescribeWebLockStatusResponseBody() = default ;
    DescribeWebLockStatusResponseBody(const DescribeWebLockStatusResponseBody &) = default ;
    DescribeWebLockStatusResponseBody(DescribeWebLockStatusResponseBody &&) = default ;
    DescribeWebLockStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockStatusResponseBody() = default ;
    DescribeWebLockStatusResponseBody& operator=(const DescribeWebLockStatusResponseBody &) = default ;
    DescribeWebLockStatusResponseBody& operator=(DescribeWebLockStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authCount_ != nullptr
        && this->bindCount_ != nullptr && this->blockCount_ != nullptr && this->dirCount_ != nullptr && this->expireTime_ != nullptr && this->requestId_ != nullptr
        && this->whiteCount_ != nullptr; };
    // authCount Field Functions 
    bool hasAuthCount() const { return this->authCount_ != nullptr;};
    void deleteAuthCount() { this->authCount_ = nullptr;};
    inline int32_t authCount() const { DARABONBA_PTR_GET_DEFAULT(authCount_, 0) };
    inline DescribeWebLockStatusResponseBody& setAuthCount(int32_t authCount) { DARABONBA_PTR_SET_VALUE(authCount_, authCount) };


    // bindCount Field Functions 
    bool hasBindCount() const { return this->bindCount_ != nullptr;};
    void deleteBindCount() { this->bindCount_ = nullptr;};
    inline int32_t bindCount() const { DARABONBA_PTR_GET_DEFAULT(bindCount_, 0) };
    inline DescribeWebLockStatusResponseBody& setBindCount(int32_t bindCount) { DARABONBA_PTR_SET_VALUE(bindCount_, bindCount) };


    // blockCount Field Functions 
    bool hasBlockCount() const { return this->blockCount_ != nullptr;};
    void deleteBlockCount() { this->blockCount_ = nullptr;};
    inline int32_t blockCount() const { DARABONBA_PTR_GET_DEFAULT(blockCount_, 0) };
    inline DescribeWebLockStatusResponseBody& setBlockCount(int32_t blockCount) { DARABONBA_PTR_SET_VALUE(blockCount_, blockCount) };


    // dirCount Field Functions 
    bool hasDirCount() const { return this->dirCount_ != nullptr;};
    void deleteDirCount() { this->dirCount_ = nullptr;};
    inline int32_t dirCount() const { DARABONBA_PTR_GET_DEFAULT(dirCount_, 0) };
    inline DescribeWebLockStatusResponseBody& setDirCount(int32_t dirCount) { DARABONBA_PTR_SET_VALUE(dirCount_, dirCount) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeWebLockStatusResponseBody& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebLockStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // whiteCount Field Functions 
    bool hasWhiteCount() const { return this->whiteCount_ != nullptr;};
    void deleteWhiteCount() { this->whiteCount_ = nullptr;};
    inline int32_t whiteCount() const { DARABONBA_PTR_GET_DEFAULT(whiteCount_, 0) };
    inline DescribeWebLockStatusResponseBody& setWhiteCount(int32_t whiteCount) { DARABONBA_PTR_SET_VALUE(whiteCount_, whiteCount) };


  protected:
    // The total quota that you purchase for web tamper proofing.
    std::shared_ptr<int32_t> authCount_ = nullptr;
    // The associated tamper proofing quota.
    std::shared_ptr<int32_t> bindCount_ = nullptr;
    // The number of blocked processes.
    std::shared_ptr<int32_t> blockCount_ = nullptr;
    // The number of protected directories.
    std::shared_ptr<int32_t> dirCount_ = nullptr;
    // The timestamp generated when the quota for tamper proofing expires. Unit: millisecond.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of processes in the whitelist.
    std::shared_ptr<int32_t> whiteCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
