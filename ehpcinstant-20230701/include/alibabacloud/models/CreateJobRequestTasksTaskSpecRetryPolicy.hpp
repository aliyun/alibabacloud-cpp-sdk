// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPECRETRYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPECRETRYPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateJobRequestTasksTaskSpecRetryPolicyExitCodeActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestTasksTaskSpecRetryPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestTasksTaskSpecRetryPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ExitCodeActions, exitCodeActions_);
      DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestTasksTaskSpecRetryPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ExitCodeActions, exitCodeActions_);
      DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
    };
    CreateJobRequestTasksTaskSpecRetryPolicy() = default ;
    CreateJobRequestTasksTaskSpecRetryPolicy(const CreateJobRequestTasksTaskSpecRetryPolicy &) = default ;
    CreateJobRequestTasksTaskSpecRetryPolicy(CreateJobRequestTasksTaskSpecRetryPolicy &&) = default ;
    CreateJobRequestTasksTaskSpecRetryPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestTasksTaskSpecRetryPolicy() = default ;
    CreateJobRequestTasksTaskSpecRetryPolicy& operator=(const CreateJobRequestTasksTaskSpecRetryPolicy &) = default ;
    CreateJobRequestTasksTaskSpecRetryPolicy& operator=(CreateJobRequestTasksTaskSpecRetryPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exitCodeActions_ != nullptr
        && this->retryCount_ != nullptr; };
    // exitCodeActions Field Functions 
    bool hasExitCodeActions() const { return this->exitCodeActions_ != nullptr;};
    void deleteExitCodeActions() { this->exitCodeActions_ = nullptr;};
    inline const vector<Models::CreateJobRequestTasksTaskSpecRetryPolicyExitCodeActions> & exitCodeActions() const { DARABONBA_PTR_GET_CONST(exitCodeActions_, vector<Models::CreateJobRequestTasksTaskSpecRetryPolicyExitCodeActions>) };
    inline vector<Models::CreateJobRequestTasksTaskSpecRetryPolicyExitCodeActions> exitCodeActions() { DARABONBA_PTR_GET(exitCodeActions_, vector<Models::CreateJobRequestTasksTaskSpecRetryPolicyExitCodeActions>) };
    inline CreateJobRequestTasksTaskSpecRetryPolicy& setExitCodeActions(const vector<Models::CreateJobRequestTasksTaskSpecRetryPolicyExitCodeActions> & exitCodeActions) { DARABONBA_PTR_SET_VALUE(exitCodeActions_, exitCodeActions) };
    inline CreateJobRequestTasksTaskSpecRetryPolicy& setExitCodeActions(vector<Models::CreateJobRequestTasksTaskSpecRetryPolicyExitCodeActions> && exitCodeActions) { DARABONBA_PTR_SET_RVALUE(exitCodeActions_, exitCodeActions) };


    // retryCount Field Functions 
    bool hasRetryCount() const { return this->retryCount_ != nullptr;};
    void deleteRetryCount() { this->retryCount_ = nullptr;};
    inline int32_t retryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
    inline CreateJobRequestTasksTaskSpecRetryPolicy& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


  protected:
    std::shared_ptr<vector<Models::CreateJobRequestTasksTaskSpecRetryPolicyExitCodeActions>> exitCodeActions_ = nullptr;
    std::shared_ptr<int32_t> retryCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
