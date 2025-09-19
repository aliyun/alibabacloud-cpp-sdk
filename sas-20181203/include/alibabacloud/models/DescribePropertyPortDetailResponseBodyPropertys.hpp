// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPORTDETAILRESPONSEBODYPROPERTYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPORTDETAILRESPONSEBODYPROPERTYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyPortDetailResponseBodyPropertys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyPortDetailResponseBodyPropertys& obj) { 
      DARABONBA_PTR_TO_JSON(BindIp, bindIp_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProcName, procName_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyPortDetailResponseBodyPropertys& obj) { 
      DARABONBA_PTR_FROM_JSON(BindIp, bindIp_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProcName, procName_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribePropertyPortDetailResponseBodyPropertys() = default ;
    DescribePropertyPortDetailResponseBodyPropertys(const DescribePropertyPortDetailResponseBodyPropertys &) = default ;
    DescribePropertyPortDetailResponseBodyPropertys(DescribePropertyPortDetailResponseBodyPropertys &&) = default ;
    DescribePropertyPortDetailResponseBodyPropertys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyPortDetailResponseBodyPropertys() = default ;
    DescribePropertyPortDetailResponseBodyPropertys& operator=(const DescribePropertyPortDetailResponseBodyPropertys &) = default ;
    DescribePropertyPortDetailResponseBodyPropertys& operator=(DescribePropertyPortDetailResponseBodyPropertys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindIp_ != nullptr
        && this->createTimestamp_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr && this->intranetIp_ != nullptr
        && this->ip_ != nullptr && this->pid_ != nullptr && this->port_ != nullptr && this->procName_ != nullptr && this->proto_ != nullptr
        && this->uuid_ != nullptr; };
    // bindIp Field Functions 
    bool hasBindIp() const { return this->bindIp_ != nullptr;};
    void deleteBindIp() { this->bindIp_ = nullptr;};
    inline string bindIp() const { DARABONBA_PTR_GET_DEFAULT(bindIp_, "") };
    inline DescribePropertyPortDetailResponseBodyPropertys& setBindIp(string bindIp) { DARABONBA_PTR_SET_VALUE(bindIp_, bindIp) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribePropertyPortDetailResponseBodyPropertys& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePropertyPortDetailResponseBodyPropertys& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribePropertyPortDetailResponseBodyPropertys& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribePropertyPortDetailResponseBodyPropertys& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribePropertyPortDetailResponseBodyPropertys& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribePropertyPortDetailResponseBodyPropertys& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline DescribePropertyPortDetailResponseBodyPropertys& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribePropertyPortDetailResponseBodyPropertys& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // procName Field Functions 
    bool hasProcName() const { return this->procName_ != nullptr;};
    void deleteProcName() { this->procName_ = nullptr;};
    inline string procName() const { DARABONBA_PTR_GET_DEFAULT(procName_, "") };
    inline DescribePropertyPortDetailResponseBodyPropertys& setProcName(string procName) { DARABONBA_PTR_SET_VALUE(procName_, procName) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline DescribePropertyPortDetailResponseBodyPropertys& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribePropertyPortDetailResponseBodyPropertys& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The IP address bound to the port.
    std::shared_ptr<string> bindIp_ = nullptr;
    // The timestamp of the last fingerprint collection. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The instance ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The IP address of the network interface controller (NIC) that is bound to the listening port.
    std::shared_ptr<string> ip_ = nullptr;
    // The ID of the server process that listens on the port.
    std::shared_ptr<string> pid_ = nullptr;
    // The listener port.
    std::shared_ptr<string> port_ = nullptr;
    // The name of the server process.
    std::shared_ptr<string> procName_ = nullptr;
    // The network protocol that is used by the listening port.
    std::shared_ptr<string> proto_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
