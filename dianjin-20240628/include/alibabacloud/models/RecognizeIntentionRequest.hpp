// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEINTENTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEINTENTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeIntentionRequestGlobalIntentionList.hpp>
#include <alibabacloud/models/RecognizeIntentionRequestHierarchicalIntentionList.hpp>
#include <alibabacloud/models/RecognizeIntentionRequestIntentionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RecognizeIntentionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeIntentionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analysis, analysis_);
      DARABONBA_PTR_TO_JSON(bizType, bizType_);
      DARABONBA_PTR_TO_JSON(conversation, conversation_);
      DARABONBA_PTR_TO_JSON(globalIntentionList, globalIntentionList_);
      DARABONBA_PTR_TO_JSON(hierarchicalIntentionList, hierarchicalIntentionList_);
      DARABONBA_PTR_TO_JSON(intentionDomainCode, intentionDomainCode_);
      DARABONBA_PTR_TO_JSON(intentionList, intentionList_);
      DARABONBA_PTR_TO_JSON(opType, opType_);
      DARABONBA_PTR_TO_JSON(recommend, recommend_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeIntentionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(bizType, bizType_);
      DARABONBA_PTR_FROM_JSON(conversation, conversation_);
      DARABONBA_PTR_FROM_JSON(globalIntentionList, globalIntentionList_);
      DARABONBA_PTR_FROM_JSON(hierarchicalIntentionList, hierarchicalIntentionList_);
      DARABONBA_PTR_FROM_JSON(intentionDomainCode, intentionDomainCode_);
      DARABONBA_PTR_FROM_JSON(intentionList, intentionList_);
      DARABONBA_PTR_FROM_JSON(opType, opType_);
      DARABONBA_PTR_FROM_JSON(recommend, recommend_);
    };
    RecognizeIntentionRequest() = default ;
    RecognizeIntentionRequest(const RecognizeIntentionRequest &) = default ;
    RecognizeIntentionRequest(RecognizeIntentionRequest &&) = default ;
    RecognizeIntentionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeIntentionRequest() = default ;
    RecognizeIntentionRequest& operator=(const RecognizeIntentionRequest &) = default ;
    RecognizeIntentionRequest& operator=(RecognizeIntentionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysis_ != nullptr
        && this->bizType_ != nullptr && this->conversation_ != nullptr && this->globalIntentionList_ != nullptr && this->hierarchicalIntentionList_ != nullptr && this->intentionDomainCode_ != nullptr
        && this->intentionList_ != nullptr && this->opType_ != nullptr && this->recommend_ != nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline bool analysis() const { DARABONBA_PTR_GET_DEFAULT(analysis_, false) };
    inline RecognizeIntentionRequest& setAnalysis(bool analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline RecognizeIntentionRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // conversation Field Functions 
    bool hasConversation() const { return this->conversation_ != nullptr;};
    void deleteConversation() { this->conversation_ = nullptr;};
    inline string conversation() const { DARABONBA_PTR_GET_DEFAULT(conversation_, "") };
    inline RecognizeIntentionRequest& setConversation(string conversation) { DARABONBA_PTR_SET_VALUE(conversation_, conversation) };


    // globalIntentionList Field Functions 
    bool hasGlobalIntentionList() const { return this->globalIntentionList_ != nullptr;};
    void deleteGlobalIntentionList() { this->globalIntentionList_ = nullptr;};
    inline const vector<RecognizeIntentionRequestGlobalIntentionList> & globalIntentionList() const { DARABONBA_PTR_GET_CONST(globalIntentionList_, vector<RecognizeIntentionRequestGlobalIntentionList>) };
    inline vector<RecognizeIntentionRequestGlobalIntentionList> globalIntentionList() { DARABONBA_PTR_GET(globalIntentionList_, vector<RecognizeIntentionRequestGlobalIntentionList>) };
    inline RecognizeIntentionRequest& setGlobalIntentionList(const vector<RecognizeIntentionRequestGlobalIntentionList> & globalIntentionList) { DARABONBA_PTR_SET_VALUE(globalIntentionList_, globalIntentionList) };
    inline RecognizeIntentionRequest& setGlobalIntentionList(vector<RecognizeIntentionRequestGlobalIntentionList> && globalIntentionList) { DARABONBA_PTR_SET_RVALUE(globalIntentionList_, globalIntentionList) };


    // hierarchicalIntentionList Field Functions 
    bool hasHierarchicalIntentionList() const { return this->hierarchicalIntentionList_ != nullptr;};
    void deleteHierarchicalIntentionList() { this->hierarchicalIntentionList_ = nullptr;};
    inline const vector<RecognizeIntentionRequestHierarchicalIntentionList> & hierarchicalIntentionList() const { DARABONBA_PTR_GET_CONST(hierarchicalIntentionList_, vector<RecognizeIntentionRequestHierarchicalIntentionList>) };
    inline vector<RecognizeIntentionRequestHierarchicalIntentionList> hierarchicalIntentionList() { DARABONBA_PTR_GET(hierarchicalIntentionList_, vector<RecognizeIntentionRequestHierarchicalIntentionList>) };
    inline RecognizeIntentionRequest& setHierarchicalIntentionList(const vector<RecognizeIntentionRequestHierarchicalIntentionList> & hierarchicalIntentionList) { DARABONBA_PTR_SET_VALUE(hierarchicalIntentionList_, hierarchicalIntentionList) };
    inline RecognizeIntentionRequest& setHierarchicalIntentionList(vector<RecognizeIntentionRequestHierarchicalIntentionList> && hierarchicalIntentionList) { DARABONBA_PTR_SET_RVALUE(hierarchicalIntentionList_, hierarchicalIntentionList) };


    // intentionDomainCode Field Functions 
    bool hasIntentionDomainCode() const { return this->intentionDomainCode_ != nullptr;};
    void deleteIntentionDomainCode() { this->intentionDomainCode_ = nullptr;};
    inline string intentionDomainCode() const { DARABONBA_PTR_GET_DEFAULT(intentionDomainCode_, "") };
    inline RecognizeIntentionRequest& setIntentionDomainCode(string intentionDomainCode) { DARABONBA_PTR_SET_VALUE(intentionDomainCode_, intentionDomainCode) };


    // intentionList Field Functions 
    bool hasIntentionList() const { return this->intentionList_ != nullptr;};
    void deleteIntentionList() { this->intentionList_ = nullptr;};
    inline const vector<RecognizeIntentionRequestIntentionList> & intentionList() const { DARABONBA_PTR_GET_CONST(intentionList_, vector<RecognizeIntentionRequestIntentionList>) };
    inline vector<RecognizeIntentionRequestIntentionList> intentionList() { DARABONBA_PTR_GET(intentionList_, vector<RecognizeIntentionRequestIntentionList>) };
    inline RecognizeIntentionRequest& setIntentionList(const vector<RecognizeIntentionRequestIntentionList> & intentionList) { DARABONBA_PTR_SET_VALUE(intentionList_, intentionList) };
    inline RecognizeIntentionRequest& setIntentionList(vector<RecognizeIntentionRequestIntentionList> && intentionList) { DARABONBA_PTR_SET_RVALUE(intentionList_, intentionList) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline RecognizeIntentionRequest& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // recommend Field Functions 
    bool hasRecommend() const { return this->recommend_ != nullptr;};
    void deleteRecommend() { this->recommend_ = nullptr;};
    inline bool recommend() const { DARABONBA_PTR_GET_DEFAULT(recommend_, false) };
    inline RecognizeIntentionRequest& setRecommend(bool recommend) { DARABONBA_PTR_SET_VALUE(recommend_, recommend) };


  protected:
    std::shared_ptr<bool> analysis_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conversation_ = nullptr;
    std::shared_ptr<vector<RecognizeIntentionRequestGlobalIntentionList>> globalIntentionList_ = nullptr;
    std::shared_ptr<vector<RecognizeIntentionRequestHierarchicalIntentionList>> hierarchicalIntentionList_ = nullptr;
    std::shared_ptr<string> intentionDomainCode_ = nullptr;
    std::shared_ptr<vector<RecognizeIntentionRequestIntentionList>> intentionList_ = nullptr;
    std::shared_ptr<string> opType_ = nullptr;
    std::shared_ptr<bool> recommend_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
