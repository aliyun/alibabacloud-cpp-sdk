// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPSRESPONSEBODYAPPS_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPSRESPONSEBODYAPPS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEdgeContainerAppsResponseBodyAppsHealthCheck.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListEdgeContainerAppsResponseBodyApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeContainerAppsResponseBodyApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(QuicCid, quicCid_);
      DARABONBA_PTR_TO_JSON(Remarks, remarks_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VersionCount, versionCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeContainerAppsResponseBodyApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(QuicCid, quicCid_);
      DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VersionCount, versionCount_);
    };
    ListEdgeContainerAppsResponseBodyApps() = default ;
    ListEdgeContainerAppsResponseBodyApps(const ListEdgeContainerAppsResponseBodyApps &) = default ;
    ListEdgeContainerAppsResponseBodyApps(ListEdgeContainerAppsResponseBodyApps &&) = default ;
    ListEdgeContainerAppsResponseBodyApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeContainerAppsResponseBodyApps() = default ;
    ListEdgeContainerAppsResponseBodyApps& operator=(const ListEdgeContainerAppsResponseBodyApps &) = default ;
    ListEdgeContainerAppsResponseBodyApps& operator=(ListEdgeContainerAppsResponseBodyApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->createTime_ == nullptr && return this->domainName_ == nullptr && return this->gatewayType_ == nullptr && return this->healthCheck_ == nullptr && return this->name_ == nullptr
        && return this->percentage_ == nullptr && return this->quicCid_ == nullptr && return this->remarks_ == nullptr && return this->servicePort_ == nullptr && return this->status_ == nullptr
        && return this->targetPort_ == nullptr && return this->updateTime_ == nullptr && return this->versionCount_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListEdgeContainerAppsResponseBodyApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListEdgeContainerAppsResponseBodyApps& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListEdgeContainerAppsResponseBodyApps& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ListEdgeContainerAppsResponseBodyApps& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline const Models::ListEdgeContainerAppsResponseBodyAppsHealthCheck & healthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, Models::ListEdgeContainerAppsResponseBodyAppsHealthCheck) };
    inline Models::ListEdgeContainerAppsResponseBodyAppsHealthCheck healthCheck() { DARABONBA_PTR_GET(healthCheck_, Models::ListEdgeContainerAppsResponseBodyAppsHealthCheck) };
    inline ListEdgeContainerAppsResponseBodyApps& setHealthCheck(const Models::ListEdgeContainerAppsResponseBodyAppsHealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
    inline ListEdgeContainerAppsResponseBodyApps& setHealthCheck(Models::ListEdgeContainerAppsResponseBodyAppsHealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEdgeContainerAppsResponseBodyApps& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline ListEdgeContainerAppsResponseBodyApps& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // quicCid Field Functions 
    bool hasQuicCid() const { return this->quicCid_ != nullptr;};
    void deleteQuicCid() { this->quicCid_ = nullptr;};
    inline string quicCid() const { DARABONBA_PTR_GET_DEFAULT(quicCid_, "") };
    inline ListEdgeContainerAppsResponseBodyApps& setQuicCid(string quicCid) { DARABONBA_PTR_SET_VALUE(quicCid_, quicCid) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string remarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline ListEdgeContainerAppsResponseBodyApps& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline int32_t servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
    inline ListEdgeContainerAppsResponseBodyApps& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEdgeContainerAppsResponseBodyApps& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline int32_t targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
    inline ListEdgeContainerAppsResponseBodyApps& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListEdgeContainerAppsResponseBodyApps& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // versionCount Field Functions 
    bool hasVersionCount() const { return this->versionCount_ != nullptr;};
    void deleteVersionCount() { this->versionCount_ = nullptr;};
    inline int32_t versionCount() const { DARABONBA_PTR_GET_DEFAULT(versionCount_, 0) };
    inline ListEdgeContainerAppsResponseBodyApps& setVersionCount(int32_t versionCount) { DARABONBA_PTR_SET_VALUE(versionCount_, versionCount) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The time when the version was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The domain name associated with the application.
    std::shared_ptr<string> domainName_ = nullptr;
    // The type of the gateway. Valid values:
    // 
    // *   l7: Layer 7 gateway.
    // *   l4: Layer 4 gateway.
    std::shared_ptr<string> gatewayType_ = nullptr;
    // The information about health checks.
    std::shared_ptr<Models::ListEdgeContainerAppsResponseBodyAppsHealthCheck> healthCheck_ = nullptr;
    // The application name.
    std::shared_ptr<string> name_ = nullptr;
    // The progress of the application creation task in percentage.
    std::shared_ptr<int32_t> percentage_ = nullptr;
    // Indicates whether QUIC is enabled.
    std::shared_ptr<string> quicCid_ = nullptr;
    // The remarks.
    std::shared_ptr<string> remarks_ = nullptr;
    // The server port. Valid values: 1 to 65535.
    std::shared_ptr<int32_t> servicePort_ = nullptr;
    // The status of the application. Valid values:
    // 
    // *   creating: The application is being created.
    // *   failed: The application failed to be created.
    // *   created: The application is created.
    std::shared_ptr<string> status_ = nullptr;
    // The backend port, which is also the service port of the application. Valid values: 1 to 65535.
    std::shared_ptr<int32_t> targetPort_ = nullptr;
    // The time when the application was last modified. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The number of versions of the application.
    std::shared_ptr<int32_t> versionCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
