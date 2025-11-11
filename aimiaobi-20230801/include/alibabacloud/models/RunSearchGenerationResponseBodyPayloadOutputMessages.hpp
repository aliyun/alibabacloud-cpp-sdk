// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputMessages& obj) { 
      DARABONBA_PTR_TO_JSON(Clarifications, clarifications_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(GenerateFinished, generateFinished_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NodeCode, nodeCode_);
      DARABONBA_PTR_TO_JSON(SearchQueries, searchQueries_);
      DARABONBA_PTR_TO_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(Clarifications, clarifications_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(GenerateFinished, generateFinished_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NodeCode, nodeCode_);
      DARABONBA_PTR_FROM_JSON(SearchQueries, searchQueries_);
      DARABONBA_PTR_FROM_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
    };
    RunSearchGenerationResponseBodyPayloadOutputMessages() = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessages(const RunSearchGenerationResponseBodyPayloadOutputMessages &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessages(RunSearchGenerationResponseBodyPayloadOutputMessages &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputMessages() = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessages& operator=(const RunSearchGenerationResponseBodyPayloadOutputMessages &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessages& operator=(RunSearchGenerationResponseBodyPayloadOutputMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clarifications_ == nullptr
        && return this->content_ == nullptr && return this->generateFinished_ == nullptr && return this->id_ == nullptr && return this->nodeCode_ == nullptr && return this->searchQueries_ == nullptr
        && return this->searchQuery_ == nullptr && return this->searchResult_ == nullptr; };
    // clarifications Field Functions 
    bool hasClarifications() const { return this->clarifications_ != nullptr;};
    void deleteClarifications() { this->clarifications_ = nullptr;};
    inline bool clarifications() const { DARABONBA_PTR_GET_DEFAULT(clarifications_, false) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessages& setClarifications(bool clarifications) { DARABONBA_PTR_SET_VALUE(clarifications_, clarifications) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputMessages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // generateFinished Field Functions 
    bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
    void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
    inline bool generateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessages& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputMessages& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nodeCode Field Functions 
    bool hasNodeCode() const { return this->nodeCode_ != nullptr;};
    void deleteNodeCode() { this->nodeCode_ = nullptr;};
    inline string nodeCode() const { DARABONBA_PTR_GET_DEFAULT(nodeCode_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputMessages& setNodeCode(string nodeCode) { DARABONBA_PTR_SET_VALUE(nodeCode_, nodeCode) };


    // searchQueries Field Functions 
    bool hasSearchQueries() const { return this->searchQueries_ != nullptr;};
    void deleteSearchQueries() { this->searchQueries_ = nullptr;};
    inline const vector<string> & searchQueries() const { DARABONBA_PTR_GET_CONST(searchQueries_, vector<string>) };
    inline vector<string> searchQueries() { DARABONBA_PTR_GET(searchQueries_, vector<string>) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessages& setSearchQueries(const vector<string> & searchQueries) { DARABONBA_PTR_SET_VALUE(searchQueries_, searchQueries) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessages& setSearchQueries(vector<string> && searchQueries) { DARABONBA_PTR_SET_RVALUE(searchQueries_, searchQueries) };


    // searchQuery Field Functions 
    bool hasSearchQuery() const { return this->searchQuery_ != nullptr;};
    void deleteSearchQuery() { this->searchQuery_ = nullptr;};
    inline string searchQuery() const { DARABONBA_PTR_GET_DEFAULT(searchQuery_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputMessages& setSearchQuery(string searchQuery) { DARABONBA_PTR_SET_VALUE(searchQuery_, searchQuery) };


    // searchResult Field Functions 
    bool hasSearchResult() const { return this->searchResult_ != nullptr;};
    void deleteSearchResult() { this->searchResult_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult> & searchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult> searchResult() { DARABONBA_PTR_GET(searchResult_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult>) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessages& setSearchResult(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessages& setSearchResult(vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


  protected:
    std::shared_ptr<bool> clarifications_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<bool> generateFinished_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> nodeCode_ = nullptr;
    std::shared_ptr<vector<string>> searchQueries_ = nullptr;
    std::shared_ptr<string> searchQuery_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult>> searchResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
