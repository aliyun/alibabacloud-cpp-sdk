// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPREQUEST_HPP_
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
  class UpdateAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applyReason, applyReason_);
      DARABONBA_PTR_TO_JSON(authentication, authentication_);
      DARABONBA_PTR_TO_JSON(contactInfo, contactInfo_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(limiterInfo, limiterInfo_);
      DARABONBA_PTR_TO_JSON(network, network_);
      DARABONBA_PTR_TO_JSON(privateNetwork, privateNetwork_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applyReason, applyReason_);
      DARABONBA_PTR_FROM_JSON(authentication, authentication_);
      DARABONBA_PTR_FROM_JSON(contactInfo, contactInfo_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(limiterInfo, limiterInfo_);
      DARABONBA_PTR_FROM_JSON(network, network_);
      DARABONBA_PTR_FROM_JSON(privateNetwork, privateNetwork_);
    };
    UpdateAppRequest() = default ;
    UpdateAppRequest(const UpdateAppRequest &) = default ;
    UpdateAppRequest(UpdateAppRequest &&) = default ;
    UpdateAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppRequest() = default ;
    UpdateAppRequest& operator=(const UpdateAppRequest &) = default ;
    UpdateAppRequest& operator=(UpdateAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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

    class LimiterInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LimiterInfo& obj) { 
        DARABONBA_PTR_TO_JSON(limiters, limiters_);
      };
      friend void from_json(const Darabonba::Json& j, LimiterInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(limiters, limiters_);
      };
      LimiterInfo() = default ;
      LimiterInfo(const LimiterInfo &) = default ;
      LimiterInfo(LimiterInfo &&) = default ;
      LimiterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LimiterInfo() = default ;
      LimiterInfo& operator=(const LimiterInfo &) = default ;
      LimiterInfo& operator=(LimiterInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Limiters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Limiters& obj) { 
          DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
          DARABONBA_PTR_TO_JSON(minValue, minValue_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Limiters& obj) { 
          DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
          DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(values, values_);
        };
        Limiters() = default ;
        Limiters(const Limiters &) = default ;
        Limiters(Limiters &&) = default ;
        Limiters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Limiters() = default ;
        Limiters& operator=(const Limiters &) = default ;
        Limiters& operator=(Limiters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr && this->type_ == nullptr && this->values_ == nullptr; };
        // maxValue Field Functions 
        bool hasMaxValue() const { return this->maxValue_ != nullptr;};
        void deleteMaxValue() { this->maxValue_ = nullptr;};
        inline int32_t getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0) };
        inline Limiters& setMaxValue(int32_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


        // minValue Field Functions 
        bool hasMinValue() const { return this->minValue_ != nullptr;};
        void deleteMinValue() { this->minValue_ = nullptr;};
        inline int32_t getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0) };
        inline Limiters& setMinValue(int32_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Limiters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline Limiters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline Limiters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        shared_ptr<int32_t> maxValue_ {};
        shared_ptr<int32_t> minValue_ {};
        shared_ptr<string> type_ {};
        shared_ptr<vector<string>> values_ {};
      };

      virtual bool empty() const override { return this->limiters_ == nullptr; };
      // limiters Field Functions 
      bool hasLimiters() const { return this->limiters_ != nullptr;};
      void deleteLimiters() { this->limiters_ = nullptr;};
      inline const vector<LimiterInfo::Limiters> & getLimiters() const { DARABONBA_PTR_GET_CONST(limiters_, vector<LimiterInfo::Limiters>) };
      inline vector<LimiterInfo::Limiters> getLimiters() { DARABONBA_PTR_GET(limiters_, vector<LimiterInfo::Limiters>) };
      inline LimiterInfo& setLimiters(const vector<LimiterInfo::Limiters> & limiters) { DARABONBA_PTR_SET_VALUE(limiters_, limiters) };
      inline LimiterInfo& setLimiters(vector<LimiterInfo::Limiters> && limiters) { DARABONBA_PTR_SET_RVALUE(limiters_, limiters) };


    protected:
      shared_ptr<vector<LimiterInfo::Limiters>> limiters_ {};
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

    virtual bool empty() const override { return this->applyReason_ == nullptr
        && this->authentication_ == nullptr && this->contactInfo_ == nullptr && this->description_ == nullptr && this->limiterInfo_ == nullptr && this->network_ == nullptr
        && this->privateNetwork_ == nullptr; };
    // applyReason Field Functions 
    bool hasApplyReason() const { return this->applyReason_ != nullptr;};
    void deleteApplyReason() { this->applyReason_ = nullptr;};
    inline string getApplyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
    inline UpdateAppRequest& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


    // authentication Field Functions 
    bool hasAuthentication() const { return this->authentication_ != nullptr;};
    void deleteAuthentication() { this->authentication_ = nullptr;};
    inline const UpdateAppRequest::Authentication & getAuthentication() const { DARABONBA_PTR_GET_CONST(authentication_, UpdateAppRequest::Authentication) };
    inline UpdateAppRequest::Authentication getAuthentication() { DARABONBA_PTR_GET(authentication_, UpdateAppRequest::Authentication) };
    inline UpdateAppRequest& setAuthentication(const UpdateAppRequest::Authentication & authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };
    inline UpdateAppRequest& setAuthentication(UpdateAppRequest::Authentication && authentication) { DARABONBA_PTR_SET_RVALUE(authentication_, authentication) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline string getContactInfo() const { DARABONBA_PTR_GET_DEFAULT(contactInfo_, "") };
    inline UpdateAppRequest& setContactInfo(string contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // limiterInfo Field Functions 
    bool hasLimiterInfo() const { return this->limiterInfo_ != nullptr;};
    void deleteLimiterInfo() { this->limiterInfo_ = nullptr;};
    inline const UpdateAppRequest::LimiterInfo & getLimiterInfo() const { DARABONBA_PTR_GET_CONST(limiterInfo_, UpdateAppRequest::LimiterInfo) };
    inline UpdateAppRequest::LimiterInfo getLimiterInfo() { DARABONBA_PTR_GET(limiterInfo_, UpdateAppRequest::LimiterInfo) };
    inline UpdateAppRequest& setLimiterInfo(const UpdateAppRequest::LimiterInfo & limiterInfo) { DARABONBA_PTR_SET_VALUE(limiterInfo_, limiterInfo) };
    inline UpdateAppRequest& setLimiterInfo(UpdateAppRequest::LimiterInfo && limiterInfo) { DARABONBA_PTR_SET_RVALUE(limiterInfo_, limiterInfo) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const vector<UpdateAppRequest::Network> & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, vector<UpdateAppRequest::Network>) };
    inline vector<UpdateAppRequest::Network> getNetwork() { DARABONBA_PTR_GET(network_, vector<UpdateAppRequest::Network>) };
    inline UpdateAppRequest& setNetwork(const vector<UpdateAppRequest::Network> & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline UpdateAppRequest& setNetwork(vector<UpdateAppRequest::Network> && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // privateNetwork Field Functions 
    bool hasPrivateNetwork() const { return this->privateNetwork_ != nullptr;};
    void deletePrivateNetwork() { this->privateNetwork_ = nullptr;};
    inline const vector<UpdateAppRequest::PrivateNetwork> & getPrivateNetwork() const { DARABONBA_PTR_GET_CONST(privateNetwork_, vector<UpdateAppRequest::PrivateNetwork>) };
    inline vector<UpdateAppRequest::PrivateNetwork> getPrivateNetwork() { DARABONBA_PTR_GET(privateNetwork_, vector<UpdateAppRequest::PrivateNetwork>) };
    inline UpdateAppRequest& setPrivateNetwork(const vector<UpdateAppRequest::PrivateNetwork> & privateNetwork) { DARABONBA_PTR_SET_VALUE(privateNetwork_, privateNetwork) };
    inline UpdateAppRequest& setPrivateNetwork(vector<UpdateAppRequest::PrivateNetwork> && privateNetwork) { DARABONBA_PTR_SET_RVALUE(privateNetwork_, privateNetwork) };


  protected:
    shared_ptr<string> applyReason_ {};
    shared_ptr<UpdateAppRequest::Authentication> authentication_ {};
    shared_ptr<string> contactInfo_ {};
    // 应用备注
    shared_ptr<string> description_ {};
    shared_ptr<UpdateAppRequest::LimiterInfo> limiterInfo_ {};
    shared_ptr<vector<UpdateAppRequest::Network>> network_ {};
    shared_ptr<vector<UpdateAppRequest::PrivateNetwork>> privateNetwork_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
