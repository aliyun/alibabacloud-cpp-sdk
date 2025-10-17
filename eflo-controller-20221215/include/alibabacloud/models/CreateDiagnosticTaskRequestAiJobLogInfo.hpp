// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKREQUESTAIJOBLOGINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKREQUESTAIJOBLOGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateDiagnosticTaskRequestAiJobLogInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosticTaskRequestAiJobLogInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AiJobLogs, aiJobLogs_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosticTaskRequestAiJobLogInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AiJobLogs, aiJobLogs_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CreateDiagnosticTaskRequestAiJobLogInfo() = default ;
    CreateDiagnosticTaskRequestAiJobLogInfo(const CreateDiagnosticTaskRequestAiJobLogInfo &) = default ;
    CreateDiagnosticTaskRequestAiJobLogInfo(CreateDiagnosticTaskRequestAiJobLogInfo &&) = default ;
    CreateDiagnosticTaskRequestAiJobLogInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosticTaskRequestAiJobLogInfo() = default ;
    CreateDiagnosticTaskRequestAiJobLogInfo& operator=(const CreateDiagnosticTaskRequestAiJobLogInfo &) = default ;
    CreateDiagnosticTaskRequestAiJobLogInfo& operator=(CreateDiagnosticTaskRequestAiJobLogInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiJobLogs_ == nullptr
        && return this->endTime_ == nullptr && return this->startTime_ == nullptr; };
    // aiJobLogs Field Functions 
    bool hasAiJobLogs() const { return this->aiJobLogs_ != nullptr;};
    void deleteAiJobLogs() { this->aiJobLogs_ = nullptr;};
    inline const vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs> & aiJobLogs() const { DARABONBA_PTR_GET_CONST(aiJobLogs_, vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs>) };
    inline vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs> aiJobLogs() { DARABONBA_PTR_GET(aiJobLogs_, vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs>) };
    inline CreateDiagnosticTaskRequestAiJobLogInfo& setAiJobLogs(const vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs> & aiJobLogs) { DARABONBA_PTR_SET_VALUE(aiJobLogs_, aiJobLogs) };
    inline CreateDiagnosticTaskRequestAiJobLogInfo& setAiJobLogs(vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs> && aiJobLogs) { DARABONBA_PTR_SET_RVALUE(aiJobLogs_, aiJobLogs) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateDiagnosticTaskRequestAiJobLogInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateDiagnosticTaskRequestAiJobLogInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The task logs.
    std::shared_ptr<vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs>> aiJobLogs_ = nullptr;
    // The end time. The value is in the timestamp format. Unit: seconds.
    // 
    // >  This timestamp must indicate a point in time that is accurate to the minute.
    std::shared_ptr<string> endTime_ = nullptr;
    // The start time. The value is in the timestamp format. Unit: seconds.
    // 
    // >  This timestamp must indicate a point in time that is accurate to the minute.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
