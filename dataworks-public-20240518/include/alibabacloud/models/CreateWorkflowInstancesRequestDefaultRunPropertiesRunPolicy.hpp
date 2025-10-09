// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUESTDEFAULTRUNPROPERTIESRUNPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUESTDEFAULTRUNPROPERTIESRUNPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Immediately, immediately_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Immediately, immediately_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy() = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy(const CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy &) = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy(CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy &&) = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy() = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy& operator=(const CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy &) = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy& operator=(CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->immediately_ != nullptr && this->startTime_ != nullptr && this->type_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // immediately Field Functions 
    bool hasImmediately() const { return this->immediately_ != nullptr;};
    void deleteImmediately() { this->immediately_ = nullptr;};
    inline bool immediately() const { DARABONBA_PTR_GET_DEFAULT(immediately_, false) };
    inline CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy& setImmediately(bool immediately) { DARABONBA_PTR_SET_VALUE(immediately_, immediately) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The end time of running. Configure this parameter in the `hh:mm:ss` format (24-hour clock). This parameter is required if you configure the RunPolicy parameter.
    std::shared_ptr<string> endTime_ = nullptr;
    // Specifies whether a task whose scheduled run time is in the future can be run immediately. Default value: false.
    std::shared_ptr<bool> immediately_ = nullptr;
    // The start time of running. Configure this parameter in the `hh:mm:ss` format (24-hour clock). This parameter is required if you configure the RunPolicy parameter.
    std::shared_ptr<string> startTime_ = nullptr;
    // The time period type. This parameter is required if you configure the RunPolicy parameter. Valid values:
    // 
    // *   Daily
    // *   Weekend
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
