// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAILAUDIOCENSORRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAILAUDIOCENSORRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResultAudioDetailResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult& obj) { 
      DARABONBA_PTR_TO_JSON(AudioDetailResultList, audioDetailResultList_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioDetailResultList, audioDetailResultList_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult &&) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult& operator=(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult& operator=(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioDetailResultList_ == nullptr
        && return this->label_ == nullptr && return this->suggestion_ == nullptr; };
    // audioDetailResultList Field Functions 
    bool hasAudioDetailResultList() const { return this->audioDetailResultList_ != nullptr;};
    void deleteAudioDetailResultList() { this->audioDetailResultList_ = nullptr;};
    inline const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResultAudioDetailResultList & audioDetailResultList() const { DARABONBA_PTR_GET_CONST(audioDetailResultList_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResultAudioDetailResultList) };
    inline Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResultAudioDetailResultList audioDetailResultList() { DARABONBA_PTR_GET(audioDetailResultList_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResultAudioDetailResultList) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult& setAudioDetailResultList(const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResultAudioDetailResultList & audioDetailResultList) { DARABONBA_PTR_SET_VALUE(audioDetailResultList_, audioDetailResultList) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult& setAudioDetailResultList(Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResultAudioDetailResultList && audioDetailResultList) { DARABONBA_PTR_SET_RVALUE(audioDetailResultList_, audioDetailResultList) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    std::shared_ptr<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResultAudioDetailResultList> audioDetailResultList_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
