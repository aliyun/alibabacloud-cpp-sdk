// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OSSCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_OSSCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class OssConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OssConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(mountPoint, mountPoint_);
      DARABONBA_PTR_TO_JSON(permission, permission_);
      DARABONBA_PTR_TO_JSON(prefix, prefix_);
      DARABONBA_PTR_TO_JSON(region, region_);
    };
    friend void from_json(const Darabonba::Json& j, OssConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(mountPoint, mountPoint_);
      DARABONBA_PTR_FROM_JSON(permission, permission_);
      DARABONBA_PTR_FROM_JSON(prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(region, region_);
    };
    OssConfiguration() = default ;
    OssConfiguration(const OssConfiguration &) = default ;
    OssConfiguration(OssConfiguration &&) = default ;
    OssConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OssConfiguration() = default ;
    OssConfiguration& operator=(const OssConfiguration &) = default ;
    OssConfiguration& operator=(OssConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->mountPoint_ == nullptr && return this->permission_ == nullptr && return this->prefix_ == nullptr && return this->region_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline OssConfiguration& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // mountPoint Field Functions 
    bool hasMountPoint() const { return this->mountPoint_ != nullptr;};
    void deleteMountPoint() { this->mountPoint_ = nullptr;};
    inline string mountPoint() const { DARABONBA_PTR_GET_DEFAULT(mountPoint_, "") };
    inline OssConfiguration& setMountPoint(string mountPoint) { DARABONBA_PTR_SET_VALUE(mountPoint_, mountPoint) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string permission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline OssConfiguration& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline OssConfiguration& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline OssConfiguration& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bucketName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mountPoint_ = nullptr;
    std::shared_ptr<string> permission_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> prefix_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
