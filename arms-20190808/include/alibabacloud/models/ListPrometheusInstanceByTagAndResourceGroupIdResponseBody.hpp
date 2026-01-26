// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCEBYTAGANDRESOURCEGROUPIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCEBYTAGANDRESOURCEGROUPIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListPrometheusInstanceByTagAndResourceGroupIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusInstanceByTagAndResourceGroupIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusInstanceByTagAndResourceGroupIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBody() = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBody(const ListPrometheusInstanceByTagAndResourceGroupIdResponseBody &) = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBody(ListPrometheusInstanceByTagAndResourceGroupIdResponseBody &&) = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusInstanceByTagAndResourceGroupIdResponseBody() = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBody& operator=(const ListPrometheusInstanceByTagAndResourceGroupIdResponseBody &) = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBody& operator=(ListPrometheusInstanceByTagAndResourceGroupIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PrometheusInstances, prometheusInstances_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PrometheusInstances, prometheusInstances_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PrometheusInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrometheusInstances& obj) { 
          DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
          DARABONBA_PTR_TO_JSON(GrafanaInstanceId, grafanaInstanceId_);
          DARABONBA_PTR_TO_JSON(HttpApiInterUrl, httpApiInterUrl_);
          DARABONBA_PTR_TO_JSON(HttpApiIntraUrl, httpApiIntraUrl_);
          DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
          DARABONBA_PTR_TO_JSON(PushGatewayInterUrl, pushGatewayInterUrl_);
          DARABONBA_PTR_TO_JSON(PushGatewayIntraUrl, pushGatewayIntraUrl_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RemoteReadInterUrl, remoteReadInterUrl_);
          DARABONBA_PTR_TO_JSON(RemoteReadIntraUrl, remoteReadIntraUrl_);
          DARABONBA_PTR_TO_JSON(RemoteWriteInterUrl, remoteWriteInterUrl_);
          DARABONBA_PTR_TO_JSON(RemoteWriteIntraUrl, remoteWriteIntraUrl_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(SubClustersJson, subClustersJson_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, PrometheusInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
          DARABONBA_PTR_FROM_JSON(GrafanaInstanceId, grafanaInstanceId_);
          DARABONBA_PTR_FROM_JSON(HttpApiInterUrl, httpApiInterUrl_);
          DARABONBA_PTR_FROM_JSON(HttpApiIntraUrl, httpApiIntraUrl_);
          DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
          DARABONBA_PTR_FROM_JSON(PushGatewayInterUrl, pushGatewayInterUrl_);
          DARABONBA_PTR_FROM_JSON(PushGatewayIntraUrl, pushGatewayIntraUrl_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RemoteReadInterUrl, remoteReadInterUrl_);
          DARABONBA_PTR_FROM_JSON(RemoteReadIntraUrl, remoteReadIntraUrl_);
          DARABONBA_PTR_FROM_JSON(RemoteWriteInterUrl, remoteWriteInterUrl_);
          DARABONBA_PTR_FROM_JSON(RemoteWriteIntraUrl, remoteWriteIntraUrl_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(SubClustersJson, subClustersJson_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        PrometheusInstances() = default ;
        PrometheusInstances(const PrometheusInstances &) = default ;
        PrometheusInstances(PrometheusInstances &&) = default ;
        PrometheusInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrometheusInstances() = default ;
        PrometheusInstances& operator=(const PrometheusInstances &) = default ;
        PrometheusInstances& operator=(PrometheusInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          // The tag key.
          shared_ptr<string> tagKey_ {};
          // The tag value.
          shared_ptr<string> tagValue_ {};
        };

        virtual bool empty() const override { return this->authToken_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->grafanaInstanceId_ == nullptr && this->httpApiInterUrl_ == nullptr
        && this->httpApiIntraUrl_ == nullptr && this->paymentType_ == nullptr && this->pushGatewayInterUrl_ == nullptr && this->pushGatewayIntraUrl_ == nullptr && this->regionId_ == nullptr
        && this->remoteReadInterUrl_ == nullptr && this->remoteReadIntraUrl_ == nullptr && this->remoteWriteInterUrl_ == nullptr && this->remoteWriteIntraUrl_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceType_ == nullptr && this->securityGroupId_ == nullptr && this->subClustersJson_ == nullptr && this->tags_ == nullptr && this->userId_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // authToken Field Functions 
        bool hasAuthToken() const { return this->authToken_ != nullptr;};
        void deleteAuthToken() { this->authToken_ = nullptr;};
        inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
        inline PrometheusInstances& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline PrometheusInstances& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterName Field Functions 
        bool hasClusterName() const { return this->clusterName_ != nullptr;};
        void deleteClusterName() { this->clusterName_ = nullptr;};
        inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
        inline PrometheusInstances& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


        // clusterType Field Functions 
        bool hasClusterType() const { return this->clusterType_ != nullptr;};
        void deleteClusterType() { this->clusterType_ = nullptr;};
        inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
        inline PrometheusInstances& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


        // grafanaInstanceId Field Functions 
        bool hasGrafanaInstanceId() const { return this->grafanaInstanceId_ != nullptr;};
        void deleteGrafanaInstanceId() { this->grafanaInstanceId_ = nullptr;};
        inline string getGrafanaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceId_, "") };
        inline PrometheusInstances& setGrafanaInstanceId(string grafanaInstanceId) { DARABONBA_PTR_SET_VALUE(grafanaInstanceId_, grafanaInstanceId) };


        // httpApiInterUrl Field Functions 
        bool hasHttpApiInterUrl() const { return this->httpApiInterUrl_ != nullptr;};
        void deleteHttpApiInterUrl() { this->httpApiInterUrl_ = nullptr;};
        inline string getHttpApiInterUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiInterUrl_, "") };
        inline PrometheusInstances& setHttpApiInterUrl(string httpApiInterUrl) { DARABONBA_PTR_SET_VALUE(httpApiInterUrl_, httpApiInterUrl) };


        // httpApiIntraUrl Field Functions 
        bool hasHttpApiIntraUrl() const { return this->httpApiIntraUrl_ != nullptr;};
        void deleteHttpApiIntraUrl() { this->httpApiIntraUrl_ = nullptr;};
        inline string getHttpApiIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiIntraUrl_, "") };
        inline PrometheusInstances& setHttpApiIntraUrl(string httpApiIntraUrl) { DARABONBA_PTR_SET_VALUE(httpApiIntraUrl_, httpApiIntraUrl) };


        // paymentType Field Functions 
        bool hasPaymentType() const { return this->paymentType_ != nullptr;};
        void deletePaymentType() { this->paymentType_ = nullptr;};
        inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
        inline PrometheusInstances& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


        // pushGatewayInterUrl Field Functions 
        bool hasPushGatewayInterUrl() const { return this->pushGatewayInterUrl_ != nullptr;};
        void deletePushGatewayInterUrl() { this->pushGatewayInterUrl_ = nullptr;};
        inline string getPushGatewayInterUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayInterUrl_, "") };
        inline PrometheusInstances& setPushGatewayInterUrl(string pushGatewayInterUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayInterUrl_, pushGatewayInterUrl) };


        // pushGatewayIntraUrl Field Functions 
        bool hasPushGatewayIntraUrl() const { return this->pushGatewayIntraUrl_ != nullptr;};
        void deletePushGatewayIntraUrl() { this->pushGatewayIntraUrl_ = nullptr;};
        inline string getPushGatewayIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayIntraUrl_, "") };
        inline PrometheusInstances& setPushGatewayIntraUrl(string pushGatewayIntraUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayIntraUrl_, pushGatewayIntraUrl) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline PrometheusInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // remoteReadInterUrl Field Functions 
        bool hasRemoteReadInterUrl() const { return this->remoteReadInterUrl_ != nullptr;};
        void deleteRemoteReadInterUrl() { this->remoteReadInterUrl_ = nullptr;};
        inline string getRemoteReadInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadInterUrl_, "") };
        inline PrometheusInstances& setRemoteReadInterUrl(string remoteReadInterUrl) { DARABONBA_PTR_SET_VALUE(remoteReadInterUrl_, remoteReadInterUrl) };


        // remoteReadIntraUrl Field Functions 
        bool hasRemoteReadIntraUrl() const { return this->remoteReadIntraUrl_ != nullptr;};
        void deleteRemoteReadIntraUrl() { this->remoteReadIntraUrl_ = nullptr;};
        inline string getRemoteReadIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadIntraUrl_, "") };
        inline PrometheusInstances& setRemoteReadIntraUrl(string remoteReadIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteReadIntraUrl_, remoteReadIntraUrl) };


        // remoteWriteInterUrl Field Functions 
        bool hasRemoteWriteInterUrl() const { return this->remoteWriteInterUrl_ != nullptr;};
        void deleteRemoteWriteInterUrl() { this->remoteWriteInterUrl_ = nullptr;};
        inline string getRemoteWriteInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteInterUrl_, "") };
        inline PrometheusInstances& setRemoteWriteInterUrl(string remoteWriteInterUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteInterUrl_, remoteWriteInterUrl) };


        // remoteWriteIntraUrl Field Functions 
        bool hasRemoteWriteIntraUrl() const { return this->remoteWriteIntraUrl_ != nullptr;};
        void deleteRemoteWriteIntraUrl() { this->remoteWriteIntraUrl_ = nullptr;};
        inline string getRemoteWriteIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteIntraUrl_, "") };
        inline PrometheusInstances& setRemoteWriteIntraUrl(string remoteWriteIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteIntraUrl_, remoteWriteIntraUrl) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline PrometheusInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline PrometheusInstances& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline PrometheusInstances& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // subClustersJson Field Functions 
        bool hasSubClustersJson() const { return this->subClustersJson_ != nullptr;};
        void deleteSubClustersJson() { this->subClustersJson_ = nullptr;};
        inline string getSubClustersJson() const { DARABONBA_PTR_GET_DEFAULT(subClustersJson_, "") };
        inline PrometheusInstances& setSubClustersJson(string subClustersJson) { DARABONBA_PTR_SET_VALUE(subClustersJson_, subClustersJson) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<PrometheusInstances::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<PrometheusInstances::Tags>) };
        inline vector<PrometheusInstances::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<PrometheusInstances::Tags>) };
        inline PrometheusInstances& setTags(const vector<PrometheusInstances::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline PrometheusInstances& setTags(vector<PrometheusInstances::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline PrometheusInstances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline PrometheusInstances& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline PrometheusInstances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The authorization token.
        shared_ptr<string> authToken_ {};
        // The ID of the Prometheus instance.
        shared_ptr<string> clusterId_ {};
        // The name of the Prometheus instance.
        shared_ptr<string> clusterName_ {};
        // The instance type. Valid values:
        // 
        // *   remote-write: Prometheus instance for Remote Write
        // *   ecs: Prometheus instances for ECS
        // *   cloud-monitor: Prometheus instance for Alibaba Cloud services in the Chinese mainland
        // *   cloud-product: Prometheus instance for Alibaba Cloud services outside the Chinese mainland
        // *   global-view: global aggregation instance
        // *   aliyun-cs: Prometheus instance for Container Service
        shared_ptr<string> clusterType_ {};
        // The ID of the Grafana workspace.
        shared_ptr<string> grafanaInstanceId_ {};
        // The public URL for the HTTP API.
        shared_ptr<string> httpApiInterUrl_ {};
        // The internal URL for the HTTP API.
        shared_ptr<string> httpApiIntraUrl_ {};
        // The billing method. Valid values:
        // 
        // *   PREPAY: subscription
        // *   POSTPAY: pay-as-you-go
        shared_ptr<string> paymentType_ {};
        // The public URL for Pushgateway.
        shared_ptr<string> pushGatewayInterUrl_ {};
        // The internal URL for Pushgateway.
        shared_ptr<string> pushGatewayIntraUrl_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The public URL for remote read.
        shared_ptr<string> remoteReadInterUrl_ {};
        // The internal URL for remote read.
        shared_ptr<string> remoteReadIntraUrl_ {};
        // The public URL for remote write.
        shared_ptr<string> remoteWriteInterUrl_ {};
        // The internal URL for remote write.
        shared_ptr<string> remoteWriteIntraUrl_ {};
        // The ID of the resource group to which the Prometheus instance belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
        // The ID of the security group.
        shared_ptr<string> securityGroupId_ {};
        // The child instances of the global aggregation instance. The value is a JSON string.
        shared_ptr<string> subClustersJson_ {};
        // The list of tags.
        shared_ptr<vector<PrometheusInstances::Tags>> tags_ {};
        // The ID of the user.
        shared_ptr<string> userId_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
        // The ID of the virtual private cloud (VPC).
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->prometheusInstances_ == nullptr; };
      // prometheusInstances Field Functions 
      bool hasPrometheusInstances() const { return this->prometheusInstances_ != nullptr;};
      void deletePrometheusInstances() { this->prometheusInstances_ = nullptr;};
      inline const vector<Data::PrometheusInstances> & getPrometheusInstances() const { DARABONBA_PTR_GET_CONST(prometheusInstances_, vector<Data::PrometheusInstances>) };
      inline vector<Data::PrometheusInstances> getPrometheusInstances() { DARABONBA_PTR_GET(prometheusInstances_, vector<Data::PrometheusInstances>) };
      inline Data& setPrometheusInstances(const vector<Data::PrometheusInstances> & prometheusInstances) { DARABONBA_PTR_SET_VALUE(prometheusInstances_, prometheusInstances) };
      inline Data& setPrometheusInstances(vector<Data::PrometheusInstances> && prometheusInstances) { DARABONBA_PTR_SET_RVALUE(prometheusInstances_, prometheusInstances) };


    protected:
      // The queried Prometheus instances.
      shared_ptr<vector<Data::PrometheusInstances>> prometheusInstances_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListPrometheusInstanceByTagAndResourceGroupIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListPrometheusInstanceByTagAndResourceGroupIdResponseBody::Data) };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListPrometheusInstanceByTagAndResourceGroupIdResponseBody::Data) };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBody& setData(const ListPrometheusInstanceByTagAndResourceGroupIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBody& setData(ListPrometheusInstanceByTagAndResourceGroupIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed.
    shared_ptr<string> code_ {};
    // The returned struct.
    shared_ptr<ListPrometheusInstanceByTagAndResourceGroupIdResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
