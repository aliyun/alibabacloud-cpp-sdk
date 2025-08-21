// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBASICINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBASICINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDeviceBasicInfoRequestDeviceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceBasicInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceBasicInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfos, deviceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceBasicInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfos, deviceInfos_);
    };
    ListDeviceBasicInfoRequest() = default ;
    ListDeviceBasicInfoRequest(const ListDeviceBasicInfoRequest &) = default ;
    ListDeviceBasicInfoRequest(ListDeviceBasicInfoRequest &&) = default ;
    ListDeviceBasicInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceBasicInfoRequest() = default ;
    ListDeviceBasicInfoRequest& operator=(const ListDeviceBasicInfoRequest &) = default ;
    ListDeviceBasicInfoRequest& operator=(ListDeviceBasicInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfos_ != nullptr; };
    // deviceInfos Field Functions 
    bool hasDeviceInfos() const { return this->deviceInfos_ != nullptr;};
    void deleteDeviceInfos() { this->deviceInfos_ = nullptr;};
    inline const ListDeviceBasicInfoRequestDeviceInfos & deviceInfos() const { DARABONBA_PTR_GET_CONST(deviceInfos_, ListDeviceBasicInfoRequestDeviceInfos) };
    inline ListDeviceBasicInfoRequestDeviceInfos deviceInfos() { DARABONBA_PTR_GET(deviceInfos_, ListDeviceBasicInfoRequestDeviceInfos) };
    inline ListDeviceBasicInfoRequest& setDeviceInfos(const ListDeviceBasicInfoRequestDeviceInfos & deviceInfos) { DARABONBA_PTR_SET_VALUE(deviceInfos_, deviceInfos) };
    inline ListDeviceBasicInfoRequest& setDeviceInfos(ListDeviceBasicInfoRequestDeviceInfos && deviceInfos) { DARABONBA_PTR_SET_RVALUE(deviceInfos_, deviceInfos) };


  protected:
    std::shared_ptr<ListDeviceBasicInfoRequestDeviceInfos> deviceInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
