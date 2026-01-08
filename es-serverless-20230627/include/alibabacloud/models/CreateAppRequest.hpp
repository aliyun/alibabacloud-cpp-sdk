// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class CreateAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appName, appName_);
      DARABONBA_PTR_TO_JSON(authentication, authentication_);
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(network, network_);
      DARABONBA_PTR_TO_JSON(privateNetwork, privateNetwork_);
      DARABONBA_PTR_TO_JSON(quotaInfo, quotaInfo_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(scenario, scenario_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appName, appName_);
      DARABONBA_PTR_FROM_JSON(authentication, authentication_);
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(network, network_);
      DARABONBA_PTR_FROM_JSON(privateNetwork, privateNetwork_);
      DARABONBA_PTR_FROM_JSON(quotaInfo, quotaInfo_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateAppRequest() = default ;
    CreateAppRequest(const CreateAppRequest &) = default ;
    CreateAppRequest(CreateAppRequest &&) = default ;
    CreateAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRequest() = default ;
    CreateAppRequest& operator=(const CreateAppRequest &) = default ;
    CreateAppRequest& operator=(CreateAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class QuotaInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaInfo& obj) { 
        DARABONBA_PTR_TO_JSON(appType, appType_);
        DARABONBA_PTR_TO_JSON(cu, cu_);
        DARABONBA_PTR_TO_JSON(storage, storage_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(appType, appType_);
        DARABONBA_PTR_FROM_JSON(cu, cu_);
        DARABONBA_PTR_FROM_JSON(storage, storage_);
      };
      QuotaInfo() = default ;
      QuotaInfo(const QuotaInfo &) = default ;
      QuotaInfo(QuotaInfo &&) = default ;
      QuotaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaInfo() = default ;
      QuotaInfo& operator=(const QuotaInfo &) = default ;
      QuotaInfo& operator=(QuotaInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appType_ == nullptr
        && this->cu_ == nullptr && this->storage_ == nullptr; };
      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline QuotaInfo& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
      inline QuotaInfo& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline int32_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
      inline QuotaInfo& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    protected:
      shared_ptr<string> appType_ {};
      shared_ptr<int32_t> cu_ {};
      shared_ptr<int32_t> storage_ {};
    };

    class PrivateNetwork : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivateNetwork& obj) { 
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(pvlEndpointId, pvlEndpointId_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
      };
      friend void from_json(const Darabonba::Json& j, PrivateNetwork& obj) { 
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(pvlEndpointId, pvlEndpointId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(whiteIpGroup, whiteIpGroup_);
      };
      PrivateNetwork() = default ;
      PrivateNetwork(const PrivateNetwork &) = default ;
      PrivateNetwork(PrivateNetwork &&) = default ;
      PrivateNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivateNetwork() = default ;
      PrivateNetwork& operator=(const PrivateNetwork &) = default ;
      PrivateNetwork& operator=(PrivateNetwork &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WhiteIpGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WhiteIpGroup& obj) { 
          DARABONBA_PTR_TO_JSON(groupName, groupName_);
          DARABONBA_PTR_TO_JSON(ips, ips_);
        };
        friend void from_json(const Darabonba::Json& j, WhiteIpGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(groupName, groupName_);
          DARABONBA_PTR_FROM_JSON(ips, ips_);
        };
        WhiteIpGroup() = default ;
        WhiteIpGroup(const WhiteIpGroup &) = default ;
        WhiteIpGroup(WhiteIpGroup &&) = default ;
        WhiteIpGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WhiteIpGroup() = default ;
        WhiteIpGroup& operator=(const WhiteIpGroup &) = default ;
        WhiteIpGroup& operator=(WhiteIpGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupName_ == nullptr
        && this->ips_ == nullptr; };
        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline WhiteIpGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // ips Field Functions 
        bool hasIps() const { return this->ips_ != nullptr;};
        void deleteIps() { this->ips_ = nullptr;};
        inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
        inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
        inline WhiteIpGroup& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
        inline WhiteIpGroup& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


      protected:
        shared_ptr<string> groupName_ {};
        shared_ptr<vector<string>> ips_ {};
      };

      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->pvlEndpointId_ == nullptr && this->type_ == nullptr && this->vpcId_ == nullptr && this->whiteIpGroup_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline PrivateNetwork& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // pvlEndpointId Field Functions 
      bool hasPvlEndpointId() const { return this->pvlEndpointId_ != nullptr;};
      void deletePvlEndpointId() { this->pvlEndpointId_ = nullptr;};
      inline string getPvlEndpointId() const { DARABONBA_PTR_GET_DEFAULT(pvlEndpointId_, "") };
      inline PrivateNetwork& setPvlEndpointId(string pvlEndpointId) { DARABONBA_PTR_SET_VALUE(pvlEndpointId_, pvlEndpointId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline PrivateNetwork& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline PrivateNetwork& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // whiteIpGroup Field Functions 
      bool hasWhiteIpGroup() const { return this->whiteIpGroup_ != nullptr;};
      void deleteWhiteIpGroup() { this->whiteIpGroup_ = nullptr;};
      inline const vector<PrivateNetwork::WhiteIpGroup> & getWhiteIpGroup() const { DARABONBA_PTR_GET_CONST(whiteIpGroup_, vector<PrivateNetwork::WhiteIpGroup>) };
      inline vector<PrivateNetwork::WhiteIpGroup> getWhiteIpGroup() { DARABONBA_PTR_GET(whiteIpGroup_, vector<PrivateNetwork::WhiteIpGroup>) };
      inline PrivateNetwork& setWhiteIpGroup(const vector<PrivateNetwork::WhiteIpGroup> & whiteIpGroup) { DARABONBA_PTR_SET_VALUE(whiteIpGroup_, whiteIpGroup) };
      inline PrivateNetwork& setWhiteIpGroup(vector<PrivateNetwork::WhiteIpGroup> && whiteIpGroup) { DARABONBA_PTR_SET_RVALUE(whiteIpGroup_, whiteIpGroup) };


    protected:
      shared_ptr<bool> enabled_ {};
      shared_ptr<string> pvlEndpointId_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<vector<PrivateNetwork::WhiteIpGroup>> whiteIpGroup_ {};
    };

    class Network : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Network& obj) { 
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
      };
      friend void from_json(const Darabonba::Json& j, Network& obj) { 
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(whiteIpGroup, whiteIpGroup_);
      };
      Network() = default ;
      Network(const Network &) = default ;
      Network(Network &&) = default ;
      Network(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Network() = default ;
      Network& operator=(const Network &) = default ;
      Network& operator=(Network &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WhiteIpGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WhiteIpGroup& obj) { 
          DARABONBA_PTR_TO_JSON(groupName, groupName_);
          DARABONBA_PTR_TO_JSON(ips, ips_);
        };
        friend void from_json(const Darabonba::Json& j, WhiteIpGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(groupName, groupName_);
          DARABONBA_PTR_FROM_JSON(ips, ips_);
        };
        WhiteIpGroup() = default ;
        WhiteIpGroup(const WhiteIpGroup &) = default ;
        WhiteIpGroup(WhiteIpGroup &&) = default ;
        WhiteIpGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WhiteIpGroup() = default ;
        WhiteIpGroup& operator=(const WhiteIpGroup &) = default ;
        WhiteIpGroup& operator=(WhiteIpGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupName_ == nullptr
        && this->ips_ == nullptr; };
        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline WhiteIpGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // ips Field Functions 
        bool hasIps() const { return this->ips_ != nullptr;};
        void deleteIps() { this->ips_ = nullptr;};
        inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
        inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
        inline WhiteIpGroup& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
        inline WhiteIpGroup& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


      protected:
        shared_ptr<string> groupName_ {};
        shared_ptr<vector<string>> ips_ {};
      };

      virtual bool empty() const override { return this->domain_ == nullptr
        && this->enabled_ == nullptr && this->port_ == nullptr && this->type_ == nullptr && this->whiteIpGroup_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Network& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Network& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Network& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Network& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // whiteIpGroup Field Functions 
      bool hasWhiteIpGroup() const { return this->whiteIpGroup_ != nullptr;};
      void deleteWhiteIpGroup() { this->whiteIpGroup_ = nullptr;};
      inline const vector<Network::WhiteIpGroup> & getWhiteIpGroup() const { DARABONBA_PTR_GET_CONST(whiteIpGroup_, vector<Network::WhiteIpGroup>) };
      inline vector<Network::WhiteIpGroup> getWhiteIpGroup() { DARABONBA_PTR_GET(whiteIpGroup_, vector<Network::WhiteIpGroup>) };
      inline Network& setWhiteIpGroup(const vector<Network::WhiteIpGroup> & whiteIpGroup) { DARABONBA_PTR_SET_VALUE(whiteIpGroup_, whiteIpGroup) };
      inline Network& setWhiteIpGroup(vector<Network::WhiteIpGroup> && whiteIpGroup) { DARABONBA_PTR_SET_RVALUE(whiteIpGroup_, whiteIpGroup) };


    protected:
      shared_ptr<string> domain_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> type_ {};
      shared_ptr<vector<Network::WhiteIpGroup>> whiteIpGroup_ {};
    };

    class Authentication : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Authentication& obj) { 
        DARABONBA_PTR_TO_JSON(basicAuth, basicAuth_);
      };
      friend void from_json(const Darabonba::Json& j, Authentication& obj) { 
        DARABONBA_PTR_FROM_JSON(basicAuth, basicAuth_);
      };
      Authentication() = default ;
      Authentication(const Authentication &) = default ;
      Authentication(Authentication &&) = default ;
      Authentication(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Authentication() = default ;
      Authentication& operator=(const Authentication &) = default ;
      Authentication& operator=(Authentication &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BasicAuth : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BasicAuth& obj) { 
          DARABONBA_PTR_TO_JSON(password, password_);
          DARABONBA_PTR_TO_JSON(username, username_);
        };
        friend void from_json(const Darabonba::Json& j, BasicAuth& obj) { 
          DARABONBA_PTR_FROM_JSON(password, password_);
          DARABONBA_PTR_FROM_JSON(username, username_);
        };
        BasicAuth() = default ;
        BasicAuth(const BasicAuth &) = default ;
        BasicAuth(BasicAuth &&) = default ;
        BasicAuth(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BasicAuth() = default ;
        BasicAuth& operator=(const BasicAuth &) = default ;
        BasicAuth& operator=(BasicAuth &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->password_ == nullptr
        && this->username_ == nullptr; };
        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
        inline BasicAuth& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline BasicAuth& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        shared_ptr<string> password_ {};
        shared_ptr<string> username_ {};
      };

      virtual bool empty() const override { return this->basicAuth_ == nullptr; };
      // basicAuth Field Functions 
      bool hasBasicAuth() const { return this->basicAuth_ != nullptr;};
      void deleteBasicAuth() { this->basicAuth_ = nullptr;};
      inline const vector<Authentication::BasicAuth> & getBasicAuth() const { DARABONBA_PTR_GET_CONST(basicAuth_, vector<Authentication::BasicAuth>) };
      inline vector<Authentication::BasicAuth> getBasicAuth() { DARABONBA_PTR_GET(basicAuth_, vector<Authentication::BasicAuth>) };
      inline Authentication& setBasicAuth(const vector<Authentication::BasicAuth> & basicAuth) { DARABONBA_PTR_SET_VALUE(basicAuth_, basicAuth) };
      inline Authentication& setBasicAuth(vector<Authentication::BasicAuth> && basicAuth) { DARABONBA_PTR_SET_RVALUE(basicAuth_, basicAuth) };


    protected:
      shared_ptr<vector<Authentication::BasicAuth>> basicAuth_ {};
    };

    virtual bool empty() const override { return this->appName_ == nullptr
        && this->authentication_ == nullptr && this->chargeType_ == nullptr && this->description_ == nullptr && this->network_ == nullptr && this->privateNetwork_ == nullptr
        && this->quotaInfo_ == nullptr && this->regionId_ == nullptr && this->scenario_ == nullptr && this->tags_ == nullptr && this->version_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // authentication Field Functions 
    bool hasAuthentication() const { return this->authentication_ != nullptr;};
    void deleteAuthentication() { this->authentication_ = nullptr;};
    inline const CreateAppRequest::Authentication & getAuthentication() const { DARABONBA_PTR_GET_CONST(authentication_, CreateAppRequest::Authentication) };
    inline CreateAppRequest::Authentication getAuthentication() { DARABONBA_PTR_GET(authentication_, CreateAppRequest::Authentication) };
    inline CreateAppRequest& setAuthentication(const CreateAppRequest::Authentication & authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };
    inline CreateAppRequest& setAuthentication(CreateAppRequest::Authentication && authentication) { DARABONBA_PTR_SET_RVALUE(authentication_, authentication) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateAppRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const vector<CreateAppRequest::Network> & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, vector<CreateAppRequest::Network>) };
    inline vector<CreateAppRequest::Network> getNetwork() { DARABONBA_PTR_GET(network_, vector<CreateAppRequest::Network>) };
    inline CreateAppRequest& setNetwork(const vector<CreateAppRequest::Network> & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline CreateAppRequest& setNetwork(vector<CreateAppRequest::Network> && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // privateNetwork Field Functions 
    bool hasPrivateNetwork() const { return this->privateNetwork_ != nullptr;};
    void deletePrivateNetwork() { this->privateNetwork_ = nullptr;};
    inline const vector<CreateAppRequest::PrivateNetwork> & getPrivateNetwork() const { DARABONBA_PTR_GET_CONST(privateNetwork_, vector<CreateAppRequest::PrivateNetwork>) };
    inline vector<CreateAppRequest::PrivateNetwork> getPrivateNetwork() { DARABONBA_PTR_GET(privateNetwork_, vector<CreateAppRequest::PrivateNetwork>) };
    inline CreateAppRequest& setPrivateNetwork(const vector<CreateAppRequest::PrivateNetwork> & privateNetwork) { DARABONBA_PTR_SET_VALUE(privateNetwork_, privateNetwork) };
    inline CreateAppRequest& setPrivateNetwork(vector<CreateAppRequest::PrivateNetwork> && privateNetwork) { DARABONBA_PTR_SET_RVALUE(privateNetwork_, privateNetwork) };


    // quotaInfo Field Functions 
    bool hasQuotaInfo() const { return this->quotaInfo_ != nullptr;};
    void deleteQuotaInfo() { this->quotaInfo_ = nullptr;};
    inline const CreateAppRequest::QuotaInfo & getQuotaInfo() const { DARABONBA_PTR_GET_CONST(quotaInfo_, CreateAppRequest::QuotaInfo) };
    inline CreateAppRequest::QuotaInfo getQuotaInfo() { DARABONBA_PTR_GET(quotaInfo_, CreateAppRequest::QuotaInfo) };
    inline CreateAppRequest& setQuotaInfo(const CreateAppRequest::QuotaInfo & quotaInfo) { DARABONBA_PTR_SET_VALUE(quotaInfo_, quotaInfo) };
    inline CreateAppRequest& setQuotaInfo(CreateAppRequest::QuotaInfo && quotaInfo) { DARABONBA_PTR_SET_RVALUE(quotaInfo_, quotaInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAppRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline CreateAppRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateAppRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateAppRequest::Tags>) };
    inline vector<CreateAppRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateAppRequest::Tags>) };
    inline CreateAppRequest& setTags(const vector<CreateAppRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateAppRequest& setTags(vector<CreateAppRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateAppRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAppRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateAppRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // 应用名
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<CreateAppRequest::Authentication> authentication_ {};
    // This parameter is required.
    shared_ptr<string> chargeType_ {};
    // 应用备注
    shared_ptr<string> description_ {};
    shared_ptr<vector<CreateAppRequest::Network>> network_ {};
    shared_ptr<vector<CreateAppRequest::PrivateNetwork>> privateNetwork_ {};
    shared_ptr<CreateAppRequest::QuotaInfo> quotaInfo_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> scenario_ {};
    shared_ptr<vector<CreateAppRequest::Tags>> tags_ {};
    shared_ptr<string> version_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
