// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONRESPONSEBODYPAGEINFOINTEGRATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONRESPONSEBODYPAGEINFOINTEGRATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListIntegrationResponseBodyPageInfoIntegrations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationResponseBodyPageInfoIntegrations& obj) { 
      DARABONBA_PTR_TO_JSON(ApiEndpoint, apiEndpoint_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IntegrationDetail, integrationDetail_);
      DARABONBA_PTR_TO_JSON(IntegrationId, integrationId_);
      DARABONBA_PTR_TO_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_TO_JSON(IntegrationProductType, integrationProductType_);
      DARABONBA_PTR_TO_JSON(Liveness, liveness_);
      DARABONBA_PTR_TO_JSON(ShortToken, shortToken_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationResponseBodyPageInfoIntegrations& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiEndpoint, apiEndpoint_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IntegrationDetail, integrationDetail_);
      DARABONBA_PTR_FROM_JSON(IntegrationId, integrationId_);
      DARABONBA_PTR_FROM_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_FROM_JSON(IntegrationProductType, integrationProductType_);
      DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
      DARABONBA_PTR_FROM_JSON(ShortToken, shortToken_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListIntegrationResponseBodyPageInfoIntegrations() = default ;
    ListIntegrationResponseBodyPageInfoIntegrations(const ListIntegrationResponseBodyPageInfoIntegrations &) = default ;
    ListIntegrationResponseBodyPageInfoIntegrations(ListIntegrationResponseBodyPageInfoIntegrations &&) = default ;
    ListIntegrationResponseBodyPageInfoIntegrations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationResponseBodyPageInfoIntegrations() = default ;
    ListIntegrationResponseBodyPageInfoIntegrations& operator=(const ListIntegrationResponseBodyPageInfoIntegrations &) = default ;
    ListIntegrationResponseBodyPageInfoIntegrations& operator=(ListIntegrationResponseBodyPageInfoIntegrations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiEndpoint_ != nullptr
        && this->createTime_ != nullptr && this->integrationDetail_ != nullptr && this->integrationId_ != nullptr && this->integrationName_ != nullptr && this->integrationProductType_ != nullptr
        && this->liveness_ != nullptr && this->shortToken_ != nullptr && this->state_ != nullptr; };
    // apiEndpoint Field Functions 
    bool hasApiEndpoint() const { return this->apiEndpoint_ != nullptr;};
    void deleteApiEndpoint() { this->apiEndpoint_ = nullptr;};
    inline string apiEndpoint() const { DARABONBA_PTR_GET_DEFAULT(apiEndpoint_, "") };
    inline ListIntegrationResponseBodyPageInfoIntegrations& setApiEndpoint(string apiEndpoint) { DARABONBA_PTR_SET_VALUE(apiEndpoint_, apiEndpoint) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListIntegrationResponseBodyPageInfoIntegrations& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // integrationDetail Field Functions 
    bool hasIntegrationDetail() const { return this->integrationDetail_ != nullptr;};
    void deleteIntegrationDetail() { this->integrationDetail_ = nullptr;};
    inline const Models::ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail & integrationDetail() const { DARABONBA_PTR_GET_CONST(integrationDetail_, Models::ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail) };
    inline Models::ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail integrationDetail() { DARABONBA_PTR_GET(integrationDetail_, Models::ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail) };
    inline ListIntegrationResponseBodyPageInfoIntegrations& setIntegrationDetail(const Models::ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail & integrationDetail) { DARABONBA_PTR_SET_VALUE(integrationDetail_, integrationDetail) };
    inline ListIntegrationResponseBodyPageInfoIntegrations& setIntegrationDetail(Models::ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail && integrationDetail) { DARABONBA_PTR_SET_RVALUE(integrationDetail_, integrationDetail) };


    // integrationId Field Functions 
    bool hasIntegrationId() const { return this->integrationId_ != nullptr;};
    void deleteIntegrationId() { this->integrationId_ = nullptr;};
    inline int64_t integrationId() const { DARABONBA_PTR_GET_DEFAULT(integrationId_, 0L) };
    inline ListIntegrationResponseBodyPageInfoIntegrations& setIntegrationId(int64_t integrationId) { DARABONBA_PTR_SET_VALUE(integrationId_, integrationId) };


    // integrationName Field Functions 
    bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
    void deleteIntegrationName() { this->integrationName_ = nullptr;};
    inline string integrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
    inline ListIntegrationResponseBodyPageInfoIntegrations& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


    // integrationProductType Field Functions 
    bool hasIntegrationProductType() const { return this->integrationProductType_ != nullptr;};
    void deleteIntegrationProductType() { this->integrationProductType_ = nullptr;};
    inline string integrationProductType() const { DARABONBA_PTR_GET_DEFAULT(integrationProductType_, "") };
    inline ListIntegrationResponseBodyPageInfoIntegrations& setIntegrationProductType(string integrationProductType) { DARABONBA_PTR_SET_VALUE(integrationProductType_, integrationProductType) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string liveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline ListIntegrationResponseBodyPageInfoIntegrations& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // shortToken Field Functions 
    bool hasShortToken() const { return this->shortToken_ != nullptr;};
    void deleteShortToken() { this->shortToken_ = nullptr;};
    inline string shortToken() const { DARABONBA_PTR_GET_DEFAULT(shortToken_, "") };
    inline ListIntegrationResponseBodyPageInfoIntegrations& setShortToken(string shortToken) { DARABONBA_PTR_SET_VALUE(shortToken_, shortToken) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline bool state() const { DARABONBA_PTR_GET_DEFAULT(state_, false) };
    inline ListIntegrationResponseBodyPageInfoIntegrations& setState(bool state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The endpoint of the alert integration.
    std::shared_ptr<string> apiEndpoint_ = nullptr;
    // The time when the alert integration was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The information about the alert events.
    std::shared_ptr<Models::ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail> integrationDetail_ = nullptr;
    // The ID of the alert integration.
    std::shared_ptr<int64_t> integrationId_ = nullptr;
    // The name of the alert integration.
    std::shared_ptr<string> integrationName_ = nullptr;
    // The type of the alert integration. Valid values:
    // 
    // *   CLOUD_MONITOR: CloudMonitor
    // *   LOG_SERVICE: Log Service
    std::shared_ptr<string> integrationProductType_ = nullptr;
    // The activity of the alert integration
    std::shared_ptr<string> liveness_ = nullptr;
    // The authentication token of the alert integration.
    std::shared_ptr<string> shortToken_ = nullptr;
    // Indicates whether the alert integration was enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
