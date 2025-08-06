// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetClientConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Brand, brand_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(OsName, osName_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Brand, brand_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(OsName, osName_);
    };
    GetClientConfigRequest() = default ;
    GetClientConfigRequest(const GetClientConfigRequest &) = default ;
    GetClientConfigRequest(GetClientConfigRequest &&) = default ;
    GetClientConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientConfigRequest() = default ;
    GetClientConfigRequest& operator=(const GetClientConfigRequest &) = default ;
    GetClientConfigRequest& operator=(GetClientConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->brand_ != nullptr
        && this->deviceName_ != nullptr && this->osName_ != nullptr; };
    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline string brand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
    inline GetClientConfigRequest& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline GetClientConfigRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string osName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline GetClientConfigRequest& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


  protected:
    std::shared_ptr<string> brand_ = nullptr;
    std::shared_ptr<string> deviceName_ = nullptr;
    std::shared_ptr<string> osName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
