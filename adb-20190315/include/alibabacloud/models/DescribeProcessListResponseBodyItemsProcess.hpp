// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODYITEMSPROCESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODYITEMSPROCESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeProcessListResponseBodyItemsProcess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessListResponseBodyItemsProcess& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(DB, DB_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessListResponseBodyItemsProcess& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(DB, DB_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeProcessListResponseBodyItemsProcess() = default ;
    DescribeProcessListResponseBodyItemsProcess(const DescribeProcessListResponseBodyItemsProcess &) = default ;
    DescribeProcessListResponseBodyItemsProcess(DescribeProcessListResponseBodyItemsProcess &&) = default ;
    DescribeProcessListResponseBodyItemsProcess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessListResponseBodyItemsProcess() = default ;
    DescribeProcessListResponseBodyItemsProcess& operator=(const DescribeProcessListResponseBodyItemsProcess &) = default ;
    DescribeProcessListResponseBodyItemsProcess& operator=(DescribeProcessListResponseBodyItemsProcess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->command_ != nullptr
        && this->DB_ != nullptr && this->host_ != nullptr && this->id_ != nullptr && this->info_ != nullptr && this->processId_ != nullptr
        && this->startTime_ != nullptr && this->time_ != nullptr && this->user_ != nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline DescribeProcessListResponseBodyItemsProcess& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // DB Field Functions 
    bool hasDB() const { return this->DB_ != nullptr;};
    void deleteDB() { this->DB_ = nullptr;};
    inline string DB() const { DARABONBA_PTR_GET_DEFAULT(DB_, "") };
    inline DescribeProcessListResponseBodyItemsProcess& setDB(string DB) { DARABONBA_PTR_SET_VALUE(DB_, DB) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeProcessListResponseBodyItemsProcess& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeProcessListResponseBodyItemsProcess& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string info() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline DescribeProcessListResponseBodyItemsProcess& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline DescribeProcessListResponseBodyItemsProcess& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeProcessListResponseBodyItemsProcess& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int32_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0) };
    inline DescribeProcessListResponseBodyItemsProcess& setTime(int32_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeProcessListResponseBodyItemsProcess& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The type of the statement. Only SELECT can be returned.
    std::shared_ptr<string> command_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> DB_ = nullptr;
    // The IP address from which the query was initiated.
    std::shared_ptr<string> host_ = nullptr;
    // The ID of the worker thread.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The SQL statement that is being executed. By default, the first 100 characters of the SQL statement are returned. If the ShowFull parameter is set to True, the complete SQL statement is returned.
    std::shared_ptr<string> info_ = nullptr;
    // The unique ID of the query. You must specify this parameter when you use the KILL PROCESS statement.
    std::shared_ptr<string> processId_ = nullptr;
    // The start time of the query. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The amount of time that has elapsed from the start time of the query. Unit: seconds.
    std::shared_ptr<int32_t> time_ = nullptr;
    // The username.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
