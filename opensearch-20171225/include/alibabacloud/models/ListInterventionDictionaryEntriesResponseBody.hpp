// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYENTRIESRESPONSEBODY_HPP_
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
  class ListInterventionDictionaryEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterventionDictionaryEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterventionDictionaryEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListInterventionDictionaryEntriesResponseBody() = default ;
    ListInterventionDictionaryEntriesResponseBody(const ListInterventionDictionaryEntriesResponseBody &) = default ;
    ListInterventionDictionaryEntriesResponseBody(ListInterventionDictionaryEntriesResponseBody &&) = default ;
    ListInterventionDictionaryEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterventionDictionaryEntriesResponseBody() = default ;
    ListInterventionDictionaryEntriesResponseBody& operator=(const ListInterventionDictionaryEntriesResponseBody &) = default ;
    ListInterventionDictionaryEntriesResponseBody& operator=(ListInterventionDictionaryEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(cmd, cmd_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_ANY_TO_JSON(relevance, relevance_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tokens, tokens_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
        DARABONBA_PTR_TO_JSON(word, word_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(cmd, cmd_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_ANY_FROM_JSON(relevance, relevance_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tokens, tokens_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
        DARABONBA_PTR_FROM_JSON(word, word_);
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
      class Tokens : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tokens& obj) { 
          DARABONBA_PTR_TO_JSON(order, order_);
          DARABONBA_PTR_TO_JSON(tag, tag_);
          DARABONBA_PTR_TO_JSON(tagLabel, tagLabel_);
          DARABONBA_PTR_TO_JSON(token, token_);
        };
        friend void from_json(const Darabonba::Json& j, Tokens& obj) { 
          DARABONBA_PTR_FROM_JSON(order, order_);
          DARABONBA_PTR_FROM_JSON(tag, tag_);
          DARABONBA_PTR_FROM_JSON(tagLabel, tagLabel_);
          DARABONBA_PTR_FROM_JSON(token, token_);
        };
        Tokens() = default ;
        Tokens(const Tokens &) = default ;
        Tokens(Tokens &&) = default ;
        Tokens(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tokens() = default ;
        Tokens& operator=(const Tokens &) = default ;
        Tokens& operator=(Tokens &&) = default ;
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
        inline Tokens& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline Tokens& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // tagLabel Field Functions 
        bool hasTagLabel() const { return this->tagLabel_ != nullptr;};
        void deleteTagLabel() { this->tagLabel_ = nullptr;};
        inline string getTagLabel() const { DARABONBA_PTR_GET_DEFAULT(tagLabel_, "") };
        inline Tokens& setTagLabel(string tagLabel) { DARABONBA_PTR_SET_VALUE(tagLabel_, tagLabel) };


        // token Field Functions 
        bool hasToken() const { return this->token_ != nullptr;};
        void deleteToken() { this->token_ = nullptr;};
        inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
        inline Tokens& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      protected:
        // The sequence number.
        shared_ptr<int32_t> order_ {};
        // The internal name of the identified entity type. Valid values:
        // 
        // - brand
        // 
        // - category
        // 
        // - material
        // 
        // - element
        // 
        // - style
        // 
        // - color
        // 
        // - function
        // 
        // - scenario
        // 
        // - people
        // 
        // - season
        // 
        // - model
        // 
        // - region
        // 
        // - name
        // 
        // - adjective
        // 
        // - category-modifier
        // 
        // - size
        // 
        // - quality
        // 
        // - suit
        // 
        // - new-release
        // 
        // - series
        // 
        // - marketing
        // 
        // - entertainment
        // 
        // - organization
        // 
        // - movie
        // 
        // - game
        // 
        // - number
        // 
        // - unit
        // 
        // - common
        // 
        // - new-word
        // 
        // - proper-noun
        // 
        // - symbol
        // 
        // - prefix
        // 
        // - suffix
        // 
        // - gift
        // 
        // - negative
        // 
        // - agent
        shared_ptr<string> tag_ {};
        // The description of the internal name of the identified entity type.
        shared_ptr<string> tagLabel_ {};
        // The entity.
        shared_ptr<string> token_ {};
      };

      virtual bool empty() const override { return this->cmd_ == nullptr
        && this->created_ == nullptr && this->relevance_ == nullptr && this->status_ == nullptr && this->tokens_ == nullptr && this->updated_ == nullptr
        && this->word_ == nullptr; };
      // cmd Field Functions 
      bool hasCmd() const { return this->cmd_ != nullptr;};
      void deleteCmd() { this->cmd_ = nullptr;};
      inline string getCmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
      inline Result& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int64_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
      inline Result& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // relevance Field Functions 
      bool hasRelevance() const { return this->relevance_ != nullptr;};
      void deleteRelevance() { this->relevance_ = nullptr;};
      inline       const Darabonba::Json & getRelevance() const { DARABONBA_GET(relevance_) };
      Darabonba::Json & getRelevance() { DARABONBA_GET(relevance_) };
      inline Result& setRelevance(const Darabonba::Json & relevance) { DARABONBA_SET_VALUE(relevance_, relevance) };
      inline Result& setRelevance(Darabonba::Json && relevance) { DARABONBA_SET_RVALUE(relevance_, relevance) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tokens Field Functions 
      bool hasTokens() const { return this->tokens_ != nullptr;};
      void deleteTokens() { this->tokens_ = nullptr;};
      inline const vector<Result::Tokens> & getTokens() const { DARABONBA_PTR_GET_CONST(tokens_, vector<Result::Tokens>) };
      inline vector<Result::Tokens> getTokens() { DARABONBA_PTR_GET(tokens_, vector<Result::Tokens>) };
      inline Result& setTokens(const vector<Result::Tokens> & tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };
      inline Result& setTokens(vector<Result::Tokens> && tokens) { DARABONBA_PTR_SET_RVALUE(tokens_, tokens) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int64_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0L) };
      inline Result& setUpdated(int64_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


      // word Field Functions 
      bool hasWord() const { return this->word_ != nullptr;};
      void deleteWord() { this->word_ = nullptr;};
      inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
      inline Result& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


    protected:
      // The command. Valid values:
      // 
      // - add
      // 
      // - delete
      shared_ptr<string> cmd_ {};
      // The timestamp when the intervention entry was created.
      shared_ptr<int64_t> created_ {};
      // The content of an intervention entry for category prediction. The field value consists of key-value pairs. The key in a key-value pair indicates the ID of the category. The value in a key-value pair indicates the relevance to the category. A value of 0 indicates irrelevant. A value of 1 indicates slightly relevant. A value of 2 indicates relevant. Example: {"2":1, "100":0}
      Darabonba::Json relevance_ {};
      // The status of the intervention entry. Valid value:
      // 
      // - ACTIVE: The intervention entry takes effect.
      shared_ptr<string> status_ {};
      // The content of the intervention entry for term weight analysis.
      shared_ptr<vector<Result::Tokens>> tokens_ {};
      // The timestamp when the intervention entry was last updated.
      shared_ptr<int64_t> updated_ {};
      // The intervention entry.
      shared_ptr<string> word_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInterventionDictionaryEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListInterventionDictionaryEntriesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListInterventionDictionaryEntriesResponseBody::Result>) };
    inline vector<ListInterventionDictionaryEntriesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListInterventionDictionaryEntriesResponseBody::Result>) };
    inline ListInterventionDictionaryEntriesResponseBody& setResult(const vector<ListInterventionDictionaryEntriesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListInterventionDictionaryEntriesResponseBody& setResult(vector<ListInterventionDictionaryEntriesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListInterventionDictionaryEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about intervention entries.
    // 
    // For more information, see [InterventionDictionaryEntry](https://help.aliyun.com/document_detail/173606.html).
    shared_ptr<vector<ListInterventionDictionaryEntriesResponseBody::Result>> result_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
