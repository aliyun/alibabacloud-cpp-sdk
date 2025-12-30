// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmMonitorNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmMonitorNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4IspCityNodes, ipv4IspCityNodes_);
      DARABONBA_PTR_TO_JSON(Ipv6IspCityNodes, ipv6IspCityNodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmMonitorNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4IspCityNodes, ipv4IspCityNodes_);
      DARABONBA_PTR_FROM_JSON(Ipv6IspCityNodes, ipv6IspCityNodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCloudGtmMonitorNodesResponseBody() = default ;
    ListCloudGtmMonitorNodesResponseBody(const ListCloudGtmMonitorNodesResponseBody &) = default ;
    ListCloudGtmMonitorNodesResponseBody(ListCloudGtmMonitorNodesResponseBody &&) = default ;
    ListCloudGtmMonitorNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmMonitorNodesResponseBody() = default ;
    ListCloudGtmMonitorNodesResponseBody& operator=(const ListCloudGtmMonitorNodesResponseBody &) = default ;
    ListCloudGtmMonitorNodesResponseBody& operator=(ListCloudGtmMonitorNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ipv6IspCityNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6IspCityNodes& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6IspCityNode, ipv6IspCityNode_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6IspCityNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6IspCityNode, ipv6IspCityNode_);
      };
      Ipv6IspCityNodes() = default ;
      Ipv6IspCityNodes(const Ipv6IspCityNodes &) = default ;
      Ipv6IspCityNodes(Ipv6IspCityNodes &&) = default ;
      Ipv6IspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6IspCityNodes() = default ;
      Ipv6IspCityNodes& operator=(const Ipv6IspCityNodes &) = default ;
      Ipv6IspCityNodes& operator=(Ipv6IspCityNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv6IspCityNode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6IspCityNode& obj) { 
          DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
          DARABONBA_PTR_TO_JSON(CityName, cityName_);
          DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
          DARABONBA_PTR_TO_JSON(CountryName, countryName_);
          DARABONBA_PTR_TO_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(GroupType, groupType_);
          DARABONBA_PTR_TO_JSON(Ips, ips_);
          DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
          DARABONBA_PTR_TO_JSON(IspName, ispName_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6IspCityNode& obj) { 
          DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
          DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
          DARABONBA_PTR_FROM_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
          DARABONBA_PTR_FROM_JSON(Ips, ips_);
          DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
          DARABONBA_PTR_FROM_JSON(IspName, ispName_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        };
        Ipv6IspCityNode() = default ;
        Ipv6IspCityNode(const Ipv6IspCityNode &) = default ;
        Ipv6IspCityNode(Ipv6IspCityNode &&) = default ;
        Ipv6IspCityNode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6IspCityNode() = default ;
        Ipv6IspCityNode& operator=(const Ipv6IspCityNode &) = default ;
        Ipv6IspCityNode& operator=(Ipv6IspCityNode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ips : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ips& obj) { 
            DARABONBA_PTR_TO_JSON(Ip, ip_);
          };
          friend void from_json(const Darabonba::Json& j, Ips& obj) { 
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
          };
          Ips() = default ;
          Ips(const Ips &) = default ;
          Ips(Ips &&) = default ;
          Ips(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ips() = default ;
          Ips& operator=(const Ips &) = default ;
          Ips& operator=(Ips &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ip_ == nullptr; };
          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline const vector<string> & getIp() const { DARABONBA_PTR_GET_CONST(ip_, vector<string>) };
          inline vector<string> getIp() { DARABONBA_PTR_GET(ip_, vector<string>) };
          inline Ips& setIp(const vector<string> & ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };
          inline Ips& setIp(vector<string> && ip) { DARABONBA_PTR_SET_RVALUE(ip_, ip) };


        protected:
          shared_ptr<vector<string>> ip_ {};
        };

        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr && this->countryCode_ == nullptr && this->countryName_ == nullptr && this->defaultSelected_ == nullptr && this->groupName_ == nullptr
        && this->groupType_ == nullptr && this->ips_ == nullptr && this->ispCode_ == nullptr && this->ispName_ == nullptr && this->nodeId_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline Ipv6IspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline Ipv6IspCityNode& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // countryCode Field Functions 
        bool hasCountryCode() const { return this->countryCode_ != nullptr;};
        void deleteCountryCode() { this->countryCode_ = nullptr;};
        inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
        inline Ipv6IspCityNode& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


        // countryName Field Functions 
        bool hasCountryName() const { return this->countryName_ != nullptr;};
        void deleteCountryName() { this->countryName_ = nullptr;};
        inline string getCountryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
        inline Ipv6IspCityNode& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


        // defaultSelected Field Functions 
        bool hasDefaultSelected() const { return this->defaultSelected_ != nullptr;};
        void deleteDefaultSelected() { this->defaultSelected_ = nullptr;};
        inline bool getDefaultSelected() const { DARABONBA_PTR_GET_DEFAULT(defaultSelected_, false) };
        inline Ipv6IspCityNode& setDefaultSelected(bool defaultSelected) { DARABONBA_PTR_SET_VALUE(defaultSelected_, defaultSelected) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Ipv6IspCityNode& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // groupType Field Functions 
        bool hasGroupType() const { return this->groupType_ != nullptr;};
        void deleteGroupType() { this->groupType_ = nullptr;};
        inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
        inline Ipv6IspCityNode& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


        // ips Field Functions 
        bool hasIps() const { return this->ips_ != nullptr;};
        void deleteIps() { this->ips_ = nullptr;};
        inline const Ipv6IspCityNode::Ips & getIps() const { DARABONBA_PTR_GET_CONST(ips_, Ipv6IspCityNode::Ips) };
        inline Ipv6IspCityNode::Ips getIps() { DARABONBA_PTR_GET(ips_, Ipv6IspCityNode::Ips) };
        inline Ipv6IspCityNode& setIps(const Ipv6IspCityNode::Ips & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
        inline Ipv6IspCityNode& setIps(Ipv6IspCityNode::Ips && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


        // ispCode Field Functions 
        bool hasIspCode() const { return this->ispCode_ != nullptr;};
        void deleteIspCode() { this->ispCode_ = nullptr;};
        inline string getIspCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
        inline Ipv6IspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


        // ispName Field Functions 
        bool hasIspName() const { return this->ispName_ != nullptr;};
        void deleteIspName() { this->ispName_ = nullptr;};
        inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
        inline Ipv6IspCityNode& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Ipv6IspCityNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      protected:
        // City code.
        shared_ptr<string> cityCode_ {};
        // City name.
        shared_ptr<string> cityName_ {};
        // Country code.
        shared_ptr<string> countryCode_ {};
        // Country name.
        shared_ptr<string> countryName_ {};
        // Monitor node default selection:
        // - true: Selected by default
        // - false: Not selected by default
        shared_ptr<bool> defaultSelected_ {};
        // Monitoring probe group name.
        shared_ptr<string> groupName_ {};
        // Monitoring node group type, currently supported:
        // - BGP: BGP node
        // - OVERSEAS: International node
        // - ISP: Carrier node
        shared_ptr<string> groupType_ {};
        // List of node IP addresses.
        shared_ptr<Ipv6IspCityNode::Ips> ips_ {};
        // Operator code.
        shared_ptr<string> ispCode_ {};
        // Operator name.
        shared_ptr<string> ispName_ {};
        // Unique identifier ID of the probe node.
        shared_ptr<string> nodeId_ {};
      };

      virtual bool empty() const override { return this->ipv6IspCityNode_ == nullptr; };
      // ipv6IspCityNode Field Functions 
      bool hasIpv6IspCityNode() const { return this->ipv6IspCityNode_ != nullptr;};
      void deleteIpv6IspCityNode() { this->ipv6IspCityNode_ = nullptr;};
      inline const vector<Ipv6IspCityNodes::Ipv6IspCityNode> & getIpv6IspCityNode() const { DARABONBA_PTR_GET_CONST(ipv6IspCityNode_, vector<Ipv6IspCityNodes::Ipv6IspCityNode>) };
      inline vector<Ipv6IspCityNodes::Ipv6IspCityNode> getIpv6IspCityNode() { DARABONBA_PTR_GET(ipv6IspCityNode_, vector<Ipv6IspCityNodes::Ipv6IspCityNode>) };
      inline Ipv6IspCityNodes& setIpv6IspCityNode(const vector<Ipv6IspCityNodes::Ipv6IspCityNode> & ipv6IspCityNode) { DARABONBA_PTR_SET_VALUE(ipv6IspCityNode_, ipv6IspCityNode) };
      inline Ipv6IspCityNodes& setIpv6IspCityNode(vector<Ipv6IspCityNodes::Ipv6IspCityNode> && ipv6IspCityNode) { DARABONBA_PTR_SET_RVALUE(ipv6IspCityNode_, ipv6IspCityNode) };


    protected:
      shared_ptr<vector<Ipv6IspCityNodes::Ipv6IspCityNode>> ipv6IspCityNode_ {};
    };

    class Ipv4IspCityNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv4IspCityNodes& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv4IspCityNode, ipv4IspCityNode_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv4IspCityNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv4IspCityNode, ipv4IspCityNode_);
      };
      Ipv4IspCityNodes() = default ;
      Ipv4IspCityNodes(const Ipv4IspCityNodes &) = default ;
      Ipv4IspCityNodes(Ipv4IspCityNodes &&) = default ;
      Ipv4IspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv4IspCityNodes() = default ;
      Ipv4IspCityNodes& operator=(const Ipv4IspCityNodes &) = default ;
      Ipv4IspCityNodes& operator=(Ipv4IspCityNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv4IspCityNode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv4IspCityNode& obj) { 
          DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
          DARABONBA_PTR_TO_JSON(CityName, cityName_);
          DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
          DARABONBA_PTR_TO_JSON(CountryName, countryName_);
          DARABONBA_PTR_TO_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(GroupType, groupType_);
          DARABONBA_PTR_TO_JSON(Ips, ips_);
          DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
          DARABONBA_PTR_TO_JSON(IspName, ispName_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv4IspCityNode& obj) { 
          DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
          DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
          DARABONBA_PTR_FROM_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
          DARABONBA_PTR_FROM_JSON(Ips, ips_);
          DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
          DARABONBA_PTR_FROM_JSON(IspName, ispName_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        };
        Ipv4IspCityNode() = default ;
        Ipv4IspCityNode(const Ipv4IspCityNode &) = default ;
        Ipv4IspCityNode(Ipv4IspCityNode &&) = default ;
        Ipv4IspCityNode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv4IspCityNode() = default ;
        Ipv4IspCityNode& operator=(const Ipv4IspCityNode &) = default ;
        Ipv4IspCityNode& operator=(Ipv4IspCityNode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ips : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ips& obj) { 
            DARABONBA_PTR_TO_JSON(Ip, ip_);
          };
          friend void from_json(const Darabonba::Json& j, Ips& obj) { 
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
          };
          Ips() = default ;
          Ips(const Ips &) = default ;
          Ips(Ips &&) = default ;
          Ips(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ips() = default ;
          Ips& operator=(const Ips &) = default ;
          Ips& operator=(Ips &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ip_ == nullptr; };
          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline const vector<string> & getIp() const { DARABONBA_PTR_GET_CONST(ip_, vector<string>) };
          inline vector<string> getIp() { DARABONBA_PTR_GET(ip_, vector<string>) };
          inline Ips& setIp(const vector<string> & ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };
          inline Ips& setIp(vector<string> && ip) { DARABONBA_PTR_SET_RVALUE(ip_, ip) };


        protected:
          shared_ptr<vector<string>> ip_ {};
        };

        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr && this->countryCode_ == nullptr && this->countryName_ == nullptr && this->defaultSelected_ == nullptr && this->groupName_ == nullptr
        && this->groupType_ == nullptr && this->ips_ == nullptr && this->ispCode_ == nullptr && this->ispName_ == nullptr && this->nodeId_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline Ipv4IspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline Ipv4IspCityNode& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // countryCode Field Functions 
        bool hasCountryCode() const { return this->countryCode_ != nullptr;};
        void deleteCountryCode() { this->countryCode_ = nullptr;};
        inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
        inline Ipv4IspCityNode& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


        // countryName Field Functions 
        bool hasCountryName() const { return this->countryName_ != nullptr;};
        void deleteCountryName() { this->countryName_ = nullptr;};
        inline string getCountryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
        inline Ipv4IspCityNode& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


        // defaultSelected Field Functions 
        bool hasDefaultSelected() const { return this->defaultSelected_ != nullptr;};
        void deleteDefaultSelected() { this->defaultSelected_ = nullptr;};
        inline bool getDefaultSelected() const { DARABONBA_PTR_GET_DEFAULT(defaultSelected_, false) };
        inline Ipv4IspCityNode& setDefaultSelected(bool defaultSelected) { DARABONBA_PTR_SET_VALUE(defaultSelected_, defaultSelected) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Ipv4IspCityNode& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // groupType Field Functions 
        bool hasGroupType() const { return this->groupType_ != nullptr;};
        void deleteGroupType() { this->groupType_ = nullptr;};
        inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
        inline Ipv4IspCityNode& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


        // ips Field Functions 
        bool hasIps() const { return this->ips_ != nullptr;};
        void deleteIps() { this->ips_ = nullptr;};
        inline const Ipv4IspCityNode::Ips & getIps() const { DARABONBA_PTR_GET_CONST(ips_, Ipv4IspCityNode::Ips) };
        inline Ipv4IspCityNode::Ips getIps() { DARABONBA_PTR_GET(ips_, Ipv4IspCityNode::Ips) };
        inline Ipv4IspCityNode& setIps(const Ipv4IspCityNode::Ips & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
        inline Ipv4IspCityNode& setIps(Ipv4IspCityNode::Ips && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


        // ispCode Field Functions 
        bool hasIspCode() const { return this->ispCode_ != nullptr;};
        void deleteIspCode() { this->ispCode_ = nullptr;};
        inline string getIspCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
        inline Ipv4IspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


        // ispName Field Functions 
        bool hasIspName() const { return this->ispName_ != nullptr;};
        void deleteIspName() { this->ispName_ = nullptr;};
        inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
        inline Ipv4IspCityNode& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Ipv4IspCityNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      protected:
        // City code.
        shared_ptr<string> cityCode_ {};
        // City name.
        shared_ptr<string> cityName_ {};
        // Country code.
        shared_ptr<string> countryCode_ {};
        // Country name.
        shared_ptr<string> countryName_ {};
        // Monitor node default selection:
        // - true: Selected by default
        // - false: Not selected by default
        shared_ptr<bool> defaultSelected_ {};
        // Monitor probe group name.
        shared_ptr<string> groupName_ {};
        // Monitoring node group type, currently supported:
        // - BGP: BGP node
        // - OVERSEAS: International node
        // - ISP: Carrier node
        shared_ptr<string> groupType_ {};
        // List of node IP addresses.
        shared_ptr<Ipv4IspCityNode::Ips> ips_ {};
        // Operator code.
        shared_ptr<string> ispCode_ {};
        // Operator name.
        shared_ptr<string> ispName_ {};
        // Unique identifier ID of the probe node.
        shared_ptr<string> nodeId_ {};
      };

      virtual bool empty() const override { return this->ipv4IspCityNode_ == nullptr; };
      // ipv4IspCityNode Field Functions 
      bool hasIpv4IspCityNode() const { return this->ipv4IspCityNode_ != nullptr;};
      void deleteIpv4IspCityNode() { this->ipv4IspCityNode_ = nullptr;};
      inline const vector<Ipv4IspCityNodes::Ipv4IspCityNode> & getIpv4IspCityNode() const { DARABONBA_PTR_GET_CONST(ipv4IspCityNode_, vector<Ipv4IspCityNodes::Ipv4IspCityNode>) };
      inline vector<Ipv4IspCityNodes::Ipv4IspCityNode> getIpv4IspCityNode() { DARABONBA_PTR_GET(ipv4IspCityNode_, vector<Ipv4IspCityNodes::Ipv4IspCityNode>) };
      inline Ipv4IspCityNodes& setIpv4IspCityNode(const vector<Ipv4IspCityNodes::Ipv4IspCityNode> & ipv4IspCityNode) { DARABONBA_PTR_SET_VALUE(ipv4IspCityNode_, ipv4IspCityNode) };
      inline Ipv4IspCityNodes& setIpv4IspCityNode(vector<Ipv4IspCityNodes::Ipv4IspCityNode> && ipv4IspCityNode) { DARABONBA_PTR_SET_RVALUE(ipv4IspCityNode_, ipv4IspCityNode) };


    protected:
      shared_ptr<vector<Ipv4IspCityNodes::Ipv4IspCityNode>> ipv4IspCityNode_ {};
    };

    virtual bool empty() const override { return this->ipv4IspCityNodes_ == nullptr
        && this->ipv6IspCityNodes_ == nullptr && this->requestId_ == nullptr; };
    // ipv4IspCityNodes Field Functions 
    bool hasIpv4IspCityNodes() const { return this->ipv4IspCityNodes_ != nullptr;};
    void deleteIpv4IspCityNodes() { this->ipv4IspCityNodes_ = nullptr;};
    inline const ListCloudGtmMonitorNodesResponseBody::Ipv4IspCityNodes & getIpv4IspCityNodes() const { DARABONBA_PTR_GET_CONST(ipv4IspCityNodes_, ListCloudGtmMonitorNodesResponseBody::Ipv4IspCityNodes) };
    inline ListCloudGtmMonitorNodesResponseBody::Ipv4IspCityNodes getIpv4IspCityNodes() { DARABONBA_PTR_GET(ipv4IspCityNodes_, ListCloudGtmMonitorNodesResponseBody::Ipv4IspCityNodes) };
    inline ListCloudGtmMonitorNodesResponseBody& setIpv4IspCityNodes(const ListCloudGtmMonitorNodesResponseBody::Ipv4IspCityNodes & ipv4IspCityNodes) { DARABONBA_PTR_SET_VALUE(ipv4IspCityNodes_, ipv4IspCityNodes) };
    inline ListCloudGtmMonitorNodesResponseBody& setIpv4IspCityNodes(ListCloudGtmMonitorNodesResponseBody::Ipv4IspCityNodes && ipv4IspCityNodes) { DARABONBA_PTR_SET_RVALUE(ipv4IspCityNodes_, ipv4IspCityNodes) };


    // ipv6IspCityNodes Field Functions 
    bool hasIpv6IspCityNodes() const { return this->ipv6IspCityNodes_ != nullptr;};
    void deleteIpv6IspCityNodes() { this->ipv6IspCityNodes_ = nullptr;};
    inline const ListCloudGtmMonitorNodesResponseBody::Ipv6IspCityNodes & getIpv6IspCityNodes() const { DARABONBA_PTR_GET_CONST(ipv6IspCityNodes_, ListCloudGtmMonitorNodesResponseBody::Ipv6IspCityNodes) };
    inline ListCloudGtmMonitorNodesResponseBody::Ipv6IspCityNodes getIpv6IspCityNodes() { DARABONBA_PTR_GET(ipv6IspCityNodes_, ListCloudGtmMonitorNodesResponseBody::Ipv6IspCityNodes) };
    inline ListCloudGtmMonitorNodesResponseBody& setIpv6IspCityNodes(const ListCloudGtmMonitorNodesResponseBody::Ipv6IspCityNodes & ipv6IspCityNodes) { DARABONBA_PTR_SET_VALUE(ipv6IspCityNodes_, ipv6IspCityNodes) };
    inline ListCloudGtmMonitorNodesResponseBody& setIpv6IspCityNodes(ListCloudGtmMonitorNodesResponseBody::Ipv6IspCityNodes && ipv6IspCityNodes) { DARABONBA_PTR_SET_RVALUE(ipv6IspCityNodes_, ipv6IspCityNodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudGtmMonitorNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Public IPv4 monitoring node list.
    shared_ptr<ListCloudGtmMonitorNodesResponseBody::Ipv4IspCityNodes> ipv4IspCityNodes_ {};
    // List of public IPv6 monitoring nodes.
    shared_ptr<ListCloudGtmMonitorNodesResponseBody::Ipv6IspCityNodes> ipv6IspCityNodes_ {};
    // Unique request identification code.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
