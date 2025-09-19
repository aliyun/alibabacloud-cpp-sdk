// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSTORESTORAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSTORESTORAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLogstoreStorageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogstoreStorageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(Preserve, preserve_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Used, used_);
      DARABONBA_PTR_TO_JSON(UserProject, userProject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogstoreStorageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(Preserve, preserve_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Used, used_);
      DARABONBA_PTR_FROM_JSON(UserProject, userProject_);
    };
    DescribeLogstoreStorageResponseBody() = default ;
    DescribeLogstoreStorageResponseBody(const DescribeLogstoreStorageResponseBody &) = default ;
    DescribeLogstoreStorageResponseBody(DescribeLogstoreStorageResponseBody &&) = default ;
    DescribeLogstoreStorageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogstoreStorageResponseBody() = default ;
    DescribeLogstoreStorageResponseBody& operator=(const DescribeLogstoreStorageResponseBody &) = default ;
    DescribeLogstoreStorageResponseBody& operator=(DescribeLogstoreStorageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logstore_ != nullptr
        && this->preserve_ != nullptr && this->requestId_ != nullptr && this->ttl_ != nullptr && this->used_ != nullptr && this->userProject_ != nullptr; };
    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline DescribeLogstoreStorageResponseBody& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // preserve Field Functions 
    bool hasPreserve() const { return this->preserve_ != nullptr;};
    void deletePreserve() { this->preserve_ = nullptr;};
    inline int64_t preserve() const { DARABONBA_PTR_GET_DEFAULT(preserve_, 0L) };
    inline DescribeLogstoreStorageResponseBody& setPreserve(int64_t preserve) { DARABONBA_PTR_SET_VALUE(preserve_, preserve) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogstoreStorageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeLogstoreStorageResponseBody& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // used Field Functions 
    bool hasUsed() const { return this->used_ != nullptr;};
    void deleteUsed() { this->used_ = nullptr;};
    inline int64_t used() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
    inline DescribeLogstoreStorageResponseBody& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


    // userProject Field Functions 
    bool hasUserProject() const { return this->userProject_ != nullptr;};
    void deleteUserProject() { this->userProject_ = nullptr;};
    inline string userProject() const { DARABONBA_PTR_GET_DEFAULT(userProject_, "") };
    inline DescribeLogstoreStorageResponseBody& setUserProject(string userProject) { DARABONBA_PTR_SET_VALUE(userProject_, userProject) };


  protected:
    // The name of the dedicated Logstore that is used to store full logs of Security Center. The value is fixed as **sas-log**.
    std::shared_ptr<string> logstore_ = nullptr;
    // The purchased log storage capacity, in GB.
    std::shared_ptr<int64_t> preserve_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of days during which logs can be retained. The value is fixed as **180**, which indicates that logs can be retained for 180 days.
    // 
    // >  You are not allowed to change the value of this parameter.
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // The used log storage capacity, in GB.
    std::shared_ptr<int64_t> used_ = nullptr;
    // The name of the dedicated Project that is used to store full logs of Security Center.
    std::shared_ptr<string> userProject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
