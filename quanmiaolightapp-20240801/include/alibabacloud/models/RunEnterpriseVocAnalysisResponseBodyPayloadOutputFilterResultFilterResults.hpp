// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISRESPONSEBODYPAYLOADOUTPUTFILTERRESULTFILTERRESULTS_HPP_
#define ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISRESPONSEBODYPAYLOADOUTPUTFILTERRESULTFILTERRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults& obj) { 
      DARABONBA_PTR_TO_JSON(hit, hit_);
      DARABONBA_PTR_TO_JSON(tagName, tagName_);
      DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults& obj) { 
      DARABONBA_PTR_FROM_JSON(hit, hit_);
      DARABONBA_PTR_FROM_JSON(tagName, tagName_);
      DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
    };
    RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults() = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults(const RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults &) = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults(RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults &&) = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults() = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults& operator=(const RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults &) = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults& operator=(RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hit_ != nullptr
        && this->tagName_ != nullptr && this->tagValue_ != nullptr; };
    // hit Field Functions 
    bool hasHit() const { return this->hit_ != nullptr;};
    void deleteHit() { this->hit_ = nullptr;};
    inline bool hit() const { DARABONBA_PTR_GET_DEFAULT(hit_, false) };
    inline RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults& setHit(bool hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    std::shared_ptr<bool> hit_ = nullptr;
    std::shared_ptr<string> tagName_ = nullptr;
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
