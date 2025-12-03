// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGOSSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGOSSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(OssRegionId, ossRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(OssRegionId, ossRegionId_);
    };
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig &&) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig& operator=(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig& operator=(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->ossRegionId_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // ossRegionId Field Functions 
    bool hasOssRegionId() const { return this->ossRegionId_ != nullptr;};
    void deleteOssRegionId() { this->ossRegionId_ = nullptr;};
    inline string ossRegionId() const { DARABONBA_PTR_GET_DEFAULT(ossRegionId_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig& setOssRegionId(string ossRegionId) { DARABONBA_PTR_SET_VALUE(ossRegionId_, ossRegionId) };


  protected:
    // The name of the OSS bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The region ID of the OSS bucket.
    std::shared_ptr<string> ossRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
