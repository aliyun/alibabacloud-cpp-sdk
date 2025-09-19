// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIDCPROBERESPONSEBODYADDIDCPROBEFAILEDLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDIDCPROBERESPONSEBODYADDIDCPROBEFAILEDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddIdcProbeResponseBodyAddIdcProbeFailedList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIdcProbeResponseBodyAddIdcProbeFailedList& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(IdcName, idcName_);
      DARABONBA_PTR_TO_JSON(IdcRegion, idcRegion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(IpSegments, ipSegments_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, AddIdcProbeResponseBodyAddIdcProbeFailedList& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(IdcName, idcName_);
      DARABONBA_PTR_FROM_JSON(IdcRegion, idcRegion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(IpSegments, ipSegments_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    AddIdcProbeResponseBodyAddIdcProbeFailedList() = default ;
    AddIdcProbeResponseBodyAddIdcProbeFailedList(const AddIdcProbeResponseBodyAddIdcProbeFailedList &) = default ;
    AddIdcProbeResponseBodyAddIdcProbeFailedList(AddIdcProbeResponseBodyAddIdcProbeFailedList &&) = default ;
    AddIdcProbeResponseBodyAddIdcProbeFailedList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIdcProbeResponseBodyAddIdcProbeFailedList() = default ;
    AddIdcProbeResponseBodyAddIdcProbeFailedList& operator=(const AddIdcProbeResponseBodyAddIdcProbeFailedList &) = default ;
    AddIdcProbeResponseBodyAddIdcProbeFailedList& operator=(AddIdcProbeResponseBodyAddIdcProbeFailedList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMsg_ != nullptr
        && this->idcName_ != nullptr && this->idcRegion_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr
        && this->intranetIp_ != nullptr && this->ipSegments_ != nullptr && this->uuid_ != nullptr; };
    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline AddIdcProbeResponseBodyAddIdcProbeFailedList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // idcName Field Functions 
    bool hasIdcName() const { return this->idcName_ != nullptr;};
    void deleteIdcName() { this->idcName_ = nullptr;};
    inline string idcName() const { DARABONBA_PTR_GET_DEFAULT(idcName_, "") };
    inline AddIdcProbeResponseBodyAddIdcProbeFailedList& setIdcName(string idcName) { DARABONBA_PTR_SET_VALUE(idcName_, idcName) };


    // idcRegion Field Functions 
    bool hasIdcRegion() const { return this->idcRegion_ != nullptr;};
    void deleteIdcRegion() { this->idcRegion_ = nullptr;};
    inline string idcRegion() const { DARABONBA_PTR_GET_DEFAULT(idcRegion_, "") };
    inline AddIdcProbeResponseBodyAddIdcProbeFailedList& setIdcRegion(string idcRegion) { DARABONBA_PTR_SET_VALUE(idcRegion_, idcRegion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddIdcProbeResponseBodyAddIdcProbeFailedList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline AddIdcProbeResponseBodyAddIdcProbeFailedList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline AddIdcProbeResponseBodyAddIdcProbeFailedList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline AddIdcProbeResponseBodyAddIdcProbeFailedList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ipSegments Field Functions 
    bool hasIpSegments() const { return this->ipSegments_ != nullptr;};
    void deleteIpSegments() { this->ipSegments_ = nullptr;};
    inline string ipSegments() const { DARABONBA_PTR_GET_DEFAULT(ipSegments_, "") };
    inline AddIdcProbeResponseBodyAddIdcProbeFailedList& setIpSegments(string ipSegments) { DARABONBA_PTR_SET_VALUE(ipSegments_, ipSegments) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline AddIdcProbeResponseBodyAddIdcProbeFailedList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The error message that is returned.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The name of the data center.
    std::shared_ptr<string> idcName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> idcRegion_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The settings of the CIDR block.
    std::shared_ptr<string> ipSegments_ = nullptr;
    // The UUID of the server. Multiple UUIDs are separated by commas (,).
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUID.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
