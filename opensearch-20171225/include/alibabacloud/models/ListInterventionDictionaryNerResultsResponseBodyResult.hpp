// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYNERRESULTSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYNERRESULTSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListInterventionDictionaryNerResultsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterventionDictionaryNerResultsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(tagLabel, tagLabel_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterventionDictionaryNerResultsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(tagLabel, tagLabel_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    ListInterventionDictionaryNerResultsResponseBodyResult() = default ;
    ListInterventionDictionaryNerResultsResponseBodyResult(const ListInterventionDictionaryNerResultsResponseBodyResult &) = default ;
    ListInterventionDictionaryNerResultsResponseBodyResult(ListInterventionDictionaryNerResultsResponseBodyResult &&) = default ;
    ListInterventionDictionaryNerResultsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterventionDictionaryNerResultsResponseBodyResult() = default ;
    ListInterventionDictionaryNerResultsResponseBodyResult& operator=(const ListInterventionDictionaryNerResultsResponseBodyResult &) = default ;
    ListInterventionDictionaryNerResultsResponseBodyResult& operator=(ListInterventionDictionaryNerResultsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->order_ == nullptr
        && return this->tag_ == nullptr && return this->tagLabel_ == nullptr && return this->token_ == nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline ListInterventionDictionaryNerResultsResponseBodyResult& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListInterventionDictionaryNerResultsResponseBodyResult& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tagLabel Field Functions 
    bool hasTagLabel() const { return this->tagLabel_ != nullptr;};
    void deleteTagLabel() { this->tagLabel_ = nullptr;};
    inline string tagLabel() const { DARABONBA_PTR_GET_DEFAULT(tagLabel_, "") };
    inline ListInterventionDictionaryNerResultsResponseBodyResult& setTagLabel(string tagLabel) { DARABONBA_PTR_SET_VALUE(tagLabel_, tagLabel) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ListInterventionDictionaryNerResultsResponseBodyResult& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The sequence number.
    std::shared_ptr<int32_t> order_ = nullptr;
    // The internal name of the identified entity type. Valid values:
    // 
    // *   brand
    // *   category
    // *   material
    // *   element
    // *   style
    // *   color
    // *   function
    // *   scenario
    // *   people
    // *   season
    // *   model
    // *   region
    // *   name
    // *   adjective
    // *   category-modifier
    // *   size
    // *   quality
    // *   suit
    // *   new-release
    // *   series
    // *   marketing
    // *   entertainment
    // *   organization
    // *   movie
    // *   game
    // *   number
    // *   unit
    // *   common
    // *   new-word
    // *   proper-noun
    // *   symbol
    // *   prefix
    // *   suffix
    // *   gift
    // *   negative
    // *   agent
    std::shared_ptr<string> tag_ = nullptr;
    // The description of the internal name of the identified entity type.
    std::shared_ptr<string> tagLabel_ = nullptr;
    // The entity.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
