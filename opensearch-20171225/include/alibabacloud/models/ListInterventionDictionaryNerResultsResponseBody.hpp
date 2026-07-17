// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYNERRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYNERRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListInterventionDictionaryNerResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterventionDictionaryNerResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterventionDictionaryNerResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListInterventionDictionaryNerResultsResponseBody() = default ;
    ListInterventionDictionaryNerResultsResponseBody(const ListInterventionDictionaryNerResultsResponseBody &) = default ;
    ListInterventionDictionaryNerResultsResponseBody(ListInterventionDictionaryNerResultsResponseBody &&) = default ;
    ListInterventionDictionaryNerResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterventionDictionaryNerResultsResponseBody() = default ;
    ListInterventionDictionaryNerResultsResponseBody& operator=(const ListInterventionDictionaryNerResultsResponseBody &) = default ;
    ListInterventionDictionaryNerResultsResponseBody& operator=(ListInterventionDictionaryNerResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(order, order_);
        DARABONBA_PTR_TO_JSON(tag, tag_);
        DARABONBA_PTR_TO_JSON(tagLabel, tagLabel_);
        DARABONBA_PTR_TO_JSON(token, token_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(order, order_);
        DARABONBA_PTR_FROM_JSON(tag, tag_);
        DARABONBA_PTR_FROM_JSON(tagLabel, tagLabel_);
        DARABONBA_PTR_FROM_JSON(token, token_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->order_ == nullptr
        && this->tag_ == nullptr && this->tagLabel_ == nullptr && this->token_ == nullptr; };
      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline int32_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
      inline Result& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Result& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // tagLabel Field Functions 
      bool hasTagLabel() const { return this->tagLabel_ != nullptr;};
      void deleteTagLabel() { this->tagLabel_ = nullptr;};
      inline string getTagLabel() const { DARABONBA_PTR_GET_DEFAULT(tagLabel_, "") };
      inline Result& setTagLabel(string tagLabel) { DARABONBA_PTR_SET_VALUE(tagLabel_, tagLabel) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Result& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    protected:
      // The ordinal number.
      shared_ptr<int32_t> order_ {};
      // The tag of the detected entity.
      // 
      // - brand: Brand
      // 
      // - category: Category
      // 
      // - material: Material
      // 
      // - element: Element
      // 
      // - style: Style
      // 
      // - color: Color
      // 
      // - function: Function
      // 
      // - scenario: Scenario
      // 
      // - people: People
      // 
      // - season: Season
      // 
      // - model: Model
      // 
      // - region: Region
      // 
      // - name: Name
      // 
      // - adjective: Adjective
      // 
      // - category-modifier: Category modifier
      // 
      // - size: Size
      // 
      // - quality: Quality
      // 
      // - suit: Suit
      // 
      // - new-release: New release
      // 
      // - series: Series
      // 
      // - marketing: Marketing
      // 
      // - entertainment: Entertainment
      // 
      // - organization: Organization
      // 
      // - movie: Movie
      // 
      // - game: Game
      // 
      // - number: Number
      // 
      // - unit: Unit
      // 
      // - common: Common word
      // 
      // - new-word: New word
      // 
      // - proper-noun: Proper noun
      // 
      // - symbol: Symbol
      // 
      // - prefix: Prefix
      // 
      // - suffix: Suffix
      // 
      // - gift: Gift
      // 
      // - negative: Negative
      // 
      // - agent: Agent
      shared_ptr<string> tag_ {};
      // The label of the tag.
      shared_ptr<string> tagLabel_ {};
      // The detected entity.
      shared_ptr<string> token_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInterventionDictionaryNerResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListInterventionDictionaryNerResultsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListInterventionDictionaryNerResultsResponseBody::Result>) };
    inline vector<ListInterventionDictionaryNerResultsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListInterventionDictionaryNerResultsResponseBody::Result>) };
    inline ListInterventionDictionaryNerResultsResponseBody& setResult(const vector<ListInterventionDictionaryNerResultsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListInterventionDictionaryNerResultsResponseBody& setResult(vector<ListInterventionDictionaryNerResultsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The NER results.
    // 
    // For more information, see [Named Entity Recognition (NER)](https://help.aliyun.com/document_detail/173606.html).
    shared_ptr<vector<ListInterventionDictionaryNerResultsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
