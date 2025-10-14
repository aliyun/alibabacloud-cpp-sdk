// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTBUCKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTBUCKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class PutBucketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutBucketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketAcl, bucketAcl_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DispatchScope, dispatchScope_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(LogicalBucketType, logicalBucketType_);
    };
    friend void from_json(const Darabonba::Json& j, PutBucketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketAcl, bucketAcl_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DispatchScope, dispatchScope_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(LogicalBucketType, logicalBucketType_);
    };
    PutBucketRequest() = default ;
    PutBucketRequest(const PutBucketRequest &) = default ;
    PutBucketRequest(PutBucketRequest &&) = default ;
    PutBucketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutBucketRequest() = default ;
    PutBucketRequest& operator=(const PutBucketRequest &) = default ;
    PutBucketRequest& operator=(PutBucketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketAcl_ == nullptr
        && return this->bucketName_ == nullptr && return this->comment_ == nullptr && return this->dispatchScope_ == nullptr && return this->ensRegionId_ == nullptr && return this->logicalBucketType_ == nullptr; };
    // bucketAcl Field Functions 
    bool hasBucketAcl() const { return this->bucketAcl_ != nullptr;};
    void deleteBucketAcl() { this->bucketAcl_ = nullptr;};
    inline string bucketAcl() const { DARABONBA_PTR_GET_DEFAULT(bucketAcl_, "") };
    inline PutBucketRequest& setBucketAcl(string bucketAcl) { DARABONBA_PTR_SET_VALUE(bucketAcl_, bucketAcl) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline PutBucketRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline PutBucketRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // dispatchScope Field Functions 
    bool hasDispatchScope() const { return this->dispatchScope_ != nullptr;};
    void deleteDispatchScope() { this->dispatchScope_ = nullptr;};
    inline string dispatchScope() const { DARABONBA_PTR_GET_DEFAULT(dispatchScope_, "") };
    inline PutBucketRequest& setDispatchScope(string dispatchScope) { DARABONBA_PTR_SET_VALUE(dispatchScope_, dispatchScope) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline PutBucketRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // logicalBucketType Field Functions 
    bool hasLogicalBucketType() const { return this->logicalBucketType_ != nullptr;};
    void deleteLogicalBucketType() { this->logicalBucketType_ = nullptr;};
    inline string logicalBucketType() const { DARABONBA_PTR_GET_DEFAULT(logicalBucketType_, "") };
    inline PutBucketRequest& setLogicalBucketType(string logicalBucketType) { DARABONBA_PTR_SET_VALUE(logicalBucketType_, logicalBucketType) };


  protected:
    std::shared_ptr<string> bucketAcl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bucketName_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> dispatchScope_ = nullptr;
    std::shared_ptr<string> ensRegionId_ = nullptr;
    std::shared_ptr<string> logicalBucketType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
