// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUP_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupOutput.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobRequestOutputGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequestOutputGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ProcessConfig, processConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequestOutputGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ProcessConfig, processConfig_);
    };
    SubmitTranscodeJobRequestOutputGroup() = default ;
    SubmitTranscodeJobRequestOutputGroup(const SubmitTranscodeJobRequestOutputGroup &) = default ;
    SubmitTranscodeJobRequestOutputGroup(SubmitTranscodeJobRequestOutputGroup &&) = default ;
    SubmitTranscodeJobRequestOutputGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequestOutputGroup() = default ;
    SubmitTranscodeJobRequestOutputGroup& operator=(const SubmitTranscodeJobRequestOutputGroup &) = default ;
    SubmitTranscodeJobRequestOutputGroup& operator=(SubmitTranscodeJobRequestOutputGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->processConfig_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::SubmitTranscodeJobRequestOutputGroupOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::SubmitTranscodeJobRequestOutputGroupOutput) };
    inline Models::SubmitTranscodeJobRequestOutputGroupOutput output() { DARABONBA_PTR_GET(output_, Models::SubmitTranscodeJobRequestOutputGroupOutput) };
    inline SubmitTranscodeJobRequestOutputGroup& setOutput(const Models::SubmitTranscodeJobRequestOutputGroupOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitTranscodeJobRequestOutputGroup& setOutput(Models::SubmitTranscodeJobRequestOutputGroupOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // processConfig Field Functions 
    bool hasProcessConfig() const { return this->processConfig_ != nullptr;};
    void deleteProcessConfig() { this->processConfig_ = nullptr;};
    inline const Models::SubmitTranscodeJobRequestOutputGroupProcessConfig & processConfig() const { DARABONBA_PTR_GET_CONST(processConfig_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfig) };
    inline Models::SubmitTranscodeJobRequestOutputGroupProcessConfig processConfig() { DARABONBA_PTR_GET(processConfig_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfig) };
    inline SubmitTranscodeJobRequestOutputGroup& setProcessConfig(const Models::SubmitTranscodeJobRequestOutputGroupProcessConfig & processConfig) { DARABONBA_PTR_SET_VALUE(processConfig_, processConfig) };
    inline SubmitTranscodeJobRequestOutputGroup& setProcessConfig(Models::SubmitTranscodeJobRequestOutputGroupProcessConfig && processConfig) { DARABONBA_PTR_SET_RVALUE(processConfig_, processConfig) };


  protected:
    // The output file configuration.
    // 
    // This parameter is required.
    std::shared_ptr<Models::SubmitTranscodeJobRequestOutputGroupOutput> output_ = nullptr;
    // The job processing configuration.
    // 
    // This parameter is required.
    std::shared_ptr<Models::SubmitTranscodeJobRequestOutputGroupProcessConfig> processConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
