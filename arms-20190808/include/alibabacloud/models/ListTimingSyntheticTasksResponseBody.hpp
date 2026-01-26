// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListTimingSyntheticTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTimingSyntheticTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTimingSyntheticTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTimingSyntheticTasksResponseBody() = default ;
    ListTimingSyntheticTasksResponseBody(const ListTimingSyntheticTasksResponseBody &) = default ;
    ListTimingSyntheticTasksResponseBody(ListTimingSyntheticTasksResponseBody &&) = default ;
    ListTimingSyntheticTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTimingSyntheticTasksResponseBody() = default ;
    ListTimingSyntheticTasksResponseBody& operator=(const ListTimingSyntheticTasksResponseBody &) = default ;
    ListTimingSyntheticTasksResponseBody& operator=(ListTimingSyntheticTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(CommonSetting, commonSetting_);
          DARABONBA_PTR_TO_JSON(Frequency, frequency_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(MonitorCategory, monitorCategory_);
          DARABONBA_PTR_TO_JSON(MonitorNum, monitorNum_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(CommonSetting, commonSetting_);
          DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(MonitorCategory, monitorCategory_);
          DARABONBA_PTR_FROM_JSON(MonitorNum, monitorNum_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
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
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The tag key.
          shared_ptr<string> key_ {};
          // The tag value.
          shared_ptr<string> value_ {};
        };

        class CommonSetting : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CommonSetting& obj) { 
            DARABONBA_PTR_TO_JSON(CustomHost, customHost_);
            DARABONBA_PTR_TO_JSON(CustomPrometheusSetting, customPrometheusSetting_);
            DARABONBA_PTR_TO_JSON(CustomVPCSetting, customVPCSetting_);
            DARABONBA_PTR_TO_JSON(IpType, ipType_);
            DARABONBA_PTR_TO_JSON(IsOpenTrace, isOpenTrace_);
            DARABONBA_PTR_TO_JSON(MonitorSamples, monitorSamples_);
            DARABONBA_PTR_TO_JSON(TraceClientType, traceClientType_);
            DARABONBA_PTR_TO_JSON(XtraceRegion, xtraceRegion_);
          };
          friend void from_json(const Darabonba::Json& j, CommonSetting& obj) { 
            DARABONBA_PTR_FROM_JSON(CustomHost, customHost_);
            DARABONBA_PTR_FROM_JSON(CustomPrometheusSetting, customPrometheusSetting_);
            DARABONBA_PTR_FROM_JSON(CustomVPCSetting, customVPCSetting_);
            DARABONBA_PTR_FROM_JSON(IpType, ipType_);
            DARABONBA_PTR_FROM_JSON(IsOpenTrace, isOpenTrace_);
            DARABONBA_PTR_FROM_JSON(MonitorSamples, monitorSamples_);
            DARABONBA_PTR_FROM_JSON(TraceClientType, traceClientType_);
            DARABONBA_PTR_FROM_JSON(XtraceRegion, xtraceRegion_);
          };
          CommonSetting() = default ;
          CommonSetting(const CommonSetting &) = default ;
          CommonSetting(CommonSetting &&) = default ;
          CommonSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CommonSetting() = default ;
          CommonSetting& operator=(const CommonSetting &) = default ;
          CommonSetting& operator=(CommonSetting &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CustomVPCSetting : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CustomVPCSetting& obj) { 
              DARABONBA_PTR_TO_JSON(RegionId, regionId_);
              DARABONBA_PTR_TO_JSON(SecureGroupId, secureGroupId_);
              DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
              DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
            };
            friend void from_json(const Darabonba::Json& j, CustomVPCSetting& obj) { 
              DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
              DARABONBA_PTR_FROM_JSON(SecureGroupId, secureGroupId_);
              DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
              DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
            };
            CustomVPCSetting() = default ;
            CustomVPCSetting(const CustomVPCSetting &) = default ;
            CustomVPCSetting(CustomVPCSetting &&) = default ;
            CustomVPCSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CustomVPCSetting() = default ;
            CustomVPCSetting& operator=(const CustomVPCSetting &) = default ;
            CustomVPCSetting& operator=(CustomVPCSetting &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->regionId_ == nullptr
        && this->secureGroupId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
            // regionId Field Functions 
            bool hasRegionId() const { return this->regionId_ != nullptr;};
            void deleteRegionId() { this->regionId_ = nullptr;};
            inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
            inline CustomVPCSetting& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


            // secureGroupId Field Functions 
            bool hasSecureGroupId() const { return this->secureGroupId_ != nullptr;};
            void deleteSecureGroupId() { this->secureGroupId_ = nullptr;};
            inline string getSecureGroupId() const { DARABONBA_PTR_GET_DEFAULT(secureGroupId_, "") };
            inline CustomVPCSetting& setSecureGroupId(string secureGroupId) { DARABONBA_PTR_SET_VALUE(secureGroupId_, secureGroupId) };


            // vSwitchId Field Functions 
            bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
            void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
            inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
            inline CustomVPCSetting& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


            // vpcId Field Functions 
            bool hasVpcId() const { return this->vpcId_ != nullptr;};
            void deleteVpcId() { this->vpcId_ = nullptr;};
            inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
            inline CustomVPCSetting& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


          protected:
            // The region ID.
            shared_ptr<string> regionId_ {};
            // The ID of the security group to which the client belongs. The security group specifies the inbound and outbound rules of the client for the VPC. You need to allow the security group to which the client belongs to access the security group to which the VPC belongs. Otherwise, the client cannot access resources in the VPC.
            shared_ptr<string> secureGroupId_ {};
            // The vSwitch ID.
            shared_ptr<string> vSwitchId_ {};
            // The VPC ID.
            shared_ptr<string> vpcId_ {};
          };

          class CustomPrometheusSetting : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CustomPrometheusSetting& obj) { 
              DARABONBA_PTR_TO_JSON(PrometheusClusterId, prometheusClusterId_);
              DARABONBA_PTR_TO_JSON(PrometheusClusterRegion, prometheusClusterRegion_);
              DARABONBA_PTR_TO_JSON(PrometheusLabels, prometheusLabels_);
            };
            friend void from_json(const Darabonba::Json& j, CustomPrometheusSetting& obj) { 
              DARABONBA_PTR_FROM_JSON(PrometheusClusterId, prometheusClusterId_);
              DARABONBA_PTR_FROM_JSON(PrometheusClusterRegion, prometheusClusterRegion_);
              DARABONBA_PTR_FROM_JSON(PrometheusLabels, prometheusLabels_);
            };
            CustomPrometheusSetting() = default ;
            CustomPrometheusSetting(const CustomPrometheusSetting &) = default ;
            CustomPrometheusSetting(CustomPrometheusSetting &&) = default ;
            CustomPrometheusSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CustomPrometheusSetting() = default ;
            CustomPrometheusSetting& operator=(const CustomPrometheusSetting &) = default ;
            CustomPrometheusSetting& operator=(CustomPrometheusSetting &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->prometheusClusterId_ == nullptr
        && this->prometheusClusterRegion_ == nullptr && this->prometheusLabels_ == nullptr; };
            // prometheusClusterId Field Functions 
            bool hasPrometheusClusterId() const { return this->prometheusClusterId_ != nullptr;};
            void deletePrometheusClusterId() { this->prometheusClusterId_ = nullptr;};
            inline string getPrometheusClusterId() const { DARABONBA_PTR_GET_DEFAULT(prometheusClusterId_, "") };
            inline CustomPrometheusSetting& setPrometheusClusterId(string prometheusClusterId) { DARABONBA_PTR_SET_VALUE(prometheusClusterId_, prometheusClusterId) };


            // prometheusClusterRegion Field Functions 
            bool hasPrometheusClusterRegion() const { return this->prometheusClusterRegion_ != nullptr;};
            void deletePrometheusClusterRegion() { this->prometheusClusterRegion_ = nullptr;};
            inline string getPrometheusClusterRegion() const { DARABONBA_PTR_GET_DEFAULT(prometheusClusterRegion_, "") };
            inline CustomPrometheusSetting& setPrometheusClusterRegion(string prometheusClusterRegion) { DARABONBA_PTR_SET_VALUE(prometheusClusterRegion_, prometheusClusterRegion) };


            // prometheusLabels Field Functions 
            bool hasPrometheusLabels() const { return this->prometheusLabels_ != nullptr;};
            void deletePrometheusLabels() { this->prometheusLabels_ = nullptr;};
            inline const map<string, string> & getPrometheusLabels() const { DARABONBA_PTR_GET_CONST(prometheusLabels_, map<string, string>) };
            inline map<string, string> getPrometheusLabels() { DARABONBA_PTR_GET(prometheusLabels_, map<string, string>) };
            inline CustomPrometheusSetting& setPrometheusLabels(const map<string, string> & prometheusLabels) { DARABONBA_PTR_SET_VALUE(prometheusLabels_, prometheusLabels) };
            inline CustomPrometheusSetting& setPrometheusLabels(map<string, string> && prometheusLabels) { DARABONBA_PTR_SET_RVALUE(prometheusLabels_, prometheusLabels) };


          protected:
            // A reserved field.
            shared_ptr<string> prometheusClusterId_ {};
            // A reserved field.
            shared_ptr<string> prometheusClusterRegion_ {};
            // A reserved field.
            shared_ptr<map<string, string>> prometheusLabels_ {};
          };

          class CustomHost : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CustomHost& obj) { 
              DARABONBA_PTR_TO_JSON(Hosts, hosts_);
              DARABONBA_PTR_TO_JSON(SelectType, selectType_);
            };
            friend void from_json(const Darabonba::Json& j, CustomHost& obj) { 
              DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
              DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
            };
            CustomHost() = default ;
            CustomHost(const CustomHost &) = default ;
            CustomHost(CustomHost &&) = default ;
            CustomHost(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CustomHost() = default ;
            CustomHost& operator=(const CustomHost &) = default ;
            CustomHost& operator=(CustomHost &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Hosts : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Hosts& obj) { 
                DARABONBA_PTR_TO_JSON(Domain, domain_);
                DARABONBA_PTR_TO_JSON(IpType, ipType_);
                DARABONBA_PTR_TO_JSON(Ips, ips_);
              };
              friend void from_json(const Darabonba::Json& j, Hosts& obj) { 
                DARABONBA_PTR_FROM_JSON(Domain, domain_);
                DARABONBA_PTR_FROM_JSON(IpType, ipType_);
                DARABONBA_PTR_FROM_JSON(Ips, ips_);
              };
              Hosts() = default ;
              Hosts(const Hosts &) = default ;
              Hosts(Hosts &&) = default ;
              Hosts(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Hosts() = default ;
              Hosts& operator=(const Hosts &) = default ;
              Hosts& operator=(Hosts &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->domain_ == nullptr
        && this->ipType_ == nullptr && this->ips_ == nullptr; };
              // domain Field Functions 
              bool hasDomain() const { return this->domain_ != nullptr;};
              void deleteDomain() { this->domain_ = nullptr;};
              inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
              inline Hosts& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


              // ipType Field Functions 
              bool hasIpType() const { return this->ipType_ != nullptr;};
              void deleteIpType() { this->ipType_ = nullptr;};
              inline int32_t getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, 0) };
              inline Hosts& setIpType(int32_t ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


              // ips Field Functions 
              bool hasIps() const { return this->ips_ != nullptr;};
              void deleteIps() { this->ips_ = nullptr;};
              inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
              inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
              inline Hosts& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
              inline Hosts& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


            protected:
              // The destination domain name.
              shared_ptr<string> domain_ {};
              // The IP version. Valid values:
              // 
              // *   0: A version is automatically selected.
              // *   1: IPv4.
              // *   2: IPv6.
              shared_ptr<int32_t> ipType_ {};
              // The IP address.
              shared_ptr<vector<string>> ips_ {};
            };

            virtual bool empty() const override { return this->hosts_ == nullptr
        && this->selectType_ == nullptr; };
            // hosts Field Functions 
            bool hasHosts() const { return this->hosts_ != nullptr;};
            void deleteHosts() { this->hosts_ = nullptr;};
            inline const vector<CustomHost::Hosts> & getHosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<CustomHost::Hosts>) };
            inline vector<CustomHost::Hosts> getHosts() { DARABONBA_PTR_GET(hosts_, vector<CustomHost::Hosts>) };
            inline CustomHost& setHosts(const vector<CustomHost::Hosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
            inline CustomHost& setHosts(vector<CustomHost::Hosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


            // selectType Field Functions 
            bool hasSelectType() const { return this->selectType_ != nullptr;};
            void deleteSelectType() { this->selectType_ = nullptr;};
            inline int32_t getSelectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, 0) };
            inline CustomHost& setSelectType(int32_t selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


          protected:
            // The custom host settings.
            shared_ptr<vector<CustomHost::Hosts>> hosts_ {};
            // The selection mode. Valid values:
            // 
            // *   0: random
            // *   1: polling
            shared_ptr<int32_t> selectType_ {};
          };

          virtual bool empty() const override { return this->customHost_ == nullptr
        && this->customPrometheusSetting_ == nullptr && this->customVPCSetting_ == nullptr && this->ipType_ == nullptr && this->isOpenTrace_ == nullptr && this->monitorSamples_ == nullptr
        && this->traceClientType_ == nullptr && this->xtraceRegion_ == nullptr; };
          // customHost Field Functions 
          bool hasCustomHost() const { return this->customHost_ != nullptr;};
          void deleteCustomHost() { this->customHost_ = nullptr;};
          inline const CommonSetting::CustomHost & getCustomHost() const { DARABONBA_PTR_GET_CONST(customHost_, CommonSetting::CustomHost) };
          inline CommonSetting::CustomHost getCustomHost() { DARABONBA_PTR_GET(customHost_, CommonSetting::CustomHost) };
          inline CommonSetting& setCustomHost(const CommonSetting::CustomHost & customHost) { DARABONBA_PTR_SET_VALUE(customHost_, customHost) };
          inline CommonSetting& setCustomHost(CommonSetting::CustomHost && customHost) { DARABONBA_PTR_SET_RVALUE(customHost_, customHost) };


          // customPrometheusSetting Field Functions 
          bool hasCustomPrometheusSetting() const { return this->customPrometheusSetting_ != nullptr;};
          void deleteCustomPrometheusSetting() { this->customPrometheusSetting_ = nullptr;};
          inline const CommonSetting::CustomPrometheusSetting & getCustomPrometheusSetting() const { DARABONBA_PTR_GET_CONST(customPrometheusSetting_, CommonSetting::CustomPrometheusSetting) };
          inline CommonSetting::CustomPrometheusSetting getCustomPrometheusSetting() { DARABONBA_PTR_GET(customPrometheusSetting_, CommonSetting::CustomPrometheusSetting) };
          inline CommonSetting& setCustomPrometheusSetting(const CommonSetting::CustomPrometheusSetting & customPrometheusSetting) { DARABONBA_PTR_SET_VALUE(customPrometheusSetting_, customPrometheusSetting) };
          inline CommonSetting& setCustomPrometheusSetting(CommonSetting::CustomPrometheusSetting && customPrometheusSetting) { DARABONBA_PTR_SET_RVALUE(customPrometheusSetting_, customPrometheusSetting) };


          // customVPCSetting Field Functions 
          bool hasCustomVPCSetting() const { return this->customVPCSetting_ != nullptr;};
          void deleteCustomVPCSetting() { this->customVPCSetting_ = nullptr;};
          inline const CommonSetting::CustomVPCSetting & getCustomVPCSetting() const { DARABONBA_PTR_GET_CONST(customVPCSetting_, CommonSetting::CustomVPCSetting) };
          inline CommonSetting::CustomVPCSetting getCustomVPCSetting() { DARABONBA_PTR_GET(customVPCSetting_, CommonSetting::CustomVPCSetting) };
          inline CommonSetting& setCustomVPCSetting(const CommonSetting::CustomVPCSetting & customVPCSetting) { DARABONBA_PTR_SET_VALUE(customVPCSetting_, customVPCSetting) };
          inline CommonSetting& setCustomVPCSetting(CommonSetting::CustomVPCSetting && customVPCSetting) { DARABONBA_PTR_SET_RVALUE(customVPCSetting_, customVPCSetting) };


          // ipType Field Functions 
          bool hasIpType() const { return this->ipType_ != nullptr;};
          void deleteIpType() { this->ipType_ = nullptr;};
          inline int32_t getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, 0) };
          inline CommonSetting& setIpType(int32_t ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


          // isOpenTrace Field Functions 
          bool hasIsOpenTrace() const { return this->isOpenTrace_ != nullptr;};
          void deleteIsOpenTrace() { this->isOpenTrace_ = nullptr;};
          inline bool getIsOpenTrace() const { DARABONBA_PTR_GET_DEFAULT(isOpenTrace_, false) };
          inline CommonSetting& setIsOpenTrace(bool isOpenTrace) { DARABONBA_PTR_SET_VALUE(isOpenTrace_, isOpenTrace) };


          // monitorSamples Field Functions 
          bool hasMonitorSamples() const { return this->monitorSamples_ != nullptr;};
          void deleteMonitorSamples() { this->monitorSamples_ = nullptr;};
          inline int32_t getMonitorSamples() const { DARABONBA_PTR_GET_DEFAULT(monitorSamples_, 0) };
          inline CommonSetting& setMonitorSamples(int32_t monitorSamples) { DARABONBA_PTR_SET_VALUE(monitorSamples_, monitorSamples) };


          // traceClientType Field Functions 
          bool hasTraceClientType() const { return this->traceClientType_ != nullptr;};
          void deleteTraceClientType() { this->traceClientType_ = nullptr;};
          inline int32_t getTraceClientType() const { DARABONBA_PTR_GET_DEFAULT(traceClientType_, 0) };
          inline CommonSetting& setTraceClientType(int32_t traceClientType) { DARABONBA_PTR_SET_VALUE(traceClientType_, traceClientType) };


          // xtraceRegion Field Functions 
          bool hasXtraceRegion() const { return this->xtraceRegion_ != nullptr;};
          void deleteXtraceRegion() { this->xtraceRegion_ = nullptr;};
          inline string getXtraceRegion() const { DARABONBA_PTR_GET_DEFAULT(xtraceRegion_, "") };
          inline CommonSetting& setXtraceRegion(string xtraceRegion) { DARABONBA_PTR_SET_VALUE(xtraceRegion_, xtraceRegion) };


        protected:
          // The custom host settings.
          shared_ptr<CommonSetting::CustomHost> customHost_ {};
          // A reserved field.
          shared_ptr<CommonSetting::CustomPrometheusSetting> customPrometheusSetting_ {};
          // The information about the virtual private cloud (VPC). If the destination URL is an Alibaba Cloud internal endpoint, you need to configure a VPC.
          shared_ptr<CommonSetting::CustomVPCSetting> customVPCSetting_ {};
          // The IP version. Valid values:
          // 
          // *   0: A version is automatically selected.
          // *   1: IPv4.
          // *   2: IPv6.
          shared_ptr<int32_t> ipType_ {};
          // Indicates whether tracing is enabled.
          shared_ptr<bool> isOpenTrace_ {};
          // Indicates whether monitoring samples are evenly distributed. Valid values:
          // 
          // *   0: No
          // *   1: Yes
          shared_ptr<int32_t> monitorSamples_ {};
          // The type of the client for tracing. Valid values:
          // 
          // *   0: ARMS agent
          // *   1: OpenTelemetry
          // *   2: Jaeger
          shared_ptr<int32_t> traceClientType_ {};
          // The region to which trace data is reported.
          shared_ptr<string> xtraceRegion_ {};
        };

        virtual bool empty() const override { return this->commonSetting_ == nullptr
        && this->frequency_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->monitorCategory_ == nullptr && this->monitorNum_ == nullptr
        && this->name_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->taskId_ == nullptr && this->taskType_ == nullptr && this->url_ == nullptr; };
        // commonSetting Field Functions 
        bool hasCommonSetting() const { return this->commonSetting_ != nullptr;};
        void deleteCommonSetting() { this->commonSetting_ = nullptr;};
        inline const Items::CommonSetting & getCommonSetting() const { DARABONBA_PTR_GET_CONST(commonSetting_, Items::CommonSetting) };
        inline Items::CommonSetting getCommonSetting() { DARABONBA_PTR_GET(commonSetting_, Items::CommonSetting) };
        inline Items& setCommonSetting(const Items::CommonSetting & commonSetting) { DARABONBA_PTR_SET_VALUE(commonSetting_, commonSetting) };
        inline Items& setCommonSetting(Items::CommonSetting && commonSetting) { DARABONBA_PTR_SET_RVALUE(commonSetting_, commonSetting) };


        // frequency Field Functions 
        bool hasFrequency() const { return this->frequency_ != nullptr;};
        void deleteFrequency() { this->frequency_ = nullptr;};
        inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
        inline Items& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // monitorCategory Field Functions 
        bool hasMonitorCategory() const { return this->monitorCategory_ != nullptr;};
        void deleteMonitorCategory() { this->monitorCategory_ = nullptr;};
        inline int32_t getMonitorCategory() const { DARABONBA_PTR_GET_DEFAULT(monitorCategory_, 0) };
        inline Items& setMonitorCategory(int32_t monitorCategory) { DARABONBA_PTR_SET_VALUE(monitorCategory_, monitorCategory) };


        // monitorNum Field Functions 
        bool hasMonitorNum() const { return this->monitorNum_ != nullptr;};
        void deleteMonitorNum() { this->monitorNum_ = nullptr;};
        inline string getMonitorNum() const { DARABONBA_PTR_GET_DEFAULT(monitorNum_, "") };
        inline Items& setMonitorNum(string monitorNum) { DARABONBA_PTR_SET_VALUE(monitorNum_, monitorNum) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Items& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Items::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Items::Tags>) };
        inline vector<Items::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Items::Tags>) };
        inline Items& setTags(const vector<Items::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Items& setTags(vector<Items::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
        inline Items& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Items& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The general settings.
        shared_ptr<Items::CommonSetting> commonSetting_ {};
        // The detection frequency. Valid values: 1m, 5m, 10m, 15m, 20m, 30m, 1h, 2h, 3h, 4h, 6h, 8h, 12h, and 24h.
        shared_ptr<string> frequency_ {};
        // The time when the task was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the task was modified.
        shared_ptr<string> gmtModified_ {};
        // The detection point type. 1: PC. 2: mobile device.
        shared_ptr<int32_t> monitorCategory_ {};
        // The number of detection points.
        shared_ptr<string> monitorNum_ {};
        // The task name.
        shared_ptr<string> name_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        // The task status. CREATING: The task is being created. RUNNING: The task is running. PARTIAL_RUNNING: The task is partially running. STOP: The task is stopped. LIMIT_STOP: The task is stopped due to quota limit. EXCEPTION: The task is abnormal. DELETE: The task is deleted. DELETE_EXCEPTION: An exception occurs while deleting the task.
        shared_ptr<string> status_ {};
        // The tags.
        shared_ptr<vector<Items::Tags>> tags_ {};
        // The ID of the synthetic monitoring task.
        shared_ptr<string> taskId_ {};
        // The type of the task. Valid values:
        // 
        // 1: ICMP. 2: TCP. 3: DNS. 4: HTTP. 5: website speed. 6: file download.
        shared_ptr<int32_t> taskType_ {};
        // The URL for synthetic monitoring.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The queried tasks.
      shared_ptr<vector<Data::Items>> items_ {};
      // The page number.
      shared_ptr<int32_t> page_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of tasks.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline ListTimingSyntheticTasksResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTimingSyntheticTasksResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTimingSyntheticTasksResponseBody::Data) };
    inline ListTimingSyntheticTasksResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTimingSyntheticTasksResponseBody::Data) };
    inline ListTimingSyntheticTasksResponseBody& setData(const ListTimingSyntheticTasksResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTimingSyntheticTasksResponseBody& setData(ListTimingSyntheticTasksResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTimingSyntheticTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTimingSyntheticTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. The status code 200 indicates that the request was successful.
    shared_ptr<int64_t> code_ {};
    // The returned struct.
    shared_ptr<ListTimingSyntheticTasksResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
