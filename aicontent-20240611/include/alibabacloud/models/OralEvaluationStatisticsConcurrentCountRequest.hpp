// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORALEVALUATIONSTATISTICSCONCURRENTCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ORALEVALUATIONSTATISTICSCONCURRENTCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class OralEvaluationStatisticsConcurrentCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OralEvaluationStatisticsConcurrentCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicationAccessId, applicationAccessId_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(granularity, granularity_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, OralEvaluationStatisticsConcurrentCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationAccessId, applicationAccessId_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    OralEvaluationStatisticsConcurrentCountRequest() = default ;
    OralEvaluationStatisticsConcurrentCountRequest(const OralEvaluationStatisticsConcurrentCountRequest &) = default ;
    OralEvaluationStatisticsConcurrentCountRequest(OralEvaluationStatisticsConcurrentCountRequest &&) = default ;
    OralEvaluationStatisticsConcurrentCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OralEvaluationStatisticsConcurrentCountRequest() = default ;
    OralEvaluationStatisticsConcurrentCountRequest& operator=(const OralEvaluationStatisticsConcurrentCountRequest &) = default ;
    OralEvaluationStatisticsConcurrentCountRequest& operator=(OralEvaluationStatisticsConcurrentCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationAccessId_ == nullptr
        && this->endTime_ == nullptr && this->granularity_ == nullptr && this->projectId_ == nullptr && this->startTime_ == nullptr; };
    // applicationAccessId Field Functions 
    bool hasApplicationAccessId() const { return this->applicationAccessId_ != nullptr;};
    void deleteApplicationAccessId() { this->applicationAccessId_ = nullptr;};
    inline string getApplicationAccessId() const { DARABONBA_PTR_GET_DEFAULT(applicationAccessId_, "") };
    inline OralEvaluationStatisticsConcurrentCountRequest& setApplicationAccessId(string applicationAccessId) { DARABONBA_PTR_SET_VALUE(applicationAccessId_, applicationAccessId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline OralEvaluationStatisticsConcurrentCountRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline OralEvaluationStatisticsConcurrentCountRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline OralEvaluationStatisticsConcurrentCountRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline OralEvaluationStatisticsConcurrentCountRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // appId,appkey
    shared_ptr<string> applicationAccessId_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> granularity_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
