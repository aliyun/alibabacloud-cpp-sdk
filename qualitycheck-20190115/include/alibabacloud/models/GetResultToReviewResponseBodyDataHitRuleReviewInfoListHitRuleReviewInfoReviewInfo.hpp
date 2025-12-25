// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFOREVIEWINFO_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFOREVIEWINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo& obj) { 
      DARABONBA_PTR_TO_JSON(HitId, hitId_);
      DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
      DARABONBA_PTR_TO_JSON(ReviewTime, reviewTime_);
      DARABONBA_PTR_TO_JSON(Reviewer, reviewer_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(SentenceReviewResults, sentenceReviewResults_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(HitId, hitId_);
      DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
      DARABONBA_PTR_FROM_JSON(ReviewTime, reviewTime_);
      DARABONBA_PTR_FROM_JSON(Reviewer, reviewer_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(SentenceReviewResults, sentenceReviewResults_);
    };
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo &&) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo& operator=(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo& operator=(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hitId_ == nullptr
        && return this->reviewResult_ == nullptr && return this->reviewTime_ == nullptr && return this->reviewer_ == nullptr && return this->rid_ == nullptr && return this->sentenceReviewResults_ == nullptr; };
    // hitId Field Functions 
    bool hasHitId() const { return this->hitId_ != nullptr;};
    void deleteHitId() { this->hitId_ = nullptr;};
    inline string hitId() const { DARABONBA_PTR_GET_DEFAULT(hitId_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo& setHitId(string hitId) { DARABONBA_PTR_SET_VALUE(hitId_, hitId) };


    // reviewResult Field Functions 
    bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
    void deleteReviewResult() { this->reviewResult_ = nullptr;};
    inline int32_t reviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, 0) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo& setReviewResult(int32_t reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


    // reviewTime Field Functions 
    bool hasReviewTime() const { return this->reviewTime_ != nullptr;};
    void deleteReviewTime() { this->reviewTime_ = nullptr;};
    inline string reviewTime() const { DARABONBA_PTR_GET_DEFAULT(reviewTime_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo& setReviewTime(string reviewTime) { DARABONBA_PTR_SET_VALUE(reviewTime_, reviewTime) };


    // reviewer Field Functions 
    bool hasReviewer() const { return this->reviewer_ != nullptr;};
    void deleteReviewer() { this->reviewer_ = nullptr;};
    inline string reviewer() const { DARABONBA_PTR_GET_DEFAULT(reviewer_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo& setReviewer(string reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // sentenceReviewResults Field Functions 
    bool hasSentenceReviewResults() const { return this->sentenceReviewResults_ != nullptr;};
    void deleteSentenceReviewResults() { this->sentenceReviewResults_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults & sentenceReviewResults() const { DARABONBA_PTR_GET_CONST(sentenceReviewResults_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults) };
    inline Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults sentenceReviewResults() { DARABONBA_PTR_GET(sentenceReviewResults_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo& setSentenceReviewResults(const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults & sentenceReviewResults) { DARABONBA_PTR_SET_VALUE(sentenceReviewResults_, sentenceReviewResults) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo& setSentenceReviewResults(Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults && sentenceReviewResults) { DARABONBA_PTR_SET_RVALUE(sentenceReviewResults_, sentenceReviewResults) };


  protected:
    std::shared_ptr<string> hitId_ = nullptr;
    std::shared_ptr<int32_t> reviewResult_ = nullptr;
    std::shared_ptr<string> reviewTime_ = nullptr;
    std::shared_ptr<string> reviewer_ = nullptr;
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults> sentenceReviewResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
