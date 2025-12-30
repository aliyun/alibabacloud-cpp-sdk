// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODY_HPP_
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
  class DescribeDnsGtmMonitorAvailableConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmMonitorAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainIpv4IspCityNodes, domainIpv4IspCityNodes_);
      DARABONBA_PTR_TO_JSON(DomainIpv6IspCityNodes, domainIpv6IspCityNodes_);
      DARABONBA_PTR_TO_JSON(Ipv4IspCityNodes, ipv4IspCityNodes_);
      DARABONBA_PTR_TO_JSON(Ipv6IspCityNodes, ipv6IspCityNodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmMonitorAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainIpv4IspCityNodes, domainIpv4IspCityNodes_);
      DARABONBA_PTR_FROM_JSON(DomainIpv6IspCityNodes, domainIpv6IspCityNodes_);
      DARABONBA_PTR_FROM_JSON(Ipv4IspCityNodes, ipv4IspCityNodes_);
      DARABONBA_PTR_FROM_JSON(Ipv6IspCityNodes, ipv6IspCityNodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDnsGtmMonitorAvailableConfigResponseBody() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBody(const DescribeDnsGtmMonitorAvailableConfigResponseBody &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBody(DescribeDnsGtmMonitorAvailableConfigResponseBody &&) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmMonitorAvailableConfigResponseBody() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBody& operator=(const DescribeDnsGtmMonitorAvailableConfigResponseBody &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBody& operator=(DescribeDnsGtmMonitorAvailableConfigResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(GroupType, groupType_);
          DARABONBA_PTR_TO_JSON(Ips, ips_);
          DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
          DARABONBA_PTR_TO_JSON(IspName, ispName_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6IspCityNode& obj) { 
          DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
          DARABONBA_PTR_FROM_JSON(Ips, ips_);
          DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
          DARABONBA_PTR_FROM_JSON(IspName, ispName_);
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
        && this->cityName_ == nullptr && this->defaultSelected_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->ips_ == nullptr
        && this->ispCode_ == nullptr && this->ispName_ == nullptr; };
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


      protected:
        // The city code.
        shared_ptr<string> cityCode_ {};
        // The display name of the city.
        shared_ptr<string> cityName_ {};
        // Indicates whether the health check node is selected by default.
        shared_ptr<bool> defaultSelected_ {};
        // The name of the node group.
        shared_ptr<string> groupName_ {};
        // The type of the node group. Valid values:
        // 
        // *   BGP: BGP node
        // *   OVERSEAS: node outside the Chinese mainland
        // *   ISP: ISP node
        shared_ptr<string> groupType_ {};
        // This parameter is not returned.
        shared_ptr<Ipv6IspCityNode::Ips> ips_ {};
        // The ISP code.
        shared_ptr<string> ispCode_ {};
        // The display name of the ISP.
        shared_ptr<string> ispName_ {};
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
          DARABONBA_PTR_TO_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(GroupType, groupType_);
          DARABONBA_PTR_TO_JSON(Ips, ips_);
          DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
          DARABONBA_PTR_TO_JSON(IspName, ispName_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv4IspCityNode& obj) { 
          DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
          DARABONBA_PTR_FROM_JSON(Ips, ips_);
          DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
          DARABONBA_PTR_FROM_JSON(IspName, ispName_);
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
        && this->cityName_ == nullptr && this->defaultSelected_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->ips_ == nullptr
        && this->ispCode_ == nullptr && this->ispName_ == nullptr; };
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


      protected:
        // The city code.
        shared_ptr<string> cityCode_ {};
        // The display name of the city.
        shared_ptr<string> cityName_ {};
        // Indicates whether the health check node is selected by default.
        shared_ptr<bool> defaultSelected_ {};
        // The name of the node group.
        shared_ptr<string> groupName_ {};
        // The type of the node group. Valid values:
        // 
        // *   BGP: Border Gateway Protocol (BGP) node
        // *   OVERSEAS: node outside the Chinese mainland
        // *   ISP: ISP node
        shared_ptr<string> groupType_ {};
        // The IP addresses of the health check nodes.
        shared_ptr<Ipv4IspCityNode::Ips> ips_ {};
        // The Internet service provider (ISP) code.
        shared_ptr<string> ispCode_ {};
        // The display name of the ISP.
        shared_ptr<string> ispName_ {};
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

    class DomainIpv6IspCityNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainIpv6IspCityNodes& obj) { 
        DARABONBA_PTR_TO_JSON(DomainIpv6IspCityNode, domainIpv6IspCityNode_);
      };
      friend void from_json(const Darabonba::Json& j, DomainIpv6IspCityNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainIpv6IspCityNode, domainIpv6IspCityNode_);
      };
      DomainIpv6IspCityNodes() = default ;
      DomainIpv6IspCityNodes(const DomainIpv6IspCityNodes &) = default ;
      DomainIpv6IspCityNodes(DomainIpv6IspCityNodes &&) = default ;
      DomainIpv6IspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainIpv6IspCityNodes() = default ;
      DomainIpv6IspCityNodes& operator=(const DomainIpv6IspCityNodes &) = default ;
      DomainIpv6IspCityNodes& operator=(DomainIpv6IspCityNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainIpv6IspCityNode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainIpv6IspCityNode& obj) { 
          DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
          DARABONBA_PTR_TO_JSON(CityName, cityName_);
          DARABONBA_PTR_TO_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(GroupType, groupType_);
          DARABONBA_PTR_TO_JSON(Ips, ips_);
          DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
          DARABONBA_PTR_TO_JSON(IspName, ispName_);
        };
        friend void from_json(const Darabonba::Json& j, DomainIpv6IspCityNode& obj) { 
          DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
          DARABONBA_PTR_FROM_JSON(Ips, ips_);
          DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
          DARABONBA_PTR_FROM_JSON(IspName, ispName_);
        };
        DomainIpv6IspCityNode() = default ;
        DomainIpv6IspCityNode(const DomainIpv6IspCityNode &) = default ;
        DomainIpv6IspCityNode(DomainIpv6IspCityNode &&) = default ;
        DomainIpv6IspCityNode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainIpv6IspCityNode() = default ;
        DomainIpv6IspCityNode& operator=(const DomainIpv6IspCityNode &) = default ;
        DomainIpv6IspCityNode& operator=(DomainIpv6IspCityNode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ips : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ips& obj) { 
            DARABONBA_PTR_TO_JSON(ip, ip_);
          };
          friend void from_json(const Darabonba::Json& j, Ips& obj) { 
            DARABONBA_PTR_FROM_JSON(ip, ip_);
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
        && this->cityName_ == nullptr && this->defaultSelected_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->ips_ == nullptr
        && this->ispCode_ == nullptr && this->ispName_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline DomainIpv6IspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline DomainIpv6IspCityNode& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // defaultSelected Field Functions 
        bool hasDefaultSelected() const { return this->defaultSelected_ != nullptr;};
        void deleteDefaultSelected() { this->defaultSelected_ = nullptr;};
        inline bool getDefaultSelected() const { DARABONBA_PTR_GET_DEFAULT(defaultSelected_, false) };
        inline DomainIpv6IspCityNode& setDefaultSelected(bool defaultSelected) { DARABONBA_PTR_SET_VALUE(defaultSelected_, defaultSelected) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline DomainIpv6IspCityNode& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // groupType Field Functions 
        bool hasGroupType() const { return this->groupType_ != nullptr;};
        void deleteGroupType() { this->groupType_ = nullptr;};
        inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
        inline DomainIpv6IspCityNode& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


        // ips Field Functions 
        bool hasIps() const { return this->ips_ != nullptr;};
        void deleteIps() { this->ips_ = nullptr;};
        inline const DomainIpv6IspCityNode::Ips & getIps() const { DARABONBA_PTR_GET_CONST(ips_, DomainIpv6IspCityNode::Ips) };
        inline DomainIpv6IspCityNode::Ips getIps() { DARABONBA_PTR_GET(ips_, DomainIpv6IspCityNode::Ips) };
        inline DomainIpv6IspCityNode& setIps(const DomainIpv6IspCityNode::Ips & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
        inline DomainIpv6IspCityNode& setIps(DomainIpv6IspCityNode::Ips && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


        // ispCode Field Functions 
        bool hasIspCode() const { return this->ispCode_ != nullptr;};
        void deleteIspCode() { this->ispCode_ = nullptr;};
        inline string getIspCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
        inline DomainIpv6IspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


        // ispName Field Functions 
        bool hasIspName() const { return this->ispName_ != nullptr;};
        void deleteIspName() { this->ispName_ = nullptr;};
        inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
        inline DomainIpv6IspCityNode& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


      protected:
        // The city code.
        shared_ptr<string> cityCode_ {};
        // The display name of the city.
        shared_ptr<string> cityName_ {};
        // Indicates whether the health check node is selected by default.
        shared_ptr<bool> defaultSelected_ {};
        // The name of the node group.
        shared_ptr<string> groupName_ {};
        // The type of the node group. Valid values:
        // 
        // *   BGP: BGP node
        // *   OVERSEAS: node outside the Chinese mainland
        // *   ISP: ISP node
        shared_ptr<string> groupType_ {};
        // This parameter is not returned.
        shared_ptr<DomainIpv6IspCityNode::Ips> ips_ {};
        // The ISP code.
        shared_ptr<string> ispCode_ {};
        // The display name of the ISP.
        shared_ptr<string> ispName_ {};
      };

      virtual bool empty() const override { return this->domainIpv6IspCityNode_ == nullptr; };
      // domainIpv6IspCityNode Field Functions 
      bool hasDomainIpv6IspCityNode() const { return this->domainIpv6IspCityNode_ != nullptr;};
      void deleteDomainIpv6IspCityNode() { this->domainIpv6IspCityNode_ = nullptr;};
      inline const vector<DomainIpv6IspCityNodes::DomainIpv6IspCityNode> & getDomainIpv6IspCityNode() const { DARABONBA_PTR_GET_CONST(domainIpv6IspCityNode_, vector<DomainIpv6IspCityNodes::DomainIpv6IspCityNode>) };
      inline vector<DomainIpv6IspCityNodes::DomainIpv6IspCityNode> getDomainIpv6IspCityNode() { DARABONBA_PTR_GET(domainIpv6IspCityNode_, vector<DomainIpv6IspCityNodes::DomainIpv6IspCityNode>) };
      inline DomainIpv6IspCityNodes& setDomainIpv6IspCityNode(const vector<DomainIpv6IspCityNodes::DomainIpv6IspCityNode> & domainIpv6IspCityNode) { DARABONBA_PTR_SET_VALUE(domainIpv6IspCityNode_, domainIpv6IspCityNode) };
      inline DomainIpv6IspCityNodes& setDomainIpv6IspCityNode(vector<DomainIpv6IspCityNodes::DomainIpv6IspCityNode> && domainIpv6IspCityNode) { DARABONBA_PTR_SET_RVALUE(domainIpv6IspCityNode_, domainIpv6IspCityNode) };


    protected:
      shared_ptr<vector<DomainIpv6IspCityNodes::DomainIpv6IspCityNode>> domainIpv6IspCityNode_ {};
    };

    class DomainIpv4IspCityNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainIpv4IspCityNodes& obj) { 
        DARABONBA_PTR_TO_JSON(DomainIpv4IspCityNode, domainIpv4IspCityNode_);
      };
      friend void from_json(const Darabonba::Json& j, DomainIpv4IspCityNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainIpv4IspCityNode, domainIpv4IspCityNode_);
      };
      DomainIpv4IspCityNodes() = default ;
      DomainIpv4IspCityNodes(const DomainIpv4IspCityNodes &) = default ;
      DomainIpv4IspCityNodes(DomainIpv4IspCityNodes &&) = default ;
      DomainIpv4IspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainIpv4IspCityNodes() = default ;
      DomainIpv4IspCityNodes& operator=(const DomainIpv4IspCityNodes &) = default ;
      DomainIpv4IspCityNodes& operator=(DomainIpv4IspCityNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainIpv4IspCityNode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainIpv4IspCityNode& obj) { 
          DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
          DARABONBA_PTR_TO_JSON(CityName, cityName_);
          DARABONBA_PTR_TO_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(GroupType, groupType_);
          DARABONBA_PTR_TO_JSON(Ips, ips_);
          DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
          DARABONBA_PTR_TO_JSON(IspName, ispName_);
        };
        friend void from_json(const Darabonba::Json& j, DomainIpv4IspCityNode& obj) { 
          DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
          DARABONBA_PTR_FROM_JSON(Ips, ips_);
          DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
          DARABONBA_PTR_FROM_JSON(IspName, ispName_);
        };
        DomainIpv4IspCityNode() = default ;
        DomainIpv4IspCityNode(const DomainIpv4IspCityNode &) = default ;
        DomainIpv4IspCityNode(DomainIpv4IspCityNode &&) = default ;
        DomainIpv4IspCityNode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainIpv4IspCityNode() = default ;
        DomainIpv4IspCityNode& operator=(const DomainIpv4IspCityNode &) = default ;
        DomainIpv4IspCityNode& operator=(DomainIpv4IspCityNode &&) = default ;
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
        && this->cityName_ == nullptr && this->defaultSelected_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->ips_ == nullptr
        && this->ispCode_ == nullptr && this->ispName_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline DomainIpv4IspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline DomainIpv4IspCityNode& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // defaultSelected Field Functions 
        bool hasDefaultSelected() const { return this->defaultSelected_ != nullptr;};
        void deleteDefaultSelected() { this->defaultSelected_ = nullptr;};
        inline bool getDefaultSelected() const { DARABONBA_PTR_GET_DEFAULT(defaultSelected_, false) };
        inline DomainIpv4IspCityNode& setDefaultSelected(bool defaultSelected) { DARABONBA_PTR_SET_VALUE(defaultSelected_, defaultSelected) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline DomainIpv4IspCityNode& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // groupType Field Functions 
        bool hasGroupType() const { return this->groupType_ != nullptr;};
        void deleteGroupType() { this->groupType_ = nullptr;};
        inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
        inline DomainIpv4IspCityNode& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


        // ips Field Functions 
        bool hasIps() const { return this->ips_ != nullptr;};
        void deleteIps() { this->ips_ = nullptr;};
        inline const DomainIpv4IspCityNode::Ips & getIps() const { DARABONBA_PTR_GET_CONST(ips_, DomainIpv4IspCityNode::Ips) };
        inline DomainIpv4IspCityNode::Ips getIps() { DARABONBA_PTR_GET(ips_, DomainIpv4IspCityNode::Ips) };
        inline DomainIpv4IspCityNode& setIps(const DomainIpv4IspCityNode::Ips & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
        inline DomainIpv4IspCityNode& setIps(DomainIpv4IspCityNode::Ips && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


        // ispCode Field Functions 
        bool hasIspCode() const { return this->ispCode_ != nullptr;};
        void deleteIspCode() { this->ispCode_ = nullptr;};
        inline string getIspCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
        inline DomainIpv4IspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


        // ispName Field Functions 
        bool hasIspName() const { return this->ispName_ != nullptr;};
        void deleteIspName() { this->ispName_ = nullptr;};
        inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
        inline DomainIpv4IspCityNode& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


      protected:
        // The city code.
        shared_ptr<string> cityCode_ {};
        // The display name of the city.
        shared_ptr<string> cityName_ {};
        // Indicates whether the health check node is selected by default.
        shared_ptr<bool> defaultSelected_ {};
        // The name of the node group.
        shared_ptr<string> groupName_ {};
        // The type of the node group. Valid values:
        // 
        // *   BGP: BGP node
        // *   OVERSEAS: node outside the Chinese mainland
        // *   ISP: ISP node
        shared_ptr<string> groupType_ {};
        // The IP addresses of the health check nodes.
        shared_ptr<DomainIpv4IspCityNode::Ips> ips_ {};
        // The ISP code.
        shared_ptr<string> ispCode_ {};
        // The display name of the ISP.
        shared_ptr<string> ispName_ {};
      };

      virtual bool empty() const override { return this->domainIpv4IspCityNode_ == nullptr; };
      // domainIpv4IspCityNode Field Functions 
      bool hasDomainIpv4IspCityNode() const { return this->domainIpv4IspCityNode_ != nullptr;};
      void deleteDomainIpv4IspCityNode() { this->domainIpv4IspCityNode_ = nullptr;};
      inline const vector<DomainIpv4IspCityNodes::DomainIpv4IspCityNode> & getDomainIpv4IspCityNode() const { DARABONBA_PTR_GET_CONST(domainIpv4IspCityNode_, vector<DomainIpv4IspCityNodes::DomainIpv4IspCityNode>) };
      inline vector<DomainIpv4IspCityNodes::DomainIpv4IspCityNode> getDomainIpv4IspCityNode() { DARABONBA_PTR_GET(domainIpv4IspCityNode_, vector<DomainIpv4IspCityNodes::DomainIpv4IspCityNode>) };
      inline DomainIpv4IspCityNodes& setDomainIpv4IspCityNode(const vector<DomainIpv4IspCityNodes::DomainIpv4IspCityNode> & domainIpv4IspCityNode) { DARABONBA_PTR_SET_VALUE(domainIpv4IspCityNode_, domainIpv4IspCityNode) };
      inline DomainIpv4IspCityNodes& setDomainIpv4IspCityNode(vector<DomainIpv4IspCityNodes::DomainIpv4IspCityNode> && domainIpv4IspCityNode) { DARABONBA_PTR_SET_RVALUE(domainIpv4IspCityNode_, domainIpv4IspCityNode) };


    protected:
      shared_ptr<vector<DomainIpv4IspCityNodes::DomainIpv4IspCityNode>> domainIpv4IspCityNode_ {};
    };

    virtual bool empty() const override { return this->domainIpv4IspCityNodes_ == nullptr
        && this->domainIpv6IspCityNodes_ == nullptr && this->ipv4IspCityNodes_ == nullptr && this->ipv6IspCityNodes_ == nullptr && this->requestId_ == nullptr; };
    // domainIpv4IspCityNodes Field Functions 
    bool hasDomainIpv4IspCityNodes() const { return this->domainIpv4IspCityNodes_ != nullptr;};
    void deleteDomainIpv4IspCityNodes() { this->domainIpv4IspCityNodes_ = nullptr;};
    inline const DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv4IspCityNodes & getDomainIpv4IspCityNodes() const { DARABONBA_PTR_GET_CONST(domainIpv4IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv4IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv4IspCityNodes getDomainIpv4IspCityNodes() { DARABONBA_PTR_GET(domainIpv4IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv4IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setDomainIpv4IspCityNodes(const DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv4IspCityNodes & domainIpv4IspCityNodes) { DARABONBA_PTR_SET_VALUE(domainIpv4IspCityNodes_, domainIpv4IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setDomainIpv4IspCityNodes(DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv4IspCityNodes && domainIpv4IspCityNodes) { DARABONBA_PTR_SET_RVALUE(domainIpv4IspCityNodes_, domainIpv4IspCityNodes) };


    // domainIpv6IspCityNodes Field Functions 
    bool hasDomainIpv6IspCityNodes() const { return this->domainIpv6IspCityNodes_ != nullptr;};
    void deleteDomainIpv6IspCityNodes() { this->domainIpv6IspCityNodes_ = nullptr;};
    inline const DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv6IspCityNodes & getDomainIpv6IspCityNodes() const { DARABONBA_PTR_GET_CONST(domainIpv6IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv6IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv6IspCityNodes getDomainIpv6IspCityNodes() { DARABONBA_PTR_GET(domainIpv6IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv6IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setDomainIpv6IspCityNodes(const DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv6IspCityNodes & domainIpv6IspCityNodes) { DARABONBA_PTR_SET_VALUE(domainIpv6IspCityNodes_, domainIpv6IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setDomainIpv6IspCityNodes(DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv6IspCityNodes && domainIpv6IspCityNodes) { DARABONBA_PTR_SET_RVALUE(domainIpv6IspCityNodes_, domainIpv6IspCityNodes) };


    // ipv4IspCityNodes Field Functions 
    bool hasIpv4IspCityNodes() const { return this->ipv4IspCityNodes_ != nullptr;};
    void deleteIpv4IspCityNodes() { this->ipv4IspCityNodes_ = nullptr;};
    inline const DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv4IspCityNodes & getIpv4IspCityNodes() const { DARABONBA_PTR_GET_CONST(ipv4IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv4IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv4IspCityNodes getIpv4IspCityNodes() { DARABONBA_PTR_GET(ipv4IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv4IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setIpv4IspCityNodes(const DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv4IspCityNodes & ipv4IspCityNodes) { DARABONBA_PTR_SET_VALUE(ipv4IspCityNodes_, ipv4IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setIpv4IspCityNodes(DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv4IspCityNodes && ipv4IspCityNodes) { DARABONBA_PTR_SET_RVALUE(ipv4IspCityNodes_, ipv4IspCityNodes) };


    // ipv6IspCityNodes Field Functions 
    bool hasIpv6IspCityNodes() const { return this->ipv6IspCityNodes_ != nullptr;};
    void deleteIpv6IspCityNodes() { this->ipv6IspCityNodes_ = nullptr;};
    inline const DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv6IspCityNodes & getIpv6IspCityNodes() const { DARABONBA_PTR_GET_CONST(ipv6IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv6IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv6IspCityNodes getIpv6IspCityNodes() { DARABONBA_PTR_GET(ipv6IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv6IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setIpv6IspCityNodes(const DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv6IspCityNodes & ipv6IspCityNodes) { DARABONBA_PTR_SET_VALUE(ipv6IspCityNodes_, ipv6IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setIpv6IspCityNodes(DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv6IspCityNodes && ipv6IspCityNodes) { DARABONBA_PTR_SET_RVALUE(ipv6IspCityNodes_, ipv6IspCityNodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The nodes that perform health checks on domain names that use public IPv4 addresses.
    shared_ptr<DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv4IspCityNodes> domainIpv4IspCityNodes_ {};
    // The nodes that perform health checks on domain names that use public IPv6 addresses.
    shared_ptr<DescribeDnsGtmMonitorAvailableConfigResponseBody::DomainIpv6IspCityNodes> domainIpv6IspCityNodes_ {};
    // The nodes that perform health checks on public IPv4 addresses.
    shared_ptr<DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv4IspCityNodes> ipv4IspCityNodes_ {};
    // The nodes that perform health checks on public IPv6 addresses.
    shared_ptr<DescribeDnsGtmMonitorAvailableConfigResponseBody::Ipv6IspCityNodes> ipv6IspCityNodes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
