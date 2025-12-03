// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCREENSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCREENSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class CreateScreenSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScreenSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LogoPower, logoPower_);
      DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_TO_JSON(MonitorUrl, monitorUrl_);
      DARABONBA_PTR_TO_JSON(ScreenDataMap, screenDataMap_);
      DARABONBA_PTR_TO_JSON(ScreenDefault, screenDefault_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScreenSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LogoPower, logoPower_);
      DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_FROM_JSON(MonitorUrl, monitorUrl_);
      DARABONBA_PTR_FROM_JSON(ScreenDataMap, screenDataMap_);
      DARABONBA_PTR_FROM_JSON(ScreenDefault, screenDefault_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateScreenSettingRequest() = default ;
    CreateScreenSettingRequest(const CreateScreenSettingRequest &) = default ;
    CreateScreenSettingRequest(CreateScreenSettingRequest &&) = default ;
    CreateScreenSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScreenSettingRequest() = default ;
    CreateScreenSettingRequest& operator=(const CreateScreenSettingRequest &) = default ;
    CreateScreenSettingRequest& operator=(CreateScreenSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->logoPower_ == nullptr && return this->logoUrl_ == nullptr && return this->monitorUrl_ == nullptr && return this->screenDataMap_ == nullptr && return this->screenDefault_ == nullptr
        && return this->title_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline CreateScreenSettingRequest& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // logoPower Field Functions 
    bool hasLogoPower() const { return this->logoPower_ != nullptr;};
    void deleteLogoPower() { this->logoPower_ = nullptr;};
    inline bool logoPower() const { DARABONBA_PTR_GET_DEFAULT(logoPower_, false) };
    inline CreateScreenSettingRequest& setLogoPower(bool logoPower) { DARABONBA_PTR_SET_VALUE(logoPower_, logoPower) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string logoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline CreateScreenSettingRequest& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // monitorUrl Field Functions 
    bool hasMonitorUrl() const { return this->monitorUrl_ != nullptr;};
    void deleteMonitorUrl() { this->monitorUrl_ = nullptr;};
    inline string monitorUrl() const { DARABONBA_PTR_GET_DEFAULT(monitorUrl_, "") };
    inline CreateScreenSettingRequest& setMonitorUrl(string monitorUrl) { DARABONBA_PTR_SET_VALUE(monitorUrl_, monitorUrl) };


    // screenDataMap Field Functions 
    bool hasScreenDataMap() const { return this->screenDataMap_ != nullptr;};
    void deleteScreenDataMap() { this->screenDataMap_ = nullptr;};
    inline string screenDataMap() const { DARABONBA_PTR_GET_DEFAULT(screenDataMap_, "") };
    inline CreateScreenSettingRequest& setScreenDataMap(string screenDataMap) { DARABONBA_PTR_SET_VALUE(screenDataMap_, screenDataMap) };


    // screenDefault Field Functions 
    bool hasScreenDefault() const { return this->screenDefault_ != nullptr;};
    void deleteScreenDefault() { this->screenDefault_ = nullptr;};
    inline int32_t screenDefault() const { DARABONBA_PTR_GET_DEFAULT(screenDefault_, 0) };
    inline CreateScreenSettingRequest& setScreenDefault(int32_t screenDefault) { DARABONBA_PTR_SET_VALUE(screenDefault_, screenDefault) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateScreenSettingRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<int32_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> logoPower_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> logoUrl_ = nullptr;
    std::shared_ptr<string> monitorUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> screenDataMap_ = nullptr;
    std::shared_ptr<int32_t> screenDefault_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
