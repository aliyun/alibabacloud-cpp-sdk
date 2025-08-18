// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESPONSEBODYAPP_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESPONSEBODYAPP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEdgeContainerAppResponseBodyAppHealthCheck.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppResponseBodyApp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppResponseBodyApp& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QuicCid, quicCid_);
      DARABONBA_PTR_TO_JSON(Remarks, remarks_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VersionCount, versionCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppResponseBodyApp& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QuicCid, quicCid_);
      DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VersionCount, versionCount_);
    };
    GetEdgeContainerAppResponseBodyApp() = default ;
    GetEdgeContainerAppResponseBodyApp(const GetEdgeContainerAppResponseBodyApp &) = default ;
    GetEdgeContainerAppResponseBodyApp(GetEdgeContainerAppResponseBodyApp &&) = default ;
    GetEdgeContainerAppResponseBodyApp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppResponseBodyApp() = default ;
    GetEdgeContainerAppResponseBodyApp& operator=(const GetEdgeContainerAppResponseBodyApp &) = default ;
    GetEdgeContainerAppResponseBodyApp& operator=(GetEdgeContainerAppResponseBodyApp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->createTime_ != nullptr && this->domainName_ != nullptr && this->gatewayType_ != nullptr && this->healthCheck_ != nullptr && this->name_ != nullptr
        && this->quicCid_ != nullptr && this->remarks_ != nullptr && this->servicePort_ != nullptr && this->status_ != nullptr && this->targetPort_ != nullptr
        && this->updateTime_ != nullptr && this->versionCount_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetEdgeContainerAppResponseBodyApp& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetEdgeContainerAppResponseBodyApp& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetEdgeContainerAppResponseBodyApp& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline GetEdgeContainerAppResponseBodyApp& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline const Models::GetEdgeContainerAppResponseBodyAppHealthCheck & healthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, Models::GetEdgeContainerAppResponseBodyAppHealthCheck) };
    inline Models::GetEdgeContainerAppResponseBodyAppHealthCheck healthCheck() { DARABONBA_PTR_GET(healthCheck_, Models::GetEdgeContainerAppResponseBodyAppHealthCheck) };
    inline GetEdgeContainerAppResponseBodyApp& setHealthCheck(const Models::GetEdgeContainerAppResponseBodyAppHealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
    inline GetEdgeContainerAppResponseBodyApp& setHealthCheck(Models::GetEdgeContainerAppResponseBodyAppHealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetEdgeContainerAppResponseBodyApp& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // quicCid Field Functions 
    bool hasQuicCid() const { return this->quicCid_ != nullptr;};
    void deleteQuicCid() { this->quicCid_ = nullptr;};
    inline string quicCid() const { DARABONBA_PTR_GET_DEFAULT(quicCid_, "") };
    inline GetEdgeContainerAppResponseBodyApp& setQuicCid(string quicCid) { DARABONBA_PTR_SET_VALUE(quicCid_, quicCid) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string remarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline GetEdgeContainerAppResponseBodyApp& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline int32_t servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
    inline GetEdgeContainerAppResponseBodyApp& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEdgeContainerAppResponseBodyApp& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline int32_t targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
    inline GetEdgeContainerAppResponseBodyApp& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetEdgeContainerAppResponseBodyApp& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // versionCount Field Functions 
    bool hasVersionCount() const { return this->versionCount_ != nullptr;};
    void deleteVersionCount() { this->versionCount_ = nullptr;};
    inline int32_t versionCount() const { DARABONBA_PTR_GET_DEFAULT(versionCount_, 0) };
    inline GetEdgeContainerAppResponseBodyApp& setVersionCount(int32_t versionCount) { DARABONBA_PTR_SET_VALUE(versionCount_, versionCount) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The time when the application was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The domain name that is associated with the application. If no domain name is associated with the application, the value is an empty string.
    std::shared_ptr<string> domainName_ = nullptr;
    // The type of the gateway. Valid values:
    // 
    // *   l7: Layer 7 gateway.
    // *   l4: Layer 4 gateway.
    std::shared_ptr<string> gatewayType_ = nullptr;
    // The information about health checks.
    std::shared_ptr<Models::GetEdgeContainerAppResponseBodyAppHealthCheck> healthCheck_ = nullptr;
    // The application name.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether QUIC is enabled.
    std::shared_ptr<string> quicCid_ = nullptr;
    // The remarks about the application.
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
