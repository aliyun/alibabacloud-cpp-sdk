// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKREQUESTAIJOBLOGINFOAIJOBLOGSLOGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKREQUESTAIJOBLOGINFOAIJOBLOGSLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Datetime, datetime_);
      DARABONBA_PTR_TO_JSON(LogContent, logContent_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Datetime, datetime_);
      DARABONBA_PTR_FROM_JSON(LogContent, logContent_);
    };
    CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs() = default ;
    CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs(const CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs &) = default ;
    CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs(CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs &&) = default ;
    CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs() = default ;
    CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs& operator=(const CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs &) = default ;
    CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs& operator=(CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datetime_ == nullptr
        && return this->logContent_ == nullptr; };
    // datetime Field Functions 
    bool hasDatetime() const { return this->datetime_ != nullptr;};
    void deleteDatetime() { this->datetime_ = nullptr;};
    inline string datetime() const { DARABONBA_PTR_GET_DEFAULT(datetime_, "") };
    inline CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs& setDatetime(string datetime) { DARABONBA_PTR_SET_VALUE(datetime_, datetime) };


    // logContent Field Functions 
    bool hasLogContent() const { return this->logContent_ != nullptr;};
    void deleteLogContent() { this->logContent_ = nullptr;};
    inline string logContent() const { DARABONBA_PTR_GET_DEFAULT(logContent_, "") };
    inline CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs& setLogContent(string logContent) { DARABONBA_PTR_SET_VALUE(logContent_, logContent) };


  protected:
    // The sending date in the yyyymmdd format.
    std::shared_ptr<string> datetime_ = nullptr;
    // The log content.
    std::shared_ptr<string> logContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
