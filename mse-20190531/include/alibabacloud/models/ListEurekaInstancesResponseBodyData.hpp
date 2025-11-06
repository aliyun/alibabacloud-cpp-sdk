// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEUREKAINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEUREKAINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListEurekaInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEurekaInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(DurationInSecs, durationInSecs_);
      DARABONBA_PTR_TO_JSON(HomePageUrl, homePageUrl_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpAddr, ipAddr_);
      DARABONBA_PTR_TO_JSON(LastDirtyTimestamp, lastDirtyTimestamp_);
      DARABONBA_PTR_TO_JSON(LastUpdatedTimestamp, lastUpdatedTimestamp_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RenewalIntervalInSecs, renewalIntervalInSecs_);
      DARABONBA_PTR_TO_JSON(SecurePort, securePort_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VipAddress, vipAddress_);
    };
    friend void from_json(const Darabonba::Json& j, ListEurekaInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(DurationInSecs, durationInSecs_);
      DARABONBA_PTR_FROM_JSON(HomePageUrl, homePageUrl_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpAddr, ipAddr_);
      DARABONBA_PTR_FROM_JSON(LastDirtyTimestamp, lastDirtyTimestamp_);
      DARABONBA_PTR_FROM_JSON(LastUpdatedTimestamp, lastUpdatedTimestamp_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RenewalIntervalInSecs, renewalIntervalInSecs_);
      DARABONBA_PTR_FROM_JSON(SecurePort, securePort_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VipAddress, vipAddress_);
    };
    ListEurekaInstancesResponseBodyData() = default ;
    ListEurekaInstancesResponseBodyData(const ListEurekaInstancesResponseBodyData &) = default ;
    ListEurekaInstancesResponseBodyData(ListEurekaInstancesResponseBodyData &&) = default ;
    ListEurekaInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEurekaInstancesResponseBodyData() = default ;
    ListEurekaInstancesResponseBodyData& operator=(const ListEurekaInstancesResponseBodyData &) = default ;
    ListEurekaInstancesResponseBodyData& operator=(ListEurekaInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && return this->durationInSecs_ == nullptr && return this->homePageUrl_ == nullptr && return this->hostName_ == nullptr && return this->instanceId_ == nullptr && return this->ipAddr_ == nullptr
        && return this->lastDirtyTimestamp_ == nullptr && return this->lastUpdatedTimestamp_ == nullptr && return this->metadata_ == nullptr && return this->port_ == nullptr && return this->renewalIntervalInSecs_ == nullptr
        && return this->securePort_ == nullptr && return this->status_ == nullptr && return this->vipAddress_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline ListEurekaInstancesResponseBodyData& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // durationInSecs Field Functions 
    bool hasDurationInSecs() const { return this->durationInSecs_ != nullptr;};
    void deleteDurationInSecs() { this->durationInSecs_ = nullptr;};
    inline int32_t durationInSecs() const { DARABONBA_PTR_GET_DEFAULT(durationInSecs_, 0) };
    inline ListEurekaInstancesResponseBodyData& setDurationInSecs(int32_t durationInSecs) { DARABONBA_PTR_SET_VALUE(durationInSecs_, durationInSecs) };


    // homePageUrl Field Functions 
    bool hasHomePageUrl() const { return this->homePageUrl_ != nullptr;};
    void deleteHomePageUrl() { this->homePageUrl_ = nullptr;};
    inline string homePageUrl() const { DARABONBA_PTR_GET_DEFAULT(homePageUrl_, "") };
    inline ListEurekaInstancesResponseBodyData& setHomePageUrl(string homePageUrl) { DARABONBA_PTR_SET_VALUE(homePageUrl_, homePageUrl) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ListEurekaInstancesResponseBodyData& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListEurekaInstancesResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipAddr Field Functions 
    bool hasIpAddr() const { return this->ipAddr_ != nullptr;};
    void deleteIpAddr() { this->ipAddr_ = nullptr;};
    inline string ipAddr() const { DARABONBA_PTR_GET_DEFAULT(ipAddr_, "") };
    inline ListEurekaInstancesResponseBodyData& setIpAddr(string ipAddr) { DARABONBA_PTR_SET_VALUE(ipAddr_, ipAddr) };


    // lastDirtyTimestamp Field Functions 
    bool hasLastDirtyTimestamp() const { return this->lastDirtyTimestamp_ != nullptr;};
    void deleteLastDirtyTimestamp() { this->lastDirtyTimestamp_ = nullptr;};
    inline int64_t lastDirtyTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastDirtyTimestamp_, 0L) };
    inline ListEurekaInstancesResponseBodyData& setLastDirtyTimestamp(int64_t lastDirtyTimestamp) { DARABONBA_PTR_SET_VALUE(lastDirtyTimestamp_, lastDirtyTimestamp) };


    // lastUpdatedTimestamp Field Functions 
    bool hasLastUpdatedTimestamp() const { return this->lastUpdatedTimestamp_ != nullptr;};
    void deleteLastUpdatedTimestamp() { this->lastUpdatedTimestamp_ = nullptr;};
    inline int64_t lastUpdatedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedTimestamp_, 0L) };
    inline ListEurekaInstancesResponseBodyData& setLastUpdatedTimestamp(int64_t lastUpdatedTimestamp) { DARABONBA_PTR_SET_VALUE(lastUpdatedTimestamp_, lastUpdatedTimestamp) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline ListEurekaInstancesResponseBodyData& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline ListEurekaInstancesResponseBodyData& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ListEurekaInstancesResponseBodyData& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // renewalIntervalInSecs Field Functions 
    bool hasRenewalIntervalInSecs() const { return this->renewalIntervalInSecs_ != nullptr;};
    void deleteRenewalIntervalInSecs() { this->renewalIntervalInSecs_ = nullptr;};
    inline int32_t renewalIntervalInSecs() const { DARABONBA_PTR_GET_DEFAULT(renewalIntervalInSecs_, 0) };
    inline ListEurekaInstancesResponseBodyData& setRenewalIntervalInSecs(int32_t renewalIntervalInSecs) { DARABONBA_PTR_SET_VALUE(renewalIntervalInSecs_, renewalIntervalInSecs) };


    // securePort Field Functions 
    bool hasSecurePort() const { return this->securePort_ != nullptr;};
    void deleteSecurePort() { this->securePort_ = nullptr;};
    inline int32_t securePort() const { DARABONBA_PTR_GET_DEFAULT(securePort_, 0) };
    inline ListEurekaInstancesResponseBodyData& setSecurePort(int32_t securePort) { DARABONBA_PTR_SET_VALUE(securePort_, securePort) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEurekaInstancesResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vipAddress Field Functions 
    bool hasVipAddress() const { return this->vipAddress_ != nullptr;};
    void deleteVipAddress() { this->vipAddress_ = nullptr;};
    inline string vipAddress() const { DARABONBA_PTR_GET_DEFAULT(vipAddress_, "") };
    inline ListEurekaInstancesResponseBodyData& setVipAddress(string vipAddress) { DARABONBA_PTR_SET_VALUE(vipAddress_, vipAddress) };


  protected:
    // The name of the application.
    std::shared_ptr<string> app_ = nullptr;
    // The timeout period of the instance.\\
    // After the specified timeout period expires, the service is unavailable by default and is deleted.
    std::shared_ptr<int32_t> durationInSecs_ = nullptr;
    // The URL of the homepage.
    std::shared_ptr<string> homePageUrl_ = nullptr;
    // The hostname.
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address.
    std::shared_ptr<string> ipAddr_ = nullptr;
    // The time when the instance was last modified.
    std::shared_ptr<int64_t> lastDirtyTimestamp_ = nullptr;
    // The time when the instance heartbeat was last checked.
    std::shared_ptr<int64_t> lastUpdatedTimestamp_ = nullptr;
    // The metadata.
    Darabonba::Json metadata_ = nullptr;
    // The service port number.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The maximum interval between two heartbeat checks after a heartbeat check times out.\\
    // Default value: 10.
    std::shared_ptr<int32_t> renewalIntervalInSecs_ = nullptr;
    // The security port.
    std::shared_ptr<int32_t> securePort_ = nullptr;
    // The number of service providers. The value is in the following format: Number of healthy instances/Total number of instances.
    std::shared_ptr<string> status_ = nullptr;
    // The virtual IP address (VIP).
    std::shared_ptr<string> vipAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
