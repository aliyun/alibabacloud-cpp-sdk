// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries.hpp>
#include <alibabacloud/models/GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries.hpp>
#include <alibabacloud/models/GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries.hpp>
#include <alibabacloud/models/GetOnCallSchedulesDetailResponseBodyDataScheduleLayers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetOnCallSchedulesDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnCallSchedulesDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertRobotId, alertRobotId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RenderedFinnalEntries, renderedFinnalEntries_);
      DARABONBA_PTR_TO_JSON(RenderedLayerEntries, renderedLayerEntries_);
      DARABONBA_PTR_TO_JSON(RenderedSubstitudeEntries, renderedSubstitudeEntries_);
      DARABONBA_PTR_TO_JSON(ScheduleLayers, scheduleLayers_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnCallSchedulesDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertRobotId, alertRobotId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RenderedFinnalEntries, renderedFinnalEntries_);
      DARABONBA_PTR_FROM_JSON(RenderedLayerEntries, renderedLayerEntries_);
      DARABONBA_PTR_FROM_JSON(RenderedSubstitudeEntries, renderedSubstitudeEntries_);
      DARABONBA_PTR_FROM_JSON(ScheduleLayers, scheduleLayers_);
    };
    GetOnCallSchedulesDetailResponseBodyData() = default ;
    GetOnCallSchedulesDetailResponseBodyData(const GetOnCallSchedulesDetailResponseBodyData &) = default ;
    GetOnCallSchedulesDetailResponseBodyData(GetOnCallSchedulesDetailResponseBodyData &&) = default ;
    GetOnCallSchedulesDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnCallSchedulesDetailResponseBodyData() = default ;
    GetOnCallSchedulesDetailResponseBodyData& operator=(const GetOnCallSchedulesDetailResponseBodyData &) = default ;
    GetOnCallSchedulesDetailResponseBodyData& operator=(GetOnCallSchedulesDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertRobotId_ != nullptr
        && this->description_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->renderedFinnalEntries_ != nullptr && this->renderedLayerEntries_ != nullptr
        && this->renderedSubstitudeEntries_ != nullptr && this->scheduleLayers_ != nullptr; };
    // alertRobotId Field Functions 
    bool hasAlertRobotId() const { return this->alertRobotId_ != nullptr;};
    void deleteAlertRobotId() { this->alertRobotId_ = nullptr;};
    inline int64_t alertRobotId() const { DARABONBA_PTR_GET_DEFAULT(alertRobotId_, 0L) };
    inline GetOnCallSchedulesDetailResponseBodyData& setAlertRobotId(int64_t alertRobotId) { DARABONBA_PTR_SET_VALUE(alertRobotId_, alertRobotId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetOnCallSchedulesDetailResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetOnCallSchedulesDetailResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetOnCallSchedulesDetailResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // renderedFinnalEntries Field Functions 
    bool hasRenderedFinnalEntries() const { return this->renderedFinnalEntries_ != nullptr;};
    void deleteRenderedFinnalEntries() { this->renderedFinnalEntries_ = nullptr;};
    inline const vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries> & renderedFinnalEntries() const { DARABONBA_PTR_GET_CONST(renderedFinnalEntries_, vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries>) };
    inline vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries> renderedFinnalEntries() { DARABONBA_PTR_GET(renderedFinnalEntries_, vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries>) };
    inline GetOnCallSchedulesDetailResponseBodyData& setRenderedFinnalEntries(const vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries> & renderedFinnalEntries) { DARABONBA_PTR_SET_VALUE(renderedFinnalEntries_, renderedFinnalEntries) };
    inline GetOnCallSchedulesDetailResponseBodyData& setRenderedFinnalEntries(vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries> && renderedFinnalEntries) { DARABONBA_PTR_SET_RVALUE(renderedFinnalEntries_, renderedFinnalEntries) };


    // renderedLayerEntries Field Functions 
    bool hasRenderedLayerEntries() const { return this->renderedLayerEntries_ != nullptr;};
    void deleteRenderedLayerEntries() { this->renderedLayerEntries_ = nullptr;};
    inline const vector<vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries>> & renderedLayerEntries() const { DARABONBA_PTR_GET_CONST(renderedLayerEntries_, vector<vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries>>) };
    inline vector<vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries>> renderedLayerEntries() { DARABONBA_PTR_GET(renderedLayerEntries_, vector<vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries>>) };
    inline GetOnCallSchedulesDetailResponseBodyData& setRenderedLayerEntries(const vector<vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries>> & renderedLayerEntries) { DARABONBA_PTR_SET_VALUE(renderedLayerEntries_, renderedLayerEntries) };
    inline GetOnCallSchedulesDetailResponseBodyData& setRenderedLayerEntries(vector<vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries>> && renderedLayerEntries) { DARABONBA_PTR_SET_RVALUE(renderedLayerEntries_, renderedLayerEntries) };


    // renderedSubstitudeEntries Field Functions 
    bool hasRenderedSubstitudeEntries() const { return this->renderedSubstitudeEntries_ != nullptr;};
    void deleteRenderedSubstitudeEntries() { this->renderedSubstitudeEntries_ = nullptr;};
    inline const vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries> & renderedSubstitudeEntries() const { DARABONBA_PTR_GET_CONST(renderedSubstitudeEntries_, vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries>) };
    inline vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries> renderedSubstitudeEntries() { DARABONBA_PTR_GET(renderedSubstitudeEntries_, vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries>) };
    inline GetOnCallSchedulesDetailResponseBodyData& setRenderedSubstitudeEntries(const vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries> & renderedSubstitudeEntries) { DARABONBA_PTR_SET_VALUE(renderedSubstitudeEntries_, renderedSubstitudeEntries) };
    inline GetOnCallSchedulesDetailResponseBodyData& setRenderedSubstitudeEntries(vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries> && renderedSubstitudeEntries) { DARABONBA_PTR_SET_RVALUE(renderedSubstitudeEntries_, renderedSubstitudeEntries) };


    // scheduleLayers Field Functions 
    bool hasScheduleLayers() const { return this->scheduleLayers_ != nullptr;};
    void deleteScheduleLayers() { this->scheduleLayers_ = nullptr;};
    inline const vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayers> & scheduleLayers() const { DARABONBA_PTR_GET_CONST(scheduleLayers_, vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayers>) };
    inline vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayers> scheduleLayers() { DARABONBA_PTR_GET(scheduleLayers_, vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayers>) };
    inline GetOnCallSchedulesDetailResponseBodyData& setScheduleLayers(const vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayers> & scheduleLayers) { DARABONBA_PTR_SET_VALUE(scheduleLayers_, scheduleLayers) };
    inline GetOnCallSchedulesDetailResponseBodyData& setScheduleLayers(vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayers> && scheduleLayers) { DARABONBA_PTR_SET_RVALUE(scheduleLayers_, scheduleLayers) };


  protected:
    // The URL of the DingTalk chatbot, which is used to receive notifications about shift changes.
    std::shared_ptr<int64_t> alertRobotId_ = nullptr;
    // The description of the scheduling policy.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the scheduling policy.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the scheduling policy.
    std::shared_ptr<string> name_ = nullptr;
    // The information about the final user on duty.
    std::shared_ptr<vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries>> renderedFinnalEntries_ = nullptr;
    // The scheduled users on duty within a time range.
    std::shared_ptr<vector<vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries>>> renderedLayerEntries_ = nullptr;
    // The information about the substitutes within a time range.
    std::shared_ptr<vector<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries>> renderedSubstitudeEntries_ = nullptr;
    // The information about the shift.
    std::shared_ptr<vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayers>> scheduleLayers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
