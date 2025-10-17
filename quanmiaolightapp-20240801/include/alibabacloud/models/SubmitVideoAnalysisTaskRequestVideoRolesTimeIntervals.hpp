// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOANALYSISTASKREQUESTVIDEOROLESTIMEINTERVALS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOANALYSISTASKREQUESTVIDEOROLESTIMEINTERVALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals() = default ;
    SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals(const SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals &) = default ;
    SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals(SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals &&) = default ;
    SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals() = default ;
    SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals& operator=(const SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals &) = default ;
    SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals& operator=(SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SubmitVideoAnalysisTaskRequestVideoRolesTimeIntervals& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
