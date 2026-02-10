// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIDCPROBERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDIDCPROBERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddIdcProbeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIdcProbeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddIdcProbeFailedList, addIdcProbeFailedList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddIdcProbeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddIdcProbeFailedList, addIdcProbeFailedList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddIdcProbeResponseBody() = default ;
    AddIdcProbeResponseBody(const AddIdcProbeResponseBody &) = default ;
    AddIdcProbeResponseBody(AddIdcProbeResponseBody &&) = default ;
    AddIdcProbeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIdcProbeResponseBody() = default ;
    AddIdcProbeResponseBody& operator=(const AddIdcProbeResponseBody &) = default ;
    AddIdcProbeResponseBody& operator=(AddIdcProbeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddIdcProbeFailedList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddIdcProbeFailedList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AddIdcProbeFailedList& obj) { 
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
      AddIdcProbeFailedList() = default ;
      AddIdcProbeFailedList(const AddIdcProbeFailedList &) = default ;
      AddIdcProbeFailedList(AddIdcProbeFailedList &&) = default ;
      AddIdcProbeFailedList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddIdcProbeFailedList() = default ;
      AddIdcProbeFailedList& operator=(const AddIdcProbeFailedList &) = default ;
      AddIdcProbeFailedList& operator=(AddIdcProbeFailedList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorMsg_ == nullptr
        && this->idcName_ == nullptr && this->idcRegion_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->ipSegments_ == nullptr && this->uuid_ == nullptr; };
      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline AddIdcProbeFailedList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // idcName Field Functions 
      bool hasIdcName() const { return this->idcName_ != nullptr;};
      void deleteIdcName() { this->idcName_ = nullptr;};
      inline string getIdcName() const { DARABONBA_PTR_GET_DEFAULT(idcName_, "") };
      inline AddIdcProbeFailedList& setIdcName(string idcName) { DARABONBA_PTR_SET_VALUE(idcName_, idcName) };


      // idcRegion Field Functions 
      bool hasIdcRegion() const { return this->idcRegion_ != nullptr;};
      void deleteIdcRegion() { this->idcRegion_ = nullptr;};
      inline string getIdcRegion() const { DARABONBA_PTR_GET_DEFAULT(idcRegion_, "") };
      inline AddIdcProbeFailedList& setIdcRegion(string idcRegion) { DARABONBA_PTR_SET_VALUE(idcRegion_, idcRegion) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AddIdcProbeFailedList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline AddIdcProbeFailedList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline AddIdcProbeFailedList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline AddIdcProbeFailedList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // ipSegments Field Functions 
      bool hasIpSegments() const { return this->ipSegments_ != nullptr;};
      void deleteIpSegments() { this->ipSegments_ = nullptr;};
      inline string getIpSegments() const { DARABONBA_PTR_GET_DEFAULT(ipSegments_, "") };
      inline AddIdcProbeFailedList& setIpSegments(string ipSegments) { DARABONBA_PTR_SET_VALUE(ipSegments_, ipSegments) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline AddIdcProbeFailedList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The error message that is returned.
      shared_ptr<string> errorMsg_ {};
      // The name of the data center.
      shared_ptr<string> idcName_ {};
      // The region ID.
      shared_ptr<string> idcRegion_ {};
      // The ID of the server.
      shared_ptr<string> instanceId_ {};
      // The name of the server.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address.
      shared_ptr<string> intranetIp_ {};
      // The settings of the CIDR block.
      shared_ptr<string> ipSegments_ {};
      // The UUID of the server. Multiple UUIDs are separated by commas (,).
      // 
      // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUID.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->addIdcProbeFailedList_ == nullptr
        && this->count_ == nullptr && this->requestId_ == nullptr; };
    // addIdcProbeFailedList Field Functions 
    bool hasAddIdcProbeFailedList() const { return this->addIdcProbeFailedList_ != nullptr;};
    void deleteAddIdcProbeFailedList() { this->addIdcProbeFailedList_ = nullptr;};
    inline const vector<AddIdcProbeResponseBody::AddIdcProbeFailedList> & getAddIdcProbeFailedList() const { DARABONBA_PTR_GET_CONST(addIdcProbeFailedList_, vector<AddIdcProbeResponseBody::AddIdcProbeFailedList>) };
    inline vector<AddIdcProbeResponseBody::AddIdcProbeFailedList> getAddIdcProbeFailedList() { DARABONBA_PTR_GET(addIdcProbeFailedList_, vector<AddIdcProbeResponseBody::AddIdcProbeFailedList>) };
    inline AddIdcProbeResponseBody& setAddIdcProbeFailedList(const vector<AddIdcProbeResponseBody::AddIdcProbeFailedList> & addIdcProbeFailedList) { DARABONBA_PTR_SET_VALUE(addIdcProbeFailedList_, addIdcProbeFailedList) };
    inline AddIdcProbeResponseBody& setAddIdcProbeFailedList(vector<AddIdcProbeResponseBody::AddIdcProbeFailedList> && addIdcProbeFailedList) { DARABONBA_PTR_SET_RVALUE(addIdcProbeFailedList_, addIdcProbeFailedList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline AddIdcProbeResponseBody& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddIdcProbeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The records of failure.
    shared_ptr<vector<AddIdcProbeResponseBody::AddIdcProbeFailedList>> addIdcProbeFailedList_ {};
    // The total number of entries returned.
    shared_ptr<string> count_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
