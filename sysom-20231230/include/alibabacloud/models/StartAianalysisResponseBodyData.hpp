// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIANALYSISRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STARTAIANALYSISRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class StartAIAnalysisResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAIAnalysisResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(analysis_id, analysisId_);
    };
    friend void from_json(const Darabonba::Json& j, StartAIAnalysisResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(analysis_id, analysisId_);
    };
    StartAIAnalysisResponseBodyData() = default ;
    StartAIAnalysisResponseBodyData(const StartAIAnalysisResponseBodyData &) = default ;
    StartAIAnalysisResponseBodyData(StartAIAnalysisResponseBodyData &&) = default ;
    StartAIAnalysisResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAIAnalysisResponseBodyData() = default ;
    StartAIAnalysisResponseBodyData& operator=(const StartAIAnalysisResponseBodyData &) = default ;
    StartAIAnalysisResponseBodyData& operator=(StartAIAnalysisResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysisId_ != nullptr; };
    // analysisId Field Functions 
    bool hasAnalysisId() const { return this->analysisId_ != nullptr;};
    void deleteAnalysisId() { this->analysisId_ = nullptr;};
    inline string analysisId() const { DARABONBA_PTR_GET_DEFAULT(analysisId_, "") };
    inline StartAIAnalysisResponseBodyData& setAnalysisId(string analysisId) { DARABONBA_PTR_SET_VALUE(analysisId_, analysisId) };


  protected:
    std::shared_ptr<string> analysisId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
