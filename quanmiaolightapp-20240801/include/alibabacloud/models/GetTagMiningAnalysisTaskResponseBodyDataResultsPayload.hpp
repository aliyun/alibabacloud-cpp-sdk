// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTAGMININGANALYSISTASKRESPONSEBODYDATARESULTSPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_GETTAGMININGANALYSISTASKRESPONSEBODYDATARESULTSPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput.hpp>
#include <alibabacloud/models/GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetTagMiningAnalysisTaskResponseBodyDataResultsPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTagMiningAnalysisTaskResponseBodyDataResultsPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetTagMiningAnalysisTaskResponseBodyDataResultsPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    GetTagMiningAnalysisTaskResponseBodyDataResultsPayload() = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResultsPayload(const GetTagMiningAnalysisTaskResponseBodyDataResultsPayload &) = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResultsPayload(GetTagMiningAnalysisTaskResponseBodyDataResultsPayload &&) = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResultsPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTagMiningAnalysisTaskResponseBodyDataResultsPayload() = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResultsPayload& operator=(const GetTagMiningAnalysisTaskResponseBodyDataResultsPayload &) = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResultsPayload& operator=(GetTagMiningAnalysisTaskResponseBodyDataResultsPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput) };
    inline Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput) };
    inline GetTagMiningAnalysisTaskResponseBodyDataResultsPayload& setOutput(const Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline GetTagMiningAnalysisTaskResponseBodyDataResultsPayload& setOutput(Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage) };
    inline Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage) };
    inline GetTagMiningAnalysisTaskResponseBodyDataResultsPayload& setUsage(const Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetTagMiningAnalysisTaskResponseBodyDataResultsPayload& setUsage(Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
