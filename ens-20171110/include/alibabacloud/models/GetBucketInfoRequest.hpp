// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUCKETINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBUCKETINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetBucketInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBucketInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
    };
    friend void from_json(const Darabonba::Json& j, GetBucketInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
    };
    GetBucketInfoRequest() = default ;
    GetBucketInfoRequest(const GetBucketInfoRequest &) = default ;
    GetBucketInfoRequest(GetBucketInfoRequest &&) = default ;
    GetBucketInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBucketInfoRequest() = default ;
    GetBucketInfoRequest& operator=(const GetBucketInfoRequest &) = default ;
    GetBucketInfoRequest& operator=(GetBucketInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline GetBucketInfoRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


  protected:
    // The name of the bucket.
    // 
    // This parameter is required.
    shared_ptr<string> bucketName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
