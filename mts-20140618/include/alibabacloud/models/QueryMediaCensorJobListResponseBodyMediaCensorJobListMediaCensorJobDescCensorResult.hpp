// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLISTMEDIACENSORJOBDESCCENSORRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLISTMEDIACENSORJOBDESCCENSORRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult(const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult(QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult &&) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult& operator=(const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult& operator=(QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult &&) = default ;
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
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline string rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    // The labels of the moderation result. Separate multiple labels with commas (,). Valid values:
    // 
    // *   **spam**: spam
    // *   **ad**: ads
    // *   **abuse**: abuse
    // *   **flood**: excessive junk content
    // *   **contraband**: prohibited content
    // *   **meaningless**: meaningless content
    // *   **normal**: normal content
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
