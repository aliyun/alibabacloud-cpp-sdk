// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OSSVOLUMECONFIG_HPP_
#define ALIBABACLOUD_MODELS_OSSVOLUMECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class OSSVolumeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OSSVolumeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(bucketPath, bucketPath_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
    };
    friend void from_json(const Darabonba::Json& j, OSSVolumeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(bucketPath, bucketPath_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
    };
    OSSVolumeConfig() = default ;
    OSSVolumeConfig(const OSSVolumeConfig &) = default ;
    OSSVolumeConfig(OSSVolumeConfig &&) = default ;
    OSSVolumeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OSSVolumeConfig() = default ;
    OSSVolumeConfig& operator=(const OSSVolumeConfig &) = default ;
    OSSVolumeConfig& operator=(OSSVolumeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->bucketPath_ == nullptr && this->endpoint_ == nullptr && this->readOnly_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline OSSVolumeConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // bucketPath Field Functions 
    bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
    void deleteBucketPath() { this->bucketPath_ = nullptr;};
    inline string getBucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
    inline OSSVolumeConfig& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline OSSVolumeConfig& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline OSSVolumeConfig& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


  protected:
    shared_ptr<string> bucketName_ {};
    shared_ptr<string> bucketPath_ {};
    shared_ptr<string> endpoint_ {};
    shared_ptr<bool> readOnly_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
