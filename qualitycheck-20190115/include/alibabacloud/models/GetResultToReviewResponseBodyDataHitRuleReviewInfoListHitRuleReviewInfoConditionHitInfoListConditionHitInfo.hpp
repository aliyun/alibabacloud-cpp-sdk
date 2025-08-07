// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFOCONDITIONHITINFOLISTCONDITIONHITINFO_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFOCONDITIONHITINFOLISTCONDITIONHITINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_TO_JSON(Phrase, phrase_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
    };
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo &&) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo& operator=(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo& operator=(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cid_ != nullptr
        && this->keyWords_ != nullptr && this->phrase_ != nullptr; };
    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid & cid() const { DARABONBA_PTR_GET_CONST(cid_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid) };
    inline Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid cid() { DARABONBA_PTR_GET(cid_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo& setCid(const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid & cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo& setCid(Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid && cid) { DARABONBA_PTR_SET_RVALUE(cid_, cid) };


    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords & keyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords) };
    inline Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords keyWords() { DARABONBA_PTR_GET(keyWords_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo& setKeyWords(const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo& setKeyWords(Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase & phrase() const { DARABONBA_PTR_GET_CONST(phrase_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase) };
    inline Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase phrase() { DARABONBA_PTR_GET(phrase_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo& setPhrase(const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo& setPhrase(Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


  protected:
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid> cid_ = nullptr;
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords> keyWords_ = nullptr;
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase> phrase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
