// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ProcessConfig, processConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ProcessConfig, processConfig_);
    };
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup(const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup(GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup &&) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup& operator=(const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup& operator=(GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->processConfig_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput output() { DARABONBA_PTR_GET(output_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup& setOutput(const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup& setOutput(Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // processConfig Field Functions 
    bool hasProcessConfig() const { return this->processConfig_ != nullptr;};
    void deleteProcessConfig() { this->processConfig_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig & processConfig() const { DARABONBA_PTR_GET_CONST(processConfig_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig processConfig() { DARABONBA_PTR_GET(processConfig_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup& setProcessConfig(const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig & processConfig) { DARABONBA_PTR_SET_VALUE(processConfig_, processConfig) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroup& setProcessConfig(Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig && processConfig) { DARABONBA_PTR_SET_RVALUE(processConfig_, processConfig) };


  protected:
    // The output file configuration.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput> output_ = nullptr;
    // The job processing configuration.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig> processConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
