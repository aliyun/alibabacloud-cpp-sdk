// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTAIDATAAILABELINFOOCCURRENCES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTAIDATAAILABELINFOOCCURRENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences() = default ;
    SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences(const SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences &) = default ;
    SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences(SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences &&) = default ;
    SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences() = default ;
    SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences& operator=(const SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences &) = default ;
    SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences& operator=(SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && return this->score_ == nullptr && return this->to_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline double from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
    inline SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline double to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
    inline SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The start time of the clip.
    std::shared_ptr<double> from_ = nullptr;
    // The score.
    std::shared_ptr<double> score_ = nullptr;
    // The end time of the clip.
    std::shared_ptr<double> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
