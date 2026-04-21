// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDICALANSWERRESULT_HPP_
#define ALIBABACLOUD_MODELS_MEDICALANSWERRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MedicalAnswerMessage.hpp>
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
  class MedicalAnswerResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MedicalAnswerResult& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(queryContext, queryContext_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(searchInformation, searchInformation_);
    };
    friend void from_json(const Darabonba::Json& j, MedicalAnswerResult& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(queryContext, queryContext_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(searchInformation, searchInformation_);
    };
    MedicalAnswerResult() = default ;
    MedicalAnswerResult(const MedicalAnswerResult &) = default ;
    MedicalAnswerResult(MedicalAnswerResult &&) = default ;
    MedicalAnswerResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MedicalAnswerResult() = default ;
    MedicalAnswerResult& operator=(const MedicalAnswerResult &) = default ;
    MedicalAnswerResult& operator=(MedicalAnswerResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messages_ == nullptr
        && this->queryContext_ == nullptr && this->requestId_ == nullptr && this->searchInformation_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<MedicalAnswerMessage> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<MedicalAnswerMessage>) };
    inline vector<MedicalAnswerMessage> getMessages() { DARABONBA_PTR_GET(messages_, vector<MedicalAnswerMessage>) };
    inline MedicalAnswerResult& setMessages(const vector<MedicalAnswerMessage> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline MedicalAnswerResult& setMessages(vector<MedicalAnswerMessage> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // queryContext Field Functions 
    bool hasQueryContext() const { return this->queryContext_ != nullptr;};
    void deleteQueryContext() { this->queryContext_ = nullptr;};
    inline const MultimodalQueryContext & getQueryContext() const { DARABONBA_PTR_GET_CONST(queryContext_, MultimodalQueryContext) };
    inline MultimodalQueryContext getQueryContext() { DARABONBA_PTR_GET(queryContext_, MultimodalQueryContext) };
    inline MedicalAnswerResult& setQueryContext(const MultimodalQueryContext & queryContext) { DARABONBA_PTR_SET_VALUE(queryContext_, queryContext) };
    inline MedicalAnswerResult& setQueryContext(MultimodalQueryContext && queryContext) { DARABONBA_PTR_SET_RVALUE(queryContext_, queryContext) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MedicalAnswerResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchInformation Field Functions 
    bool hasSearchInformation() const { return this->searchInformation_ != nullptr;};
    void deleteSearchInformation() { this->searchInformation_ = nullptr;};
    inline const UnifiedSearchInformation & getSearchInformation() const { DARABONBA_PTR_GET_CONST(searchInformation_, UnifiedSearchInformation) };
    inline UnifiedSearchInformation getSearchInformation() { DARABONBA_PTR_GET(searchInformation_, UnifiedSearchInformation) };
    inline MedicalAnswerResult& setSearchInformation(const UnifiedSearchInformation & searchInformation) { DARABONBA_PTR_SET_VALUE(searchInformation_, searchInformation) };
    inline MedicalAnswerResult& setSearchInformation(UnifiedSearchInformation && searchInformation) { DARABONBA_PTR_SET_RVALUE(searchInformation_, searchInformation) };


  protected:
    shared_ptr<vector<MedicalAnswerMessage>> messages_ {};
    shared_ptr<MultimodalQueryContext> queryContext_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<UnifiedSearchInformation> searchInformation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
