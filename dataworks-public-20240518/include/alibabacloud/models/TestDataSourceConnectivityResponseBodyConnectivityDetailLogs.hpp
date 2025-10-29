// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTDATASOURCECONNECTIVITYRESPONSEBODYCONNECTIVITYDETAILLOGS_HPP_
#define ALIBABACLOUD_MODELS_TESTDATASOURCECONNECTIVITYRESPONSEBODYCONNECTIVITYDETAILLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class TestDataSourceConnectivityResponseBodyConnectivityDetailLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestDataSourceConnectivityResponseBodyConnectivityDetailLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, TestDataSourceConnectivityResponseBodyConnectivityDetailLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    TestDataSourceConnectivityResponseBodyConnectivityDetailLogs() = default ;
    TestDataSourceConnectivityResponseBodyConnectivityDetailLogs(const TestDataSourceConnectivityResponseBodyConnectivityDetailLogs &) = default ;
    TestDataSourceConnectivityResponseBodyConnectivityDetailLogs(TestDataSourceConnectivityResponseBodyConnectivityDetailLogs &&) = default ;
    TestDataSourceConnectivityResponseBodyConnectivityDetailLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestDataSourceConnectivityResponseBodyConnectivityDetailLogs() = default ;
    TestDataSourceConnectivityResponseBodyConnectivityDetailLogs& operator=(const TestDataSourceConnectivityResponseBodyConnectivityDetailLogs &) = default ;
    TestDataSourceConnectivityResponseBodyConnectivityDetailLogs& operator=(TestDataSourceConnectivityResponseBodyConnectivityDetailLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->endTime_ == nullptr && return this->message_ == nullptr && return this->startTime_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TestDataSourceConnectivityResponseBodyConnectivityDetailLogs& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline TestDataSourceConnectivityResponseBodyConnectivityDetailLogs& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TestDataSourceConnectivityResponseBodyConnectivityDetailLogs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline TestDataSourceConnectivityResponseBodyConnectivityDetailLogs& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The code of the test item.
    std::shared_ptr<string> code_ = nullptr;
    // The end time of a step.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The name of the step.
    std::shared_ptr<string> message_ = nullptr;
    // The start time of a step.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
