// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSACTIONLOGSRESPONSEBODYACTIONLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSACTIONLOGSRESPONSEBODYACTIONLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsActionLogsResponseBodyActionLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsActionLogsResponseBodyActionLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(Stage, stage_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsActionLogsResponseBodyActionLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(Stage, stage_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeApsActionLogsResponseBodyActionLogs() = default ;
    DescribeApsActionLogsResponseBodyActionLogs(const DescribeApsActionLogsResponseBodyActionLogs &) = default ;
    DescribeApsActionLogsResponseBodyActionLogs(DescribeApsActionLogsResponseBodyActionLogs &&) = default ;
    DescribeApsActionLogsResponseBodyActionLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsActionLogsResponseBodyActionLogs() = default ;
    DescribeApsActionLogsResponseBodyActionLogs& operator=(const DescribeApsActionLogsResponseBodyActionLogs &) = default ;
    DescribeApsActionLogsResponseBodyActionLogs& operator=(DescribeApsActionLogsResponseBodyActionLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->context_ != nullptr
        && this->stage_ != nullptr && this->state_ != nullptr && this->time_ != nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline DescribeApsActionLogsResponseBodyActionLogs& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline string stage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
    inline DescribeApsActionLogsResponseBodyActionLogs& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeApsActionLogsResponseBodyActionLogs& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeApsActionLogsResponseBodyActionLogs& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The content of the log.
    std::shared_ptr<string> context_ = nullptr;
    // The phase during which the log was generated. Valid values:
    // 
    // *   **StructureMigrate**: schema migration.
    // *   **FullDataSync**: full data synchronization.
    // *   **IncrementalSync**: incremental data synchronization.
    std::shared_ptr<string> stage_ = nullptr;
    // The type of the log. Multiple log types are separated by commas (,). Valid values:
    // 
    // *   **INFO**
    // *   **WARN**
    // *   **ERROR**
    std::shared_ptr<string> state_ = nullptr;
    // The time when the log was generated. The time follows the ISO 8601 standard in the **yyyy-MM-ddTHH:mm:ssZ** format. The time is displayed in UTC.
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
