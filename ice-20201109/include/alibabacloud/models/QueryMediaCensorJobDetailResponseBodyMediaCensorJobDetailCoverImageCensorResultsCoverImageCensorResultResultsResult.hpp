// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAILCOVERIMAGECENSORRESULTSCOVERIMAGECENSORRESULTRESULTSRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAILCOVERIMAGECENSORRESULTSCOVERIMAGECENSORRESULTRESULTSRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult &&) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult& operator=(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult& operator=(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->label_ != nullptr
        && this->rate_ != nullptr && this->scene_ != nullptr && this->suggestion_ != nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline string rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResultResultsResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    // The label of the moderation result.
    // 
    // *   Valid values in the pornographic content moderation scenario:
    // 
    //     *   **normal**: normal content.
    //     *   **sexy**: sexy content.
    //     *   **porn**: pornographic content.
    // 
    // *   Valid values in the terrorist content moderation scenario:
    // 
    //     *   **normal**: normal content.
    //     *   **bloody**: bloody content.
    //     *   **explosion**: explosion and smoke.
    //     *   **outfit**: special costume.
    //     *   **logo**: special logo.
    //     *   **weapon**: weapon.
    //     *   **politics**: political content.
    //     *   **violence**: violence.
    //     *   **crowd**: crowd.
    //     *   **parade**: parade.
    //     *   **carcrash**: car accident.
    //     *   **flag**: flag.
    //     *   **location**: landmark.
    //     *   **others**: other content.
    // 
    // *   Valid values in the ad moderation scenario:
    // 
    //     *   **normal**: normal content.
    //     *   **ad**: other ads.
    //     *   **politics**: political content in text.
    //     *   **porn**: pornographic content in text.
    //     *   **abuse**: abuse in text.
    //     *   **terrorism**: terrorist content in text.
    //     *   **contraband**: prohibited content in text.
    //     *   **spam**: spam in text.
    //     *   **npx**: illegal ad.
    //     *   **qrcode**: QR code.
    //     *   **programCode**: mini program code.
    // 
    // *   Valid values in the undesirable scene moderation scenario:
    // 
    //     *   **normal**: normal content.
    //     *   **meaningless**: meaningless content, such as a black or white screen.
    //     *   **PIP**: picture-in-picture.
    //     *   **smoking**: smoking.
    //     *   **drivelive**: live broadcasting in a running vehicle.
    // 
    // *   Valid values in the logo moderation scenario:
    // 
    //     *   **normal**: normal content.
    //     *   **TV**: controlled logo.
    //     *   **trademark**: trademark.
    std::shared_ptr<string> label_ = nullptr;
    // The score. Valid values: 0 to 100.
    std::shared_ptr<string> rate_ = nullptr;
    // The moderation scenario. Valid values:
    // 
    // *   **porn**: pornographic content moderation.
    // *   **terrorism**: terrorist content moderation.
    // *   **ad**: ad moderation.
    // *   **live**: undesirable scene moderation.
    // *   **logo**: logo moderation.
    std::shared_ptr<string> scene_ = nullptr;
    // The recommended subsequent operation. Valid values:
    // 
    // *   **pass**: The content passes the moderation.
    // *   **review**: The content needs to be manually reviewed.
    // *   **block**: The content needs to be blocked.
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
