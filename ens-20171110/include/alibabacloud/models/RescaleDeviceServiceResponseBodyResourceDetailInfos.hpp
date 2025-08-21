// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESCALEDEVICESERVICERESPONSEBODYRESOURCEDETAILINFOS_HPP_
#define ALIBABACLOUD_MODELS_RESCALEDEVICESERVICERESPONSEBODYRESOURCEDETAILINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RescaleDeviceServiceResponseBodyResourceDetailInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RescaleDeviceServiceResponseBodyResourceDetailInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ID, ID_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(ISP, ISP_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(RegionID, regionID_);
      DARABONBA_PTR_TO_JSON(Server, server_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RescaleDeviceServiceResponseBodyResourceDetailInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ID, ID_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(ISP, ISP_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(RegionID, regionID_);
      DARABONBA_PTR_FROM_JSON(Server, server_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    RescaleDeviceServiceResponseBodyResourceDetailInfos() = default ;
    RescaleDeviceServiceResponseBodyResourceDetailInfos(const RescaleDeviceServiceResponseBodyResourceDetailInfos &) = default ;
    RescaleDeviceServiceResponseBodyResourceDetailInfos(RescaleDeviceServiceResponseBodyResourceDetailInfos &&) = default ;
    RescaleDeviceServiceResponseBodyResourceDetailInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RescaleDeviceServiceResponseBodyResourceDetailInfos() = default ;
    RescaleDeviceServiceResponseBodyResourceDetailInfos& operator=(const RescaleDeviceServiceResponseBodyResourceDetailInfos &) = default ;
    RescaleDeviceServiceResponseBodyResourceDetailInfos& operator=(RescaleDeviceServiceResponseBodyResourceDetailInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ID_ != nullptr
        && this->IP_ != nullptr && this->ISP_ != nullptr && this->mac_ != nullptr && this->regionID_ != nullptr && this->server_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr; };
    // ID Field Functions 
    bool hasID() const { return this->ID_ != nullptr;};
    void deleteID() { this->ID_ = nullptr;};
    inline string ID() const { DARABONBA_PTR_GET_DEFAULT(ID_, "") };
    inline RescaleDeviceServiceResponseBodyResourceDetailInfos& setID(string ID) { DARABONBA_PTR_SET_VALUE(ID_, ID) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline RescaleDeviceServiceResponseBodyResourceDetailInfos& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // ISP Field Functions 
    bool hasISP() const { return this->ISP_ != nullptr;};
    void deleteISP() { this->ISP_ = nullptr;};
    inline string ISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
    inline RescaleDeviceServiceResponseBodyResourceDetailInfos& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline RescaleDeviceServiceResponseBodyResourceDetailInfos& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // regionID Field Functions 
    bool hasRegionID() const { return this->regionID_ != nullptr;};
    void deleteRegionID() { this->regionID_ = nullptr;};
    inline string regionID() const { DARABONBA_PTR_GET_DEFAULT(regionID_, "") };
    inline RescaleDeviceServiceResponseBodyResourceDetailInfos& setRegionID(string regionID) { DARABONBA_PTR_SET_VALUE(regionID_, regionID) };


    // server Field Functions 
    bool hasServer() const { return this->server_ != nullptr;};
    void deleteServer() { this->server_ = nullptr;};
    inline string server() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
    inline RescaleDeviceServiceResponseBodyResourceDetailInfos& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RescaleDeviceServiceResponseBodyResourceDetailInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RescaleDeviceServiceResponseBodyResourceDetailInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the device.
    std::shared_ptr<string> ID_ = nullptr;
    // The IP address of the device.
    std::shared_ptr<string> IP_ = nullptr;
    // The Internet service provider (ISP) to which the device belongs.
    std::shared_ptr<string> ISP_ = nullptr;
    // The media access control (MAC) address of the device.
    std::shared_ptr<string> mac_ = nullptr;
    // The ID of the edge node to which the device belongs.
    std::shared_ptr<string> regionID_ = nullptr;
    // The name of the server on which the device is deployed.
    std::shared_ptr<string> server_ = nullptr;
    // The status of the device.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the instance.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
