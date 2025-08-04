// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunDocIntroductionResponseBodyPayloadOutputIntroductions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocIntroductionResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocIntroductionResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Introductions, introductions_);
      DARABONBA_PTR_TO_JSON(KeyPoint, keyPoint_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocIntroductionResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Introductions, introductions_);
      DARABONBA_PTR_FROM_JSON(KeyPoint, keyPoint_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    RunDocIntroductionResponseBodyPayloadOutput() = default ;
    RunDocIntroductionResponseBodyPayloadOutput(const RunDocIntroductionResponseBodyPayloadOutput &) = default ;
    RunDocIntroductionResponseBodyPayloadOutput(RunDocIntroductionResponseBodyPayloadOutput &&) = default ;
    RunDocIntroductionResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocIntroductionResponseBodyPayloadOutput() = default ;
    RunDocIntroductionResponseBodyPayloadOutput& operator=(const RunDocIntroductionResponseBodyPayloadOutput &) = default ;
    RunDocIntroductionResponseBodyPayloadOutput& operator=(RunDocIntroductionResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->introductions_ != nullptr
        && this->keyPoint_ != nullptr && this->summary_ != nullptr; };
    // introductions Field Functions 
    bool hasIntroductions() const { return this->introductions_ != nullptr;};
    void deleteIntroductions() { this->introductions_ = nullptr;};
    inline const vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductions> & introductions() const { DARABONBA_PTR_GET_CONST(introductions_, vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductions>) };
    inline vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductions> introductions() { DARABONBA_PTR_GET(introductions_, vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductions>) };
    inline RunDocIntroductionResponseBodyPayloadOutput& setIntroductions(const vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductions> & introductions) { DARABONBA_PTR_SET_VALUE(introductions_, introductions) };
    inline RunDocIntroductionResponseBodyPayloadOutput& setIntroductions(vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductions> && introductions) { DARABONBA_PTR_SET_RVALUE(introductions_, introductions) };


    // keyPoint Field Functions 
    bool hasKeyPoint() const { return this->keyPoint_ != nullptr;};
    void deleteKeyPoint() { this->keyPoint_ = nullptr;};
    inline string keyPoint() const { DARABONBA_PTR_GET_DEFAULT(keyPoint_, "") };
    inline RunDocIntroductionResponseBodyPayloadOutput& setKeyPoint(string keyPoint) { DARABONBA_PTR_SET_VALUE(keyPoint_, keyPoint) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline RunDocIntroductionResponseBodyPayloadOutput& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    std::shared_ptr<vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductions>> introductions_ = nullptr;
    std::shared_ptr<string> keyPoint_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
