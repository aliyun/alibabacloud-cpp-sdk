// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECLOUDMONITORCONFIGRESPONSEBODYMESSAGECLOUDMONITORCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECLOUDMONITORCONFIGRESPONSEBODYMESSAGECLOUDMONITORCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
    };
    GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig() = default ;
    GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig(const GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig &) = default ;
    GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig(GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig &&) = default ;
    GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig() = default ;
    GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig& operator=(const GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig &) = default ;
    GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig& operator=(GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->eventTypeList_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // eventTypeList Field Functions 
    bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
    void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
    inline string eventTypeList() const { DARABONBA_PTR_GET_DEFAULT(eventTypeList_, "") };
    inline GetMessageCloudMonitorConfigResponseBodyMessageCloudMonitorConfig& setEventTypeList(string eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> eventTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
