// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYADMITLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYADMITLOG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog.hpp>
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
      DARABONBA_PTR_TO_JSON(log, log_);
      DARABONBA_PTR_TO_JSON(progress, progress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBodyAdmitLog& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(log, log_);
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
    virtual bool empty() const override { this->count_ != nullptr
        && this->log_ != nullptr && this->progress_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLog& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline const Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog & log() const { DARABONBA_PTR_GET_CONST(log_, Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog) };
    inline Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog log() { DARABONBA_PTR_GET(log_, Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog) };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLog& setLog(const Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLog& setLog(Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLog& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


  protected:
    // The number of audit log entries.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The audit log content.
    std::shared_ptr<Models::DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog> log_ = nullptr;
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
