// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUCKETLIFECYCLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBUCKETLIFECYCLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetBucketLifecycleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBucketLifecycleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBucketLifecycleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    GetBucketLifecycleRequest() = default ;
    GetBucketLifecycleRequest(const GetBucketLifecycleRequest &) = default ;
    GetBucketLifecycleRequest(GetBucketLifecycleRequest &&) = default ;
    GetBucketLifecycleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBucketLifecycleRequest() = default ;
    GetBucketLifecycleRequest& operator=(const GetBucketLifecycleRequest &) = default ;
    GetBucketLifecycleRequest& operator=(GetBucketLifecycleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->ruleId_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline GetBucketLifecycleRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetBucketLifecycleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The name of the bucket.
    // 
    // This parameter is required.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The ID of the rule that you want to query. If this parameter is not specified, all rules are returned.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
