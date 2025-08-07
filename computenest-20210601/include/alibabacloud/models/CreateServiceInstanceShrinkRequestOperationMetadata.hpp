// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEINSTANCESHRINKREQUESTOPERATIONMETADATA_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEINSTANCESHRINKREQUESTOPERATIONMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CreateServiceInstanceShrinkRequestOperationMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceInstanceShrinkRequestOperationMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceInstanceShrinkRequestOperationMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CreateServiceInstanceShrinkRequestOperationMetadata() = default ;
    CreateServiceInstanceShrinkRequestOperationMetadata(const CreateServiceInstanceShrinkRequestOperationMetadata &) = default ;
    CreateServiceInstanceShrinkRequestOperationMetadata(CreateServiceInstanceShrinkRequestOperationMetadata &&) = default ;
    CreateServiceInstanceShrinkRequestOperationMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceInstanceShrinkRequestOperationMetadata() = default ;
    CreateServiceInstanceShrinkRequestOperationMetadata& operator=(const CreateServiceInstanceShrinkRequestOperationMetadata &) = default ;
    CreateServiceInstanceShrinkRequestOperationMetadata& operator=(CreateServiceInstanceShrinkRequestOperationMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->extraInfo_ != nullptr && this->resources_ != nullptr && this->serviceInstanceId_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateServiceInstanceShrinkRequestOperationMetadata& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline CreateServiceInstanceShrinkRequestOperationMetadata& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline CreateServiceInstanceShrinkRequestOperationMetadata& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline CreateServiceInstanceShrinkRequestOperationMetadata& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateServiceInstanceShrinkRequestOperationMetadata& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The operation end time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The additional information.
    std::shared_ptr<string> extraInfo_ = nullptr;
    // Imported resource.
    std::shared_ptr<string> resources_ = nullptr;
    // The ID of the service instance.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The operation start time.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
