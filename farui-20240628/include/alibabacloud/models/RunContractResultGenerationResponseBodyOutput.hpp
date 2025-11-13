// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONRESPONSEBODYOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONRESPONSEBODYOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunContractResultGenerationResponseBodyOutputResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractResultGenerationResponseBodyOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractResultGenerationResponseBodyOutput& obj) { 
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(resultTaskId, resultTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractResultGenerationResponseBodyOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(resultTaskId, resultTaskId_);
    };
    RunContractResultGenerationResponseBodyOutput() = default ;
    RunContractResultGenerationResponseBodyOutput(const RunContractResultGenerationResponseBodyOutput &) = default ;
    RunContractResultGenerationResponseBodyOutput(RunContractResultGenerationResponseBodyOutput &&) = default ;
    RunContractResultGenerationResponseBodyOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractResultGenerationResponseBodyOutput() = default ;
    RunContractResultGenerationResponseBodyOutput& operator=(const RunContractResultGenerationResponseBodyOutput &) = default ;
    RunContractResultGenerationResponseBodyOutput& operator=(RunContractResultGenerationResponseBodyOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr
        && return this->resultTaskId_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const Models::RunContractResultGenerationResponseBodyOutputResult & result() const { DARABONBA_PTR_GET_CONST(result_, Models::RunContractResultGenerationResponseBodyOutputResult) };
    inline Models::RunContractResultGenerationResponseBodyOutputResult result() { DARABONBA_PTR_GET(result_, Models::RunContractResultGenerationResponseBodyOutputResult) };
    inline RunContractResultGenerationResponseBodyOutput& setResult(const Models::RunContractResultGenerationResponseBodyOutputResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline RunContractResultGenerationResponseBodyOutput& setResult(Models::RunContractResultGenerationResponseBodyOutputResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // resultTaskId Field Functions 
    bool hasResultTaskId() const { return this->resultTaskId_ != nullptr;};
    void deleteResultTaskId() { this->resultTaskId_ = nullptr;};
    inline string resultTaskId() const { DARABONBA_PTR_GET_DEFAULT(resultTaskId_, "") };
    inline RunContractResultGenerationResponseBodyOutput& setResultTaskId(string resultTaskId) { DARABONBA_PTR_SET_VALUE(resultTaskId_, resultTaskId) };


  protected:
    std::shared_ptr<Models::RunContractResultGenerationResponseBodyOutputResult> result_ = nullptr;
    std::shared_ptr<string> resultTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
