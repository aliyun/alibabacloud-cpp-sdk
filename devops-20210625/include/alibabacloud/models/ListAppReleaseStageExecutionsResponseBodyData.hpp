// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPRELEASESTAGEEXECUTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPRELEASESTAGEEXECUTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListAppReleaseStageExecutionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppReleaseStageExecutionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(number, number_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(triggerMode, triggerMode_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppReleaseStageExecutionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(number, number_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(triggerMode, triggerMode_);
    };
    ListAppReleaseStageExecutionsResponseBodyData() = default ;
    ListAppReleaseStageExecutionsResponseBodyData(const ListAppReleaseStageExecutionsResponseBodyData &) = default ;
    ListAppReleaseStageExecutionsResponseBodyData(ListAppReleaseStageExecutionsResponseBodyData &&) = default ;
    ListAppReleaseStageExecutionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppReleaseStageExecutionsResponseBodyData() = default ;
    ListAppReleaseStageExecutionsResponseBodyData& operator=(const ListAppReleaseStageExecutionsResponseBodyData &) = default ;
    ListAppReleaseStageExecutionsResponseBodyData& operator=(ListAppReleaseStageExecutionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->number_ == nullptr && return this->startTime_ == nullptr && return this->state_ == nullptr && return this->triggerMode_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListAppReleaseStageExecutionsResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListAppReleaseStageExecutionsResponseBodyData& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListAppReleaseStageExecutionsResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListAppReleaseStageExecutionsResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // triggerMode Field Functions 
    bool hasTriggerMode() const { return this->triggerMode_ != nullptr;};
    void deleteTriggerMode() { this->triggerMode_ = nullptr;};
    inline string triggerMode() const { DARABONBA_PTR_GET_DEFAULT(triggerMode_, "") };
    inline ListAppReleaseStageExecutionsResponseBodyData& setTriggerMode(string triggerMode) { DARABONBA_PTR_SET_VALUE(triggerMode_, triggerMode) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> triggerMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
