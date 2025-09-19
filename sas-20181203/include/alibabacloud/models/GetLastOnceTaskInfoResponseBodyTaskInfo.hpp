// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLASTONCETASKINFORESPONSEBODYTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_GETLASTONCETASKINFORESPONSEBODYTASKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetLastOnceTaskInfoResponseBodyTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLastOnceTaskInfoResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetLastOnceTaskInfoResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetLastOnceTaskInfoResponseBodyTaskInfo() = default ;
    GetLastOnceTaskInfoResponseBodyTaskInfo(const GetLastOnceTaskInfoResponseBodyTaskInfo &) = default ;
    GetLastOnceTaskInfoResponseBodyTaskInfo(GetLastOnceTaskInfoResponseBodyTaskInfo &&) = default ;
    GetLastOnceTaskInfoResponseBodyTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLastOnceTaskInfoResponseBodyTaskInfo() = default ;
    GetLastOnceTaskInfoResponseBodyTaskInfo& operator=(const GetLastOnceTaskInfoResponseBodyTaskInfo &) = default ;
    GetLastOnceTaskInfoResponseBodyTaskInfo& operator=(GetLastOnceTaskInfoResponseBodyTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->progress_ != nullptr
        && this->result_ != nullptr && this->status_ != nullptr; };
    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline GetLastOnceTaskInfoResponseBodyTaskInfo& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetLastOnceTaskInfoResponseBodyTaskInfo& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLastOnceTaskInfoResponseBodyTaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The progress of the task in percentage.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The result of the scan task. Valid values:
    // 
    // *   **SUCCESS**: The task is successful.
    // *   **TASK_NOT_SUPPORT_REGION**: The images are deployed in a region that is not supported by container image scan.
    // *   **TASK_NOT_EXISTS**: The task does not exist.
    std::shared_ptr<string> result_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **INIT**: The task is not started.
    // *   **START**: The task is started.
    // *   **SUCCESS**: The task is complete.
    // *   **TIMEOUT**: The task timed out.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
