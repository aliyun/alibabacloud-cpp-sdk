// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINERESPONSEBODYDATAALERTSETTINGSDINGROBOTS_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINERESPONSEBODYDATAALERTSETTINGSDINGROBOTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetBaselineResponseBodyDataAlertSettingsDingRobots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineResponseBodyDataAlertSettingsDingRobots& obj) { 
      DARABONBA_PTR_TO_JSON(AtAll, atAll_);
      DARABONBA_PTR_TO_JSON(WebUrl, webUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineResponseBodyDataAlertSettingsDingRobots& obj) { 
      DARABONBA_PTR_FROM_JSON(AtAll, atAll_);
      DARABONBA_PTR_FROM_JSON(WebUrl, webUrl_);
    };
    GetBaselineResponseBodyDataAlertSettingsDingRobots() = default ;
    GetBaselineResponseBodyDataAlertSettingsDingRobots(const GetBaselineResponseBodyDataAlertSettingsDingRobots &) = default ;
    GetBaselineResponseBodyDataAlertSettingsDingRobots(GetBaselineResponseBodyDataAlertSettingsDingRobots &&) = default ;
    GetBaselineResponseBodyDataAlertSettingsDingRobots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineResponseBodyDataAlertSettingsDingRobots() = default ;
    GetBaselineResponseBodyDataAlertSettingsDingRobots& operator=(const GetBaselineResponseBodyDataAlertSettingsDingRobots &) = default ;
    GetBaselineResponseBodyDataAlertSettingsDingRobots& operator=(GetBaselineResponseBodyDataAlertSettingsDingRobots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->atAll_ != nullptr
        && this->webUrl_ != nullptr; };
    // atAll Field Functions 
    bool hasAtAll() const { return this->atAll_ != nullptr;};
    void deleteAtAll() { this->atAll_ = nullptr;};
    inline bool atAll() const { DARABONBA_PTR_GET_DEFAULT(atAll_, false) };
    inline GetBaselineResponseBodyDataAlertSettingsDingRobots& setAtAll(bool atAll) { DARABONBA_PTR_SET_VALUE(atAll_, atAll) };


    // webUrl Field Functions 
    bool hasWebUrl() const { return this->webUrl_ != nullptr;};
    void deleteWebUrl() { this->webUrl_ = nullptr;};
    inline string webUrl() const { DARABONBA_PTR_GET_DEFAULT(webUrl_, "") };
    inline GetBaselineResponseBodyDataAlertSettingsDingRobots& setWebUrl(string webUrl) { DARABONBA_PTR_SET_VALUE(webUrl_, webUrl) };


  protected:
    // Whether @ everyone.
    std::shared_ptr<bool> atAll_ = nullptr;
    // DingTalk robot address
    std::shared_ptr<string> webUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
