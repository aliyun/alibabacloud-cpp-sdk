// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCREASEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INCREASEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class IncreaseInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncreaseInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(CallbackAddress, callbackAddress_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, IncreaseInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(CallbackAddress, callbackAddress_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    IncreaseInstanceRequest() = default ;
    IncreaseInstanceRequest(const IncreaseInstanceRequest &) = default ;
    IncreaseInstanceRequest(IncreaseInstanceRequest &&) = default ;
    IncreaseInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncreaseInstanceRequest() = default ;
    IncreaseInstanceRequest& operator=(const IncreaseInstanceRequest &) = default ;
    IncreaseInstanceRequest& operator=(IncreaseInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->callbackAddress_ == nullptr && this->instanceName_ == nullptr && this->path_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline IncreaseInstanceRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // callbackAddress Field Functions 
    bool hasCallbackAddress() const { return this->callbackAddress_ != nullptr;};
    void deleteCallbackAddress() { this->callbackAddress_ = nullptr;};
    inline string getCallbackAddress() const { DARABONBA_PTR_GET_DEFAULT(callbackAddress_, "") };
    inline IncreaseInstanceRequest& setCallbackAddress(string callbackAddress) { DARABONBA_PTR_SET_VALUE(callbackAddress_, callbackAddress) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline IncreaseInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline IncreaseInstanceRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The name of the Object Storage Service (OSS) bucket.
    // 
    // >  The bucket must be in the same region as the Image Search instance.
    // 
    // This parameter is required.
    shared_ptr<string> bucketName_ {};
    // The callback address.
    shared_ptr<string> callbackAddress_ {};
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The absolute path to the increment.meta file in the bucket. The path must start with a forward slash (/) and cannot end with a forward slash (/).
    // 
    // This parameter is required.
    shared_ptr<string> path_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
