// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFYGROUPINGSETTING_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFYGROUPINGSETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyStrategyForModifyGroupingSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyStrategyForModifyGroupingSetting& obj) { 
      DARABONBA_PTR_TO_JSON(groupingKeys, groupingKeys_);
      DARABONBA_PTR_TO_JSON(periodMin, periodMin_);
      DARABONBA_PTR_TO_JSON(silenceSec, silenceSec_);
      DARABONBA_PTR_TO_JSON(times, times_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForModifyGroupingSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(groupingKeys, groupingKeys_);
      DARABONBA_PTR_FROM_JSON(periodMin, periodMin_);
      DARABONBA_PTR_FROM_JSON(silenceSec, silenceSec_);
      DARABONBA_PTR_FROM_JSON(times, times_);
    };
    NotifyStrategyForModifyGroupingSetting() = default ;
    NotifyStrategyForModifyGroupingSetting(const NotifyStrategyForModifyGroupingSetting &) = default ;
    NotifyStrategyForModifyGroupingSetting(NotifyStrategyForModifyGroupingSetting &&) = default ;
    NotifyStrategyForModifyGroupingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyStrategyForModifyGroupingSetting() = default ;
    NotifyStrategyForModifyGroupingSetting& operator=(const NotifyStrategyForModifyGroupingSetting &) = default ;
    NotifyStrategyForModifyGroupingSetting& operator=(NotifyStrategyForModifyGroupingSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupingKeys_ == nullptr
        && return this->periodMin_ == nullptr && return this->silenceSec_ == nullptr && return this->times_ == nullptr; };
    // groupingKeys Field Functions 
    bool hasGroupingKeys() const { return this->groupingKeys_ != nullptr;};
    void deleteGroupingKeys() { this->groupingKeys_ = nullptr;};
    inline const vector<string> & groupingKeys() const { DARABONBA_PTR_GET_CONST(groupingKeys_, vector<string>) };
    inline vector<string> groupingKeys() { DARABONBA_PTR_GET(groupingKeys_, vector<string>) };
    inline NotifyStrategyForModifyGroupingSetting& setGroupingKeys(const vector<string> & groupingKeys) { DARABONBA_PTR_SET_VALUE(groupingKeys_, groupingKeys) };
    inline NotifyStrategyForModifyGroupingSetting& setGroupingKeys(vector<string> && groupingKeys) { DARABONBA_PTR_SET_RVALUE(groupingKeys_, groupingKeys) };


    // periodMin Field Functions 
    bool hasPeriodMin() const { return this->periodMin_ != nullptr;};
    void deletePeriodMin() { this->periodMin_ = nullptr;};
    inline int32_t periodMin() const { DARABONBA_PTR_GET_DEFAULT(periodMin_, 0) };
    inline NotifyStrategyForModifyGroupingSetting& setPeriodMin(int32_t periodMin) { DARABONBA_PTR_SET_VALUE(periodMin_, periodMin) };


    // silenceSec Field Functions 
    bool hasSilenceSec() const { return this->silenceSec_ != nullptr;};
    void deleteSilenceSec() { this->silenceSec_ = nullptr;};
    inline int32_t silenceSec() const { DARABONBA_PTR_GET_DEFAULT(silenceSec_, 0) };
    inline NotifyStrategyForModifyGroupingSetting& setSilenceSec(int32_t silenceSec) { DARABONBA_PTR_SET_VALUE(silenceSec_, silenceSec) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline NotifyStrategyForModifyGroupingSetting& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    std::shared_ptr<vector<string>> groupingKeys_ = nullptr;
    std::shared_ptr<int32_t> periodMin_ = nullptr;
    std::shared_ptr<int32_t> silenceSec_ = nullptr;
    std::shared_ptr<int32_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
