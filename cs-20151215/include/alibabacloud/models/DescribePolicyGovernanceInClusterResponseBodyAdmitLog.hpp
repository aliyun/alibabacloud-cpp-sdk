// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYADMITLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYADMITLOG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBodyAdmitLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBodyAdmitLog& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(log_project, logProject_);
      DARABONBA_PTR_TO_JSON(log_store, logStore_);
      DARABONBA_PTR_TO_JSON(logs, logs_);
      DARABONBA_PTR_TO_JSON(progress, progress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBodyAdmitLog& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(log_project, logProject_);
      DARABONBA_PTR_FROM_JSON(log_store, logStore_);
      DARABONBA_PTR_FROM_JSON(logs, logs_);
      DARABONBA_PTR_FROM_JSON(progress, progress_);
    };
    DescribePolicyGovernanceInClusterResponseBodyAdmitLog() = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLog(const DescribePolicyGovernanceInClusterResponseBodyAdmitLog &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLog(DescribePolicyGovernanceInClusterResponseBodyAdmitLog &&) = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBodyAdmitLog() = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLog& operator=(const DescribePolicyGovernanceInClusterResponseBodyAdmitLog &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLog& operator=(DescribePolicyGovernanceInClusterResponseBodyAdmitLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->logProject_ == nullptr && return this->logStore_ == nullptr && return this->logs_ == nullptr && return this->progress_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLog& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // logProject Field Functions 
    bool hasLogProject() const { return this->logProject_ != nullptr;};
    void deleteLogProject() { this->logProject_ = nullptr;};
    inline string logProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLog& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLog& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs>) };
    inline vector<Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs> logs() { DARABONBA_PTR_GET(logs_, vector<Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs>) };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLog& setLogs(const vector<Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLog& setLogs(vector<Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLog& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


  protected:
    // The number of audit log entries.
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<string> logProject_ = nullptr;
    std::shared_ptr<string> logStore_ = nullptr;
    std::shared_ptr<vector<Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs>> logs_ = nullptr;
    // The status of the query. Valid values:
    // 
    // *   `Complete`: The query succeeded and the complete query result is returned.
    // *   `Incomplete`: The query succeeded but the query result is incomplete. To obtain the complete query result, you must repeat the request.
    std::shared_ptr<string> progress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
