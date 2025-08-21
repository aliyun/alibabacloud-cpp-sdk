// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYRESOURCEDETAILINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYRESOURCEDETAILINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDeviceServiceResponseBodyResourceDetailInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceServiceResponseBodyResourceDetailInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(ID, ID_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(ISP, ISP_);
      DARABONBA_PTR_TO_JSON(ImageID, imageID_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(RegionID, regionID_);
      DARABONBA_PTR_TO_JSON(Server, server_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceServiceResponseBodyResourceDetailInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(ID, ID_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(ISP, ISP_);
      DARABONBA_PTR_FROM_JSON(ImageID, imageID_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(RegionID, regionID_);
      DARABONBA_PTR_FROM_JSON(Server, server_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDeviceServiceResponseBodyResourceDetailInfos() = default ;
    DescribeDeviceServiceResponseBodyResourceDetailInfos(const DescribeDeviceServiceResponseBodyResourceDetailInfos &) = default ;
    DescribeDeviceServiceResponseBodyResourceDetailInfos(DescribeDeviceServiceResponseBodyResourceDetailInfos &&) = default ;
    DescribeDeviceServiceResponseBodyResourceDetailInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceServiceResponseBodyResourceDetailInfos() = default ;
    DescribeDeviceServiceResponseBodyResourceDetailInfos& operator=(const DescribeDeviceServiceResponseBodyResourceDetailInfos &) = default ;
    DescribeDeviceServiceResponseBodyResourceDetailInfos& operator=(DescribeDeviceServiceResponseBodyResourceDetailInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceName_ != nullptr
        && this->ID_ != nullptr && this->IP_ != nullptr && this->ISP_ != nullptr && this->imageID_ != nullptr && this->mac_ != nullptr
        && this->regionID_ != nullptr && this->server_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline DescribeDeviceServiceResponseBodyResourceDetailInfos& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // ID Field Functions 
    bool hasID() const { return this->ID_ != nullptr;};
    void deleteID() { this->ID_ = nullptr;};
    inline string ID() const { DARABONBA_PTR_GET_DEFAULT(ID_, "") };
    inline DescribeDeviceServiceResponseBodyResourceDetailInfos& setID(string ID) { DARABONBA_PTR_SET_VALUE(ID_, ID) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline DescribeDeviceServiceResponseBodyResourceDetailInfos& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // ISP Field Functions 
    bool hasISP() const { return this->ISP_ != nullptr;};
    void deleteISP() { this->ISP_ = nullptr;};
    inline string ISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
    inline DescribeDeviceServiceResponseBodyResourceDetailInfos& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


    // imageID Field Functions 
    bool hasImageID() const { return this->imageID_ != nullptr;};
    void deleteImageID() { this->imageID_ = nullptr;};
    inline string imageID() const { DARABONBA_PTR_GET_DEFAULT(imageID_, "") };
    inline DescribeDeviceServiceResponseBodyResourceDetailInfos& setImageID(string imageID) { DARABONBA_PTR_SET_VALUE(imageID_, imageID) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline DescribeDeviceServiceResponseBodyResourceDetailInfos& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // regionID Field Functions 
    bool hasRegionID() const { return this->regionID_ != nullptr;};
    void deleteRegionID() { this->regionID_ = nullptr;};
    inline string regionID() const { DARABONBA_PTR_GET_DEFAULT(regionID_, "") };
    inline DescribeDeviceServiceResponseBodyResourceDetailInfos& setRegionID(string regionID) { DARABONBA_PTR_SET_VALUE(regionID_, regionID) };


    // server Field Functions 
    bool hasServer() const { return this->server_ != nullptr;};
    void deleteServer() { this->server_ = nullptr;};
    inline string server() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
    inline DescribeDeviceServiceResponseBodyResourceDetailInfos& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDeviceServiceResponseBodyResourceDetailInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDeviceServiceResponseBodyResourceDetailInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the device.
    std::shared_ptr<string> deviceName_ = nullptr;
    // The ID of the cloud device.
    std::shared_ptr<string> ID_ = nullptr;
    // The IP address.
    std::shared_ptr<string> IP_ = nullptr;
    // The Internet service provider (ISP).
    std::shared_ptr<string> ISP_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageID_ = nullptr;
    // The media access control (MAC) address of the device.
    std::shared_ptr<string> mac_ = nullptr;
    // The ID of the ENS node.
    std::shared_ptr<string> regionID_ = nullptr;
    // The server name of the ENS node.
    std::shared_ptr<string> server_ = nullptr;
    // The status of the device.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the device.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
