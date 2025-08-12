// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYFILTERSETTING_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYFILTERSETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NotificationStrategyFilterSettingBlackList.hpp>
#include <alibabacloud/models/NotificationStrategyFilterSettingWhiteList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class NotificationStrategyFilterSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationStrategyFilterSetting& obj) { 
      DARABONBA_PTR_TO_JSON(BlackList, blackList_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationStrategyFilterSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackList, blackList_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    NotificationStrategyFilterSetting() = default ;
    NotificationStrategyFilterSetting(const NotificationStrategyFilterSetting &) = default ;
    NotificationStrategyFilterSetting(NotificationStrategyFilterSetting &&) = default ;
    NotificationStrategyFilterSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationStrategyFilterSetting() = default ;
    NotificationStrategyFilterSetting& operator=(const NotificationStrategyFilterSetting &) = default ;
    NotificationStrategyFilterSetting& operator=(NotificationStrategyFilterSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blackList_ != nullptr
        && this->whiteList_ != nullptr; };
    // blackList Field Functions 
    bool hasBlackList() const { return this->blackList_ != nullptr;};
    void deleteBlackList() { this->blackList_ = nullptr;};
    inline const vector<vector<Models::NotificationStrategyFilterSettingBlackList>> & blackList() const { DARABONBA_PTR_GET_CONST(blackList_, vector<vector<Models::NotificationStrategyFilterSettingBlackList>>) };
    inline vector<vector<Models::NotificationStrategyFilterSettingBlackList>> blackList() { DARABONBA_PTR_GET(blackList_, vector<vector<Models::NotificationStrategyFilterSettingBlackList>>) };
    inline NotificationStrategyFilterSetting& setBlackList(const vector<vector<Models::NotificationStrategyFilterSettingBlackList>> & blackList) { DARABONBA_PTR_SET_VALUE(blackList_, blackList) };
    inline NotificationStrategyFilterSetting& setBlackList(vector<vector<Models::NotificationStrategyFilterSettingBlackList>> && blackList) { DARABONBA_PTR_SET_RVALUE(blackList_, blackList) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<vector<Models::NotificationStrategyFilterSettingWhiteList>> & whiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<vector<Models::NotificationStrategyFilterSettingWhiteList>>) };
    inline vector<vector<Models::NotificationStrategyFilterSettingWhiteList>> whiteList() { DARABONBA_PTR_GET(whiteList_, vector<vector<Models::NotificationStrategyFilterSettingWhiteList>>) };
    inline NotificationStrategyFilterSetting& setWhiteList(const vector<vector<Models::NotificationStrategyFilterSettingWhiteList>> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline NotificationStrategyFilterSetting& setWhiteList(vector<vector<Models::NotificationStrategyFilterSettingWhiteList>> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


  protected:
    std::shared_ptr<vector<vector<Models::NotificationStrategyFilterSettingBlackList>>> blackList_ = nullptr;
    std::shared_ptr<vector<vector<Models::NotificationStrategyFilterSettingWhiteList>>> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
