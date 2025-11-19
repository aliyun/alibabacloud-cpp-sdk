// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULTAUDIORESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULTAUDIORESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultResponseBodyMediaAuditResultAudioResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultResponseBodyMediaAuditResultAudioResult& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultResponseBodyMediaAuditResultAudioResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    GetMediaAuditResultResponseBodyMediaAuditResultAudioResult() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultAudioResult(const GetMediaAuditResultResponseBodyMediaAuditResultAudioResult &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultAudioResult(GetMediaAuditResultResponseBodyMediaAuditResultAudioResult &&) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultAudioResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultResponseBodyMediaAuditResultAudioResult() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultAudioResult& operator=(const GetMediaAuditResultResponseBodyMediaAuditResultAudioResult &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultAudioResult& operator=(GetMediaAuditResultResponseBodyMediaAuditResultAudioResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->scene_ == nullptr && return this->score_ == nullptr && return this->suggestion_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultAudioResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultAudioResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string score() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultAudioResult& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultAudioResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    // The category of the review result.
    // 
    // *   **normal**
    // *   **spam**
    // *   **ad**
    // *   **politics**
    // *   **terrorism**
    // *   **abuse**
    // *   **porn**
    // *   **flood**
    // *   **contraband**
    // *   **meaningless**
    std::shared_ptr<string> label_ = nullptr;
    // The review scenario. The value is **antispam**.
    std::shared_ptr<string> scene_ = nullptr;
    // The score.
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
