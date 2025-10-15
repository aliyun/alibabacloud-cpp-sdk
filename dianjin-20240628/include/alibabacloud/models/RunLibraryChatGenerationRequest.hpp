// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNLIBRARYCHATGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNLIBRARYCHATGENERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunLibraryChatGenerationRequestQueryCriteria.hpp>
#include <alibabacloud/models/RunLibraryChatGenerationRequestTextSearchParameter.hpp>
#include <alibabacloud/models/RunLibraryChatGenerationRequestVectorSearchParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunLibraryChatGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunLibraryChatGenerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(docIdList, docIdList_);
      DARABONBA_PTR_TO_JSON(enableFollowUp, enableFollowUp_);
      DARABONBA_PTR_TO_JSON(enableMultiQuery, enableMultiQuery_);
      DARABONBA_PTR_TO_JSON(enableOpenQa, enableOpenQa_);
      DARABONBA_PTR_TO_JSON(followUpLlm, followUpLlm_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(llmType, llmType_);
      DARABONBA_PTR_TO_JSON(multiQueryLlm, multiQueryLlm_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(queryCriteria, queryCriteria_);
      DARABONBA_PTR_TO_JSON(rerankType, rerankType_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(subQueryList, subQueryList_);
      DARABONBA_PTR_TO_JSON(textSearchParameter, textSearchParameter_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
      DARABONBA_PTR_TO_JSON(vectorSearchParameter, vectorSearchParameter_);
      DARABONBA_PTR_TO_JSON(withDocumentReference, withDocumentReference_);
    };
    friend void from_json(const Darabonba::Json& j, RunLibraryChatGenerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(docIdList, docIdList_);
      DARABONBA_PTR_FROM_JSON(enableFollowUp, enableFollowUp_);
      DARABONBA_PTR_FROM_JSON(enableMultiQuery, enableMultiQuery_);
      DARABONBA_PTR_FROM_JSON(enableOpenQa, enableOpenQa_);
      DARABONBA_PTR_FROM_JSON(followUpLlm, followUpLlm_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(llmType, llmType_);
      DARABONBA_PTR_FROM_JSON(multiQueryLlm, multiQueryLlm_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(queryCriteria, queryCriteria_);
      DARABONBA_PTR_FROM_JSON(rerankType, rerankType_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(subQueryList, subQueryList_);
      DARABONBA_PTR_FROM_JSON(textSearchParameter, textSearchParameter_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
      DARABONBA_PTR_FROM_JSON(vectorSearchParameter, vectorSearchParameter_);
      DARABONBA_PTR_FROM_JSON(withDocumentReference, withDocumentReference_);
    };
    RunLibraryChatGenerationRequest() = default ;
    RunLibraryChatGenerationRequest(const RunLibraryChatGenerationRequest &) = default ;
    RunLibraryChatGenerationRequest(RunLibraryChatGenerationRequest &&) = default ;
    RunLibraryChatGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunLibraryChatGenerationRequest() = default ;
    RunLibraryChatGenerationRequest& operator=(const RunLibraryChatGenerationRequest &) = default ;
    RunLibraryChatGenerationRequest& operator=(RunLibraryChatGenerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docIdList_ == nullptr
        && return this->enableFollowUp_ == nullptr && return this->enableMultiQuery_ == nullptr && return this->enableOpenQa_ == nullptr && return this->followUpLlm_ == nullptr && return this->libraryId_ == nullptr
        && return this->llmType_ == nullptr && return this->multiQueryLlm_ == nullptr && return this->query_ == nullptr && return this->queryCriteria_ == nullptr && return this->rerankType_ == nullptr
        && return this->sessionId_ == nullptr && return this->stream_ == nullptr && return this->subQueryList_ == nullptr && return this->textSearchParameter_ == nullptr && return this->topK_ == nullptr
        && return this->vectorSearchParameter_ == nullptr && return this->withDocumentReference_ == nullptr; };
    // docIdList Field Functions 
    bool hasDocIdList() const { return this->docIdList_ != nullptr;};
    void deleteDocIdList() { this->docIdList_ = nullptr;};
    inline const vector<string> & docIdList() const { DARABONBA_PTR_GET_CONST(docIdList_, vector<string>) };
    inline vector<string> docIdList() { DARABONBA_PTR_GET(docIdList_, vector<string>) };
    inline RunLibraryChatGenerationRequest& setDocIdList(const vector<string> & docIdList) { DARABONBA_PTR_SET_VALUE(docIdList_, docIdList) };
    inline RunLibraryChatGenerationRequest& setDocIdList(vector<string> && docIdList) { DARABONBA_PTR_SET_RVALUE(docIdList_, docIdList) };


    // enableFollowUp Field Functions 
    bool hasEnableFollowUp() const { return this->enableFollowUp_ != nullptr;};
    void deleteEnableFollowUp() { this->enableFollowUp_ = nullptr;};
    inline bool enableFollowUp() const { DARABONBA_PTR_GET_DEFAULT(enableFollowUp_, false) };
    inline RunLibraryChatGenerationRequest& setEnableFollowUp(bool enableFollowUp) { DARABONBA_PTR_SET_VALUE(enableFollowUp_, enableFollowUp) };


    // enableMultiQuery Field Functions 
    bool hasEnableMultiQuery() const { return this->enableMultiQuery_ != nullptr;};
    void deleteEnableMultiQuery() { this->enableMultiQuery_ = nullptr;};
    inline bool enableMultiQuery() const { DARABONBA_PTR_GET_DEFAULT(enableMultiQuery_, false) };
    inline RunLibraryChatGenerationRequest& setEnableMultiQuery(bool enableMultiQuery) { DARABONBA_PTR_SET_VALUE(enableMultiQuery_, enableMultiQuery) };


    // enableOpenQa Field Functions 
    bool hasEnableOpenQa() const { return this->enableOpenQa_ != nullptr;};
    void deleteEnableOpenQa() { this->enableOpenQa_ = nullptr;};
    inline bool enableOpenQa() const { DARABONBA_PTR_GET_DEFAULT(enableOpenQa_, false) };
    inline RunLibraryChatGenerationRequest& setEnableOpenQa(bool enableOpenQa) { DARABONBA_PTR_SET_VALUE(enableOpenQa_, enableOpenQa) };


    // followUpLlm Field Functions 
    bool hasFollowUpLlm() const { return this->followUpLlm_ != nullptr;};
    void deleteFollowUpLlm() { this->followUpLlm_ = nullptr;};
    inline string followUpLlm() const { DARABONBA_PTR_GET_DEFAULT(followUpLlm_, "") };
    inline RunLibraryChatGenerationRequest& setFollowUpLlm(string followUpLlm) { DARABONBA_PTR_SET_VALUE(followUpLlm_, followUpLlm) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline RunLibraryChatGenerationRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // llmType Field Functions 
    bool hasLlmType() const { return this->llmType_ != nullptr;};
    void deleteLlmType() { this->llmType_ = nullptr;};
    inline string llmType() const { DARABONBA_PTR_GET_DEFAULT(llmType_, "") };
    inline RunLibraryChatGenerationRequest& setLlmType(string llmType) { DARABONBA_PTR_SET_VALUE(llmType_, llmType) };


    // multiQueryLlm Field Functions 
    bool hasMultiQueryLlm() const { return this->multiQueryLlm_ != nullptr;};
    void deleteMultiQueryLlm() { this->multiQueryLlm_ = nullptr;};
    inline string multiQueryLlm() const { DARABONBA_PTR_GET_DEFAULT(multiQueryLlm_, "") };
    inline RunLibraryChatGenerationRequest& setMultiQueryLlm(string multiQueryLlm) { DARABONBA_PTR_SET_VALUE(multiQueryLlm_, multiQueryLlm) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RunLibraryChatGenerationRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryCriteria Field Functions 
    bool hasQueryCriteria() const { return this->queryCriteria_ != nullptr;};
    void deleteQueryCriteria() { this->queryCriteria_ = nullptr;};
    inline const RunLibraryChatGenerationRequestQueryCriteria & queryCriteria() const { DARABONBA_PTR_GET_CONST(queryCriteria_, RunLibraryChatGenerationRequestQueryCriteria) };
    inline RunLibraryChatGenerationRequestQueryCriteria queryCriteria() { DARABONBA_PTR_GET(queryCriteria_, RunLibraryChatGenerationRequestQueryCriteria) };
    inline RunLibraryChatGenerationRequest& setQueryCriteria(const RunLibraryChatGenerationRequestQueryCriteria & queryCriteria) { DARABONBA_PTR_SET_VALUE(queryCriteria_, queryCriteria) };
    inline RunLibraryChatGenerationRequest& setQueryCriteria(RunLibraryChatGenerationRequestQueryCriteria && queryCriteria) { DARABONBA_PTR_SET_RVALUE(queryCriteria_, queryCriteria) };


    // rerankType Field Functions 
    bool hasRerankType() const { return this->rerankType_ != nullptr;};
    void deleteRerankType() { this->rerankType_ = nullptr;};
    inline string rerankType() const { DARABONBA_PTR_GET_DEFAULT(rerankType_, "") };
    inline RunLibraryChatGenerationRequest& setRerankType(string rerankType) { DARABONBA_PTR_SET_VALUE(rerankType_, rerankType) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunLibraryChatGenerationRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunLibraryChatGenerationRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // subQueryList Field Functions 
    bool hasSubQueryList() const { return this->subQueryList_ != nullptr;};
    void deleteSubQueryList() { this->subQueryList_ = nullptr;};
    inline const vector<string> & subQueryList() const { DARABONBA_PTR_GET_CONST(subQueryList_, vector<string>) };
    inline vector<string> subQueryList() { DARABONBA_PTR_GET(subQueryList_, vector<string>) };
    inline RunLibraryChatGenerationRequest& setSubQueryList(const vector<string> & subQueryList) { DARABONBA_PTR_SET_VALUE(subQueryList_, subQueryList) };
    inline RunLibraryChatGenerationRequest& setSubQueryList(vector<string> && subQueryList) { DARABONBA_PTR_SET_RVALUE(subQueryList_, subQueryList) };


    // textSearchParameter Field Functions 
    bool hasTextSearchParameter() const { return this->textSearchParameter_ != nullptr;};
    void deleteTextSearchParameter() { this->textSearchParameter_ = nullptr;};
    inline const RunLibraryChatGenerationRequestTextSearchParameter & textSearchParameter() const { DARABONBA_PTR_GET_CONST(textSearchParameter_, RunLibraryChatGenerationRequestTextSearchParameter) };
    inline RunLibraryChatGenerationRequestTextSearchParameter textSearchParameter() { DARABONBA_PTR_GET(textSearchParameter_, RunLibraryChatGenerationRequestTextSearchParameter) };
    inline RunLibraryChatGenerationRequest& setTextSearchParameter(const RunLibraryChatGenerationRequestTextSearchParameter & textSearchParameter) { DARABONBA_PTR_SET_VALUE(textSearchParameter_, textSearchParameter) };
    inline RunLibraryChatGenerationRequest& setTextSearchParameter(RunLibraryChatGenerationRequestTextSearchParameter && textSearchParameter) { DARABONBA_PTR_SET_RVALUE(textSearchParameter_, textSearchParameter) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline RunLibraryChatGenerationRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // vectorSearchParameter Field Functions 
    bool hasVectorSearchParameter() const { return this->vectorSearchParameter_ != nullptr;};
    void deleteVectorSearchParameter() { this->vectorSearchParameter_ = nullptr;};
    inline const RunLibraryChatGenerationRequestVectorSearchParameter & vectorSearchParameter() const { DARABONBA_PTR_GET_CONST(vectorSearchParameter_, RunLibraryChatGenerationRequestVectorSearchParameter) };
    inline RunLibraryChatGenerationRequestVectorSearchParameter vectorSearchParameter() { DARABONBA_PTR_GET(vectorSearchParameter_, RunLibraryChatGenerationRequestVectorSearchParameter) };
    inline RunLibraryChatGenerationRequest& setVectorSearchParameter(const RunLibraryChatGenerationRequestVectorSearchParameter & vectorSearchParameter) { DARABONBA_PTR_SET_VALUE(vectorSearchParameter_, vectorSearchParameter) };
    inline RunLibraryChatGenerationRequest& setVectorSearchParameter(RunLibraryChatGenerationRequestVectorSearchParameter && vectorSearchParameter) { DARABONBA_PTR_SET_RVALUE(vectorSearchParameter_, vectorSearchParameter) };


    // withDocumentReference Field Functions 
    bool hasWithDocumentReference() const { return this->withDocumentReference_ != nullptr;};
    void deleteWithDocumentReference() { this->withDocumentReference_ = nullptr;};
    inline bool withDocumentReference() const { DARABONBA_PTR_GET_DEFAULT(withDocumentReference_, false) };
    inline RunLibraryChatGenerationRequest& setWithDocumentReference(bool withDocumentReference) { DARABONBA_PTR_SET_VALUE(withDocumentReference_, withDocumentReference) };


  protected:
    std::shared_ptr<vector<string>> docIdList_ = nullptr;
    std::shared_ptr<bool> enableFollowUp_ = nullptr;
    std::shared_ptr<bool> enableMultiQuery_ = nullptr;
    std::shared_ptr<bool> enableOpenQa_ = nullptr;
    std::shared_ptr<string> followUpLlm_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> llmType_ = nullptr;
    std::shared_ptr<string> multiQueryLlm_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<RunLibraryChatGenerationRequestQueryCriteria> queryCriteria_ = nullptr;
    std::shared_ptr<string> rerankType_ = nullptr;
    // sessionId
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
    std::shared_ptr<vector<string>> subQueryList_ = nullptr;
    std::shared_ptr<RunLibraryChatGenerationRequestTextSearchParameter> textSearchParameter_ = nullptr;
    std::shared_ptr<int32_t> topK_ = nullptr;
    std::shared_ptr<RunLibraryChatGenerationRequestVectorSearchParameter> vectorSearchParameter_ = nullptr;
    std::shared_ptr<bool> withDocumentReference_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
