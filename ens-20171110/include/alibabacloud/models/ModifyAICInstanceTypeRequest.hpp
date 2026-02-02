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
    shared_ptr<string> environmentVar_ {};
    shared_ptr<int64_t> frequency_ {};
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    shared_ptr<string> resolution_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
