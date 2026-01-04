// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUCKETACLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBUCKETACLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetBucketAclResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBucketAclResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BucketAcl, bucketAcl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBucketAclResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketAcl, bucketAcl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBucketAclResponseBody() = default ;
    GetBucketAclResponseBody(const GetBucketAclResponseBody &) = default ;
    GetBucketAclResponseBody(GetBucketAclResponseBody &&) = default ;
    GetBucketAclResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBucketAclResponseBody() = default ;
    GetBucketAclResponseBody& operator=(const GetBucketAclResponseBody &) = default ;
    GetBucketAclResponseBody& operator=(GetBucketAclResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketAcl_ == nullptr
        && this->requestId_ == nullptr; };
    // bucketAcl Field Functions 
    bool hasBucketAcl() const { return this->bucketAcl_ != nullptr;};
    void deleteBucketAcl() { this->bucketAcl_ = nullptr;};
    inline string getBucketAcl() const { DARABONBA_PTR_GET_DEFAULT(bucketAcl_, "") };
    inline GetBucketAclResponseBody& setBucketAcl(string bucketAcl) { DARABONBA_PTR_SET_VALUE(bucketAcl_, bucketAcl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBucketAclResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ACL of the bucket.
    shared_ptr<string> bucketAcl_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
