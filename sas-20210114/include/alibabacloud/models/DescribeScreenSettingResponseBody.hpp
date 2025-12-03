// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogoPower, logoPower_);
      DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_TO_JSON(MonitorUrl, monitorUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScreenDataMap, screenDataMap_);
      DARABONBA_PTR_TO_JSON(ScreenDefault, screenDefault_);
      DARABONBA_PTR_TO_JSON(ScreenId, screenId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogoPower, logoPower_);
      DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_FROM_JSON(MonitorUrl, monitorUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScreenDataMap, screenDataMap_);
      DARABONBA_PTR_FROM_JSON(ScreenDefault, screenDefault_);
      DARABONBA_PTR_FROM_JSON(ScreenId, screenId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeScreenSettingResponseBody() = default ;
    DescribeScreenSettingResponseBody(const DescribeScreenSettingResponseBody &) = default ;
    DescribeScreenSettingResponseBody(DescribeScreenSettingResponseBody &&) = default ;
    DescribeScreenSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenSettingResponseBody() = default ;
    DescribeScreenSettingResponseBody& operator=(const DescribeScreenSettingResponseBody &) = default ;
    DescribeScreenSettingResponseBody& operator=(DescribeScreenSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logoPower_ == nullptr
        && return this->logoUrl_ == nullptr && return this->monitorUrl_ == nullptr && return this->requestId_ == nullptr && return this->screenDataMap_ == nullptr && return this->screenDefault_ == nullptr
        && return this->screenId_ == nullptr && return this->title_ == nullptr; };
    // logoPower Field Functions 
    bool hasLogoPower() const { return this->logoPower_ != nullptr;};
    void deleteLogoPower() { this->logoPower_ = nullptr;};
    inline bool logoPower() const { DARABONBA_PTR_GET_DEFAULT(logoPower_, false) };
    inline DescribeScreenSettingResponseBody& setLogoPower(bool logoPower) { DARABONBA_PTR_SET_VALUE(logoPower_, logoPower) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string logoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline DescribeScreenSettingResponseBody& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // monitorUrl Field Functions 
    bool hasMonitorUrl() const { return this->monitorUrl_ != nullptr;};
    void deleteMonitorUrl() { this->monitorUrl_ = nullptr;};
    inline string monitorUrl() const { DARABONBA_PTR_GET_DEFAULT(monitorUrl_, "") };
    inline DescribeScreenSettingResponseBody& setMonitorUrl(string monitorUrl) { DARABONBA_PTR_SET_VALUE(monitorUrl_, monitorUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScreenSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // screenDataMap Field Functions 
    bool hasScreenDataMap() const { return this->screenDataMap_ != nullptr;};
    void deleteScreenDataMap() { this->screenDataMap_ = nullptr;};
    inline string screenDataMap() const { DARABONBA_PTR_GET_DEFAULT(screenDataMap_, "") };
    inline DescribeScreenSettingResponseBody& setScreenDataMap(string screenDataMap) { DARABONBA_PTR_SET_VALUE(screenDataMap_, screenDataMap) };


    // screenDefault Field Functions 
    bool hasScreenDefault() const { return this->screenDefault_ != nullptr;};
    void deleteScreenDefault() { this->screenDefault_ = nullptr;};
    inline int32_t screenDefault() const { DARABONBA_PTR_GET_DEFAULT(screenDefault_, 0) };
    inline DescribeScreenSettingResponseBody& setScreenDefault(int32_t screenDefault) { DARABONBA_PTR_SET_VALUE(screenDefault_, screenDefault) };


    // screenId Field Functions 
    bool hasScreenId() const { return this->screenId_ != nullptr;};
    void deleteScreenId() { this->screenId_ = nullptr;};
    inline int32_t screenId() const { DARABONBA_PTR_GET_DEFAULT(screenId_, 0) };
    inline DescribeScreenSettingResponseBody& setScreenId(int32_t screenId) { DARABONBA_PTR_SET_VALUE(screenId_, screenId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeScreenSettingResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<bool> logoPower_ = nullptr;
    std::shared_ptr<string> logoUrl_ = nullptr;
    std::shared_ptr<string> monitorUrl_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> screenDataMap_ = nullptr;
    std::shared_ptr<int32_t> screenDefault_ = nullptr;
    std::shared_ptr<int32_t> screenId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
