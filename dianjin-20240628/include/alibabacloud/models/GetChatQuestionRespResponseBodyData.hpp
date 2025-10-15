// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATQUESTIONRESPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCHATQUESTIONRESPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetChatQuestionRespResponseBodyDataQuestionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetChatQuestionRespResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatQuestionRespResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(currentState, currentState_);
      DARABONBA_PTR_TO_JSON(questionList, questionList_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatQuestionRespResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(currentState, currentState_);
      DARABONBA_PTR_FROM_JSON(questionList, questionList_);
    };
    GetChatQuestionRespResponseBodyData() = default ;
    GetChatQuestionRespResponseBodyData(const GetChatQuestionRespResponseBodyData &) = default ;
    GetChatQuestionRespResponseBodyData(GetChatQuestionRespResponseBodyData &&) = default ;
    GetChatQuestionRespResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatQuestionRespResponseBodyData() = default ;
    GetChatQuestionRespResponseBodyData& operator=(const GetChatQuestionRespResponseBodyData &) = default ;
    GetChatQuestionRespResponseBodyData& operator=(GetChatQuestionRespResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentState_ == nullptr
        && return this->questionList_ == nullptr; };
    // currentState Field Functions 
    bool hasCurrentState() const { return this->currentState_ != nullptr;};
    void deleteCurrentState() { this->currentState_ = nullptr;};
    inline string currentState() const { DARABONBA_PTR_GET_DEFAULT(currentState_, "") };
    inline GetChatQuestionRespResponseBodyData& setCurrentState(string currentState) { DARABONBA_PTR_SET_VALUE(currentState_, currentState) };


    // questionList Field Functions 
    bool hasQuestionList() const { return this->questionList_ != nullptr;};
    void deleteQuestionList() { this->questionList_ = nullptr;};
    inline const vector<Models::GetChatQuestionRespResponseBodyDataQuestionList> & questionList() const { DARABONBA_PTR_GET_CONST(questionList_, vector<Models::GetChatQuestionRespResponseBodyDataQuestionList>) };
    inline vector<Models::GetChatQuestionRespResponseBodyDataQuestionList> questionList() { DARABONBA_PTR_GET(questionList_, vector<Models::GetChatQuestionRespResponseBodyDataQuestionList>) };
    inline GetChatQuestionRespResponseBodyData& setQuestionList(const vector<Models::GetChatQuestionRespResponseBodyDataQuestionList> & questionList) { DARABONBA_PTR_SET_VALUE(questionList_, questionList) };
    inline GetChatQuestionRespResponseBodyData& setQuestionList(vector<Models::GetChatQuestionRespResponseBodyDataQuestionList> && questionList) { DARABONBA_PTR_SET_RVALUE(questionList_, questionList) };


  protected:
    std::shared_ptr<string> currentState_ = nullptr;
    std::shared_ptr<vector<Models::GetChatQuestionRespResponseBodyDataQuestionList>> questionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
