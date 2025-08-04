// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTAGENTCONTEXTBIZCONTEXTMULTIMODALMEDIASELECTION_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTAGENTCONTEXTBIZCONTEXTMULTIMODALMEDIASELECTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection& obj) { 
      DARABONBA_PTR_TO_JSON(OriginalSessionId, originalSessionId_);
      DARABONBA_PTR_TO_JSON(SearchModel, searchModel_);
      DARABONBA_PTR_TO_JSON(SearchModelDataValue, searchModelDataValue_);
      DARABONBA_PTR_TO_JSON(SelectionType, selectionType_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TextSearchResult, textSearchResult_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginalSessionId, originalSessionId_);
      DARABONBA_PTR_FROM_JSON(SearchModel, searchModel_);
      DARABONBA_PTR_FROM_JSON(SearchModelDataValue, searchModelDataValue_);
      DARABONBA_PTR_FROM_JSON(SelectionType, selectionType_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TextSearchResult, textSearchResult_);
    };
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection() = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection(const RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection &) = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection(RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection &&) = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection() = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection& operator=(const RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection &) = default ;
    RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection& operator=(RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->originalSessionId_ != nullptr
        && this->searchModel_ != nullptr && this->searchModelDataValue_ != nullptr && this->selectionType_ != nullptr && this->sessionId_ != nullptr && this->textSearchResult_ != nullptr; };
    // originalSessionId Field Functions 
    bool hasOriginalSessionId() const { return this->originalSessionId_ != nullptr;};
    void deleteOriginalSessionId() { this->originalSessionId_ = nullptr;};
    inline string originalSessionId() const { DARABONBA_PTR_GET_DEFAULT(originalSessionId_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection& setOriginalSessionId(string originalSessionId) { DARABONBA_PTR_SET_VALUE(originalSessionId_, originalSessionId) };


    // searchModel Field Functions 
    bool hasSearchModel() const { return this->searchModel_ != nullptr;};
    void deleteSearchModel() { this->searchModel_ = nullptr;};
    inline string searchModel() const { DARABONBA_PTR_GET_DEFAULT(searchModel_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection& setSearchModel(string searchModel) { DARABONBA_PTR_SET_VALUE(searchModel_, searchModel) };


    // searchModelDataValue Field Functions 
    bool hasSearchModelDataValue() const { return this->searchModelDataValue_ != nullptr;};
    void deleteSearchModelDataValue() { this->searchModelDataValue_ = nullptr;};
    inline string searchModelDataValue() const { DARABONBA_PTR_GET_DEFAULT(searchModelDataValue_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection& setSearchModelDataValue(string searchModelDataValue) { DARABONBA_PTR_SET_VALUE(searchModelDataValue_, searchModelDataValue) };


    // selectionType Field Functions 
    bool hasSelectionType() const { return this->selectionType_ != nullptr;};
    void deleteSelectionType() { this->selectionType_ = nullptr;};
    inline string selectionType() const { DARABONBA_PTR_GET_DEFAULT(selectionType_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection& setSelectionType(string selectionType) { DARABONBA_PTR_SET_VALUE(selectionType_, selectionType) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // textSearchResult Field Functions 
    bool hasTextSearchResult() const { return this->textSearchResult_ != nullptr;};
    void deleteTextSearchResult() { this->textSearchResult_ = nullptr;};
    inline const Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult & textSearchResult() const { DARABONBA_PTR_GET_CONST(textSearchResult_, Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult) };
    inline Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult textSearchResult() { DARABONBA_PTR_GET(textSearchResult_, Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult) };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection& setTextSearchResult(const Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult & textSearchResult) { DARABONBA_PTR_SET_VALUE(textSearchResult_, textSearchResult) };
    inline RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection& setTextSearchResult(Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult && textSearchResult) { DARABONBA_PTR_SET_RVALUE(textSearchResult_, textSearchResult) };


  protected:
    std::shared_ptr<string> originalSessionId_ = nullptr;
    std::shared_ptr<string> searchModel_ = nullptr;
    std::shared_ptr<string> searchModelDataValue_ = nullptr;
    std::shared_ptr<string> selectionType_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelectionTextSearchResult> textSearchResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
