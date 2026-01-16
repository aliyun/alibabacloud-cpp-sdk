// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKIBANAWHITEIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKIBANAWHITEIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateKibanaWhiteIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKibanaWhiteIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKibanaWhiteIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpdateKibanaWhiteIpsResponseBody() = default ;
    UpdateKibanaWhiteIpsResponseBody(const UpdateKibanaWhiteIpsResponseBody &) = default ;
    UpdateKibanaWhiteIpsResponseBody(UpdateKibanaWhiteIpsResponseBody &&) = default ;
    UpdateKibanaWhiteIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKibanaWhiteIpsResponseBody() = default ;
    UpdateKibanaWhiteIpsResponseBody& operator=(const UpdateKibanaWhiteIpsResponseBody &) = default ;
    UpdateKibanaWhiteIpsResponseBody& operator=(UpdateKibanaWhiteIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
        DARABONBA_PTR_TO_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
        DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
        DARABONBA_PTR_FROM_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
        DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NetworkConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkConfig& obj) { 
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(vsArea, vsArea_);
          DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
          DARABONBA_PTR_TO_JSON(whiteIpGroupList, whiteIpGroupList_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(vsArea, vsArea_);
          DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
          DARABONBA_PTR_FROM_JSON(whiteIpGroupList, whiteIpGroupList_);
        };
        NetworkConfig() = default ;
        NetworkConfig(const NetworkConfig &) = default ;
        NetworkConfig(NetworkConfig &&) = default ;
        NetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkConfig() = default ;
        NetworkConfig& operator=(const NetworkConfig &) = default ;
        NetworkConfig& operator=(NetworkConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class WhiteIpGroupList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WhiteIpGroupList& obj) { 
            DARABONBA_PTR_TO_JSON(groupName, groupName_);
            DARABONBA_PTR_TO_JSON(ips, ips_);
            DARABONBA_PTR_TO_JSON(whiteIpType, whiteIpType_);
          };
          friend void from_json(const Darabonba::Json& j, WhiteIpGroupList& obj) { 
            DARABONBA_PTR_FROM_JSON(groupName, groupName_);
            DARABONBA_PTR_FROM_JSON(ips, ips_);
            DARABONBA_PTR_FROM_JSON(whiteIpType, whiteIpType_);
          };
          WhiteIpGroupList() = default ;
          WhiteIpGroupList(const WhiteIpGroupList &) = default ;
          WhiteIpGroupList(WhiteIpGroupList &&) = default ;
          WhiteIpGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WhiteIpGroupList() = default ;
          WhiteIpGroupList& operator=(const WhiteIpGroupList &) = default ;
          WhiteIpGroupList& operator=(WhiteIpGroupList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->groupName_ == nullptr
        && this->ips_ == nullptr && this->whiteIpType_ == nullptr; };
          // groupName Field Functions 
          bool hasGroupName() const { return this->groupName_ != nullptr;};
          void deleteGroupName() { this->groupName_ = nullptr;};
          inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
          inline WhiteIpGroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


          // ips Field Functions 
          bool hasIps() const { return this->ips_ != nullptr;};
          void deleteIps() { this->ips_ = nullptr;};
          inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
          inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
          inline WhiteIpGroupList& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
          inline WhiteIpGroupList& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


          // whiteIpType Field Functions 
          bool hasWhiteIpType() const { return this->whiteIpType_ != nullptr;};
          void deleteWhiteIpType() { this->whiteIpType_ = nullptr;};
          inline string getWhiteIpType() const { DARABONBA_PTR_GET_DEFAULT(whiteIpType_, "") };
          inline WhiteIpGroupList& setWhiteIpType(string whiteIpType) { DARABONBA_PTR_SET_VALUE(whiteIpType_, whiteIpType) };


        protected:
          // The IP addresses in the whitelist.
          shared_ptr<string> groupName_ {};
          // The IP addresses in the whitelist.
          shared_ptr<vector<string>> ips_ {};
          shared_ptr<string> whiteIpType_ {};
        };

        virtual bool empty() const override { return this->type_ == nullptr
        && this->vpcId_ == nullptr && this->vsArea_ == nullptr && this->vswitchId_ == nullptr && this->whiteIpGroupList_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline NetworkConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline NetworkConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vsArea Field Functions 
        bool hasVsArea() const { return this->vsArea_ != nullptr;};
        void deleteVsArea() { this->vsArea_ = nullptr;};
        inline string getVsArea() const { DARABONBA_PTR_GET_DEFAULT(vsArea_, "") };
        inline NetworkConfig& setVsArea(string vsArea) { DARABONBA_PTR_SET_VALUE(vsArea_, vsArea) };


        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline NetworkConfig& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


        // whiteIpGroupList Field Functions 
        bool hasWhiteIpGroupList() const { return this->whiteIpGroupList_ != nullptr;};
        void deleteWhiteIpGroupList() { this->whiteIpGroupList_ = nullptr;};
        inline const vector<NetworkConfig::WhiteIpGroupList> & getWhiteIpGroupList() const { DARABONBA_PTR_GET_CONST(whiteIpGroupList_, vector<NetworkConfig::WhiteIpGroupList>) };
        inline vector<NetworkConfig::WhiteIpGroupList> getWhiteIpGroupList() { DARABONBA_PTR_GET(whiteIpGroupList_, vector<NetworkConfig::WhiteIpGroupList>) };
        inline NetworkConfig& setWhiteIpGroupList(const vector<NetworkConfig::WhiteIpGroupList> & whiteIpGroupList) { DARABONBA_PTR_SET_VALUE(whiteIpGroupList_, whiteIpGroupList) };
        inline NetworkConfig& setWhiteIpGroupList(vector<NetworkConfig::WhiteIpGroupList> && whiteIpGroupList) { DARABONBA_PTR_SET_RVALUE(whiteIpGroupList_, whiteIpGroupList) };


      protected:
        // The IP address whitelists.
        shared_ptr<string> type_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vpcId_ {};
        // The network type.
        shared_ptr<string> vsArea_ {};
        // The region ID.
        shared_ptr<string> vswitchId_ {};
        // The IP address whitelists.
        shared_ptr<vector<NetworkConfig::WhiteIpGroupList>> whiteIpGroupList_ {};
      };

      virtual bool empty() const override { return this->kibanaIPWhitelist_ == nullptr
        && this->kibanaPrivateIPWhitelist_ == nullptr && this->networkConfig_ == nullptr; };
      // kibanaIPWhitelist Field Functions 
      bool hasKibanaIPWhitelist() const { return this->kibanaIPWhitelist_ != nullptr;};
      void deleteKibanaIPWhitelist() { this->kibanaIPWhitelist_ = nullptr;};
      inline const vector<string> & getKibanaIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaIPWhitelist_, vector<string>) };
      inline vector<string> getKibanaIPWhitelist() { DARABONBA_PTR_GET(kibanaIPWhitelist_, vector<string>) };
      inline Result& setKibanaIPWhitelist(const vector<string> & kibanaIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };
      inline Result& setKibanaIPWhitelist(vector<string> && kibanaIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };


      // kibanaPrivateIPWhitelist Field Functions 
      bool hasKibanaPrivateIPWhitelist() const { return this->kibanaPrivateIPWhitelist_ != nullptr;};
      void deleteKibanaPrivateIPWhitelist() { this->kibanaPrivateIPWhitelist_ = nullptr;};
      inline const vector<string> & getKibanaPrivateIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaPrivateIPWhitelist_, vector<string>) };
      inline vector<string> getKibanaPrivateIPWhitelist() { DARABONBA_PTR_GET(kibanaPrivateIPWhitelist_, vector<string>) };
      inline Result& setKibanaPrivateIPWhitelist(const vector<string> & kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };
      inline Result& setKibanaPrivateIPWhitelist(vector<string> && kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };


      // networkConfig Field Functions 
      bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
      void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
      inline const Result::NetworkConfig & getNetworkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Result::NetworkConfig) };
      inline Result::NetworkConfig getNetworkConfig() { DARABONBA_PTR_GET(networkConfig_, Result::NetworkConfig) };
      inline Result& setNetworkConfig(const Result::NetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
      inline Result& setNetworkConfig(Result::NetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    protected:
      // The public IP address whitelists for access to the Kibana console of the cluster.
      shared_ptr<vector<string>> kibanaIPWhitelist_ {};
      // The private IP address whitelists for access to the Kibana console of the cluster.
      shared_ptr<vector<string>> kibanaPrivateIPWhitelist_ {};
      // The ID of the virtual private cloud (VPC).
      shared_ptr<Result::NetworkConfig> networkConfig_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateKibanaWhiteIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdateKibanaWhiteIpsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, UpdateKibanaWhiteIpsResponseBody::Result) };
    inline UpdateKibanaWhiteIpsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, UpdateKibanaWhiteIpsResponseBody::Result) };
    inline UpdateKibanaWhiteIpsResponseBody& setResult(const UpdateKibanaWhiteIpsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateKibanaWhiteIpsResponseBody& setResult(UpdateKibanaWhiteIpsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The details of the Elasticsearch cluster.
    shared_ptr<string> requestId_ {};
    // The private IP address whitelists for access to the Kibana console of the cluster.
    shared_ptr<UpdateKibanaWhiteIpsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
