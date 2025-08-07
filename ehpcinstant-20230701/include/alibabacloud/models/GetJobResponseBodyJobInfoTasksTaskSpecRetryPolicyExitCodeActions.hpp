// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPECRETRYPOLICYEXITCODEACTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPECRETRYPOLICYEXITCODEACTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ExitCode, exitCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ExitCode, exitCode_);
    };
    GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions(const GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions(GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions &&) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions& operator=(const GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions& operator=(GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->exitCode_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // exitCode Field Functions 
    bool hasExitCode() const { return this->exitCode_ != nullptr;};
    void deleteExitCode() { this->exitCode_ = nullptr;};
    inline int64_t exitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0L) };
    inline GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions& setExitCode(int64_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<int64_t> exitCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
