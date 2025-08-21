// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSERVICESCHEDULERESPONSEBODYCOMMANDRESULTS_HPP_
#define ALIBABACLOUD_MODELS_RUNSERVICESCHEDULERESPONSEBODYCOMMANDRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunServiceScheduleResponseBodyCommandResultsCommandResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RunServiceScheduleResponseBodyCommandResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunServiceScheduleResponseBodyCommandResults& obj) { 
      DARABONBA_PTR_TO_JSON(CommandResult, commandResult_);
    };
    friend void from_json(const Darabonba::Json& j, RunServiceScheduleResponseBodyCommandResults& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandResult, commandResult_);
    };
    RunServiceScheduleResponseBodyCommandResults() = default ;
    RunServiceScheduleResponseBodyCommandResults(const RunServiceScheduleResponseBodyCommandResults &) = default ;
    RunServiceScheduleResponseBodyCommandResults(RunServiceScheduleResponseBodyCommandResults &&) = default ;
    RunServiceScheduleResponseBodyCommandResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunServiceScheduleResponseBodyCommandResults() = default ;
    RunServiceScheduleResponseBodyCommandResults& operator=(const RunServiceScheduleResponseBodyCommandResults &) = default ;
    RunServiceScheduleResponseBodyCommandResults& operator=(RunServiceScheduleResponseBodyCommandResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commandResult_ != nullptr; };
    // commandResult Field Functions 
    bool hasCommandResult() const { return this->commandResult_ != nullptr;};
    void deleteCommandResult() { this->commandResult_ = nullptr;};
    inline const vector<Models::RunServiceScheduleResponseBodyCommandResultsCommandResult> & commandResult() const { DARABONBA_PTR_GET_CONST(commandResult_, vector<Models::RunServiceScheduleResponseBodyCommandResultsCommandResult>) };
    inline vector<Models::RunServiceScheduleResponseBodyCommandResultsCommandResult> commandResult() { DARABONBA_PTR_GET(commandResult_, vector<Models::RunServiceScheduleResponseBodyCommandResultsCommandResult>) };
    inline RunServiceScheduleResponseBodyCommandResults& setCommandResult(const vector<Models::RunServiceScheduleResponseBodyCommandResultsCommandResult> & commandResult) { DARABONBA_PTR_SET_VALUE(commandResult_, commandResult) };
    inline RunServiceScheduleResponseBodyCommandResults& setCommandResult(vector<Models::RunServiceScheduleResponseBodyCommandResultsCommandResult> && commandResult) { DARABONBA_PTR_SET_RVALUE(commandResult_, commandResult) };


  protected:
    std::shared_ptr<vector<Models::RunServiceScheduleResponseBodyCommandResultsCommandResult>> commandResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
