// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLSLOGSTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLSLOGSTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSlsLogStoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlsLogStoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Used, used_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlsLogStoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Used, used_);
    };
    DescribeSlsLogStoreResponseBody() = default ;
    DescribeSlsLogStoreResponseBody(const DescribeSlsLogStoreResponseBody &) = default ;
    DescribeSlsLogStoreResponseBody(DescribeSlsLogStoreResponseBody &&) = default ;
    DescribeSlsLogStoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlsLogStoreResponseBody() = default ;
    DescribeSlsLogStoreResponseBody& operator=(const DescribeSlsLogStoreResponseBody &) = default ;
    DescribeSlsLogStoreResponseBody& operator=(DescribeSlsLogStoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logStoreName_ != nullptr
        && this->projectName_ != nullptr && this->quota_ != nullptr && this->requestId_ != nullptr && this->ttl_ != nullptr && this->used_ != nullptr; };
    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline DescribeSlsLogStoreResponseBody& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeSlsLogStoreResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int64_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
    inline DescribeSlsLogStoreResponseBody& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlsLogStoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeSlsLogStoreResponseBody& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // used Field Functions 
    bool hasUsed() const { return this->used_ != nullptr;};
    void deleteUsed() { this->used_ = nullptr;};
    inline int64_t used() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
    inline DescribeSlsLogStoreResponseBody& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


  protected:
    // The name of the Logstore.
    std::shared_ptr<string> logStoreName_ = nullptr;
    // The name of the Simple Log Service project.
    std::shared_ptr<string> projectName_ = nullptr;
    // The capacity of the Logstore. Unit: bytes.
    std::shared_ptr<int64_t> quota_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The storage duration of the Logstore. Unit: days.
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // The used capacity of the Logstore. Unit: bytes.
    std::shared_ptr<int64_t> used_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
