// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAICINSTANCETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAICINSTANCETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyAICInstanceTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAICInstanceTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvironmentVar, environmentVar_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAICInstanceTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvironmentVar, environmentVar_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
    };
    ModifyAICInstanceTypeRequest() = default ;
    ModifyAICInstanceTypeRequest(const ModifyAICInstanceTypeRequest &) = default ;
    ModifyAICInstanceTypeRequest(ModifyAICInstanceTypeRequest &&) = default ;
    ModifyAICInstanceTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAICInstanceTypeRequest() = default ;
    ModifyAICInstanceTypeRequest& operator=(const ModifyAICInstanceTypeRequest &) = default ;
    ModifyAICInstanceTypeRequest& operator=(ModifyAICInstanceTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environmentVar_ == nullptr
        && this->frequency_ == nullptr && this->imageId_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->resolution_ == nullptr; };
    // environmentVar Field Functions 
    bool hasEnvironmentVar() const { return this->environmentVar_ != nullptr;};
    void deleteEnvironmentVar() { this->environmentVar_ = nullptr;};
    inline string getEnvironmentVar() const { DARABONBA_PTR_GET_DEFAULT(environmentVar_, "") };
    inline ModifyAICInstanceTypeRequest& setEnvironmentVar(string environmentVar) { DARABONBA_PTR_SET_VALUE(environmentVar_, environmentVar) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline int64_t getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, 0L) };
    inline ModifyAICInstanceTypeRequest& setFrequency(int64_t frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyAICInstanceTypeRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyAICInstanceTypeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyAICInstanceTypeRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline ModifyAICInstanceTypeRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


  protected:
    // One or more environment variables to set during instance initialization.
    shared_ptr<string> environmentVar_ {};
    // The refresh rate. Unit: Hz. Valid values:
    // - 30
    // - 60
    // - 120
    shared_ptr<int64_t> frequency_ {};
    // The image ID.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The ID of the instance whose specifications you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The target AIC container instance specifications.
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // The resolution. Valid values:
    // - 1920*1080
    // - 1080*1920
    // - 1280*720
    // - 720*1280
    // - 2400*1080
    // - 1080*2400
    // - 1920*864
    // - 864*1920
    shared_ptr<string> resolution_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
