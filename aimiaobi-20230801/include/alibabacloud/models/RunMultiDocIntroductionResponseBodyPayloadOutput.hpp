// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMULTIDOCINTRODUCTIONRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNMULTIDOCINTRODUCTIONRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunMultiDocIntroductionResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMultiDocIntroductionResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPoints, keyPoints_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, RunMultiDocIntroductionResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPoints, keyPoints_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    RunMultiDocIntroductionResponseBodyPayloadOutput() = default ;
    RunMultiDocIntroductionResponseBodyPayloadOutput(const RunMultiDocIntroductionResponseBodyPayloadOutput &) = default ;
    RunMultiDocIntroductionResponseBodyPayloadOutput(RunMultiDocIntroductionResponseBodyPayloadOutput &&) = default ;
    RunMultiDocIntroductionResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMultiDocIntroductionResponseBodyPayloadOutput() = default ;
    RunMultiDocIntroductionResponseBodyPayloadOutput& operator=(const RunMultiDocIntroductionResponseBodyPayloadOutput &) = default ;
    RunMultiDocIntroductionResponseBodyPayloadOutput& operator=(RunMultiDocIntroductionResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyPoints_ != nullptr
        && this->summary_ != nullptr; };
    // keyPoints Field Functions 
    bool hasKeyPoints() const { return this->keyPoints_ != nullptr;};
    void deleteKeyPoints() { this->keyPoints_ = nullptr;};
    inline const vector<Models::RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints> & keyPoints() const { DARABONBA_PTR_GET_CONST(keyPoints_, vector<Models::RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints>) };
    inline vector<Models::RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints> keyPoints() { DARABONBA_PTR_GET(keyPoints_, vector<Models::RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints>) };
    inline RunMultiDocIntroductionResponseBodyPayloadOutput& setKeyPoints(const vector<Models::RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints> & keyPoints) { DARABONBA_PTR_SET_VALUE(keyPoints_, keyPoints) };
    inline RunMultiDocIntroductionResponseBodyPayloadOutput& setKeyPoints(vector<Models::RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints> && keyPoints) { DARABONBA_PTR_SET_RVALUE(keyPoints_, keyPoints) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline RunMultiDocIntroductionResponseBodyPayloadOutput& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    std::shared_ptr<vector<Models::RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints>> keyPoints_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
