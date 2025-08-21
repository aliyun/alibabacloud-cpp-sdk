// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTBUCKETLIFECYCLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTBUCKETLIFECYCLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class PutBucketLifecycleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutBucketLifecycleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowSameActionOverlap, allowSameActionOverlap_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(CreatedBeforeDate, createdBeforeDate_);
      DARABONBA_PTR_TO_JSON(ExpirationDays, expirationDays_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, PutBucketLifecycleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowSameActionOverlap, allowSameActionOverlap_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(CreatedBeforeDate, createdBeforeDate_);
      DARABONBA_PTR_FROM_JSON(ExpirationDays, expirationDays_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    PutBucketLifecycleRequest() = default ;
    PutBucketLifecycleRequest(const PutBucketLifecycleRequest &) = default ;
    PutBucketLifecycleRequest(PutBucketLifecycleRequest &&) = default ;
    PutBucketLifecycleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutBucketLifecycleRequest() = default ;
    PutBucketLifecycleRequest& operator=(const PutBucketLifecycleRequest &) = default ;
    PutBucketLifecycleRequest& operator=(PutBucketLifecycleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowSameActionOverlap_ != nullptr
        && this->bucketName_ != nullptr && this->createdBeforeDate_ != nullptr && this->expirationDays_ != nullptr && this->prefix_ != nullptr && this->ruleId_ != nullptr
        && this->status_ != nullptr; };
    // allowSameActionOverlap Field Functions 
    bool hasAllowSameActionOverlap() const { return this->allowSameActionOverlap_ != nullptr;};
    void deleteAllowSameActionOverlap() { this->allowSameActionOverlap_ = nullptr;};
    inline string allowSameActionOverlap() const { DARABONBA_PTR_GET_DEFAULT(allowSameActionOverlap_, "") };
    inline PutBucketLifecycleRequest& setAllowSameActionOverlap(string allowSameActionOverlap) { DARABONBA_PTR_SET_VALUE(allowSameActionOverlap_, allowSameActionOverlap) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline PutBucketLifecycleRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // createdBeforeDate Field Functions 
    bool hasCreatedBeforeDate() const { return this->createdBeforeDate_ != nullptr;};
    void deleteCreatedBeforeDate() { this->createdBeforeDate_ = nullptr;};
    inline string createdBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(createdBeforeDate_, "") };
    inline PutBucketLifecycleRequest& setCreatedBeforeDate(string createdBeforeDate) { DARABONBA_PTR_SET_VALUE(createdBeforeDate_, createdBeforeDate) };


    // expirationDays Field Functions 
    bool hasExpirationDays() const { return this->expirationDays_ != nullptr;};
    void deleteExpirationDays() { this->expirationDays_ = nullptr;};
    inline int64_t expirationDays() const { DARABONBA_PTR_GET_DEFAULT(expirationDays_, 0L) };
    inline PutBucketLifecycleRequest& setExpirationDays(int64_t expirationDays) { DARABONBA_PTR_SET_VALUE(expirationDays_, expirationDays) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline PutBucketLifecycleRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PutBucketLifecycleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PutBucketLifecycleRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Specifies whether to allow overlapped prefixes. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<string> allowSameActionOverlap_ = nullptr;
    // The name of the bucket.
    // 
    // This parameter is required.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The expiration time. EOS executes a lifecycle rule for objects that were last updated before the expiration time.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // >  ExpirationDays and CreateBeforeDate are mutually exclusive.
    std::shared_ptr<string> createdBeforeDate_ = nullptr;
    // The number of days from when the objects were last modified to when the lifecycle rule takes effect. The value must be a positive integer that is greater than 0.
    // 
    // >  ExpirationDays and CreateBeforeDate are mutually exclusive.
    std::shared_ptr<int64_t> expirationDays_ = nullptr;
    // The prefix of a object name. The prefix must be unique.
    // 
    // *   If you specify a prefix, the rule applies only to objects in the bucket that match the prefix.
    // *   If you do not specify a prefix, the rule applies to all objects in the bucket.
    std::shared_ptr<string> prefix_ = nullptr;
    // The unique ID of the rule. The ID of a lifecycle rule can be up to 255 bytes in length.
    // 
    // *   You do not need to configure this parameter when you create a rule. The system automatically generates a unique ID.
    // *   When you update a rule, you need to specify this parameter. Make sure that the rule specified by RuleId exists. Otherwise, an error occurs.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
