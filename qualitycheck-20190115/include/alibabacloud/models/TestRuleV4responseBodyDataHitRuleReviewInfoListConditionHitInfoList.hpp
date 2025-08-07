// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAHITRULEREVIEWINFOLISTCONDITIONHITINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAHITRULEREVIEWINFOLISTCONDITIONHITINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords.hpp>
#include <alibabacloud/models/TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_TO_JSON(Phrase, phrase_);
    };
    friend void from_json(const Darabonba::Json& j, TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
    };
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList() = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList(const TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList &) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList(TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList &&) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList() = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList& operator=(const TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList &) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList& operator=(TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cid_ != nullptr
        && this->keyWords_ != nullptr && this->phrase_ != nullptr; };
    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline const vector<string> & cid() const { DARABONBA_PTR_GET_CONST(cid_, vector<string>) };
    inline vector<string> cid() { DARABONBA_PTR_GET(cid_, vector<string>) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList& setCid(const vector<string> & cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList& setCid(vector<string> && cid) { DARABONBA_PTR_SET_RVALUE(cid_, cid) };


    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline const vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords> & keyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords>) };
    inline vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords> keyWords() { DARABONBA_PTR_GET(keyWords_, vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords>) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList& setKeyWords(const vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords> & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList& setKeyWords(vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords> && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline const Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase & phrase() const { DARABONBA_PTR_GET_CONST(phrase_, Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase) };
    inline Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase phrase() { DARABONBA_PTR_GET(phrase_, Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList& setPhrase(const Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList& setPhrase(Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


  protected:
    std::shared_ptr<vector<string>> cid_ = nullptr;
    std::shared_ptr<vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListKeyWords>> keyWords_ = nullptr;
    std::shared_ptr<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase> phrase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
