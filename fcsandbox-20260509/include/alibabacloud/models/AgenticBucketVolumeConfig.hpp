// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTICBUCKETVOLUMECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AGENTICBUCKETVOLUMECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class AgenticBucketVolumeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgenticBucketVolumeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(agenticBucket, agenticBucket_);
      DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(bucketPath, bucketPath_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
    };
    friend void from_json(const Darabonba::Json& j, AgenticBucketVolumeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(agenticBucket, agenticBucket_);
      DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(bucketPath, bucketPath_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
    };
    AgenticBucketVolumeConfig() = default ;
    AgenticBucketVolumeConfig(const AgenticBucketVolumeConfig &) = default ;
    AgenticBucketVolumeConfig(AgenticBucketVolumeConfig &&) = default ;
    AgenticBucketVolumeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgenticBucketVolumeConfig() = default ;
    AgenticBucketVolumeConfig& operator=(const AgenticBucketVolumeConfig &) = default ;
    AgenticBucketVolumeConfig& operator=(AgenticBucketVolumeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agenticBucket_ == nullptr
        && this->bucketName_ == nullptr && this->bucketPath_ == nullptr && this->endpoint_ == nullptr && this->readOnly_ == nullptr; };
    // agenticBucket Field Functions 
    bool hasAgenticBucket() const { return this->agenticBucket_ != nullptr;};
    void deleteAgenticBucket() { this->agenticBucket_ = nullptr;};
    inline string getAgenticBucket() const { DARABONBA_PTR_GET_DEFAULT(agenticBucket_, "") };
    inline AgenticBucketVolumeConfig& setAgenticBucket(string agenticBucket) { DARABONBA_PTR_SET_VALUE(agenticBucket_, agenticBucket) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline AgenticBucketVolumeConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // bucketPath Field Functions 
    bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
    void deleteBucketPath() { this->bucketPath_ = nullptr;};
    inline string getBucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
    inline AgenticBucketVolumeConfig& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline AgenticBucketVolumeConfig& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline AgenticBucketVolumeConfig& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


  protected:
    shared_ptr<string> agenticBucket_ {};
    shared_ptr<string> bucketName_ {};
    shared_ptr<string> bucketPath_ {};
    shared_ptr<string> endpoint_ {};
    shared_ptr<bool> readOnly_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
