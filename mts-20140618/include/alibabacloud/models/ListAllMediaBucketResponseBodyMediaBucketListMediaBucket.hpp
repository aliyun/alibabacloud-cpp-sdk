// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLMEDIABUCKETRESPONSEBODYMEDIABUCKETLISTMEDIABUCKET_HPP_
#define ALIBABACLOUD_MODELS_LISTALLMEDIABUCKETRESPONSEBODYMEDIABUCKETLISTMEDIABUCKET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListAllMediaBucketResponseBodyMediaBucketListMediaBucket : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllMediaBucketResponseBodyMediaBucketListMediaBucket& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Referer, referer_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllMediaBucketResponseBodyMediaBucketListMediaBucket& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Referer, referer_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListAllMediaBucketResponseBodyMediaBucketListMediaBucket() = default ;
    ListAllMediaBucketResponseBodyMediaBucketListMediaBucket(const ListAllMediaBucketResponseBodyMediaBucketListMediaBucket &) = default ;
    ListAllMediaBucketResponseBodyMediaBucketListMediaBucket(ListAllMediaBucketResponseBodyMediaBucketListMediaBucket &&) = default ;
    ListAllMediaBucketResponseBodyMediaBucketListMediaBucket(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllMediaBucketResponseBodyMediaBucketListMediaBucket() = default ;
    ListAllMediaBucketResponseBodyMediaBucketListMediaBucket& operator=(const ListAllMediaBucketResponseBodyMediaBucketListMediaBucket &) = default ;
    ListAllMediaBucketResponseBodyMediaBucketListMediaBucket& operator=(ListAllMediaBucketResponseBodyMediaBucketListMediaBucket &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && return this->referer_ == nullptr && return this->type_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline ListAllMediaBucketResponseBodyMediaBucketListMediaBucket& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // referer Field Functions 
    bool hasReferer() const { return this->referer_ != nullptr;};
    void deleteReferer() { this->referer_ = nullptr;};
    inline string referer() const { DARABONBA_PTR_GET_DEFAULT(referer_, "") };
    inline ListAllMediaBucketResponseBodyMediaBucketListMediaBucket& setReferer(string referer) { DARABONBA_PTR_SET_VALUE(referer_, referer) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAllMediaBucketResponseBodyMediaBucketListMediaBucket& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the media bucket.
    std::shared_ptr<string> bucket_ = nullptr;
    // The settings of Object Storage Service (OSS) hotlink protection. For more information, see [Hotlink protection](https://help.aliyun.com/document_detail/31869.html).
    std::shared_ptr<string> referer_ = nullptr;
    // The type of the media bucket. Valid values:
    // 
    // *   Input: input media bucket
    // *   Output: output media bucket
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
