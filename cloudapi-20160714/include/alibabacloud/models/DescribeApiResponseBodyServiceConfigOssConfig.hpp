// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICECONFIGOSSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICECONFIGOSSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodyServiceConfigOssConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodyServiceConfigOssConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(OssRegionId, ossRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodyServiceConfigOssConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(OssRegionId, ossRegionId_);
    };
    DescribeApiResponseBodyServiceConfigOssConfig() = default ;
    DescribeApiResponseBodyServiceConfigOssConfig(const DescribeApiResponseBodyServiceConfigOssConfig &) = default ;
    DescribeApiResponseBodyServiceConfigOssConfig(DescribeApiResponseBodyServiceConfigOssConfig &&) = default ;
    DescribeApiResponseBodyServiceConfigOssConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodyServiceConfigOssConfig() = default ;
    DescribeApiResponseBodyServiceConfigOssConfig& operator=(const DescribeApiResponseBodyServiceConfigOssConfig &) = default ;
    DescribeApiResponseBodyServiceConfigOssConfig& operator=(DescribeApiResponseBodyServiceConfigOssConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->bucketName_ == nullptr && return this->key_ == nullptr && return this->ossRegionId_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeApiResponseBodyServiceConfigOssConfig& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeApiResponseBodyServiceConfigOssConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeApiResponseBodyServiceConfigOssConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // ossRegionId Field Functions 
    bool hasOssRegionId() const { return this->ossRegionId_ != nullptr;};
    void deleteOssRegionId() { this->ossRegionId_ = nullptr;};
    inline string ossRegionId() const { DARABONBA_PTR_GET_DEFAULT(ossRegionId_, "") };
    inline DescribeApiResponseBodyServiceConfigOssConfig& setOssRegionId(string ossRegionId) { DARABONBA_PTR_SET_VALUE(ossRegionId_, ossRegionId) };


  protected:
    // The operation options on OSS. Valid values:
    // 
    // *   GetObject
    // *   PostObject
    // *   DeleteObject
    // *   PutObject
    // *   HeadObject
    // *   GetObjectMeta
    // *   AppendObject
    std::shared_ptr<string> action_ = nullptr;
    // The OSS bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The stored object or folder path.
    std::shared_ptr<string> key_ = nullptr;
    // The ID of the region where the OSS instance is located.
    std::shared_ptr<string> ossRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
