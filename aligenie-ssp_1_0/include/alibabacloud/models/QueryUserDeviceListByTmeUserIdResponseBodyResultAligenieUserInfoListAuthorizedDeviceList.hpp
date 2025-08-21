// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERDEVICELISTBYTMEUSERIDRESPONSEBODYRESULTALIGENIEUSERINFOLISTAUTHORIZEDDEVICELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERDEVICELISTBYTMEUSERIDRESPONSEBODYRESULTALIGENIEUSERINFOLISTAUTHORIZEDDEVICELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(OpenDeviceId, openDeviceId_);
      DARABONBA_PTR_TO_JSON(TmeDeviceId, tmeDeviceId_);
      DARABONBA_PTR_TO_JSON(TmeProductId, tmeProductId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(OpenDeviceId, openDeviceId_);
      DARABONBA_PTR_FROM_JSON(TmeDeviceId, tmeDeviceId_);
      DARABONBA_PTR_FROM_JSON(TmeProductId, tmeProductId_);
    };
    QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList() = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList(const QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList &) = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList(QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList &&) = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList() = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList& operator=(const QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList &) = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList& operator=(QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceName_ != nullptr
        && this->online_ != nullptr && this->openDeviceId_ != nullptr && this->tmeDeviceId_ != nullptr && this->tmeProductId_ != nullptr; };
    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // openDeviceId Field Functions 
    bool hasOpenDeviceId() const { return this->openDeviceId_ != nullptr;};
    void deleteOpenDeviceId() { this->openDeviceId_ = nullptr;};
    inline string openDeviceId() const { DARABONBA_PTR_GET_DEFAULT(openDeviceId_, "") };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList& setOpenDeviceId(string openDeviceId) { DARABONBA_PTR_SET_VALUE(openDeviceId_, openDeviceId) };


    // tmeDeviceId Field Functions 
    bool hasTmeDeviceId() const { return this->tmeDeviceId_ != nullptr;};
    void deleteTmeDeviceId() { this->tmeDeviceId_ = nullptr;};
    inline string tmeDeviceId() const { DARABONBA_PTR_GET_DEFAULT(tmeDeviceId_, "") };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList& setTmeDeviceId(string tmeDeviceId) { DARABONBA_PTR_SET_VALUE(tmeDeviceId_, tmeDeviceId) };


    // tmeProductId Field Functions 
    bool hasTmeProductId() const { return this->tmeProductId_ != nullptr;};
    void deleteTmeProductId() { this->tmeProductId_ = nullptr;};
    inline string tmeProductId() const { DARABONBA_PTR_GET_DEFAULT(tmeProductId_, "") };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList& setTmeProductId(string tmeProductId) { DARABONBA_PTR_SET_VALUE(tmeProductId_, tmeProductId) };


  protected:
    std::shared_ptr<string> deviceName_ = nullptr;
    std::shared_ptr<bool> online_ = nullptr;
    std::shared_ptr<string> openDeviceId_ = nullptr;
    std::shared_ptr<string> tmeDeviceId_ = nullptr;
    std::shared_ptr<string> tmeProductId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
