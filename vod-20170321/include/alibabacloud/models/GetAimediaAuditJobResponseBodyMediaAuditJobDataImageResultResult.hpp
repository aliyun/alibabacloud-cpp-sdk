// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAIMAGERESULTRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAIMAGERESULTRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult(GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult &&) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult& operator=(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult& operator=(GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->label_ != nullptr
        && this->scene_ != nullptr && this->score_ != nullptr && this->suggestion_ != nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string score() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResultResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    // The category of the review result.
    // 
    // Valid values if scene is **porn**:
    // 
    // *   **porn**
    // *   **sexy**
    // *   **normal**
    // 
    // Valid values if scene is **terrorism**:
    // 
    // *   **normal**
    // *   **bloody**
    // *   **explosion**
    // *   **outfit**
    // *   **logo**
    // *   **weapon**
    // *   **politics**
    // *   **violence**
    // *   **crowd**
    // *   **parade**
    // *   **carcrash**
    // *   **flag**
    // *   **location**
    // *   **others**
    // 
    // Valid values if scene is **ad**:
    // 
    // *   **normal**: normal content
    // *   **ad**: ads
    // *   **politics**: political content
    // *   **porn**: pornographic content
    // *   **abuse**: verbal abuse
    // *   **terrorism**: terrorist content
    // *   **contraband**: prohibited content
    // *   **spam**: spam content
    // *   **npx**: illegal ad
    // *   **qrcode**: QR code
    // *   **programCode**: mini program code
    // 
    // Valid values if scene is **live**:
    // 
    // *   **normal**: normal content
    // *   **meaningless**: meaningless content, such as a black or white screen.
    // *   **PIP**: picture-in-picture
    // *   **smoking**: smoking
    // *   **drivelive**: live broadcasting in a running vehicle
    // 
    // Valid values if scene is **logo**:
    // 
    // *   **normal**: normal content
    // *   **TV**: controlled TV station logo
    // *   **trademark**: trademark
    std::shared_ptr<string> label_ = nullptr;
    // The review scenario. Valid values:
    // 
    // *   **porn**: pornographic content
    // *   **terrorism**: terrorist or politically sensitive content
    // *   **ad**: ad violation
    // *   **live**: undesirable scene
    // *   **logo**: logo
    std::shared_ptr<string> scene_ = nullptr;
    // The score of the image of the category that is indicated by Label. Valid values: `[0, 100]`. The score is representative of the confidence.
    std::shared_ptr<string> score_ = nullptr;
    // The recommendation for review results. Valid values:
    // 
    // *   **block**
    // *   **review**
    // *   **pass**
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
