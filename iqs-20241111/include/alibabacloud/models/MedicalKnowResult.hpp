// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDICALKNOWRESULT_HPP_
#define ALIBABACLOUD_MODELS_MEDICALKNOWRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MedicalKnowledgeInfo.hpp>
#include <alibabacloud/models/MultimodalQueryContext.hpp>
#include <alibabacloud/models/UnifiedSearchInformation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class MedicalKnowResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MedicalKnowResult& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(queryContext, queryContext_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(searchInformation, searchInformation_);
    };
    friend void from_json(const Darabonba::Json& j, MedicalKnowResult& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(queryContext, queryContext_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(searchInformation, searchInformation_);
    };
    MedicalKnowResult() = default ;
    MedicalKnowResult(const MedicalKnowResult &) = default ;
    MedicalKnowResult(MedicalKnowResult &&) = default ;
    MedicalKnowResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MedicalKnowResult() = default ;
    MedicalKnowResult& operator=(const MedicalKnowResult &) = default ;
    MedicalKnowResult& operator=(MedicalKnowResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messages_ == nullptr
        && this->queryContext_ == nullptr && this->requestId_ == nullptr && this->searchInformation_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<MedicalKnowledgeInfo> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<MedicalKnowledgeInfo>) };
    inline vector<MedicalKnowledgeInfo> getMessages() { DARABONBA_PTR_GET(messages_, vector<MedicalKnowledgeInfo>) };
    inline MedicalKnowResult& setMessages(const vector<MedicalKnowledgeInfo> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline MedicalKnowResult& setMessages(vector<MedicalKnowledgeInfo> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // queryContext Field Functions 
    bool hasQueryContext() const { return this->queryContext_ != nullptr;};
    void deleteQueryContext() { this->queryContext_ = nullptr;};
    inline const MultimodalQueryContext & getQueryContext() const { DARABONBA_PTR_GET_CONST(queryContext_, MultimodalQueryContext) };
    inline MultimodalQueryContext getQueryContext() { DARABONBA_PTR_GET(queryContext_, MultimodalQueryContext) };
    inline MedicalKnowResult& setQueryContext(const MultimodalQueryContext & queryContext) { DARABONBA_PTR_SET_VALUE(queryContext_, queryContext) };
    inline MedicalKnowResult& setQueryContext(MultimodalQueryContext && queryContext) { DARABONBA_PTR_SET_RVALUE(queryContext_, queryContext) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MedicalKnowResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchInformation Field Functions 
    bool hasSearchInformation() const { return this->searchInformation_ != nullptr;};
    void deleteSearchInformation() { this->searchInformation_ = nullptr;};
    inline const UnifiedSearchInformation & getSearchInformation() const { DARABONBA_PTR_GET_CONST(searchInformation_, UnifiedSearchInformation) };
    inline UnifiedSearchInformation getSearchInformation() { DARABONBA_PTR_GET(searchInformation_, UnifiedSearchInformation) };
    inline MedicalKnowResult& setSearchInformation(const UnifiedSearchInformation & searchInformation) { DARABONBA_PTR_SET_VALUE(searchInformation_, searchInformation) };
    inline MedicalKnowResult& setSearchInformation(UnifiedSearchInformation && searchInformation) { DARABONBA_PTR_SET_RVALUE(searchInformation_, searchInformation) };


  protected:
    shared_ptr<vector<MedicalKnowledgeInfo>> messages_ {};
    shared_ptr<MultimodalQueryContext> queryContext_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<UnifiedSearchInformation> searchInformation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
