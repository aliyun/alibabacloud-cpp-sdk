// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBOSSMOUNTPOINT_HPP_
#define ALIBABACLOUD_MODELS_WEBOSSMOUNTPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebOSSMountPoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebOSSMountPoint& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(BucketPath, bucketPath_);
      DARABONBA_PTR_TO_JSON(MountDir, mountDir_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
    };
    friend void from_json(const Darabonba::Json& j, WebOSSMountPoint& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(BucketPath, bucketPath_);
      DARABONBA_PTR_FROM_JSON(MountDir, mountDir_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
    };
    WebOSSMountPoint() = default ;
    WebOSSMountPoint(const WebOSSMountPoint &) = default ;
    WebOSSMountPoint(WebOSSMountPoint &&) = default ;
    WebOSSMountPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebOSSMountPoint() = default ;
    WebOSSMountPoint& operator=(const WebOSSMountPoint &) = default ;
    WebOSSMountPoint& operator=(WebOSSMountPoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketName_ != nullptr
        && this->bucketPath_ != nullptr && this->mountDir_ != nullptr && this->readOnly_ != nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline WebOSSMountPoint& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // bucketPath Field Functions 
    bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
    void deleteBucketPath() { this->bucketPath_ = nullptr;};
    inline string bucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
    inline WebOSSMountPoint& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


    // mountDir Field Functions 
    bool hasMountDir() const { return this->mountDir_ != nullptr;};
    void deleteMountDir() { this->mountDir_ = nullptr;};
    inline string mountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
    inline WebOSSMountPoint& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline WebOSSMountPoint& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


  protected:
    std::shared_ptr<string> bucketName_ = nullptr;
    std::shared_ptr<string> bucketPath_ = nullptr;
    std::shared_ptr<string> mountDir_ = nullptr;
    std::shared_ptr<bool> readOnly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
