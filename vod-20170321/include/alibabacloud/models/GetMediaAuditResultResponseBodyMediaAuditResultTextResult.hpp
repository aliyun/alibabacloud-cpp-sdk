// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULTTEXTRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULTTEXTRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultResponseBodyMediaAuditResultTextResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultResponseBodyMediaAuditResultTextResult& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultResponseBodyMediaAuditResultTextResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetMediaAuditResultResponseBodyMediaAuditResultTextResult() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultTextResult(const GetMediaAuditResultResponseBodyMediaAuditResultTextResult &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultTextResult(GetMediaAuditResultResponseBodyMediaAuditResultTextResult &&) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultTextResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultResponseBodyMediaAuditResultTextResult() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultTextResult& operator=(const GetMediaAuditResultResponseBodyMediaAuditResultTextResult &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultTextResult& operator=(GetMediaAuditResultResponseBodyMediaAuditResultTextResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->label_ == nullptr && return this->scene_ == nullptr && return this->score_ == nullptr && return this->suggestion_ == nullptr && return this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultTextResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultTextResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultTextResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string score() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultTextResult& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultTextResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultTextResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The text content for review.
    std::shared_ptr<string> content_ = nullptr;
    // The category of the review result. Valid values:
    // 
    // - **spam**
    // - **ad**
    // - **abuse**
    // - **flood**
    // - **contraband**
    // - **meaningless**
    // - **normal**
    std::shared_ptr<string> label_ = nullptr;
    // The review scenario. The value is **antispam**.
    std::shared_ptr<string> scene_ = nullptr;
    // The score of the image of the category that is indicated by Label.
    std::shared_ptr<string> score_ = nullptr;
    // The recommendation for review results. Valid values:
    // 
    // - **block**
    // - **review**
    // - **pass**
    std::shared_ptr<string> suggestion_ = nullptr;
    // The type of the text. The value is **title**.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
