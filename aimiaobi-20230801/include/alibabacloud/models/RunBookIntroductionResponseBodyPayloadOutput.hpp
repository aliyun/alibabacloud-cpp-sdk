// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNBOOKINTRODUCTIONRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNBOOKINTRODUCTIONRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunBookIntroductionResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunBookIntroductionResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPoint, keyPoint_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, RunBookIntroductionResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPoint, keyPoint_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    RunBookIntroductionResponseBodyPayloadOutput() = default ;
    RunBookIntroductionResponseBodyPayloadOutput(const RunBookIntroductionResponseBodyPayloadOutput &) = default ;
    RunBookIntroductionResponseBodyPayloadOutput(RunBookIntroductionResponseBodyPayloadOutput &&) = default ;
    RunBookIntroductionResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunBookIntroductionResponseBodyPayloadOutput() = default ;
    RunBookIntroductionResponseBodyPayloadOutput& operator=(const RunBookIntroductionResponseBodyPayloadOutput &) = default ;
    RunBookIntroductionResponseBodyPayloadOutput& operator=(RunBookIntroductionResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyPoint_ != nullptr
        && this->summary_ != nullptr; };
    // keyPoint Field Functions 
    bool hasKeyPoint() const { return this->keyPoint_ != nullptr;};
    void deleteKeyPoint() { this->keyPoint_ = nullptr;};
    inline string keyPoint() const { DARABONBA_PTR_GET_DEFAULT(keyPoint_, "") };
    inline RunBookIntroductionResponseBodyPayloadOutput& setKeyPoint(string keyPoint) { DARABONBA_PTR_SET_VALUE(keyPoint_, keyPoint) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline RunBookIntroductionResponseBodyPayloadOutput& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    std::shared_ptr<string> keyPoint_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
