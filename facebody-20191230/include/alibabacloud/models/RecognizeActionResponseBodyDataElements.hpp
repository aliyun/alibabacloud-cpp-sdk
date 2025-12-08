// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEACTIONRESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEACTIONRESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeActionResponseBodyDataElementsBoxes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizeActionResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeActionResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(Boxes, boxes_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Scores, scores_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeActionResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(Boxes, boxes_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Scores, scores_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    RecognizeActionResponseBodyDataElements() = default ;
    RecognizeActionResponseBodyDataElements(const RecognizeActionResponseBodyDataElements &) = default ;
    RecognizeActionResponseBodyDataElements(RecognizeActionResponseBodyDataElements &&) = default ;
    RecognizeActionResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeActionResponseBodyDataElements() = default ;
    RecognizeActionResponseBodyDataElements& operator=(const RecognizeActionResponseBodyDataElements &) = default ;
    RecognizeActionResponseBodyDataElements& operator=(RecognizeActionResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->boxes_ == nullptr
        && return this->labels_ == nullptr && return this->scores_ == nullptr && return this->timestamp_ == nullptr; };
    // boxes Field Functions 
    bool hasBoxes() const { return this->boxes_ != nullptr;};
    void deleteBoxes() { this->boxes_ = nullptr;};
    inline const vector<Models::RecognizeActionResponseBodyDataElementsBoxes> & boxes() const { DARABONBA_PTR_GET_CONST(boxes_, vector<Models::RecognizeActionResponseBodyDataElementsBoxes>) };
    inline vector<Models::RecognizeActionResponseBodyDataElementsBoxes> boxes() { DARABONBA_PTR_GET(boxes_, vector<Models::RecognizeActionResponseBodyDataElementsBoxes>) };
    inline RecognizeActionResponseBodyDataElements& setBoxes(const vector<Models::RecognizeActionResponseBodyDataElementsBoxes> & boxes) { DARABONBA_PTR_SET_VALUE(boxes_, boxes) };
    inline RecognizeActionResponseBodyDataElements& setBoxes(vector<Models::RecognizeActionResponseBodyDataElementsBoxes> && boxes) { DARABONBA_PTR_SET_RVALUE(boxes_, boxes) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
    inline vector<string> labels() { DARABONBA_PTR_GET(labels_, vector<string>) };
    inline RecognizeActionResponseBodyDataElements& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline RecognizeActionResponseBodyDataElements& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // scores Field Functions 
    bool hasScores() const { return this->scores_ != nullptr;};
    void deleteScores() { this->scores_ = nullptr;};
    inline const vector<float> & scores() const { DARABONBA_PTR_GET_CONST(scores_, vector<float>) };
    inline vector<float> scores() { DARABONBA_PTR_GET(scores_, vector<float>) };
    inline RecognizeActionResponseBodyDataElements& setScores(const vector<float> & scores) { DARABONBA_PTR_SET_VALUE(scores_, scores) };
    inline RecognizeActionResponseBodyDataElements& setScores(vector<float> && scores) { DARABONBA_PTR_SET_RVALUE(scores_, scores) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int32_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0) };
    inline RecognizeActionResponseBodyDataElements& setTimestamp(int32_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<vector<Models::RecognizeActionResponseBodyDataElementsBoxes>> boxes_ = nullptr;
    std::shared_ptr<vector<string>> labels_ = nullptr;
    std::shared_ptr<vector<float>> scores_ = nullptr;
    std::shared_ptr<int32_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
