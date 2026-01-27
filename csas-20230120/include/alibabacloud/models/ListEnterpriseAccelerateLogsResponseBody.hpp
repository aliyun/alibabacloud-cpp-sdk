// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListEnterpriseAccelerateLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseAccelerateLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseAccelerateLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
    };
    ListEnterpriseAccelerateLogsResponseBody() = default ;
    ListEnterpriseAccelerateLogsResponseBody(const ListEnterpriseAccelerateLogsResponseBody &) = default ;
    ListEnterpriseAccelerateLogsResponseBody(ListEnterpriseAccelerateLogsResponseBody &&) = default ;
    ListEnterpriseAccelerateLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseAccelerateLogsResponseBody() = default ;
    ListEnterpriseAccelerateLogsResponseBody& operator=(const ListEnterpriseAccelerateLogsResponseBody &) = default ;
    ListEnterpriseAccelerateLogsResponseBody& operator=(ListEnterpriseAccelerateLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Logs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logs& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Logs& obj) { 
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
      Logs() = default ;
      Logs(const Logs &) = default ;
      Logs(Logs &&) = default ;
      Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Logs() = default ;
      Logs& operator=(const Logs &) = default ;
      Logs& operator=(Logs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->department_ == nullptr
        && this->deviceType_ == nullptr && this->dstAddr_ == nullptr && this->inBytes_ == nullptr && this->outBytes_ == nullptr && this->policyName_ == nullptr
        && this->proxyAddr_ == nullptr && this->unixTime_ == nullptr && this->username_ == nullptr; };
      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
      inline Logs& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline Logs& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // dstAddr Field Functions 
      bool hasDstAddr() const { return this->dstAddr_ != nullptr;};
      void deleteDstAddr() { this->dstAddr_ = nullptr;};
      inline string getDstAddr() const { DARABONBA_PTR_GET_DEFAULT(dstAddr_, "") };
      inline Logs& setDstAddr(string dstAddr) { DARABONBA_PTR_SET_VALUE(dstAddr_, dstAddr) };


      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline string getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, "") };
      inline Logs& setInBytes(string inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // outBytes Field Functions 
      bool hasOutBytes() const { return this->outBytes_ != nullptr;};
      void deleteOutBytes() { this->outBytes_ = nullptr;};
      inline string getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, "") };
      inline Logs& setOutBytes(string outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline Logs& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // proxyAddr Field Functions 
      bool hasProxyAddr() const { return this->proxyAddr_ != nullptr;};
      void deleteProxyAddr() { this->proxyAddr_ = nullptr;};
      inline string getProxyAddr() const { DARABONBA_PTR_GET_DEFAULT(proxyAddr_, "") };
      inline Logs& setProxyAddr(string proxyAddr) { DARABONBA_PTR_SET_VALUE(proxyAddr_, proxyAddr) };


      // unixTime Field Functions 
      bool hasUnixTime() const { return this->unixTime_ != nullptr;};
      void deleteUnixTime() { this->unixTime_ = nullptr;};
      inline string getUnixTime() const { DARABONBA_PTR_GET_DEFAULT(unixTime_, "") };
      inline Logs& setUnixTime(string unixTime) { DARABONBA_PTR_SET_VALUE(unixTime_, unixTime) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Logs& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> department_ {};
      shared_ptr<string> deviceType_ {};
      shared_ptr<string> dstAddr_ {};
      shared_ptr<string> inBytes_ {};
      shared_ptr<string> outBytes_ {};
      shared_ptr<string> policyName_ {};
      shared_ptr<string> proxyAddr_ {};
      shared_ptr<string> unixTime_ {};
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->logs_ == nullptr
        && this->requestId_ == nullptr && this->totalNumber_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<ListEnterpriseAccelerateLogsResponseBody::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<ListEnterpriseAccelerateLogsResponseBody::Logs>) };
    inline vector<ListEnterpriseAccelerateLogsResponseBody::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<ListEnterpriseAccelerateLogsResponseBody::Logs>) };
    inline ListEnterpriseAccelerateLogsResponseBody& setLogs(const vector<ListEnterpriseAccelerateLogsResponseBody::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline ListEnterpriseAccelerateLogsResponseBody& setLogs(vector<ListEnterpriseAccelerateLogsResponseBody::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnterpriseAccelerateLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline int32_t getTotalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
    inline ListEnterpriseAccelerateLogsResponseBody& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    shared_ptr<vector<ListEnterpriseAccelerateLogsResponseBody::Logs>> logs_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
