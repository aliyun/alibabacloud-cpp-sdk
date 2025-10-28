// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OSSMOUNTPOINT_HPP_
#define ALIBABACLOUD_MODELS_OSSMOUNTPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class OSSMountPoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OSSMountPoint& obj) { 
      DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(bucketPath, bucketPath_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(mountDir, mountDir_);
      DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
    };
    friend void from_json(const Darabonba::Json& j, OSSMountPoint& obj) { 
      DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(bucketPath, bucketPath_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(mountDir, mountDir_);
      DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
    };
    OSSMountPoint() = default ;
    OSSMountPoint(const OSSMountPoint &) = default ;
    OSSMountPoint(OSSMountPoint &&) = default ;
    OSSMountPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OSSMountPoint() = default ;
    OSSMountPoint& operator=(const OSSMountPoint &) = default ;
    OSSMountPoint& operator=(OSSMountPoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->bucketPath_ == nullptr && return this->endpoint_ == nullptr && return this->mountDir_ == nullptr && return this->readOnly_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline OSSMountPoint& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // bucketPath Field Functions 
    bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
    void deleteBucketPath() { this->bucketPath_ = nullptr;};
    inline string bucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
    inline OSSMountPoint& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline OSSMountPoint& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // mountDir Field Functions 
    bool hasMountDir() const { return this->mountDir_ != nullptr;};
    void deleteMountDir() { this->mountDir_ = nullptr;};
    inline string mountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
    inline OSSMountPoint& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline OSSMountPoint& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


  protected:
    std::shared_ptr<string> bucketName_ = nullptr;
    std::shared_ptr<string> bucketPath_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> mountDir_ = nullptr;
    std::shared_ptr<bool> readOnly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
