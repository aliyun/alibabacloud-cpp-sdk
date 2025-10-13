// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFYROUTES_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFYROUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NotifyStrategyForModifyRoutesChannels.hpp>
#include <alibabacloud/models/NotifyStrategyForModifyRoutesEffectTimeRange.hpp>
#include <alibabacloud/models/FilterSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyStrategyForModifyRoutes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyStrategyForModifyRoutes& obj) { 
      DARABONBA_PTR_TO_JSON(channels, channels_);
      DARABONBA_PTR_TO_JSON(effectTimeRange, effectTimeRange_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(severities, severities_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForModifyRoutes& obj) { 
      DARABONBA_PTR_FROM_JSON(channels, channels_);
      DARABONBA_PTR_FROM_JSON(effectTimeRange, effectTimeRange_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(severities, severities_);
    };
    NotifyStrategyForModifyRoutes() = default ;
    NotifyStrategyForModifyRoutes(const NotifyStrategyForModifyRoutes &) = default ;
    NotifyStrategyForModifyRoutes(NotifyStrategyForModifyRoutes &&) = default ;
    NotifyStrategyForModifyRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyStrategyForModifyRoutes() = default ;
    NotifyStrategyForModifyRoutes& operator=(const NotifyStrategyForModifyRoutes &) = default ;
    NotifyStrategyForModifyRoutes& operator=(NotifyStrategyForModifyRoutes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channels_ == nullptr
        && return this->effectTimeRange_ == nullptr && return this->filterSetting_ == nullptr && return this->severities_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<Models::NotifyStrategyForModifyRoutesChannels> & channels() const { DARABONBA_PTR_GET_CONST(channels_, vector<Models::NotifyStrategyForModifyRoutesChannels>) };
    inline vector<Models::NotifyStrategyForModifyRoutesChannels> channels() { DARABONBA_PTR_GET(channels_, vector<Models::NotifyStrategyForModifyRoutesChannels>) };
    inline NotifyStrategyForModifyRoutes& setChannels(const vector<Models::NotifyStrategyForModifyRoutesChannels> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline NotifyStrategyForModifyRoutes& setChannels(vector<Models::NotifyStrategyForModifyRoutesChannels> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // effectTimeRange Field Functions 
    bool hasEffectTimeRange() const { return this->effectTimeRange_ != nullptr;};
    void deleteEffectTimeRange() { this->effectTimeRange_ = nullptr;};
    inline const Models::NotifyStrategyForModifyRoutesEffectTimeRange & effectTimeRange() const { DARABONBA_PTR_GET_CONST(effectTimeRange_, Models::NotifyStrategyForModifyRoutesEffectTimeRange) };
    inline Models::NotifyStrategyForModifyRoutesEffectTimeRange effectTimeRange() { DARABONBA_PTR_GET(effectTimeRange_, Models::NotifyStrategyForModifyRoutesEffectTimeRange) };
    inline NotifyStrategyForModifyRoutes& setEffectTimeRange(const Models::NotifyStrategyForModifyRoutesEffectTimeRange & effectTimeRange) { DARABONBA_PTR_SET_VALUE(effectTimeRange_, effectTimeRange) };
    inline NotifyStrategyForModifyRoutes& setEffectTimeRange(Models::NotifyStrategyForModifyRoutesEffectTimeRange && effectTimeRange) { DARABONBA_PTR_SET_RVALUE(effectTimeRange_, effectTimeRange) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const Models::FilterSetting & filterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, Models::FilterSetting) };
    inline Models::FilterSetting filterSetting() { DARABONBA_PTR_GET(filterSetting_, Models::FilterSetting) };
    inline NotifyStrategyForModifyRoutes& setFilterSetting(const Models::FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline NotifyStrategyForModifyRoutes& setFilterSetting(Models::FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // severities Field Functions 
    bool hasSeverities() const { return this->severities_ != nullptr;};
    void deleteSeverities() { this->severities_ = nullptr;};
    inline const vector<string> & severities() const { DARABONBA_PTR_GET_CONST(severities_, vector<string>) };
    inline vector<string> severities() { DARABONBA_PTR_GET(severities_, vector<string>) };
    inline NotifyStrategyForModifyRoutes& setSeverities(const vector<string> & severities) { DARABONBA_PTR_SET_VALUE(severities_, severities) };
    inline NotifyStrategyForModifyRoutes& setSeverities(vector<string> && severities) { DARABONBA_PTR_SET_RVALUE(severities_, severities) };


  protected:
    std::shared_ptr<vector<Models::NotifyStrategyForModifyRoutesChannels>> channels_ = nullptr;
    std::shared_ptr<Models::NotifyStrategyForModifyRoutesEffectTimeRange> effectTimeRange_ = nullptr;
    std::shared_ptr<Models::FilterSetting> filterSetting_ = nullptr;
    std::shared_ptr<vector<string>> severities_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
