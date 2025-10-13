// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATAOSSMOUNTDESCS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATAOSSMOUNTDESCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationConfigResponseBodyDataOssMountDescs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationConfigResponseBodyDataOssMountDescs& obj) { 
      DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(bucketPath, bucketPath_);
      DARABONBA_PTR_TO_JSON(mountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationConfigResponseBodyDataOssMountDescs& obj) { 
      DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(bucketPath, bucketPath_);
      DARABONBA_PTR_FROM_JSON(mountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
    };
    DescribeApplicationConfigResponseBodyDataOssMountDescs() = default ;
    DescribeApplicationConfigResponseBodyDataOssMountDescs(const DescribeApplicationConfigResponseBodyDataOssMountDescs &) = default ;
    DescribeApplicationConfigResponseBodyDataOssMountDescs(DescribeApplicationConfigResponseBodyDataOssMountDescs &&) = default ;
    DescribeApplicationConfigResponseBodyDataOssMountDescs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationConfigResponseBodyDataOssMountDescs() = default ;
    DescribeApplicationConfigResponseBodyDataOssMountDescs& operator=(const DescribeApplicationConfigResponseBodyDataOssMountDescs &) = default ;
    DescribeApplicationConfigResponseBodyDataOssMountDescs& operator=(DescribeApplicationConfigResponseBodyDataOssMountDescs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->bucketPath_ == nullptr && return this->mountPath_ == nullptr && return this->readOnly_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeApplicationConfigResponseBodyDataOssMountDescs& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // bucketPath Field Functions 
    bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
    void deleteBucketPath() { this->bucketPath_ = nullptr;};
    inline string bucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
    inline DescribeApplicationConfigResponseBodyDataOssMountDescs& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline DescribeApplicationConfigResponseBodyDataOssMountDescs& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline DescribeApplicationConfigResponseBodyDataOssMountDescs& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


  protected:
    // The name of the OSS bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The directory or object in OSS. If the specified directory or object does not exist, an error is returned.
    std::shared_ptr<string> bucketPath_ = nullptr;
    // The path of the container in SAE. The parameter value that you specified overwrites the original value. If the specified path does not exist, SAE automatically creates the path.
    std::shared_ptr<string> mountPath_ = nullptr;
    // Indicates whether the application can use the container path to read data from or write data to resources in the directory of the OSS bucket. Valid values:
    // 
    // *   **true**: The application has the read-only permissions.
    // *   **false**: The application has the read and write permissions.
    std::shared_ptr<bool> readOnly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
