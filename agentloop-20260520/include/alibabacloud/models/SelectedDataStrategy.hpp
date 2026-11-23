// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTEDDATASTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_SELECTEDDATASTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class SelectedDataStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectedDataStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(evalIds, evalIds_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, SelectedDataStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(evalIds, evalIds_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    SelectedDataStrategy() = default ;
    SelectedDataStrategy(const SelectedDataStrategy &) = default ;
    SelectedDataStrategy(SelectedDataStrategy &&) = default ;
    SelectedDataStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectedDataStrategy() = default ;
    SelectedDataStrategy& operator=(const SelectedDataStrategy &) = default ;
    SelectedDataStrategy& operator=(SelectedDataStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->evalIds_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline SelectedDataStrategy& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // evalIds Field Functions 
    bool hasEvalIds() const { return this->evalIds_ != nullptr;};
    void deleteEvalIds() { this->evalIds_ = nullptr;};
    inline const vector<string> & getEvalIds() const { DARABONBA_PTR_GET_CONST(evalIds_, vector<string>) };
    inline vector<string> getEvalIds() { DARABONBA_PTR_GET(evalIds_, vector<string>) };
    inline SelectedDataStrategy& setEvalIds(const vector<string> & evalIds) { DARABONBA_PTR_SET_VALUE(evalIds_, evalIds) };
    inline SelectedDataStrategy& setEvalIds(vector<string> && evalIds) { DARABONBA_PTR_SET_RVALUE(evalIds_, evalIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SelectedDataStrategy& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time of the statistical window in UNIX seconds.
    shared_ptr<int64_t> endTime_ {};
    // The list of evaluation IDs.
    shared_ptr<vector<string>> evalIds_ {};
    // The estimated start time in milliseconds.
    // 
    // > You can modify this parameter only when the course is in the preview state.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
