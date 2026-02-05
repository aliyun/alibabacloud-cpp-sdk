// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSPECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSPECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateInspectionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInspectionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InspectionItems, inspectionItems_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInspectionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InspectionItems, inspectionItems_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CreateInspectionTaskRequest() = default ;
    CreateInspectionTaskRequest(const CreateInspectionTaskRequest &) = default ;
    CreateInspectionTaskRequest(CreateInspectionTaskRequest &&) = default ;
    CreateInspectionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInspectionTaskRequest() = default ;
    CreateInspectionTaskRequest& operator=(const CreateInspectionTaskRequest &) = default ;
    CreateInspectionTaskRequest& operator=(CreateInspectionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->inspectionItems_ == nullptr && this->instanceIds_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateInspectionTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // inspectionItems Field Functions 
    bool hasInspectionItems() const { return this->inspectionItems_ != nullptr;};
    void deleteInspectionItems() { this->inspectionItems_ = nullptr;};
    inline string getInspectionItems() const { DARABONBA_PTR_GET_DEFAULT(inspectionItems_, "") };
    inline CreateInspectionTaskRequest& setInspectionItems(string inspectionItems) { DARABONBA_PTR_SET_VALUE(inspectionItems_, inspectionItems) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline CreateInspectionTaskRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateInspectionTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<string> inspectionItems_ {};
    // This parameter is required.
    shared_ptr<string> instanceIds_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
