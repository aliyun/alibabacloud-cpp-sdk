// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFOREVIEWINFOSENTENCEREVIEWRESULTSSENTENCEREVIEWRESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFOREVIEWINFOSENTENCEREVIEWRESULTSSENTENCEREVIEWRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& obj) { 
      DARABONBA_PTR_TO_JSON(Changed, changed_);
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(HitStatus, hitStatus_);
      DARABONBA_PTR_TO_JSON(OriginTaskId, originTaskId_);
      DARABONBA_PTR_TO_JSON(OriginVid, originVid_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(ReviewDimensionType, reviewDimensionType_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Changed, changed_);
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(HitStatus, hitStatus_);
      DARABONBA_PTR_FROM_JSON(OriginTaskId, originTaskId_);
      DARABONBA_PTR_FROM_JSON(OriginVid, originVid_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(ReviewDimensionType, reviewDimensionType_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
    };
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults &&) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& operator=(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& operator=(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changed_ == nullptr
        && return this->cid_ == nullptr && return this->comment_ == nullptr && return this->hitStatus_ == nullptr && return this->originTaskId_ == nullptr && return this->originVid_ == nullptr
        && return this->pid_ == nullptr && return this->reviewDimensionType_ == nullptr && return this->rid_ == nullptr && return this->sid_ == nullptr; };
    // changed Field Functions 
    bool hasChanged() const { return this->changed_ != nullptr;};
    void deleteChanged() { this->changed_ = nullptr;};
    inline bool changed() const { DARABONBA_PTR_GET_DEFAULT(changed_, false) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& setChanged(bool changed) { DARABONBA_PTR_SET_VALUE(changed_, changed) };


    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline int64_t cid() const { DARABONBA_PTR_GET_DEFAULT(cid_, 0L) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& setCid(int64_t cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // hitStatus Field Functions 
    bool hasHitStatus() const { return this->hitStatus_ != nullptr;};
    void deleteHitStatus() { this->hitStatus_ = nullptr;};
    inline int32_t hitStatus() const { DARABONBA_PTR_GET_DEFAULT(hitStatus_, 0) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& setHitStatus(int32_t hitStatus) { DARABONBA_PTR_SET_VALUE(hitStatus_, hitStatus) };


    // originTaskId Field Functions 
    bool hasOriginTaskId() const { return this->originTaskId_ != nullptr;};
    void deleteOriginTaskId() { this->originTaskId_ = nullptr;};
    inline string originTaskId() const { DARABONBA_PTR_GET_DEFAULT(originTaskId_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& setOriginTaskId(string originTaskId) { DARABONBA_PTR_SET_VALUE(originTaskId_, originTaskId) };


    // originVid Field Functions 
    bool hasOriginVid() const { return this->originVid_ != nullptr;};
    void deleteOriginVid() { this->originVid_ = nullptr;};
    inline string originVid() const { DARABONBA_PTR_GET_DEFAULT(originVid_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& setOriginVid(string originVid) { DARABONBA_PTR_SET_VALUE(originVid_, originVid) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // reviewDimensionType Field Functions 
    bool hasReviewDimensionType() const { return this->reviewDimensionType_ != nullptr;};
    void deleteReviewDimensionType() { this->reviewDimensionType_ = nullptr;};
    inline string reviewDimensionType() const { DARABONBA_PTR_GET_DEFAULT(reviewDimensionType_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& setReviewDimensionType(string reviewDimensionType) { DARABONBA_PTR_SET_VALUE(reviewDimensionType_, reviewDimensionType) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline int64_t sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, 0L) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults& setSid(int64_t sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


  protected:
    std::shared_ptr<bool> changed_ = nullptr;
    std::shared_ptr<int64_t> cid_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<int32_t> hitStatus_ = nullptr;
    std::shared_ptr<string> originTaskId_ = nullptr;
    std::shared_ptr<string> originVid_ = nullptr;
    std::shared_ptr<string> pid_ = nullptr;
    std::shared_ptr<string> reviewDimensionType_ = nullptr;
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<int64_t> sid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
