// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunEnterpriseVocAnalysisResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEnterpriseVocAnalysisResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(filterResult, filterResult_);
      DARABONBA_PTR_TO_JSON(reasonContent, reasonContent_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RunEnterpriseVocAnalysisResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(filterResult, filterResult_);
      DARABONBA_PTR_FROM_JSON(reasonContent, reasonContent_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    RunEnterpriseVocAnalysisResponseBodyPayloadOutput() = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutput(const RunEnterpriseVocAnalysisResponseBodyPayloadOutput &) = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutput(RunEnterpriseVocAnalysisResponseBodyPayloadOutput &&) = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEnterpriseVocAnalysisResponseBodyPayloadOutput() = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutput& operator=(const RunEnterpriseVocAnalysisResponseBodyPayloadOutput &) = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutput& operator=(RunEnterpriseVocAnalysisResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filterResult_ != nullptr
        && this->reasonContent_ != nullptr && this->text_ != nullptr; };
    // filterResult Field Functions 
    bool hasFilterResult() const { return this->filterResult_ != nullptr;};
    void deleteFilterResult() { this->filterResult_ = nullptr;};
    inline const Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult & filterResult() const { DARABONBA_PTR_GET_CONST(filterResult_, Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult) };
    inline Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult filterResult() { DARABONBA_PTR_GET(filterResult_, Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult) };
    inline RunEnterpriseVocAnalysisResponseBodyPayloadOutput& setFilterResult(const Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult & filterResult) { DARABONBA_PTR_SET_VALUE(filterResult_, filterResult) };
    inline RunEnterpriseVocAnalysisResponseBodyPayloadOutput& setFilterResult(Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult && filterResult) { DARABONBA_PTR_SET_RVALUE(filterResult_, filterResult) };


    // reasonContent Field Functions 
    bool hasReasonContent() const { return this->reasonContent_ != nullptr;};
    void deleteReasonContent() { this->reasonContent_ = nullptr;};
    inline string reasonContent() const { DARABONBA_PTR_GET_DEFAULT(reasonContent_, "") };
    inline RunEnterpriseVocAnalysisResponseBodyPayloadOutput& setReasonContent(string reasonContent) { DARABONBA_PTR_SET_VALUE(reasonContent_, reasonContent) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunEnterpriseVocAnalysisResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult> filterResult_ = nullptr;
    std::shared_ptr<string> reasonContent_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
