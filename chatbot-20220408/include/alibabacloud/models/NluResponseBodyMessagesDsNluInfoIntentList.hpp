// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NLURESPONSEBODYMESSAGESDSNLUINFOINTENTLIST_HPP_
#define ALIBABACLOUD_MODELS_NLURESPONSEBODYMESSAGESDSNLUINFOINTENTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NluResponseBodyMessagesDsNluInfoIntentListSlotList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class NluResponseBodyMessagesDsNluInfoIntentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NluResponseBodyMessagesDsNluInfoIntentList& obj) { 
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(MatchDetail, matchDetail_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SlotList, slotList_);
    };
    friend void from_json(const Darabonba::Json& j, NluResponseBodyMessagesDsNluInfoIntentList& obj) { 
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(MatchDetail, matchDetail_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SlotList, slotList_);
    };
    NluResponseBodyMessagesDsNluInfoIntentList() = default ;
    NluResponseBodyMessagesDsNluInfoIntentList(const NluResponseBodyMessagesDsNluInfoIntentList &) = default ;
    NluResponseBodyMessagesDsNluInfoIntentList(NluResponseBodyMessagesDsNluInfoIntentList &&) = default ;
    NluResponseBodyMessagesDsNluInfoIntentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NluResponseBodyMessagesDsNluInfoIntentList() = default ;
    NluResponseBodyMessagesDsNluInfoIntentList& operator=(const NluResponseBodyMessagesDsNluInfoIntentList &) = default ;
    NluResponseBodyMessagesDsNluInfoIntentList& operator=(NluResponseBodyMessagesDsNluInfoIntentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->intentId_ == nullptr
        && return this->matchDetail_ == nullptr && return this->matchType_ == nullptr && return this->name_ == nullptr && return this->score_ == nullptr && return this->slotList_ == nullptr; };
    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline NluResponseBodyMessagesDsNluInfoIntentList& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // matchDetail Field Functions 
    bool hasMatchDetail() const { return this->matchDetail_ != nullptr;};
    void deleteMatchDetail() { this->matchDetail_ = nullptr;};
    inline string matchDetail() const { DARABONBA_PTR_GET_DEFAULT(matchDetail_, "") };
    inline NluResponseBodyMessagesDsNluInfoIntentList& setMatchDetail(string matchDetail) { DARABONBA_PTR_SET_VALUE(matchDetail_, matchDetail) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline NluResponseBodyMessagesDsNluInfoIntentList& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline NluResponseBodyMessagesDsNluInfoIntentList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline NluResponseBodyMessagesDsNluInfoIntentList& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // slotList Field Functions 
    bool hasSlotList() const { return this->slotList_ != nullptr;};
    void deleteSlotList() { this->slotList_ = nullptr;};
    inline const vector<Models::NluResponseBodyMessagesDsNluInfoIntentListSlotList> & slotList() const { DARABONBA_PTR_GET_CONST(slotList_, vector<Models::NluResponseBodyMessagesDsNluInfoIntentListSlotList>) };
    inline vector<Models::NluResponseBodyMessagesDsNluInfoIntentListSlotList> slotList() { DARABONBA_PTR_GET(slotList_, vector<Models::NluResponseBodyMessagesDsNluInfoIntentListSlotList>) };
    inline NluResponseBodyMessagesDsNluInfoIntentList& setSlotList(const vector<Models::NluResponseBodyMessagesDsNluInfoIntentListSlotList> & slotList) { DARABONBA_PTR_SET_VALUE(slotList_, slotList) };
    inline NluResponseBodyMessagesDsNluInfoIntentList& setSlotList(vector<Models::NluResponseBodyMessagesDsNluInfoIntentListSlotList> && slotList) { DARABONBA_PTR_SET_RVALUE(slotList_, slotList) };


  protected:
    std::shared_ptr<int64_t> intentId_ = nullptr;
    std::shared_ptr<string> matchDetail_ = nullptr;
    std::shared_ptr<string> matchType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<double> score_ = nullptr;
    std::shared_ptr<vector<Models::NluResponseBodyMessagesDsNluInfoIntentListSlotList>> slotList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
