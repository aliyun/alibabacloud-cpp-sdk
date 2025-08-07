// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWARNINGSTRATEGYCONFIGRESPONSEBODYDATAWARNINGSTRATEGYLISTWARNINGSTRATEGYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETWARNINGSTRATEGYCONFIGRESPONSEBODYDATAWARNINGSTRATEGYLISTWARNINGSTRATEGYLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(DurationExpression, durationExpression_);
      DARABONBA_PTR_TO_JSON(HitNumber, hitNumber_);
      DARABONBA_PTR_TO_JSON(HitNumberExpression, hitNumberExpression_);
      DARABONBA_PTR_TO_JSON(HitRuleList, hitRuleList_);
      DARABONBA_PTR_TO_JSON(HitType, hitType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(DurationExpression, durationExpression_);
      DARABONBA_PTR_FROM_JSON(HitNumber, hitNumber_);
      DARABONBA_PTR_FROM_JSON(HitNumberExpression, hitNumberExpression_);
      DARABONBA_PTR_FROM_JSON(HitRuleList, hitRuleList_);
      DARABONBA_PTR_FROM_JSON(HitType, hitType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList() = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList(const GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList &) = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList(GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList &&) = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList() = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& operator=(const GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList &) = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& operator=(GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->duration_ != nullptr && this->durationExpression_ != nullptr && this->hitNumber_ != nullptr && this->hitNumberExpression_ != nullptr && this->hitRuleList_ != nullptr
        && this->hitType_ != nullptr && this->id_ != nullptr && this->range_ != nullptr && this->status_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // durationExpression Field Functions 
    bool hasDurationExpression() const { return this->durationExpression_ != nullptr;};
    void deleteDurationExpression() { this->durationExpression_ = nullptr;};
    inline int64_t durationExpression() const { DARABONBA_PTR_GET_DEFAULT(durationExpression_, 0L) };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& setDurationExpression(int64_t durationExpression) { DARABONBA_PTR_SET_VALUE(durationExpression_, durationExpression) };


    // hitNumber Field Functions 
    bool hasHitNumber() const { return this->hitNumber_ != nullptr;};
    void deleteHitNumber() { this->hitNumber_ = nullptr;};
    inline int64_t hitNumber() const { DARABONBA_PTR_GET_DEFAULT(hitNumber_, 0L) };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& setHitNumber(int64_t hitNumber) { DARABONBA_PTR_SET_VALUE(hitNumber_, hitNumber) };


    // hitNumberExpression Field Functions 
    bool hasHitNumberExpression() const { return this->hitNumberExpression_ != nullptr;};
    void deleteHitNumberExpression() { this->hitNumberExpression_ = nullptr;};
    inline int64_t hitNumberExpression() const { DARABONBA_PTR_GET_DEFAULT(hitNumberExpression_, 0L) };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& setHitNumberExpression(int64_t hitNumberExpression) { DARABONBA_PTR_SET_VALUE(hitNumberExpression_, hitNumberExpression) };


    // hitRuleList Field Functions 
    bool hasHitRuleList() const { return this->hitRuleList_ != nullptr;};
    void deleteHitRuleList() { this->hitRuleList_ = nullptr;};
    inline string hitRuleList() const { DARABONBA_PTR_GET_DEFAULT(hitRuleList_, "") };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& setHitRuleList(string hitRuleList) { DARABONBA_PTR_SET_VALUE(hitRuleList_, hitRuleList) };


    // hitType Field Functions 
    bool hasHitType() const { return this->hitType_ != nullptr;};
    void deleteHitType() { this->hitType_ = nullptr;};
    inline int64_t hitType() const { DARABONBA_PTR_GET_DEFAULT(hitType_, 0L) };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& setHitType(int64_t hitType) { DARABONBA_PTR_SET_VALUE(hitType_, hitType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange & range() const { DARABONBA_PTR_GET_CONST(range_, Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange) };
    inline Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange range() { DARABONBA_PTR_GET(range_, Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange) };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& setRange(const Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& setRange(Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<int64_t> durationExpression_ = nullptr;
    std::shared_ptr<int64_t> hitNumber_ = nullptr;
    std::shared_ptr<int64_t> hitNumberExpression_ = nullptr;
    std::shared_ptr<string> hitRuleList_ = nullptr;
    std::shared_ptr<int64_t> hitType_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange> range_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
