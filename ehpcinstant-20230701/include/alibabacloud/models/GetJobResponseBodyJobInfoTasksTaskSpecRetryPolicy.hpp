// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPECRETRYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPECRETRYPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ExitCodeActions, exitCodeActions_);
      DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ExitCodeActions, exitCodeActions_);
      DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
    };
    GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy(const GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy(GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy &&) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy& operator=(const GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy& operator=(GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exitCodeActions_ != nullptr
        && this->retryCount_ != nullptr; };
    // exitCodeActions Field Functions 
    bool hasExitCodeActions() const { return this->exitCodeActions_ != nullptr;};
    void deleteExitCodeActions() { this->exitCodeActions_ = nullptr;};
    inline const vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions> & exitCodeActions() const { DARABONBA_PTR_GET_CONST(exitCodeActions_, vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions>) };
    inline vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions> exitCodeActions() { DARABONBA_PTR_GET(exitCodeActions_, vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions>) };
    inline GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy& setExitCodeActions(const vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions> & exitCodeActions) { DARABONBA_PTR_SET_VALUE(exitCodeActions_, exitCodeActions) };
    inline GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy& setExitCodeActions(vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions> && exitCodeActions) { DARABONBA_PTR_SET_RVALUE(exitCodeActions_, exitCodeActions) };


    // retryCount Field Functions 
    bool hasRetryCount() const { return this->retryCount_ != nullptr;};
    void deleteRetryCount() { this->retryCount_ = nullptr;};
    inline int32_t retryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
    inline GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


  protected:
    std::shared_ptr<vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicyExitCodeActions>> exitCodeActions_ = nullptr;
    std::shared_ptr<int32_t> retryCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
