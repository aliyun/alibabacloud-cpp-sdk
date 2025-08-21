// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTBUCKETACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTBUCKETACLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class PutBucketAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutBucketAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketAcl, bucketAcl_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
    };
    friend void from_json(const Darabonba::Json& j, PutBucketAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketAcl, bucketAcl_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
    };
    PutBucketAclRequest() = default ;
    PutBucketAclRequest(const PutBucketAclRequest &) = default ;
    PutBucketAclRequest(PutBucketAclRequest &&) = default ;
    PutBucketAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutBucketAclRequest() = default ;
    PutBucketAclRequest& operator=(const PutBucketAclRequest &) = default ;
    PutBucketAclRequest& operator=(PutBucketAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketAcl_ != nullptr
        && this->bucketName_ != nullptr; };
    // bucketAcl Field Functions 
    bool hasBucketAcl() const { return this->bucketAcl_ != nullptr;};
    void deleteBucketAcl() { this->bucketAcl_ = nullptr;};
    inline string bucketAcl() const { DARABONBA_PTR_GET_DEFAULT(bucketAcl_, "") };
    inline PutBucketAclRequest& setBucketAcl(string bucketAcl) { DARABONBA_PTR_SET_VALUE(bucketAcl_, bucketAcl) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline PutBucketAclRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


  protected:
    // The access control list (ACL) of the bucket.
    // 
    // *   **public-read-write**
    // *   **public-read**
    // *   **private** (default)
    // 
    // This parameter is required.
    std::shared_ptr<string> bucketAcl_ = nullptr;
    // The name of the bucket.
    // 
    // This parameter is required.
    std::shared_ptr<string> bucketName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
