// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHOSSBUCKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHOSSBUCKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetachOSSBucketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachOSSBucketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
    };
    friend void from_json(const Darabonba::Json& j, DetachOSSBucketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
    };
    DetachOSSBucketRequest() = default ;
    DetachOSSBucketRequest(const DetachOSSBucketRequest &) = default ;
    DetachOSSBucketRequest(DetachOSSBucketRequest &&) = default ;
    DetachOSSBucketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachOSSBucketRequest() = default ;
    DetachOSSBucketRequest& operator=(const DetachOSSBucketRequest &) = default ;
    DetachOSSBucketRequest& operator=(DetachOSSBucketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->OSSBucket_ != nullptr; };
    // OSSBucket Field Functions 
    bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
    void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
    inline string OSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
    inline DetachOSSBucketRequest& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


  protected:
    // The OSS bucket that you want to unbind.
    // 
    // This parameter is required.
    std::shared_ptr<string> OSSBucket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
