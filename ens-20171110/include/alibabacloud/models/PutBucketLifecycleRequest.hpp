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
    virtual bool empty() const override { return this->allowSameActionOverlap_ == nullptr
        && this->bucketName_ == nullptr && this->createdBeforeDate_ == nullptr && this->expirationDays_ == nullptr && this->prefix_ == nullptr && this->ruleId_ == nullptr
        && this->status_ == nullptr; };
    // allowSameActionOverlap Field Functions 
    bool hasAllowSameActionOverlap() const { return this->allowSameActionOverlap_ != nullptr;};
    void deleteAllowSameActionOverlap() { this->allowSameActionOverlap_ = nullptr;};
    inline bool getAllowSameActionOverlap() const { DARABONBA_PTR_GET_DEFAULT(allowSameActionOverlap_, false) };
    inline PutBucketLifecycleRequest& setAllowSameActionOverlap(bool allowSameActionOverlap) { DARABONBA_PTR_SET_VALUE(allowSameActionOverlap_, allowSameActionOverlap) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline PutBucketLifecycleRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // createdBeforeDate Field Functions 
    bool hasCreatedBeforeDate() const { return this->createdBeforeDate_ != nullptr;};
    void deleteCreatedBeforeDate() { this->createdBeforeDate_ = nullptr;};
    inline string getCreatedBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(createdBeforeDate_, "") };
    inline PutBucketLifecycleRequest& setCreatedBeforeDate(string createdBeforeDate) { DARABONBA_PTR_SET_VALUE(createdBeforeDate_, createdBeforeDate) };


    // expirationDays Field Functions 
    bool hasExpirationDays() const { return this->expirationDays_ != nullptr;};
    void deleteExpirationDays() { this->expirationDays_ = nullptr;};
    inline int64_t getExpirationDays() const { DARABONBA_PTR_GET_DEFAULT(expirationDays_, 0L) };
    inline PutBucketLifecycleRequest& setExpirationDays(int64_t expirationDays) { DARABONBA_PTR_SET_VALUE(expirationDays_, expirationDays) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline PutBucketLifecycleRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PutBucketLifecycleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PutBucketLifecycleRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Whether to allow overlapping prefixes. Valid values:
    // 
    // - **true**: Overlapping prefixes are allowed.
    // 
    // - **false** (default): Overlapping prefixes are not allowed.
    shared_ptr<bool> allowSameActionOverlap_ {};
    // The name of the bucket.
    // 
    // This parameter is required.
    shared_ptr<string> bucketName_ {};
    // The date before which objects expire. The system applies the lifecycle rule to objects last modified before this date.
    // 
    // Use ISO 8601 format and UTC time. Format: yyyy-MM-ddTHH:mm:ssZ.
    // 
    // > ExpirationDays and CreatedBeforeDate are mutually exclusive. Specify one.
    shared_ptr<string> createdBeforeDate_ {};
    // The number of days after an object\\"s last modification when the lifecycle rule takes effect. Must be a positive integer greater than zero.
    // 
    // > ExpirationDays and CreatedBeforeDate are mutually exclusive. Specify one.
    shared_ptr<int64_t> expirationDays_ {};
    // The prefix that the rule applies to. You cannot set duplicate prefixes.
    // 
    // - If you specify a prefix, the rule applies only to objects in the bucket whose names start with that prefix.
    // 
    // - If you leave Prefix empty, the rule applies to all objects in the bucket.
    shared_ptr<string> prefix_ {};
    // A unique ID that identifies the rule. Maximum length is 255 bytes.
    // 
    // - Omit this parameter when creating a new rule. The system generates a unique ID automatically.
    // 
    // - Specify RuleId when updating an existing rule. The rule must exist. Otherwise, the call fails.
    shared_ptr<string> ruleId_ {};
    // The status of the rule. Valid values:
    // 
    // - **Enabled**: The system runs the rule on schedule.
    // 
    // - **Disabled**: The system ignores the rule.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
