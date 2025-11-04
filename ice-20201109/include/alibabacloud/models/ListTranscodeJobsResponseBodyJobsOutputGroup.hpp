// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUP_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupOutput.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobsOutputGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobsOutputGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ProcessConfig, processConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobsOutputGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ProcessConfig, processConfig_);
    };
    ListTranscodeJobsResponseBodyJobsOutputGroup() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroup(const ListTranscodeJobsResponseBodyJobsOutputGroup &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroup(ListTranscodeJobsResponseBodyJobsOutputGroup &&) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobsOutputGroup() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroup& operator=(const ListTranscodeJobsResponseBodyJobsOutputGroup &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroup& operator=(ListTranscodeJobsResponseBodyJobsOutputGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->processConfig_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::ListTranscodeJobsResponseBodyJobsOutputGroupOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupOutput) };
    inline Models::ListTranscodeJobsResponseBodyJobsOutputGroupOutput output() { DARABONBA_PTR_GET(output_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupOutput) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroup& setOutput(const Models::ListTranscodeJobsResponseBodyJobsOutputGroupOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroup& setOutput(Models::ListTranscodeJobsResponseBodyJobsOutputGroupOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // processConfig Field Functions 
    bool hasProcessConfig() const { return this->processConfig_ != nullptr;};
    void deleteProcessConfig() { this->processConfig_ = nullptr;};
    inline const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig & processConfig() const { DARABONBA_PTR_GET_CONST(processConfig_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig) };
    inline Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig processConfig() { DARABONBA_PTR_GET(processConfig_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroup& setProcessConfig(const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig & processConfig) { DARABONBA_PTR_SET_VALUE(processConfig_, processConfig) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroup& setProcessConfig(Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig && processConfig) { DARABONBA_PTR_SET_RVALUE(processConfig_, processConfig) };


  protected:
    // The output file configuration.
    std::shared_ptr<Models::ListTranscodeJobsResponseBodyJobsOutputGroupOutput> output_ = nullptr;
    // The job processing configuration.
    std::shared_ptr<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig> processConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
