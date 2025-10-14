// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYCOMPLETESTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYCOMPLETESTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyCompleteStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyCompleteStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(abnormalQuitSessionExpired, abnormalQuitSessionExpired_);
      DARABONBA_PTR_TO_JSON(abnormalQuitSessionExpiredFlag, abnormalQuitSessionExpiredFlag_);
      DARABONBA_PTR_TO_JSON(clickCompleteAutoEnd, clickCompleteAutoEnd_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(durationFlag, durationFlag_);
      DARABONBA_PTR_TO_JSON(fullCoverageAutoEnd, fullCoverageAutoEnd_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyCompleteStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(abnormalQuitSessionExpired, abnormalQuitSessionExpired_);
      DARABONBA_PTR_FROM_JSON(abnormalQuitSessionExpiredFlag, abnormalQuitSessionExpiredFlag_);
      DARABONBA_PTR_FROM_JSON(clickCompleteAutoEnd, clickCompleteAutoEnd_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(durationFlag, durationFlag_);
      DARABONBA_PTR_FROM_JSON(fullCoverageAutoEnd, fullCoverageAutoEnd_);
    };
    GetAICoachScriptResponseBodyCompleteStrategy() = default ;
    GetAICoachScriptResponseBodyCompleteStrategy(const GetAICoachScriptResponseBodyCompleteStrategy &) = default ;
    GetAICoachScriptResponseBodyCompleteStrategy(GetAICoachScriptResponseBodyCompleteStrategy &&) = default ;
    GetAICoachScriptResponseBodyCompleteStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyCompleteStrategy() = default ;
    GetAICoachScriptResponseBodyCompleteStrategy& operator=(const GetAICoachScriptResponseBodyCompleteStrategy &) = default ;
    GetAICoachScriptResponseBodyCompleteStrategy& operator=(GetAICoachScriptResponseBodyCompleteStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalQuitSessionExpired_ == nullptr
        && return this->abnormalQuitSessionExpiredFlag_ == nullptr && return this->clickCompleteAutoEnd_ == nullptr && return this->duration_ == nullptr && return this->durationFlag_ == nullptr && return this->fullCoverageAutoEnd_ == nullptr; };
    // abnormalQuitSessionExpired Field Functions 
    bool hasAbnormalQuitSessionExpired() const { return this->abnormalQuitSessionExpired_ != nullptr;};
    void deleteAbnormalQuitSessionExpired() { this->abnormalQuitSessionExpired_ = nullptr;};
    inline int32_t abnormalQuitSessionExpired() const { DARABONBA_PTR_GET_DEFAULT(abnormalQuitSessionExpired_, 0) };
    inline GetAICoachScriptResponseBodyCompleteStrategy& setAbnormalQuitSessionExpired(int32_t abnormalQuitSessionExpired) { DARABONBA_PTR_SET_VALUE(abnormalQuitSessionExpired_, abnormalQuitSessionExpired) };


    // abnormalQuitSessionExpiredFlag Field Functions 
    bool hasAbnormalQuitSessionExpiredFlag() const { return this->abnormalQuitSessionExpiredFlag_ != nullptr;};
    void deleteAbnormalQuitSessionExpiredFlag() { this->abnormalQuitSessionExpiredFlag_ = nullptr;};
    inline bool abnormalQuitSessionExpiredFlag() const { DARABONBA_PTR_GET_DEFAULT(abnormalQuitSessionExpiredFlag_, false) };
    inline GetAICoachScriptResponseBodyCompleteStrategy& setAbnormalQuitSessionExpiredFlag(bool abnormalQuitSessionExpiredFlag) { DARABONBA_PTR_SET_VALUE(abnormalQuitSessionExpiredFlag_, abnormalQuitSessionExpiredFlag) };


    // clickCompleteAutoEnd Field Functions 
    bool hasClickCompleteAutoEnd() const { return this->clickCompleteAutoEnd_ != nullptr;};
    void deleteClickCompleteAutoEnd() { this->clickCompleteAutoEnd_ = nullptr;};
    inline bool clickCompleteAutoEnd() const { DARABONBA_PTR_GET_DEFAULT(clickCompleteAutoEnd_, false) };
    inline GetAICoachScriptResponseBodyCompleteStrategy& setClickCompleteAutoEnd(bool clickCompleteAutoEnd) { DARABONBA_PTR_SET_VALUE(clickCompleteAutoEnd_, clickCompleteAutoEnd) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline GetAICoachScriptResponseBodyCompleteStrategy& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // durationFlag Field Functions 
    bool hasDurationFlag() const { return this->durationFlag_ != nullptr;};
    void deleteDurationFlag() { this->durationFlag_ = nullptr;};
    inline bool durationFlag() const { DARABONBA_PTR_GET_DEFAULT(durationFlag_, false) };
    inline GetAICoachScriptResponseBodyCompleteStrategy& setDurationFlag(bool durationFlag) { DARABONBA_PTR_SET_VALUE(durationFlag_, durationFlag) };


    // fullCoverageAutoEnd Field Functions 
    bool hasFullCoverageAutoEnd() const { return this->fullCoverageAutoEnd_ != nullptr;};
    void deleteFullCoverageAutoEnd() { this->fullCoverageAutoEnd_ = nullptr;};
    inline bool fullCoverageAutoEnd() const { DARABONBA_PTR_GET_DEFAULT(fullCoverageAutoEnd_, false) };
    inline GetAICoachScriptResponseBodyCompleteStrategy& setFullCoverageAutoEnd(bool fullCoverageAutoEnd) { DARABONBA_PTR_SET_VALUE(fullCoverageAutoEnd_, fullCoverageAutoEnd) };


  protected:
    std::shared_ptr<int32_t> abnormalQuitSessionExpired_ = nullptr;
    std::shared_ptr<bool> abnormalQuitSessionExpiredFlag_ = nullptr;
    std::shared_ptr<bool> clickCompleteAutoEnd_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<bool> durationFlag_ = nullptr;
    std::shared_ptr<bool> fullCoverageAutoEnd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
