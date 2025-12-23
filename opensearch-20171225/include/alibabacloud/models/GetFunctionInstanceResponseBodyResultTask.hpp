// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONINSTANCERESPONSEBODYRESULTTASK_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONINSTANCERESPONSEBODYRESULTTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionInstanceResponseBodyResultTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionInstanceResponseBodyResultTask& obj) { 
      DARABONBA_PTR_TO_JSON(DagStatus, dagStatus_);
      DARABONBA_PTR_TO_JSON(LastRunTime, lastRunTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionInstanceResponseBodyResultTask& obj) { 
      DARABONBA_PTR_FROM_JSON(DagStatus, dagStatus_);
      DARABONBA_PTR_FROM_JSON(LastRunTime, lastRunTime_);
    };
    GetFunctionInstanceResponseBodyResultTask() = default ;
    GetFunctionInstanceResponseBodyResultTask(const GetFunctionInstanceResponseBodyResultTask &) = default ;
    GetFunctionInstanceResponseBodyResultTask(GetFunctionInstanceResponseBodyResultTask &&) = default ;
    GetFunctionInstanceResponseBodyResultTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionInstanceResponseBodyResultTask() = default ;
    GetFunctionInstanceResponseBodyResultTask& operator=(const GetFunctionInstanceResponseBodyResultTask &) = default ;
    GetFunctionInstanceResponseBodyResultTask& operator=(GetFunctionInstanceResponseBodyResultTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagStatus_ == nullptr
        && return this->lastRunTime_ == nullptr; };
    // dagStatus Field Functions 
    bool hasDagStatus() const { return this->dagStatus_ != nullptr;};
    void deleteDagStatus() { this->dagStatus_ = nullptr;};
    inline string dagStatus() const { DARABONBA_PTR_GET_DEFAULT(dagStatus_, "") };
    inline GetFunctionInstanceResponseBodyResultTask& setDagStatus(string dagStatus) { DARABONBA_PTR_SET_VALUE(dagStatus_, dagStatus) };


    // lastRunTime Field Functions 
    bool hasLastRunTime() const { return this->lastRunTime_ != nullptr;};
    void deleteLastRunTime() { this->lastRunTime_ = nullptr;};
    inline int64_t lastRunTime() const { DARABONBA_PTR_GET_DEFAULT(lastRunTime_, 0L) };
    inline GetFunctionInstanceResponseBodyResultTask& setLastRunTime(int64_t lastRunTime) { DARABONBA_PTR_SET_VALUE(lastRunTime_, lastRunTime) };


  protected:
    // The status of the task. Valid values:
    // 
    // *   success: succeeded
    // *   failed: failed
    // *   untrained: to be trained
    // *   pending: being scheduled
    // *   running: being trained
    std::shared_ptr<string> dagStatus_ = nullptr;
    // The time consumed for the most recent run, in milliseconds.
    std::shared_ptr<int64_t> lastRunTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
