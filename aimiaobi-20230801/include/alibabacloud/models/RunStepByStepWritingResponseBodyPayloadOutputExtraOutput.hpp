// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGRESPONSEBODYPAYLOADOUTPUTEXTRAOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGRESPONSEBODYPAYLOADOUTPUTEXTRAOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunStepByStepWritingResponseBodyPayloadOutputExtraOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStepByStepWritingResponseBodyPayloadOutputExtraOutput& obj) { 
      DARABONBA_PTR_TO_JSON(summarization, summarization_);
    };
    friend void from_json(const Darabonba::Json& j, RunStepByStepWritingResponseBodyPayloadOutputExtraOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(summarization, summarization_);
    };
    RunStepByStepWritingResponseBodyPayloadOutputExtraOutput() = default ;
    RunStepByStepWritingResponseBodyPayloadOutputExtraOutput(const RunStepByStepWritingResponseBodyPayloadOutputExtraOutput &) = default ;
    RunStepByStepWritingResponseBodyPayloadOutputExtraOutput(RunStepByStepWritingResponseBodyPayloadOutputExtraOutput &&) = default ;
    RunStepByStepWritingResponseBodyPayloadOutputExtraOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStepByStepWritingResponseBodyPayloadOutputExtraOutput() = default ;
    RunStepByStepWritingResponseBodyPayloadOutputExtraOutput& operator=(const RunStepByStepWritingResponseBodyPayloadOutputExtraOutput &) = default ;
    RunStepByStepWritingResponseBodyPayloadOutputExtraOutput& operator=(RunStepByStepWritingResponseBodyPayloadOutputExtraOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->summarization_ != nullptr; };
    // summarization Field Functions 
    bool hasSummarization() const { return this->summarization_ != nullptr;};
    void deleteSummarization() { this->summarization_ = nullptr;};
    inline const vector<string> & summarization() const { DARABONBA_PTR_GET_CONST(summarization_, vector<string>) };
    inline vector<string> summarization() { DARABONBA_PTR_GET(summarization_, vector<string>) };
    inline RunStepByStepWritingResponseBodyPayloadOutputExtraOutput& setSummarization(const vector<string> & summarization) { DARABONBA_PTR_SET_VALUE(summarization_, summarization) };
    inline RunStepByStepWritingResponseBodyPayloadOutputExtraOutput& setSummarization(vector<string> && summarization) { DARABONBA_PTR_SET_RVALUE(summarization_, summarization) };


  protected:
    std::shared_ptr<vector<string>> summarization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
