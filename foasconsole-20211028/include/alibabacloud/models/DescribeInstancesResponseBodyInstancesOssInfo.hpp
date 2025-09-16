// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESOSSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESOSSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesOssInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesOssInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(BucketVersioningStatus, bucketVersioningStatus_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesOssInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(BucketVersioningStatus, bucketVersioningStatus_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
    };
    DescribeInstancesResponseBodyInstancesOssInfo() = default ;
    DescribeInstancesResponseBodyInstancesOssInfo(const DescribeInstancesResponseBodyInstancesOssInfo &) = default ;
    DescribeInstancesResponseBodyInstancesOssInfo(DescribeInstancesResponseBodyInstancesOssInfo &&) = default ;
    DescribeInstancesResponseBodyInstancesOssInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesOssInfo() = default ;
    DescribeInstancesResponseBodyInstancesOssInfo& operator=(const DescribeInstancesResponseBodyInstancesOssInfo &) = default ;
    DescribeInstancesResponseBodyInstancesOssInfo& operator=(DescribeInstancesResponseBodyInstancesOssInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessId_ != nullptr
        && this->accessKey_ != nullptr && this->bucket_ != nullptr && this->bucketVersioningStatus_ != nullptr && this->endpoint_ != nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline DescribeInstancesResponseBodyInstancesOssInfo& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline DescribeInstancesResponseBodyInstancesOssInfo& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline DescribeInstancesResponseBodyInstancesOssInfo& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // bucketVersioningStatus Field Functions 
    bool hasBucketVersioningStatus() const { return this->bucketVersioningStatus_ != nullptr;};
    void deleteBucketVersioningStatus() { this->bucketVersioningStatus_ = nullptr;};
    inline string bucketVersioningStatus() const { DARABONBA_PTR_GET_DEFAULT(bucketVersioningStatus_, "") };
    inline DescribeInstancesResponseBodyInstancesOssInfo& setBucketVersioningStatus(string bucketVersioningStatus) { DARABONBA_PTR_SET_VALUE(bucketVersioningStatus_, bucketVersioningStatus) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline DescribeInstancesResponseBodyInstancesOssInfo& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


  protected:
    std::shared_ptr<string> accessId_ = nullptr;
    std::shared_ptr<string> accessKey_ = nullptr;
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> bucketVersioningStatus_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
