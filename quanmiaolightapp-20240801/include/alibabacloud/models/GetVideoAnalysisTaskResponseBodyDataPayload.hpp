// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutput.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyDataPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyDataPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyDataPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    GetVideoAnalysisTaskResponseBodyDataPayload() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayload(const GetVideoAnalysisTaskResponseBodyDataPayload &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayload(GetVideoAnalysisTaskResponseBodyDataPayload &&) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyDataPayload() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayload& operator=(const GetVideoAnalysisTaskResponseBodyDataPayload &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayload& operator=(GetVideoAnalysisTaskResponseBodyDataPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutput) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutput) };
    inline GetVideoAnalysisTaskResponseBodyDataPayload& setOutput(const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline GetVideoAnalysisTaskResponseBodyDataPayload& setOutput(Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadUsage) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadUsage) };
    inline GetVideoAnalysisTaskResponseBodyDataPayload& setUsage(const Models::GetVideoAnalysisTaskResponseBodyDataPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetVideoAnalysisTaskResponseBodyDataPayload& setUsage(Models::GetVideoAnalysisTaskResponseBodyDataPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
