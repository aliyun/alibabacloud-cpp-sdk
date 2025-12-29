// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONLOGSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONLOGSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LogEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetApplicationLogsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationLogsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(logEntrys, logEntrys_);
      DARABONBA_PTR_TO_JSON(nextOffset, nextOffset_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationLogsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(logEntrys, logEntrys_);
      DARABONBA_PTR_FROM_JSON(nextOffset, nextOffset_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetApplicationLogsOutput() = default ;
    GetApplicationLogsOutput(const GetApplicationLogsOutput &) = default ;
    GetApplicationLogsOutput(GetApplicationLogsOutput &&) = default ;
    GetApplicationLogsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationLogsOutput() = default ;
    GetApplicationLogsOutput& operator=(const GetApplicationLogsOutput &) = default ;
    GetApplicationLogsOutput& operator=(GetApplicationLogsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logEntrys_ == nullptr
        && this->nextOffset_ == nullptr && this->requestId_ == nullptr; };
    // logEntrys Field Functions 
    bool hasLogEntrys() const { return this->logEntrys_ != nullptr;};
    void deleteLogEntrys() { this->logEntrys_ = nullptr;};
    inline const vector<LogEntry> & getLogEntrys() const { DARABONBA_PTR_GET_CONST(logEntrys_, vector<LogEntry>) };
    inline vector<LogEntry> getLogEntrys() { DARABONBA_PTR_GET(logEntrys_, vector<LogEntry>) };
    inline GetApplicationLogsOutput& setLogEntrys(const vector<LogEntry> & logEntrys) { DARABONBA_PTR_SET_VALUE(logEntrys_, logEntrys) };
    inline GetApplicationLogsOutput& setLogEntrys(vector<LogEntry> && logEntrys) { DARABONBA_PTR_SET_RVALUE(logEntrys_, logEntrys) };


    // nextOffset Field Functions 
    bool hasNextOffset() const { return this->nextOffset_ != nullptr;};
    void deleteNextOffset() { this->nextOffset_ = nullptr;};
    inline int64_t getNextOffset() const { DARABONBA_PTR_GET_DEFAULT(nextOffset_, 0L) };
    inline GetApplicationLogsOutput& setNextOffset(int64_t nextOffset) { DARABONBA_PTR_SET_VALUE(nextOffset_, nextOffset) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationLogsOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<LogEntry>> logEntrys_ {};
    shared_ptr<int64_t> nextOffset_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
