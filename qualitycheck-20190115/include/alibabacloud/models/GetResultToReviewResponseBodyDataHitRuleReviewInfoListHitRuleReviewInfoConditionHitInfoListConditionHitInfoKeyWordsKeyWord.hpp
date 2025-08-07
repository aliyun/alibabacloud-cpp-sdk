// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFOCONDITIONHITINFOLISTCONDITIONHITINFOKEYWORDSKEYWORD_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFOCONDITIONHITINFOLISTCONDITIONHITINFOKEYWORDSKEYWORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord& obj) { 
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(CustomizeCode, customizeCode_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(IsMatch, isMatch_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(Val, val_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord& obj) { 
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(CustomizeCode, customizeCode_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(IsMatch, isMatch_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(Val, val_);
    };
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord &&) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord& operator=(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord& operator=(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cid_ != nullptr
        && this->customizeCode_ != nullptr && this->from_ != nullptr && this->isMatch_ != nullptr && this->pid_ != nullptr && this->tid_ != nullptr
        && this->to_ != nullptr && this->val_ != nullptr; };
    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline string cid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


    // customizeCode Field Functions 
    bool hasCustomizeCode() const { return this->customizeCode_ != nullptr;};
    void deleteCustomizeCode() { this->customizeCode_ = nullptr;};
    inline string customizeCode() const { DARABONBA_PTR_GET_DEFAULT(customizeCode_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord& setCustomizeCode(string customizeCode) { DARABONBA_PTR_SET_VALUE(customizeCode_, customizeCode) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // isMatch Field Functions 
    bool hasIsMatch() const { return this->isMatch_ != nullptr;};
    void deleteIsMatch() { this->isMatch_ = nullptr;};
    inline bool isMatch() const { DARABONBA_PTR_GET_DEFAULT(isMatch_, false) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord& setIsMatch(bool isMatch) { DARABONBA_PTR_SET_VALUE(isMatch_, isMatch) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline int32_t pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline string tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord& setTid(string tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int32_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // val Field Functions 
    bool hasVal() const { return this->val_ != nullptr;};
    void deleteVal() { this->val_ = nullptr;};
    inline string val() const { DARABONBA_PTR_GET_DEFAULT(val_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord& setVal(string val) { DARABONBA_PTR_SET_VALUE(val_, val) };


  protected:
    std::shared_ptr<string> cid_ = nullptr;
    std::shared_ptr<string> customizeCode_ = nullptr;
    std::shared_ptr<int32_t> from_ = nullptr;
    std::shared_ptr<bool> isMatch_ = nullptr;
    std::shared_ptr<int32_t> pid_ = nullptr;
    std::shared_ptr<string> tid_ = nullptr;
    std::shared_ptr<int32_t> to_ = nullptr;
    std::shared_ptr<string> val_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
