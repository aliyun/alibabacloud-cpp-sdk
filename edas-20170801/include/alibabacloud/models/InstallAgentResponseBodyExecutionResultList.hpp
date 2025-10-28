// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLAGENTRESPONSEBODYEXECUTIONRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLAGENTRESPONSEBODYEXECUTIONRESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstallAgentResponseBodyExecutionResultListExecutionResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InstallAgentResponseBodyExecutionResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAgentResponseBodyExecutionResultList& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionResult, executionResult_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAgentResponseBodyExecutionResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionResult, executionResult_);
    };
    InstallAgentResponseBodyExecutionResultList() = default ;
    InstallAgentResponseBodyExecutionResultList(const InstallAgentResponseBodyExecutionResultList &) = default ;
    InstallAgentResponseBodyExecutionResultList(InstallAgentResponseBodyExecutionResultList &&) = default ;
    InstallAgentResponseBodyExecutionResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAgentResponseBodyExecutionResultList() = default ;
    InstallAgentResponseBodyExecutionResultList& operator=(const InstallAgentResponseBodyExecutionResultList &) = default ;
    InstallAgentResponseBodyExecutionResultList& operator=(InstallAgentResponseBodyExecutionResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionResult_ == nullptr; };
    // executionResult Field Functions 
    bool hasExecutionResult() const { return this->executionResult_ != nullptr;};
    void deleteExecutionResult() { this->executionResult_ = nullptr;};
    inline const vector<Models::InstallAgentResponseBodyExecutionResultListExecutionResult> & executionResult() const { DARABONBA_PTR_GET_CONST(executionResult_, vector<Models::InstallAgentResponseBodyExecutionResultListExecutionResult>) };
    inline vector<Models::InstallAgentResponseBodyExecutionResultListExecutionResult> executionResult() { DARABONBA_PTR_GET(executionResult_, vector<Models::InstallAgentResponseBodyExecutionResultListExecutionResult>) };
    inline InstallAgentResponseBodyExecutionResultList& setExecutionResult(const vector<Models::InstallAgentResponseBodyExecutionResultListExecutionResult> & executionResult) { DARABONBA_PTR_SET_VALUE(executionResult_, executionResult) };
    inline InstallAgentResponseBodyExecutionResultList& setExecutionResult(vector<Models::InstallAgentResponseBodyExecutionResultListExecutionResult> && executionResult) { DARABONBA_PTR_SET_RVALUE(executionResult_, executionResult) };


  protected:
    std::shared_ptr<vector<Models::InstallAgentResponseBodyExecutionResultListExecutionResult>> executionResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
