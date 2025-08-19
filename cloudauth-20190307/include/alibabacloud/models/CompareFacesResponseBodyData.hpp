// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREFACESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_COMPAREFACESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CompareFacesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareFacesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConfidenceThresholds, confidenceThresholds_);
      DARABONBA_PTR_TO_JSON(SimilarityScore, similarityScore_);
    };
    friend void from_json(const Darabonba::Json& j, CompareFacesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfidenceThresholds, confidenceThresholds_);
      DARABONBA_PTR_FROM_JSON(SimilarityScore, similarityScore_);
    };
    CompareFacesResponseBodyData() = default ;
    CompareFacesResponseBodyData(const CompareFacesResponseBodyData &) = default ;
    CompareFacesResponseBodyData(CompareFacesResponseBodyData &&) = default ;
    CompareFacesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareFacesResponseBodyData() = default ;
    CompareFacesResponseBodyData& operator=(const CompareFacesResponseBodyData &) = default ;
    CompareFacesResponseBodyData& operator=(CompareFacesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confidenceThresholds_ != nullptr
        && this->similarityScore_ != nullptr; };
    // confidenceThresholds Field Functions 
    bool hasConfidenceThresholds() const { return this->confidenceThresholds_ != nullptr;};
    void deleteConfidenceThresholds() { this->confidenceThresholds_ = nullptr;};
    inline string confidenceThresholds() const { DARABONBA_PTR_GET_DEFAULT(confidenceThresholds_, "") };
    inline CompareFacesResponseBodyData& setConfidenceThresholds(string confidenceThresholds) { DARABONBA_PTR_SET_VALUE(confidenceThresholds_, confidenceThresholds) };


    // similarityScore Field Functions 
    bool hasSimilarityScore() const { return this->similarityScore_ != nullptr;};
    void deleteSimilarityScore() { this->similarityScore_ = nullptr;};
    inline float similarityScore() const { DARABONBA_PTR_GET_DEFAULT(similarityScore_, 0.0) };
    inline CompareFacesResponseBodyData& setSimilarityScore(float similarityScore) { DARABONBA_PTR_SET_VALUE(similarityScore_, similarityScore) };


  protected:
    // Confidence thresholds for face comparison. The returned content is a JSON Object, with the specific structure being `"key":"value"`.
    // 
    // - `key` represents the false acceptance rate, which is the probability of misidentifying someone else as the specified person.
    // - `value` is the corresponding threshold.
    // 
    // 
    // > Regarding the confidence thresholds (confidenceThresholds) in the example:
    // - `"0.0001": "90.07"` indicates that the threshold is 90.07 when the false acceptance rate is 0.01%.
    // - `"0.001": "80.01"` indicates that the threshold is 80.01 when the false acceptance rate is 0.1%.
    // - `"0.01": "70.02"` indicates that the threshold is 70.02 when the false acceptance rate is 1%.
    // 
    // Confidence thresholds are dynamically provided based on different images and algorithms, so do not persist these thresholds.
    std::shared_ptr<string> confidenceThresholds_ = nullptr;
    // The degree of similarity between the faces in the two images. The value range is [0, 100], with higher values indicating greater similarity.
    std::shared_ptr<float> similarityScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
