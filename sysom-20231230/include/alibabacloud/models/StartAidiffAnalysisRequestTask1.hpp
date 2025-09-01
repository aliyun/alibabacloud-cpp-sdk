// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIDIFFANALYSISREQUESTTASK1_HPP_
#define ALIBABACLOUD_MODELS_STARTAIDIFFANALYSISREQUESTTASK1_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class StartAIDiffAnalysisRequestTask1 : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAIDiffAnalysisRequestTask1& obj) { 
      DARABONBA_PTR_TO_JSON(analysisId, analysisId_);
      DARABONBA_PTR_TO_JSON(pids, pids_);
      DARABONBA_PTR_TO_JSON(step_end, stepEnd_);
      DARABONBA_PTR_TO_JSON(step_start, stepStart_);
    };
    friend void from_json(const Darabonba::Json& j, StartAIDiffAnalysisRequestTask1& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisId, analysisId_);
      DARABONBA_PTR_FROM_JSON(pids, pids_);
      DARABONBA_PTR_FROM_JSON(step_end, stepEnd_);
      DARABONBA_PTR_FROM_JSON(step_start, stepStart_);
    };
    StartAIDiffAnalysisRequestTask1() = default ;
    StartAIDiffAnalysisRequestTask1(const StartAIDiffAnalysisRequestTask1 &) = default ;
    StartAIDiffAnalysisRequestTask1(StartAIDiffAnalysisRequestTask1 &&) = default ;
    StartAIDiffAnalysisRequestTask1(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAIDiffAnalysisRequestTask1() = default ;
    StartAIDiffAnalysisRequestTask1& operator=(const StartAIDiffAnalysisRequestTask1 &) = default ;
    StartAIDiffAnalysisRequestTask1& operator=(StartAIDiffAnalysisRequestTask1 &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysisId_ != nullptr
        && this->pids_ != nullptr && this->stepEnd_ != nullptr && this->stepStart_ != nullptr; };
    // analysisId Field Functions 
    bool hasAnalysisId() const { return this->analysisId_ != nullptr;};
    void deleteAnalysisId() { this->analysisId_ = nullptr;};
    inline string analysisId() const { DARABONBA_PTR_GET_DEFAULT(analysisId_, "") };
    inline StartAIDiffAnalysisRequestTask1& setAnalysisId(string analysisId) { DARABONBA_PTR_SET_VALUE(analysisId_, analysisId) };


    // pids Field Functions 
    bool hasPids() const { return this->pids_ != nullptr;};
    void deletePids() { this->pids_ = nullptr;};
    inline const vector<string> & pids() const { DARABONBA_PTR_GET_CONST(pids_, vector<string>) };
    inline vector<string> pids() { DARABONBA_PTR_GET(pids_, vector<string>) };
    inline StartAIDiffAnalysisRequestTask1& setPids(const vector<string> & pids) { DARABONBA_PTR_SET_VALUE(pids_, pids) };
    inline StartAIDiffAnalysisRequestTask1& setPids(vector<string> && pids) { DARABONBA_PTR_SET_RVALUE(pids_, pids) };


    // stepEnd Field Functions 
    bool hasStepEnd() const { return this->stepEnd_ != nullptr;};
    void deleteStepEnd() { this->stepEnd_ = nullptr;};
    inline float stepEnd() const { DARABONBA_PTR_GET_DEFAULT(stepEnd_, 0.0) };
    inline StartAIDiffAnalysisRequestTask1& setStepEnd(float stepEnd) { DARABONBA_PTR_SET_VALUE(stepEnd_, stepEnd) };


    // stepStart Field Functions 
    bool hasStepStart() const { return this->stepStart_ != nullptr;};
    void deleteStepStart() { this->stepStart_ = nullptr;};
    inline float stepStart() const { DARABONBA_PTR_GET_DEFAULT(stepStart_, 0.0) };
    inline StartAIDiffAnalysisRequestTask1& setStepStart(float stepStart) { DARABONBA_PTR_SET_VALUE(stepStart_, stepStart) };


  protected:
    std::shared_ptr<string> analysisId_ = nullptr;
    std::shared_ptr<vector<string>> pids_ = nullptr;
    std::shared_ptr<float> stepEnd_ = nullptr;
    std::shared_ptr<float> stepStart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
