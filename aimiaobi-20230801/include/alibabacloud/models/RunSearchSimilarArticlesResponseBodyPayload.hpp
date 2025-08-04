// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchSimilarArticlesResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunSearchSimilarArticlesResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchSimilarArticlesResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchSimilarArticlesResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchSimilarArticlesResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunSearchSimilarArticlesResponseBodyPayload() = default ;
    RunSearchSimilarArticlesResponseBodyPayload(const RunSearchSimilarArticlesResponseBodyPayload &) = default ;
    RunSearchSimilarArticlesResponseBodyPayload(RunSearchSimilarArticlesResponseBodyPayload &&) = default ;
    RunSearchSimilarArticlesResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchSimilarArticlesResponseBodyPayload() = default ;
    RunSearchSimilarArticlesResponseBodyPayload& operator=(const RunSearchSimilarArticlesResponseBodyPayload &) = default ;
    RunSearchSimilarArticlesResponseBodyPayload& operator=(RunSearchSimilarArticlesResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunSearchSimilarArticlesResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunSearchSimilarArticlesResponseBodyPayloadOutput) };
    inline Models::RunSearchSimilarArticlesResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunSearchSimilarArticlesResponseBodyPayloadOutput) };
    inline RunSearchSimilarArticlesResponseBodyPayload& setOutput(const Models::RunSearchSimilarArticlesResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunSearchSimilarArticlesResponseBodyPayload& setOutput(Models::RunSearchSimilarArticlesResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunSearchSimilarArticlesResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunSearchSimilarArticlesResponseBodyPayloadUsage) };
    inline Models::RunSearchSimilarArticlesResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunSearchSimilarArticlesResponseBodyPayloadUsage) };
    inline RunSearchSimilarArticlesResponseBodyPayload& setUsage(const Models::RunSearchSimilarArticlesResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunSearchSimilarArticlesResponseBodyPayload& setUsage(Models::RunSearchSimilarArticlesResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunSearchSimilarArticlesResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunSearchSimilarArticlesResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
