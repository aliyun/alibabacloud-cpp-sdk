// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALOGLOGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDIALOGLOGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDialogLogResponseBodyDataHitIntentionList.hpp>
#include <alibabacloud/models/GetDialogLogResponseBodyDataIntentionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDialogLogResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDialogLogResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(analysisProcess, analysisProcess_);
      DARABONBA_PTR_TO_JSON(conversationList, conversationList_);
      DARABONBA_PTR_TO_JSON(hitIntentionList, hitIntentionList_);
      DARABONBA_PTR_TO_JSON(intentionList, intentionList_);
      DARABONBA_PTR_TO_JSON(modelCostTime, modelCostTime_);
      DARABONBA_PTR_TO_JSON(recallList, recallList_);
    };
    friend void from_json(const Darabonba::Json& j, GetDialogLogResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisProcess, analysisProcess_);
      DARABONBA_PTR_FROM_JSON(conversationList, conversationList_);
      DARABONBA_PTR_FROM_JSON(hitIntentionList, hitIntentionList_);
      DARABONBA_PTR_FROM_JSON(intentionList, intentionList_);
      DARABONBA_PTR_FROM_JSON(modelCostTime, modelCostTime_);
      DARABONBA_PTR_FROM_JSON(recallList, recallList_);
    };
    GetDialogLogResponseBodyData() = default ;
    GetDialogLogResponseBodyData(const GetDialogLogResponseBodyData &) = default ;
    GetDialogLogResponseBodyData(GetDialogLogResponseBodyData &&) = default ;
    GetDialogLogResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDialogLogResponseBodyData() = default ;
    GetDialogLogResponseBodyData& operator=(const GetDialogLogResponseBodyData &) = default ;
    GetDialogLogResponseBodyData& operator=(GetDialogLogResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisProcess_ == nullptr
        && return this->conversationList_ == nullptr && return this->hitIntentionList_ == nullptr && return this->intentionList_ == nullptr && return this->modelCostTime_ == nullptr && return this->recallList_ == nullptr; };
    // analysisProcess Field Functions 
    bool hasAnalysisProcess() const { return this->analysisProcess_ != nullptr;};
    void deleteAnalysisProcess() { this->analysisProcess_ = nullptr;};
    inline string analysisProcess() const { DARABONBA_PTR_GET_DEFAULT(analysisProcess_, "") };
    inline GetDialogLogResponseBodyData& setAnalysisProcess(string analysisProcess) { DARABONBA_PTR_SET_VALUE(analysisProcess_, analysisProcess) };


    // conversationList Field Functions 
    bool hasConversationList() const { return this->conversationList_ != nullptr;};
    void deleteConversationList() { this->conversationList_ = nullptr;};
    inline string conversationList() const { DARABONBA_PTR_GET_DEFAULT(conversationList_, "") };
    inline GetDialogLogResponseBodyData& setConversationList(string conversationList) { DARABONBA_PTR_SET_VALUE(conversationList_, conversationList) };


    // hitIntentionList Field Functions 
    bool hasHitIntentionList() const { return this->hitIntentionList_ != nullptr;};
    void deleteHitIntentionList() { this->hitIntentionList_ = nullptr;};
    inline const vector<Models::GetDialogLogResponseBodyDataHitIntentionList> & hitIntentionList() const { DARABONBA_PTR_GET_CONST(hitIntentionList_, vector<Models::GetDialogLogResponseBodyDataHitIntentionList>) };
    inline vector<Models::GetDialogLogResponseBodyDataHitIntentionList> hitIntentionList() { DARABONBA_PTR_GET(hitIntentionList_, vector<Models::GetDialogLogResponseBodyDataHitIntentionList>) };
    inline GetDialogLogResponseBodyData& setHitIntentionList(const vector<Models::GetDialogLogResponseBodyDataHitIntentionList> & hitIntentionList) { DARABONBA_PTR_SET_VALUE(hitIntentionList_, hitIntentionList) };
    inline GetDialogLogResponseBodyData& setHitIntentionList(vector<Models::GetDialogLogResponseBodyDataHitIntentionList> && hitIntentionList) { DARABONBA_PTR_SET_RVALUE(hitIntentionList_, hitIntentionList) };


    // intentionList Field Functions 
    bool hasIntentionList() const { return this->intentionList_ != nullptr;};
    void deleteIntentionList() { this->intentionList_ = nullptr;};
    inline const vector<Models::GetDialogLogResponseBodyDataIntentionList> & intentionList() const { DARABONBA_PTR_GET_CONST(intentionList_, vector<Models::GetDialogLogResponseBodyDataIntentionList>) };
    inline vector<Models::GetDialogLogResponseBodyDataIntentionList> intentionList() { DARABONBA_PTR_GET(intentionList_, vector<Models::GetDialogLogResponseBodyDataIntentionList>) };
    inline GetDialogLogResponseBodyData& setIntentionList(const vector<Models::GetDialogLogResponseBodyDataIntentionList> & intentionList) { DARABONBA_PTR_SET_VALUE(intentionList_, intentionList) };
    inline GetDialogLogResponseBodyData& setIntentionList(vector<Models::GetDialogLogResponseBodyDataIntentionList> && intentionList) { DARABONBA_PTR_SET_RVALUE(intentionList_, intentionList) };


    // modelCostTime Field Functions 
    bool hasModelCostTime() const { return this->modelCostTime_ != nullptr;};
    void deleteModelCostTime() { this->modelCostTime_ = nullptr;};
    inline int64_t modelCostTime() const { DARABONBA_PTR_GET_DEFAULT(modelCostTime_, 0L) };
    inline GetDialogLogResponseBodyData& setModelCostTime(int64_t modelCostTime) { DARABONBA_PTR_SET_VALUE(modelCostTime_, modelCostTime) };


    // recallList Field Functions 
    bool hasRecallList() const { return this->recallList_ != nullptr;};
    void deleteRecallList() { this->recallList_ = nullptr;};
    inline string recallList() const { DARABONBA_PTR_GET_DEFAULT(recallList_, "") };
    inline GetDialogLogResponseBodyData& setRecallList(string recallList) { DARABONBA_PTR_SET_VALUE(recallList_, recallList) };


  protected:
    std::shared_ptr<string> analysisProcess_ = nullptr;
    std::shared_ptr<string> conversationList_ = nullptr;
    std::shared_ptr<vector<Models::GetDialogLogResponseBodyDataHitIntentionList>> hitIntentionList_ = nullptr;
    std::shared_ptr<vector<Models::GetDialogLogResponseBodyDataIntentionList>> intentionList_ = nullptr;
    std::shared_ptr<int64_t> modelCostTime_ = nullptr;
    std::shared_ptr<string> recallList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
