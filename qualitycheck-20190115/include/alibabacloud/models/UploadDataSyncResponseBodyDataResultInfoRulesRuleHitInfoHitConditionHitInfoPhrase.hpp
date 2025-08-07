// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFORULESRULEHITINFOHITCONDITIONHITINFOPHRASE_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFORULESRULEHITINFOHITCONDITIONHITINFOPHRASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase& obj) { 
      DARABONBA_PTR_TO_JSON(Begin, begin_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Identity, identity_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Words, words_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase& obj) { 
      DARABONBA_PTR_FROM_JSON(Begin, begin_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Identity, identity_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Words, words_);
    };
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase() = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase(const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase &) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase(UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase &&) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase() = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase& operator=(const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase &) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase& operator=(UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->begin_ != nullptr
        && this->beginTime_ != nullptr && this->end_ != nullptr && this->identity_ != nullptr && this->role_ != nullptr && this->words_ != nullptr; };
    // begin Field Functions 
    bool hasBegin() const { return this->begin_ != nullptr;};
    void deleteBegin() { this->begin_ = nullptr;};
    inline int64_t begin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // identity Field Functions 
    bool hasIdentity() const { return this->identity_ != nullptr;};
    void deleteIdentity() { this->identity_ = nullptr;};
    inline string identity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // words Field Functions 
    bool hasWords() const { return this->words_ != nullptr;};
    void deleteWords() { this->words_ = nullptr;};
    inline string words() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


  protected:
    std::shared_ptr<int64_t> begin_ = nullptr;
    std::shared_ptr<string> beginTime_ = nullptr;
    std::shared_ptr<int64_t> end_ = nullptr;
    std::shared_ptr<string> identity_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> words_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
