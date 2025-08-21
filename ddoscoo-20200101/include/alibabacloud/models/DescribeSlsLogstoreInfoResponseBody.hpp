// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLSLOGSTOREINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLSLOGSTOREINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSlsLogstoreInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlsLogstoreInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Used, used_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlsLogstoreInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Used, used_);
    };
    DescribeSlsLogstoreInfoResponseBody() = default ;
    DescribeSlsLogstoreInfoResponseBody(const DescribeSlsLogstoreInfoResponseBody &) = default ;
    DescribeSlsLogstoreInfoResponseBody(DescribeSlsLogstoreInfoResponseBody &&) = default ;
    DescribeSlsLogstoreInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlsLogstoreInfoResponseBody() = default ;
    DescribeSlsLogstoreInfoResponseBody& operator=(const DescribeSlsLogstoreInfoResponseBody &) = default ;
    DescribeSlsLogstoreInfoResponseBody& operator=(DescribeSlsLogstoreInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logStore_ != nullptr
        && this->project_ != nullptr && this->quota_ != nullptr && this->requestId_ != nullptr && this->ttl_ != nullptr && this->used_ != nullptr; };
    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline DescribeSlsLogstoreInfoResponseBody& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DescribeSlsLogstoreInfoResponseBody& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int64_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
    inline DescribeSlsLogstoreInfoResponseBody& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlsLogstoreInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeSlsLogstoreInfoResponseBody& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // used Field Functions 
    bool hasUsed() const { return this->used_ != nullptr;};
    void deleteUsed() { this->used_ = nullptr;};
    inline int64_t used() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
    inline DescribeSlsLogstoreInfoResponseBody& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


  protected:
    // The Logstore of the Anti-DDoS Pro or Anti-DDoS Premium instance.
    std::shared_ptr<string> logStore_ = nullptr;
    // The Logstore project of the Anti-DDoS Pro or Anti-DDoS Premium instance.
    std::shared_ptr<string> project_ = nullptr;
    // The available log storage capacity. Unit: bytes.
    std::shared_ptr<int64_t> quota_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The log storage duration. Unit: days.
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // The used log storage capacity. Unit: bytes.
    // 
    // > The statistics on Log Service are delayed for about two hours.
    std::shared_ptr<int64_t> used_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
