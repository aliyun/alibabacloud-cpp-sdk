// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBUCKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBUCKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteBucketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBucketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBucketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
    };
    DeleteBucketRequest() = default ;
    DeleteBucketRequest(const DeleteBucketRequest &) = default ;
    DeleteBucketRequest(DeleteBucketRequest &&) = default ;
    DeleteBucketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBucketRequest() = default ;
    DeleteBucketRequest& operator=(const DeleteBucketRequest &) = default ;
    DeleteBucketRequest& operator=(DeleteBucketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DeleteBucketRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


  protected:
    // The name of the bucket that you want to delete. You can delete only one bucket at a time.
    // 
    // This parameter is required.
    shared_ptr<string> bucketName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
