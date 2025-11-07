// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSSTATUSV2RESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSSTATUSV2RESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeOssStatusV2ResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssStatusV2ResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssStatusV2ResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    DescribeOssStatusV2ResponseBodyResultObject() = default ;
    DescribeOssStatusV2ResponseBodyResultObject(const DescribeOssStatusV2ResponseBodyResultObject &) = default ;
    DescribeOssStatusV2ResponseBodyResultObject(DescribeOssStatusV2ResponseBodyResultObject &&) = default ;
    DescribeOssStatusV2ResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssStatusV2ResponseBodyResultObject() = default ;
    DescribeOssStatusV2ResponseBodyResultObject& operator=(const DescribeOssStatusV2ResponseBodyResultObject &) = default ;
    DescribeOssStatusV2ResponseBodyResultObject& operator=(DescribeOssStatusV2ResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->region_ == nullptr && return this->userStatus_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeOssStatusV2ResponseBodyResultObject& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeOssStatusV2ResponseBodyResultObject& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline string userStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, "") };
    inline DescribeOssStatusV2ResponseBodyResultObject& setUserStatus(string userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


  protected:
    // Bucket name.
    std::shared_ptr<string> bucketName_ = nullptr;
    // Region.
    std::shared_ptr<string> region_ = nullptr;
    // User activation status, **SUCCESS** indicates activated.
    std::shared_ptr<string> userStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
