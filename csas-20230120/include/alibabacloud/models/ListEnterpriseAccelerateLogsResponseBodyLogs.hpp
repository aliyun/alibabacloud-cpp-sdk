// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATELOGSRESPONSEBODYLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATELOGSRESPONSEBODYLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListEnterpriseAccelerateLogsResponseBodyLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseAccelerateLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(DstAddr, dstAddr_);
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(ProxyAddr, proxyAddr_);
      DARABONBA_PTR_TO_JSON(UnixTime, unixTime_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseAccelerateLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(DstAddr, dstAddr_);
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(ProxyAddr, proxyAddr_);
      DARABONBA_PTR_FROM_JSON(UnixTime, unixTime_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    ListEnterpriseAccelerateLogsResponseBodyLogs() = default ;
    ListEnterpriseAccelerateLogsResponseBodyLogs(const ListEnterpriseAccelerateLogsResponseBodyLogs &) = default ;
    ListEnterpriseAccelerateLogsResponseBodyLogs(ListEnterpriseAccelerateLogsResponseBodyLogs &&) = default ;
    ListEnterpriseAccelerateLogsResponseBodyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseAccelerateLogsResponseBodyLogs() = default ;
    ListEnterpriseAccelerateLogsResponseBodyLogs& operator=(const ListEnterpriseAccelerateLogsResponseBodyLogs &) = default ;
    ListEnterpriseAccelerateLogsResponseBodyLogs& operator=(ListEnterpriseAccelerateLogsResponseBodyLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->department_ == nullptr
        && return this->deviceType_ == nullptr && return this->dstAddr_ == nullptr && return this->inBytes_ == nullptr && return this->outBytes_ == nullptr && return this->policyName_ == nullptr
        && return this->proxyAddr_ == nullptr && return this->unixTime_ == nullptr && return this->username_ == nullptr; };
    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListEnterpriseAccelerateLogsResponseBodyLogs& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline ListEnterpriseAccelerateLogsResponseBodyLogs& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // dstAddr Field Functions 
    bool hasDstAddr() const { return this->dstAddr_ != nullptr;};
    void deleteDstAddr() { this->dstAddr_ = nullptr;};
    inline string dstAddr() const { DARABONBA_PTR_GET_DEFAULT(dstAddr_, "") };
    inline ListEnterpriseAccelerateLogsResponseBodyLogs& setDstAddr(string dstAddr) { DARABONBA_PTR_SET_VALUE(dstAddr_, dstAddr) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline string inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, "") };
    inline ListEnterpriseAccelerateLogsResponseBodyLogs& setInBytes(string inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline string outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, "") };
    inline ListEnterpriseAccelerateLogsResponseBodyLogs& setOutBytes(string outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListEnterpriseAccelerateLogsResponseBodyLogs& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // proxyAddr Field Functions 
    bool hasProxyAddr() const { return this->proxyAddr_ != nullptr;};
    void deleteProxyAddr() { this->proxyAddr_ = nullptr;};
    inline string proxyAddr() const { DARABONBA_PTR_GET_DEFAULT(proxyAddr_, "") };
    inline ListEnterpriseAccelerateLogsResponseBodyLogs& setProxyAddr(string proxyAddr) { DARABONBA_PTR_SET_VALUE(proxyAddr_, proxyAddr) };


    // unixTime Field Functions 
    bool hasUnixTime() const { return this->unixTime_ != nullptr;};
    void deleteUnixTime() { this->unixTime_ = nullptr;};
    inline string unixTime() const { DARABONBA_PTR_GET_DEFAULT(unixTime_, "") };
    inline ListEnterpriseAccelerateLogsResponseBodyLogs& setUnixTime(string unixTime) { DARABONBA_PTR_SET_VALUE(unixTime_, unixTime) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListEnterpriseAccelerateLogsResponseBodyLogs& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> deviceType_ = nullptr;
    std::shared_ptr<string> dstAddr_ = nullptr;
    std::shared_ptr<string> inBytes_ = nullptr;
    std::shared_ptr<string> outBytes_ = nullptr;
    std::shared_ptr<string> policyName_ = nullptr;
    std::shared_ptr<string> proxyAddr_ = nullptr;
    std::shared_ptr<string> unixTime_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
