// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrafficPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayServiceDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayServiceDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayServiceDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetGatewayServiceDetailResponseBody() = default ;
    GetGatewayServiceDetailResponseBody(const GetGatewayServiceDetailResponseBody &) = default ;
    GetGatewayServiceDetailResponseBody(GetGatewayServiceDetailResponseBody &&) = default ;
    GetGatewayServiceDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayServiceDetailResponseBody() = default ;
    GetGatewayServiceDetailResponseBody& operator=(const GetGatewayServiceDetailResponseBody &) = default ;
    GetGatewayServiceDetailResponseBody& operator=(GetGatewayServiceDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DnsServerList, dnsServerList_);
        DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(GatewayTrafficPolicy, gatewayTrafficPolicy_);
        DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
        DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Ips, ips_);
        DARABONBA_PTR_TO_JSON(LabelDetails, labelDetails_);
        DARABONBA_PTR_TO_JSON(MetaInfo, metaInfo_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(PortTrafficPolicyList, portTrafficPolicyList_);
        DARABONBA_PTR_TO_JSON(Ports, ports_);
        DARABONBA_PTR_TO_JSON(ServiceFQDN, serviceFQDN_);
        DARABONBA_PTR_TO_JSON(ServiceNameInRegistry, serviceNameInRegistry_);
        DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
        DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(VersionDetails, versionDetails_);
        DARABONBA_PTR_TO_JSON(Versions, versions_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DnsServerList, dnsServerList_);
        DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(GatewayTrafficPolicy, gatewayTrafficPolicy_);
        DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
        DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Ips, ips_);
        DARABONBA_PTR_FROM_JSON(LabelDetails, labelDetails_);
        DARABONBA_PTR_FROM_JSON(MetaInfo, metaInfo_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(PortTrafficPolicyList, portTrafficPolicyList_);
        DARABONBA_PTR_FROM_JSON(Ports, ports_);
        DARABONBA_PTR_FROM_JSON(ServiceFQDN, serviceFQDN_);
        DARABONBA_PTR_FROM_JSON(ServiceNameInRegistry, serviceNameInRegistry_);
        DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
        DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(VersionDetails, versionDetails_);
        DARABONBA_PTR_FROM_JSON(Versions, versions_);
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
      class Versions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Versions& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Versions& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Versions() = default ;
        Versions(const Versions &) = default ;
        Versions(Versions &&) = default ;
        Versions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Versions() = default ;
        Versions& operator=(const Versions &) = default ;
        Versions& operator=(Versions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Versions& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Versions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Versions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag.
        shared_ptr<string> label_ {};
        // The type.
        shared_ptr<string> type_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class VersionDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VersionDetails& obj) { 
          DARABONBA_PTR_TO_JSON(EndpointNum, endpointNum_);
          DARABONBA_PTR_TO_JSON(EndpointNumPercent, endpointNumPercent_);
          DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
        };
        friend void from_json(const Darabonba::Json& j, VersionDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(EndpointNum, endpointNum_);
          DARABONBA_PTR_FROM_JSON(EndpointNumPercent, endpointNumPercent_);
          DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
        };
        VersionDetails() = default ;
        VersionDetails(const VersionDetails &) = default ;
        VersionDetails(VersionDetails &&) = default ;
        VersionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VersionDetails() = default ;
        VersionDetails& operator=(const VersionDetails &) = default ;
        VersionDetails& operator=(VersionDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServiceVersion : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServiceVersion& obj) { 
            DARABONBA_PTR_TO_JSON(Labels, labels_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ServiceVersion& obj) { 
            DARABONBA_PTR_FROM_JSON(Labels, labels_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          ServiceVersion() = default ;
          ServiceVersion(const ServiceVersion &) = default ;
          ServiceVersion(ServiceVersion &&) = default ;
          ServiceVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServiceVersion() = default ;
          ServiceVersion& operator=(const ServiceVersion &) = default ;
          ServiceVersion& operator=(ServiceVersion &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Labels : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Labels& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Labels& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Labels() = default ;
            Labels(const Labels &) = default ;
            Labels(Labels &&) = default ;
            Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Labels() = default ;
            Labels& operator=(const Labels &) = default ;
            Labels& operator=(Labels &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag.
            shared_ptr<string> key_ {};
            // The tag value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->labels_ == nullptr
        && this->name_ == nullptr; };
          // labels Field Functions 
          bool hasLabels() const { return this->labels_ != nullptr;};
          void deleteLabels() { this->labels_ = nullptr;};
          inline const vector<ServiceVersion::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<ServiceVersion::Labels>) };
          inline vector<ServiceVersion::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<ServiceVersion::Labels>) };
          inline ServiceVersion& setLabels(const vector<ServiceVersion::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
          inline ServiceVersion& setLabels(vector<ServiceVersion::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ServiceVersion& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The tag.
          shared_ptr<vector<ServiceVersion::Labels>> labels_ {};
          // The version number.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->endpointNum_ == nullptr
        && this->endpointNumPercent_ == nullptr && this->serviceVersion_ == nullptr; };
        // endpointNum Field Functions 
        bool hasEndpointNum() const { return this->endpointNum_ != nullptr;};
        void deleteEndpointNum() { this->endpointNum_ = nullptr;};
        inline int32_t getEndpointNum() const { DARABONBA_PTR_GET_DEFAULT(endpointNum_, 0) };
        inline VersionDetails& setEndpointNum(int32_t endpointNum) { DARABONBA_PTR_SET_VALUE(endpointNum_, endpointNum) };


        // endpointNumPercent Field Functions 
        bool hasEndpointNumPercent() const { return this->endpointNumPercent_ != nullptr;};
        void deleteEndpointNumPercent() { this->endpointNumPercent_ = nullptr;};
        inline string getEndpointNumPercent() const { DARABONBA_PTR_GET_DEFAULT(endpointNumPercent_, "") };
        inline VersionDetails& setEndpointNumPercent(string endpointNumPercent) { DARABONBA_PTR_SET_VALUE(endpointNumPercent_, endpointNumPercent) };


        // serviceVersion Field Functions 
        bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
        void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
        inline const VersionDetails::ServiceVersion & getServiceVersion() const { DARABONBA_PTR_GET_CONST(serviceVersion_, VersionDetails::ServiceVersion) };
        inline VersionDetails::ServiceVersion getServiceVersion() { DARABONBA_PTR_GET(serviceVersion_, VersionDetails::ServiceVersion) };
        inline VersionDetails& setServiceVersion(const VersionDetails::ServiceVersion & serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };
        inline VersionDetails& setServiceVersion(VersionDetails::ServiceVersion && serviceVersion) { DARABONBA_PTR_SET_RVALUE(serviceVersion_, serviceVersion) };


      protected:
        // The number of instances.
        shared_ptr<int32_t> endpointNum_ {};
        // The percentage of instances.
        shared_ptr<string> endpointNumPercent_ {};
        // The service version.
        shared_ptr<VersionDetails::ServiceVersion> serviceVersion_ {};
      };

      class PortTrafficPolicyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PortTrafficPolicyList& obj) { 
          DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
          DARABONBA_PTR_TO_JSON(TrafficPolicy, trafficPolicy_);
        };
        friend void from_json(const Darabonba::Json& j, PortTrafficPolicyList& obj) { 
          DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
          DARABONBA_PTR_FROM_JSON(TrafficPolicy, trafficPolicy_);
        };
        PortTrafficPolicyList() = default ;
        PortTrafficPolicyList(const PortTrafficPolicyList &) = default ;
        PortTrafficPolicyList(PortTrafficPolicyList &&) = default ;
        PortTrafficPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PortTrafficPolicyList() = default ;
        PortTrafficPolicyList& operator=(const PortTrafficPolicyList &) = default ;
        PortTrafficPolicyList& operator=(PortTrafficPolicyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gatewayUniqueId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->serviceId_ == nullptr && this->servicePort_ == nullptr
        && this->trafficPolicy_ == nullptr; };
        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline PortTrafficPolicyList& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline PortTrafficPolicyList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline PortTrafficPolicyList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline PortTrafficPolicyList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
        inline PortTrafficPolicyList& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // servicePort Field Functions 
        bool hasServicePort() const { return this->servicePort_ != nullptr;};
        void deleteServicePort() { this->servicePort_ = nullptr;};
        inline int32_t getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
        inline PortTrafficPolicyList& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


        // trafficPolicy Field Functions 
        bool hasTrafficPolicy() const { return this->trafficPolicy_ != nullptr;};
        void deleteTrafficPolicy() { this->trafficPolicy_ = nullptr;};
        inline const TrafficPolicy & getTrafficPolicy() const { DARABONBA_PTR_GET_CONST(trafficPolicy_, TrafficPolicy) };
        inline TrafficPolicy getTrafficPolicy() { DARABONBA_PTR_GET(trafficPolicy_, TrafficPolicy) };
        inline PortTrafficPolicyList& setTrafficPolicy(const TrafficPolicy & trafficPolicy) { DARABONBA_PTR_SET_VALUE(trafficPolicy_, trafficPolicy) };
        inline PortTrafficPolicyList& setTrafficPolicy(TrafficPolicy && trafficPolicy) { DARABONBA_PTR_SET_RVALUE(trafficPolicy_, trafficPolicy) };


      protected:
        // The unique ID of the gateway.
        shared_ptr<string> gatewayUniqueId_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The modification time.
        shared_ptr<string> gmtModified_ {};
        // The port ID.
        shared_ptr<int64_t> id_ {};
        // The service ID.
        shared_ptr<int64_t> serviceId_ {};
        // The service port number.
        shared_ptr<int32_t> servicePort_ {};
        // The traffic policy.
        shared_ptr<TrafficPolicy> trafficPolicy_ {};
      };

      class LabelDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LabelDetails& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, LabelDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        LabelDetails() = default ;
        LabelDetails(const LabelDetails &) = default ;
        LabelDetails(LabelDetails &&) = default ;
        LabelDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LabelDetails() = default ;
        LabelDetails& operator=(const LabelDetails &) = default ;
        LabelDetails& operator=(LabelDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->values_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline LabelDetails& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline LabelDetails& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline LabelDetails& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The tag.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<vector<string>> values_ {};
      };

      virtual bool empty() const override { return this->dnsServerList_ == nullptr
        && this->gatewayId_ == nullptr && this->gatewayTrafficPolicy_ == nullptr && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->groupName_ == nullptr && this->healthCheck_ == nullptr && this->healthStatus_ == nullptr && this->id_ == nullptr && this->ips_ == nullptr
        && this->labelDetails_ == nullptr && this->metaInfo_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->portTrafficPolicyList_ == nullptr
        && this->ports_ == nullptr && this->serviceFQDN_ == nullptr && this->serviceNameInRegistry_ == nullptr && this->servicePort_ == nullptr && this->serviceProtocol_ == nullptr
        && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->versionDetails_ == nullptr && this->versions_ == nullptr; };
      // dnsServerList Field Functions 
      bool hasDnsServerList() const { return this->dnsServerList_ != nullptr;};
      void deleteDnsServerList() { this->dnsServerList_ = nullptr;};
      inline const vector<string> & getDnsServerList() const { DARABONBA_PTR_GET_CONST(dnsServerList_, vector<string>) };
      inline vector<string> getDnsServerList() { DARABONBA_PTR_GET(dnsServerList_, vector<string>) };
      inline Data& setDnsServerList(const vector<string> & dnsServerList) { DARABONBA_PTR_SET_VALUE(dnsServerList_, dnsServerList) };
      inline Data& setDnsServerList(vector<string> && dnsServerList) { DARABONBA_PTR_SET_RVALUE(dnsServerList_, dnsServerList) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
      inline Data& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // gatewayTrafficPolicy Field Functions 
      bool hasGatewayTrafficPolicy() const { return this->gatewayTrafficPolicy_ != nullptr;};
      void deleteGatewayTrafficPolicy() { this->gatewayTrafficPolicy_ = nullptr;};
      inline const TrafficPolicy & getGatewayTrafficPolicy() const { DARABONBA_PTR_GET_CONST(gatewayTrafficPolicy_, TrafficPolicy) };
      inline TrafficPolicy getGatewayTrafficPolicy() { DARABONBA_PTR_GET(gatewayTrafficPolicy_, TrafficPolicy) };
      inline Data& setGatewayTrafficPolicy(const TrafficPolicy & gatewayTrafficPolicy) { DARABONBA_PTR_SET_VALUE(gatewayTrafficPolicy_, gatewayTrafficPolicy) };
      inline Data& setGatewayTrafficPolicy(TrafficPolicy && gatewayTrafficPolicy) { DARABONBA_PTR_SET_RVALUE(gatewayTrafficPolicy_, gatewayTrafficPolicy) };


      // gatewayUniqueId Field Functions 
      bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
      void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
      inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
      inline Data& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Data& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // healthCheck Field Functions 
      bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
      void deleteHealthCheck() { this->healthCheck_ = nullptr;};
      inline string getHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
      inline Data& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


      // healthStatus Field Functions 
      bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
      void deleteHealthStatus() { this->healthStatus_ = nullptr;};
      inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
      inline Data& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ips Field Functions 
      bool hasIps() const { return this->ips_ != nullptr;};
      void deleteIps() { this->ips_ = nullptr;};
      inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
      inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
      inline Data& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
      inline Data& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


      // labelDetails Field Functions 
      bool hasLabelDetails() const { return this->labelDetails_ != nullptr;};
      void deleteLabelDetails() { this->labelDetails_ = nullptr;};
      inline const vector<Data::LabelDetails> & getLabelDetails() const { DARABONBA_PTR_GET_CONST(labelDetails_, vector<Data::LabelDetails>) };
      inline vector<Data::LabelDetails> getLabelDetails() { DARABONBA_PTR_GET(labelDetails_, vector<Data::LabelDetails>) };
      inline Data& setLabelDetails(const vector<Data::LabelDetails> & labelDetails) { DARABONBA_PTR_SET_VALUE(labelDetails_, labelDetails) };
      inline Data& setLabelDetails(vector<Data::LabelDetails> && labelDetails) { DARABONBA_PTR_SET_RVALUE(labelDetails_, labelDetails) };


      // metaInfo Field Functions 
      bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
      void deleteMetaInfo() { this->metaInfo_ = nullptr;};
      inline string getMetaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
      inline Data& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // portTrafficPolicyList Field Functions 
      bool hasPortTrafficPolicyList() const { return this->portTrafficPolicyList_ != nullptr;};
      void deletePortTrafficPolicyList() { this->portTrafficPolicyList_ = nullptr;};
      inline const vector<Data::PortTrafficPolicyList> & getPortTrafficPolicyList() const { DARABONBA_PTR_GET_CONST(portTrafficPolicyList_, vector<Data::PortTrafficPolicyList>) };
      inline vector<Data::PortTrafficPolicyList> getPortTrafficPolicyList() { DARABONBA_PTR_GET(portTrafficPolicyList_, vector<Data::PortTrafficPolicyList>) };
      inline Data& setPortTrafficPolicyList(const vector<Data::PortTrafficPolicyList> & portTrafficPolicyList) { DARABONBA_PTR_SET_VALUE(portTrafficPolicyList_, portTrafficPolicyList) };
      inline Data& setPortTrafficPolicyList(vector<Data::PortTrafficPolicyList> && portTrafficPolicyList) { DARABONBA_PTR_SET_RVALUE(portTrafficPolicyList_, portTrafficPolicyList) };


      // ports Field Functions 
      bool hasPorts() const { return this->ports_ != nullptr;};
      void deletePorts() { this->ports_ = nullptr;};
      inline const vector<int32_t> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<int32_t>) };
      inline vector<int32_t> getPorts() { DARABONBA_PTR_GET(ports_, vector<int32_t>) };
      inline Data& setPorts(const vector<int32_t> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
      inline Data& setPorts(vector<int32_t> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


      // serviceFQDN Field Functions 
      bool hasServiceFQDN() const { return this->serviceFQDN_ != nullptr;};
      void deleteServiceFQDN() { this->serviceFQDN_ = nullptr;};
      inline string getServiceFQDN() const { DARABONBA_PTR_GET_DEFAULT(serviceFQDN_, "") };
      inline Data& setServiceFQDN(string serviceFQDN) { DARABONBA_PTR_SET_VALUE(serviceFQDN_, serviceFQDN) };


      // serviceNameInRegistry Field Functions 
      bool hasServiceNameInRegistry() const { return this->serviceNameInRegistry_ != nullptr;};
      void deleteServiceNameInRegistry() { this->serviceNameInRegistry_ = nullptr;};
      inline string getServiceNameInRegistry() const { DARABONBA_PTR_GET_DEFAULT(serviceNameInRegistry_, "") };
      inline Data& setServiceNameInRegistry(string serviceNameInRegistry) { DARABONBA_PTR_SET_VALUE(serviceNameInRegistry_, serviceNameInRegistry) };


      // servicePort Field Functions 
      bool hasServicePort() const { return this->servicePort_ != nullptr;};
      void deleteServicePort() { this->servicePort_ = nullptr;};
      inline int32_t getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
      inline Data& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


      // serviceProtocol Field Functions 
      bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
      void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
      inline string getServiceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
      inline Data& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline int64_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
      inline Data& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Data& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // versionDetails Field Functions 
      bool hasVersionDetails() const { return this->versionDetails_ != nullptr;};
      void deleteVersionDetails() { this->versionDetails_ = nullptr;};
      inline const vector<Data::VersionDetails> & getVersionDetails() const { DARABONBA_PTR_GET_CONST(versionDetails_, vector<Data::VersionDetails>) };
      inline vector<Data::VersionDetails> getVersionDetails() { DARABONBA_PTR_GET(versionDetails_, vector<Data::VersionDetails>) };
      inline Data& setVersionDetails(const vector<Data::VersionDetails> & versionDetails) { DARABONBA_PTR_SET_VALUE(versionDetails_, versionDetails) };
      inline Data& setVersionDetails(vector<Data::VersionDetails> && versionDetails) { DARABONBA_PTR_SET_RVALUE(versionDetails_, versionDetails) };


      // versions Field Functions 
      bool hasVersions() const { return this->versions_ != nullptr;};
      void deleteVersions() { this->versions_ = nullptr;};
      inline const vector<Data::Versions> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Data::Versions>) };
      inline vector<Data::Versions> getVersions() { DARABONBA_PTR_GET(versions_, vector<Data::Versions>) };
      inline Data& setVersions(const vector<Data::Versions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
      inline Data& setVersions(vector<Data::Versions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


    protected:
      shared_ptr<vector<string>> dnsServerList_ {};
      // The ID of the gateway.
      shared_ptr<int64_t> gatewayId_ {};
      // The traffic policy of the service.
      shared_ptr<TrafficPolicy> gatewayTrafficPolicy_ {};
      // The unique ID of the gateway.
      shared_ptr<string> gatewayUniqueId_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The last modification time.
      shared_ptr<string> gmtModified_ {};
      // The name of the group.
      shared_ptr<string> groupName_ {};
      // Indicates whether the health check is enabled.
      shared_ptr<string> healthCheck_ {};
      // The status of the health check. Valid values:
      shared_ptr<string> healthStatus_ {};
      // The ID of the service.
      shared_ptr<int64_t> id_ {};
      // The IP address of the service.
      shared_ptr<vector<string>> ips_ {};
      // The details of the tag.
      shared_ptr<vector<Data::LabelDetails>> labelDetails_ {};
      // The basic information about the service.
      shared_ptr<string> metaInfo_ {};
      // The name of the service.
      shared_ptr<string> name_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The traffic policy of service ports.
      shared_ptr<vector<Data::PortTrafficPolicyList>> portTrafficPolicyList_ {};
      // The array of service ports.
      shared_ptr<vector<int32_t>> ports_ {};
      shared_ptr<string> serviceFQDN_ {};
      // The name of the service registered with the service registry.
      shared_ptr<string> serviceNameInRegistry_ {};
      shared_ptr<int32_t> servicePort_ {};
      // The protocol of the service.
      shared_ptr<string> serviceProtocol_ {};
      // The ID of the service source.
      shared_ptr<int64_t> sourceId_ {};
      // The source type of the service.
      shared_ptr<string> sourceType_ {};
      // The details of versions.
      shared_ptr<vector<Data::VersionDetails>> versionDetails_ {};
      // The service version. This parameter is deprecated.
      shared_ptr<vector<Data::Versions>> versions_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetGatewayServiceDetailResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGatewayServiceDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGatewayServiceDetailResponseBody::Data) };
    inline GetGatewayServiceDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGatewayServiceDetailResponseBody::Data) };
    inline GetGatewayServiceDetailResponseBody& setData(const GetGatewayServiceDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGatewayServiceDetailResponseBody& setData(GetGatewayServiceDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetGatewayServiceDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGatewayServiceDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGatewayServiceDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetGatewayServiceDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code returned.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<GetGatewayServiceDetailResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
