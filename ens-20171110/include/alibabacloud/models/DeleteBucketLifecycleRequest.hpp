// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBUCKETLIFECYCLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBUCKETLIFECYCLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteBucketLifecycleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBucketLifecycleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBucketLifecycleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DeleteBucketLifecycleRequest() = default ;
    DeleteBucketLifecycleRequest(const DeleteBucketLifecycleRequest &) = default ;
    DeleteBucketLifecycleRequest(DeleteBucketLifecycleRequest &&) = default ;
    DeleteBucketLifecycleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBucketLifecycleRequest() = default ;
    DeleteBucketLifecycleRequest& operator=(const DeleteBucketLifecycleRequest &) = default ;
    DeleteBucketLifecycleRequest& operator=(DeleteBucketLifecycleRequest &&) = default ;
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
    inline DeleteBucketLifecycleRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DeleteBucketLifecycleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The name of the bucket.
    // 
    // This parameter is required.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The ID of the rule. If this parameter is not specified, all rules are removed.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
