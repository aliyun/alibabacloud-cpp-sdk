// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHASSESSMENTPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHASSESSMENTPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAICoachAssessmentPointResponseBodyAnswerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachAssessmentPointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachAssessmentPointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(answerList, answerList_);
      DARABONBA_PTR_TO_JSON(citations, citations_);
      DARABONBA_PTR_TO_JSON(documentId, documentId_);
      DARABONBA_PTR_TO_JSON(documentName, documentName_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(kbId, kbId_);
      DARABONBA_PTR_TO_JSON(kbType, kbType_);
      DARABONBA_PTR_TO_JSON(knowledgeList, knowledgeList_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pointId, pointId_);
      DARABONBA_PTR_TO_JSON(questionDescription, questionDescription_);
      DARABONBA_PTR_TO_JSON(questionSample, questionSample_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachAssessmentPointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(answerList, answerList_);
      DARABONBA_PTR_FROM_JSON(citations, citations_);
      DARABONBA_PTR_FROM_JSON(documentId, documentId_);
      DARABONBA_PTR_FROM_JSON(documentName, documentName_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(kbId, kbId_);
      DARABONBA_PTR_FROM_JSON(kbType, kbType_);
      DARABONBA_PTR_FROM_JSON(knowledgeList, knowledgeList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pointId, pointId_);
      DARABONBA_PTR_FROM_JSON(questionDescription, questionDescription_);
      DARABONBA_PTR_FROM_JSON(questionSample, questionSample_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetAICoachAssessmentPointResponseBody() = default ;
    GetAICoachAssessmentPointResponseBody(const GetAICoachAssessmentPointResponseBody &) = default ;
    GetAICoachAssessmentPointResponseBody(GetAICoachAssessmentPointResponseBody &&) = default ;
    GetAICoachAssessmentPointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachAssessmentPointResponseBody() = default ;
    GetAICoachAssessmentPointResponseBody& operator=(const GetAICoachAssessmentPointResponseBody &) = default ;
    GetAICoachAssessmentPointResponseBody& operator=(GetAICoachAssessmentPointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answerList_ == nullptr
        && return this->citations_ == nullptr && return this->documentId_ == nullptr && return this->documentName_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->kbId_ == nullptr && return this->kbType_ == nullptr && return this->knowledgeList_ == nullptr && return this->name_ == nullptr && return this->pointId_ == nullptr
        && return this->questionDescription_ == nullptr && return this->questionSample_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // answerList Field Functions 
    bool hasAnswerList() const { return this->answerList_ != nullptr;};
    void deleteAnswerList() { this->answerList_ = nullptr;};
    inline const vector<GetAICoachAssessmentPointResponseBodyAnswerList> & answerList() const { DARABONBA_PTR_GET_CONST(answerList_, vector<GetAICoachAssessmentPointResponseBodyAnswerList>) };
    inline vector<GetAICoachAssessmentPointResponseBodyAnswerList> answerList() { DARABONBA_PTR_GET(answerList_, vector<GetAICoachAssessmentPointResponseBodyAnswerList>) };
    inline GetAICoachAssessmentPointResponseBody& setAnswerList(const vector<GetAICoachAssessmentPointResponseBodyAnswerList> & answerList) { DARABONBA_PTR_SET_VALUE(answerList_, answerList) };
    inline GetAICoachAssessmentPointResponseBody& setAnswerList(vector<GetAICoachAssessmentPointResponseBodyAnswerList> && answerList) { DARABONBA_PTR_SET_RVALUE(answerList_, answerList) };


    // citations Field Functions 
    bool hasCitations() const { return this->citations_ != nullptr;};
    void deleteCitations() { this->citations_ = nullptr;};
    inline int32_t citations() const { DARABONBA_PTR_GET_DEFAULT(citations_, 0) };
    inline GetAICoachAssessmentPointResponseBody& setCitations(int32_t citations) { DARABONBA_PTR_SET_VALUE(citations_, citations) };


    // documentId Field Functions 
    bool hasDocumentId() const { return this->documentId_ != nullptr;};
    void deleteDocumentId() { this->documentId_ = nullptr;};
    inline string documentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
    inline GetAICoachAssessmentPointResponseBody& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


    // documentName Field Functions 
    bool hasDocumentName() const { return this->documentName_ != nullptr;};
    void deleteDocumentName() { this->documentName_ = nullptr;};
    inline string documentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
    inline GetAICoachAssessmentPointResponseBody& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetAICoachAssessmentPointResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetAICoachAssessmentPointResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // kbId Field Functions 
    bool hasKbId() const { return this->kbId_ != nullptr;};
    void deleteKbId() { this->kbId_ = nullptr;};
    inline string kbId() const { DARABONBA_PTR_GET_DEFAULT(kbId_, "") };
    inline GetAICoachAssessmentPointResponseBody& setKbId(string kbId) { DARABONBA_PTR_SET_VALUE(kbId_, kbId) };


    // kbType Field Functions 
    bool hasKbType() const { return this->kbType_ != nullptr;};
    void deleteKbType() { this->kbType_ = nullptr;};
    inline string kbType() const { DARABONBA_PTR_GET_DEFAULT(kbType_, "") };
    inline GetAICoachAssessmentPointResponseBody& setKbType(string kbType) { DARABONBA_PTR_SET_VALUE(kbType_, kbType) };


    // knowledgeList Field Functions 
    bool hasKnowledgeList() const { return this->knowledgeList_ != nullptr;};
    void deleteKnowledgeList() { this->knowledgeList_ = nullptr;};
    inline const vector<string> & knowledgeList() const { DARABONBA_PTR_GET_CONST(knowledgeList_, vector<string>) };
    inline vector<string> knowledgeList() { DARABONBA_PTR_GET(knowledgeList_, vector<string>) };
    inline GetAICoachAssessmentPointResponseBody& setKnowledgeList(const vector<string> & knowledgeList) { DARABONBA_PTR_SET_VALUE(knowledgeList_, knowledgeList) };
    inline GetAICoachAssessmentPointResponseBody& setKnowledgeList(vector<string> && knowledgeList) { DARABONBA_PTR_SET_RVALUE(knowledgeList_, knowledgeList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAICoachAssessmentPointResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pointId Field Functions 
    bool hasPointId() const { return this->pointId_ != nullptr;};
    void deletePointId() { this->pointId_ = nullptr;};
    inline string pointId() const { DARABONBA_PTR_GET_DEFAULT(pointId_, "") };
    inline GetAICoachAssessmentPointResponseBody& setPointId(string pointId) { DARABONBA_PTR_SET_VALUE(pointId_, pointId) };


    // questionDescription Field Functions 
    bool hasQuestionDescription() const { return this->questionDescription_ != nullptr;};
    void deleteQuestionDescription() { this->questionDescription_ = nullptr;};
    inline string questionDescription() const { DARABONBA_PTR_GET_DEFAULT(questionDescription_, "") };
    inline GetAICoachAssessmentPointResponseBody& setQuestionDescription(string questionDescription) { DARABONBA_PTR_SET_VALUE(questionDescription_, questionDescription) };


    // questionSample Field Functions 
    bool hasQuestionSample() const { return this->questionSample_ != nullptr;};
    void deleteQuestionSample() { this->questionSample_ = nullptr;};
    inline string questionSample() const { DARABONBA_PTR_GET_DEFAULT(questionSample_, "") };
    inline GetAICoachAssessmentPointResponseBody& setQuestionSample(string questionSample) { DARABONBA_PTR_SET_VALUE(questionSample_, questionSample) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAICoachAssessmentPointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAICoachAssessmentPointResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<GetAICoachAssessmentPointResponseBodyAnswerList>> answerList_ = nullptr;
    std::shared_ptr<int32_t> citations_ = nullptr;
    std::shared_ptr<string> documentId_ = nullptr;
    std::shared_ptr<string> documentName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> kbId_ = nullptr;
    std::shared_ptr<string> kbType_ = nullptr;
    std::shared_ptr<vector<string>> knowledgeList_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> pointId_ = nullptr;
    std::shared_ptr<string> questionDescription_ = nullptr;
    std::shared_ptr<string> questionSample_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
