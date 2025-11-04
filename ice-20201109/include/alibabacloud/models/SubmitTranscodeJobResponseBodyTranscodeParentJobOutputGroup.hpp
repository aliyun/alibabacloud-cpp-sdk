// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUP_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ProcessConfig, processConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ProcessConfig, processConfig_);
    };
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup(const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup(SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup &&) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup& operator=(const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup& operator=(SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->processConfig_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput output() { DARABONBA_PTR_GET(output_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup& setOutput(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup& setOutput(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // processConfig Field Functions 
    bool hasProcessConfig() const { return this->processConfig_ != nullptr;};
    void deleteProcessConfig() { this->processConfig_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig & processConfig() const { DARABONBA_PTR_GET_CONST(processConfig_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig processConfig() { DARABONBA_PTR_GET(processConfig_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup& setProcessConfig(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig & processConfig) { DARABONBA_PTR_SET_VALUE(processConfig_, processConfig) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroup& setProcessConfig(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig && processConfig) { DARABONBA_PTR_SET_RVALUE(processConfig_, processConfig) };


  protected:
    // The output file configuration.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput> output_ = nullptr;
    // The job processing configuration.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig> processConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
