// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGENOTIFYCONFIGRESPONSEBODYOSSNOTIFYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGENOTIFYCONFIGRESPONSEBODYOSSNOTIFYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetStorageNotifyConfigResponseBodyOssNotifyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageNotifyConfigResponseBodyOssNotifyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EventList, eventList_);
      DARABONBA_PTR_TO_JSON(HttpProcessAddress, httpProcessAddress_);
      DARABONBA_PTR_TO_JSON(NotifyName, notifyName_);
      DARABONBA_PTR_TO_JSON(ResourcePrefixName, resourcePrefixName_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageNotifyConfigResponseBodyOssNotifyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EventList, eventList_);
      DARABONBA_PTR_FROM_JSON(HttpProcessAddress, httpProcessAddress_);
      DARABONBA_PTR_FROM_JSON(NotifyName, notifyName_);
      DARABONBA_PTR_FROM_JSON(ResourcePrefixName, resourcePrefixName_);
    };
    GetStorageNotifyConfigResponseBodyOssNotifyConfig() = default ;
    GetStorageNotifyConfigResponseBodyOssNotifyConfig(const GetStorageNotifyConfigResponseBodyOssNotifyConfig &) = default ;
    GetStorageNotifyConfigResponseBodyOssNotifyConfig(GetStorageNotifyConfigResponseBodyOssNotifyConfig &&) = default ;
    GetStorageNotifyConfigResponseBodyOssNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageNotifyConfigResponseBodyOssNotifyConfig() = default ;
    GetStorageNotifyConfigResponseBodyOssNotifyConfig& operator=(const GetStorageNotifyConfigResponseBodyOssNotifyConfig &) = default ;
    GetStorageNotifyConfigResponseBodyOssNotifyConfig& operator=(GetStorageNotifyConfigResponseBodyOssNotifyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventList_ != nullptr
        && this->httpProcessAddress_ != nullptr && this->notifyName_ != nullptr && this->resourcePrefixName_ != nullptr; };
    // eventList Field Functions 
    bool hasEventList() const { return this->eventList_ != nullptr;};
    void deleteEventList() { this->eventList_ = nullptr;};
    inline string eventList() const { DARABONBA_PTR_GET_DEFAULT(eventList_, "") };
    inline GetStorageNotifyConfigResponseBodyOssNotifyConfig& setEventList(string eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };


    // httpProcessAddress Field Functions 
    bool hasHttpProcessAddress() const { return this->httpProcessAddress_ != nullptr;};
    void deleteHttpProcessAddress() { this->httpProcessAddress_ = nullptr;};
    inline string httpProcessAddress() const { DARABONBA_PTR_GET_DEFAULT(httpProcessAddress_, "") };
    inline GetStorageNotifyConfigResponseBodyOssNotifyConfig& setHttpProcessAddress(string httpProcessAddress) { DARABONBA_PTR_SET_VALUE(httpProcessAddress_, httpProcessAddress) };


    // notifyName Field Functions 
    bool hasNotifyName() const { return this->notifyName_ != nullptr;};
    void deleteNotifyName() { this->notifyName_ = nullptr;};
    inline string notifyName() const { DARABONBA_PTR_GET_DEFAULT(notifyName_, "") };
    inline GetStorageNotifyConfigResponseBodyOssNotifyConfig& setNotifyName(string notifyName) { DARABONBA_PTR_SET_VALUE(notifyName_, notifyName) };


    // resourcePrefixName Field Functions 
    bool hasResourcePrefixName() const { return this->resourcePrefixName_ != nullptr;};
    void deleteResourcePrefixName() { this->resourcePrefixName_ = nullptr;};
    inline string resourcePrefixName() const { DARABONBA_PTR_GET_DEFAULT(resourcePrefixName_, "") };
    inline GetStorageNotifyConfigResponseBodyOssNotifyConfig& setResourcePrefixName(string resourcePrefixName) { DARABONBA_PTR_SET_VALUE(resourcePrefixName_, resourcePrefixName) };


  protected:
    std::shared_ptr<string> eventList_ = nullptr;
    std::shared_ptr<string> httpProcessAddress_ = nullptr;
    std::shared_ptr<string> notifyName_ = nullptr;
    std::shared_ptr<string> resourcePrefixName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
