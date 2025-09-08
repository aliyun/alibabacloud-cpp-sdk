// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYDATAOSSMOUNTDESCS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYDATAOSSMOUNTDESCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeJobResponseBodyDataOssMountDescs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobResponseBodyDataOssMountDescs& obj) { 
      DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(bucketPath, bucketPath_);
      DARABONBA_PTR_TO_JSON(mountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobResponseBodyDataOssMountDescs& obj) { 
      DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(bucketPath, bucketPath_);
      DARABONBA_PTR_FROM_JSON(mountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
    };
    DescribeJobResponseBodyDataOssMountDescs() = default ;
    DescribeJobResponseBodyDataOssMountDescs(const DescribeJobResponseBodyDataOssMountDescs &) = default ;
    DescribeJobResponseBodyDataOssMountDescs(DescribeJobResponseBodyDataOssMountDescs &&) = default ;
    DescribeJobResponseBodyDataOssMountDescs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobResponseBodyDataOssMountDescs() = default ;
    DescribeJobResponseBodyDataOssMountDescs& operator=(const DescribeJobResponseBodyDataOssMountDescs &) = default ;
    DescribeJobResponseBodyDataOssMountDescs& operator=(DescribeJobResponseBodyDataOssMountDescs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketName_ != nullptr
        && this->bucketPath_ != nullptr && this->mountPath_ != nullptr && this->readOnly_ != nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeJobResponseBodyDataOssMountDescs& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // bucketPath Field Functions 
    bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
    void deleteBucketPath() { this->bucketPath_ = nullptr;};
    inline string bucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
    inline DescribeJobResponseBodyDataOssMountDescs& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline DescribeJobResponseBodyDataOssMountDescs& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline DescribeJobResponseBodyDataOssMountDescs& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


  protected:
    // The name of the bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The directory or object in OSS. If the specified directory or object does not exist, an error is returned.
    std::shared_ptr<string> bucketPath_ = nullptr;
    // The path of the container in SAE. The parameter value that you specified overwrites the original value. If the specified path does not exist, SAE automatically creates the path.
    std::shared_ptr<string> mountPath_ = nullptr;
    // Indicates whether the job template can use the container directory to read data from or write data to resources in the directory of the OSS bucket. Valid values:
    // 
    // *   **true**: The job template has the read-only permissions.
    // *   **false**: The job template has the read and write permissions.
    std::shared_ptr<bool> readOnly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
