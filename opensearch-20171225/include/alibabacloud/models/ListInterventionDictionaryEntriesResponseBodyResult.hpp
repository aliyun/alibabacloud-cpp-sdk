// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYENTRIESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYENTRIESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInterventionDictionaryEntriesResponseBodyResultTokens.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListInterventionDictionaryEntriesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterventionDictionaryEntriesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(cmd, cmd_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_ANY_TO_JSON(relevance, relevance_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tokens, tokens_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
      DARABONBA_PTR_TO_JSON(word, word_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterventionDictionaryEntriesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(cmd, cmd_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_ANY_FROM_JSON(relevance, relevance_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tokens, tokens_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
      DARABONBA_PTR_FROM_JSON(word, word_);
    };
    ListInterventionDictionaryEntriesResponseBodyResult() = default ;
    ListInterventionDictionaryEntriesResponseBodyResult(const ListInterventionDictionaryEntriesResponseBodyResult &) = default ;
    ListInterventionDictionaryEntriesResponseBodyResult(ListInterventionDictionaryEntriesResponseBodyResult &&) = default ;
    ListInterventionDictionaryEntriesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterventionDictionaryEntriesResponseBodyResult() = default ;
    ListInterventionDictionaryEntriesResponseBodyResult& operator=(const ListInterventionDictionaryEntriesResponseBodyResult &) = default ;
    ListInterventionDictionaryEntriesResponseBodyResult& operator=(ListInterventionDictionaryEntriesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmd_ == nullptr
        && return this->created_ == nullptr && return this->relevance_ == nullptr && return this->status_ == nullptr && return this->tokens_ == nullptr && return this->updated_ == nullptr
        && return this->word_ == nullptr; };
    // cmd Field Functions 
    bool hasCmd() const { return this->cmd_ != nullptr;};
    void deleteCmd() { this->cmd_ = nullptr;};
    inline string cmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
    inline ListInterventionDictionaryEntriesResponseBodyResult& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int64_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
    inline ListInterventionDictionaryEntriesResponseBodyResult& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // relevance Field Functions 
    bool hasRelevance() const { return this->relevance_ != nullptr;};
    void deleteRelevance() { this->relevance_ = nullptr;};
    inline     const Darabonba::Json & relevance() const { DARABONBA_GET(relevance_) };
    Darabonba::Json & relevance() { DARABONBA_GET(relevance_) };
    inline ListInterventionDictionaryEntriesResponseBodyResult& setRelevance(const Darabonba::Json & relevance) { DARABONBA_SET_VALUE(relevance_, relevance) };
    inline ListInterventionDictionaryEntriesResponseBodyResult& setRelevance(Darabonba::Json & relevance) { DARABONBA_SET_RVALUE(relevance_, relevance) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInterventionDictionaryEntriesResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tokens Field Functions 
    bool hasTokens() const { return this->tokens_ != nullptr;};
    void deleteTokens() { this->tokens_ = nullptr;};
    inline const vector<Models::ListInterventionDictionaryEntriesResponseBodyResultTokens> & tokens() const { DARABONBA_PTR_GET_CONST(tokens_, vector<Models::ListInterventionDictionaryEntriesResponseBodyResultTokens>) };
    inline vector<Models::ListInterventionDictionaryEntriesResponseBodyResultTokens> tokens() { DARABONBA_PTR_GET(tokens_, vector<Models::ListInterventionDictionaryEntriesResponseBodyResultTokens>) };
    inline ListInterventionDictionaryEntriesResponseBodyResult& setTokens(const vector<Models::ListInterventionDictionaryEntriesResponseBodyResultTokens> & tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };
    inline ListInterventionDictionaryEntriesResponseBodyResult& setTokens(vector<Models::ListInterventionDictionaryEntriesResponseBodyResultTokens> && tokens) { DARABONBA_PTR_SET_RVALUE(tokens_, tokens) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int64_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0L) };
    inline ListInterventionDictionaryEntriesResponseBodyResult& setUpdated(int64_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline ListInterventionDictionaryEntriesResponseBodyResult& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    // The command. Valid values:
    // 
    // *   add
    // *   delete
    std::shared_ptr<string> cmd_ = nullptr;
    // The timestamp when the intervention entry was created.
    std::shared_ptr<int64_t> created_ = nullptr;
    // The content of an intervention entry for category prediction. The field value consists of key-value pairs. The key in a key-value pair indicates the ID of the category. The value in a key-value pair indicates the relevance to the category. A value of 0 indicates irrelevant. A value of 1 indicates slightly relevant. A value of 2 indicates relevant. Example: {"2":1, "100":0}
    Darabonba::Json relevance_ = nullptr;
    // The status of the intervention entry. Valid value:
    // 
    // *   ACTIVE: The intervention entry takes effect.
    std::shared_ptr<string> status_ = nullptr;
    // The content of the intervention entry for term weight analysis.
    std::shared_ptr<vector<Models::ListInterventionDictionaryEntriesResponseBodyResultTokens>> tokens_ = nullptr;
    // The timestamp when the intervention entry was last updated.
    std::shared_ptr<int64_t> updated_ = nullptr;
    // The intervention entry.
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
