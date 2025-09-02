// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBASELINEREQUESTALERTSETTINGSDINGROBOTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBASELINEREQUESTALERTSETTINGSDINGROBOTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateBaselineRequestAlertSettingsDingRobots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBaselineRequestAlertSettingsDingRobots& obj) { 
      DARABONBA_PTR_TO_JSON(AtAll, atAll_);
      DARABONBA_PTR_TO_JSON(WebUrl, webUrl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBaselineRequestAlertSettingsDingRobots& obj) { 
      DARABONBA_PTR_FROM_JSON(AtAll, atAll_);
      DARABONBA_PTR_FROM_JSON(WebUrl, webUrl_);
    };
    UpdateBaselineRequestAlertSettingsDingRobots() = default ;
    UpdateBaselineRequestAlertSettingsDingRobots(const UpdateBaselineRequestAlertSettingsDingRobots &) = default ;
    UpdateBaselineRequestAlertSettingsDingRobots(UpdateBaselineRequestAlertSettingsDingRobots &&) = default ;
    UpdateBaselineRequestAlertSettingsDingRobots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBaselineRequestAlertSettingsDingRobots() = default ;
    UpdateBaselineRequestAlertSettingsDingRobots& operator=(const UpdateBaselineRequestAlertSettingsDingRobots &) = default ;
    UpdateBaselineRequestAlertSettingsDingRobots& operator=(UpdateBaselineRequestAlertSettingsDingRobots &&) = default ;
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
    inline UpdateBaselineRequestAlertSettingsDingRobots& setAtAll(bool atAll) { DARABONBA_PTR_SET_VALUE(atAll_, atAll) };


    // webUrl Field Functions 
    bool hasWebUrl() const { return this->webUrl_ != nullptr;};
    void deleteWebUrl() { this->webUrl_ = nullptr;};
    inline string webUrl() const { DARABONBA_PTR_GET_DEFAULT(webUrl_, "") };
    inline UpdateBaselineRequestAlertSettingsDingRobots& setWebUrl(string webUrl) { DARABONBA_PTR_SET_VALUE(webUrl_, webUrl) };


  protected:
    // Specifies whether to remind all members by using the at sign (@). Valid values: true and false.
    std::shared_ptr<bool> atAll_ = nullptr;
    // The webhook URL of the DingTalk chatbot.
    std::shared_ptr<string> webUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
