// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class DeleteScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(ScheduleName, scheduleName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(ScheduleName, scheduleName_);
    };
    DeleteScheduleRequest() = default ;
    DeleteScheduleRequest(const DeleteScheduleRequest &) = default ;
    DeleteScheduleRequest(DeleteScheduleRequest &&) = default ;
    DeleteScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScheduleRequest() = default ;
    DeleteScheduleRequest& operator=(const DeleteScheduleRequest &) = default ;
    DeleteScheduleRequest& operator=(DeleteScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowName_ == nullptr
        && return this->scheduleName_ == nullptr; };
    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline DeleteScheduleRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // scheduleName Field Functions 
    bool hasScheduleName() const { return this->scheduleName_ != nullptr;};
    void deleteScheduleName() { this->scheduleName_ = nullptr;};
    inline string scheduleName() const { DARABONBA_PTR_GET_DEFAULT(scheduleName_, "") };
    inline DeleteScheduleRequest& setScheduleName(string scheduleName) { DARABONBA_PTR_SET_VALUE(scheduleName_, scheduleName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> flowName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scheduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
