// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLISTMEDIACENSORJOBTITLECENSORRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLISTMEDIACENSORJOBTITLECENSORRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult(const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult(QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult &&) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult& operator=(const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult& operator=(QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->rate_ == nullptr && return this->scene_ == nullptr && return this->suggestion_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline string rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    // The labels of the moderation result. Separate multiple labels with commas (,).
    // 
    // *   **normal**: normal content
    // *   **spam**: spam
    // *   **ad**: ads
    // *   **abuse**: abuse content
    // *   **flood**: excessive junk content
    // *   **contraband**: prohibited content
    // *   **meaningless**: meaningless content
    std::shared_ptr<string> label_ = nullptr;
    // The score.
    std::shared_ptr<string> rate_ = nullptr;
    // The moderation scenario. The value is **antispam**.
    std::shared_ptr<string> scene_ = nullptr;
    // The recommended subsequent operation. Valid values:
    // 
    // *   **pass**: The content passes the moderation.
    // *   **review**: The content needs to be manually reviewed again.
    // *   **block**: The content needs to be blocked.
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
