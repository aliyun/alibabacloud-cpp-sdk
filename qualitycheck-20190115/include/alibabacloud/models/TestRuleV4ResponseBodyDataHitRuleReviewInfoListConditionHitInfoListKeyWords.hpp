// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAHITRULEREVIEWINFOLISTCONDITIONHITINFOLISTKEYWORDS_HPP_
#define ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAHITRULEREVIEWINFOLISTCONDITIONHITINFOLISTKEYWORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& obj) { 
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(CustomizeCode, customizeCode_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Oid, oid_);
      DARABONBA_PTR_TO_JSON(OperatorKey, operatorKey_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(SimilarPhrase, similarPhrase_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(Val, val_);
    };
    friend void from_json(const Darabonba::Json& j, TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& obj) { 
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(CustomizeCode, customizeCode_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Oid, oid_);
      DARABONBA_PTR_FROM_JSON(OperatorKey, operatorKey_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(SimilarPhrase, similarPhrase_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(Val, val_);
    };
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords() = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords(const TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords &) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords(TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords &&) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords() = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& operator=(const TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords &) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& operator=(TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cid_ == nullptr
        && return this->customizeCode_ == nullptr && return this->from_ == nullptr && return this->oid_ == nullptr && return this->operatorKey_ == nullptr && return this->pid_ == nullptr
        && return this->similarPhrase_ == nullptr && return this->tid_ == nullptr && return this->to_ == nullptr && return this->uuid_ == nullptr && return this->val_ == nullptr; };
    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline string cid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


    // customizeCode Field Functions 
    bool hasCustomizeCode() const { return this->customizeCode_ != nullptr;};
    void deleteCustomizeCode() { this->customizeCode_ = nullptr;};
    inline string customizeCode() const { DARABONBA_PTR_GET_DEFAULT(customizeCode_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& setCustomizeCode(string customizeCode) { DARABONBA_PTR_SET_VALUE(customizeCode_, customizeCode) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // oid Field Functions 
    bool hasOid() const { return this->oid_ != nullptr;};
    void deleteOid() { this->oid_ = nullptr;};
    inline string oid() const { DARABONBA_PTR_GET_DEFAULT(oid_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& setOid(string oid) { DARABONBA_PTR_SET_VALUE(oid_, oid) };


    // operatorKey Field Functions 
    bool hasOperatorKey() const { return this->operatorKey_ != nullptr;};
    void deleteOperatorKey() { this->operatorKey_ = nullptr;};
    inline string operatorKey() const { DARABONBA_PTR_GET_DEFAULT(operatorKey_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& setOperatorKey(string operatorKey) { DARABONBA_PTR_SET_VALUE(operatorKey_, operatorKey) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline int32_t pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // similarPhrase Field Functions 
    bool hasSimilarPhrase() const { return this->similarPhrase_ != nullptr;};
    void deleteSimilarPhrase() { this->similarPhrase_ = nullptr;};
    inline string similarPhrase() const { DARABONBA_PTR_GET_DEFAULT(similarPhrase_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& setSimilarPhrase(string similarPhrase) { DARABONBA_PTR_SET_VALUE(similarPhrase_, similarPhrase) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline string tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& setTid(string tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int32_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // val Field Functions 
    bool hasVal() const { return this->val_ != nullptr;};
    void deleteVal() { this->val_ = nullptr;};
    inline string val() const { DARABONBA_PTR_GET_DEFAULT(val_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords& setVal(string val) { DARABONBA_PTR_SET_VALUE(val_, val) };


  protected:
    std::shared_ptr<string> cid_ = nullptr;
    std::shared_ptr<string> customizeCode_ = nullptr;
    std::shared_ptr<int32_t> from_ = nullptr;
    std::shared_ptr<string> oid_ = nullptr;
    std::shared_ptr<string> operatorKey_ = nullptr;
    std::shared_ptr<int32_t> pid_ = nullptr;
    std::shared_ptr<string> similarPhrase_ = nullptr;
    std::shared_ptr<string> tid_ = nullptr;
    std::shared_ptr<int32_t> to_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
    std::shared_ptr<string> val_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
