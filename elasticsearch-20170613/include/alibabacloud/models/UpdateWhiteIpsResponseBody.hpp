// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITEIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITEIPSRESPONSEBODY_HPP_
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
  class UpdateWhiteIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhiteIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhiteIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpdateWhiteIpsResponseBody() = default ;
    UpdateWhiteIpsResponseBody(const UpdateWhiteIpsResponseBody &) = default ;
    UpdateWhiteIpsResponseBody(UpdateWhiteIpsResponseBody &&) = default ;
    UpdateWhiteIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhiteIpsResponseBody() = default ;
    UpdateWhiteIpsResponseBody& operator=(const UpdateWhiteIpsResponseBody &) = default ;
    UpdateWhiteIpsResponseBody& operator=(UpdateWhiteIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(esIPWhitelist, esIPWhitelist_);
        DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(esIPWhitelist, esIPWhitelist_);
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
          DARABONBA_PTR_TO_JSON(whiteIpGroupList, whiteIpGroupList_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkConfig& obj) { 
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
          // The type of the whitelist. The value of this parameter is fixed as PRIVATE_ES, which indicates a private IP address whitelist.
          shared_ptr<string> groupName_ {};
          shared_ptr<vector<string>> ips_ {};
          shared_ptr<string> whiteIpType_ {};
        };

        virtual bool empty() const override { return this->whiteIpGroupList_ == nullptr; };
        // whiteIpGroupList Field Functions 
        bool hasWhiteIpGroupList() const { return this->whiteIpGroupList_ != nullptr;};
        void deleteWhiteIpGroupList() { this->whiteIpGroupList_ = nullptr;};
        inline const vector<NetworkConfig::WhiteIpGroupList> & getWhiteIpGroupList() const { DARABONBA_PTR_GET_CONST(whiteIpGroupList_, vector<NetworkConfig::WhiteIpGroupList>) };
        inline vector<NetworkConfig::WhiteIpGroupList> getWhiteIpGroupList() { DARABONBA_PTR_GET(whiteIpGroupList_, vector<NetworkConfig::WhiteIpGroupList>) };
        inline NetworkConfig& setWhiteIpGroupList(const vector<NetworkConfig::WhiteIpGroupList> & whiteIpGroupList) { DARABONBA_PTR_SET_VALUE(whiteIpGroupList_, whiteIpGroupList) };
        inline NetworkConfig& setWhiteIpGroupList(vector<NetworkConfig::WhiteIpGroupList> && whiteIpGroupList) { DARABONBA_PTR_SET_RVALUE(whiteIpGroupList_, whiteIpGroupList) };


      protected:
        // The IP addresses in the whitelist.
        shared_ptr<vector<NetworkConfig::WhiteIpGroupList>> whiteIpGroupList_ {};
      };

      virtual bool empty() const override { return this->esIPWhitelist_ == nullptr
        && this->networkConfig_ == nullptr; };
      // esIPWhitelist Field Functions 
      bool hasEsIPWhitelist() const { return this->esIPWhitelist_ != nullptr;};
      void deleteEsIPWhitelist() { this->esIPWhitelist_ = nullptr;};
      inline const vector<string> & getEsIPWhitelist() const { DARABONBA_PTR_GET_CONST(esIPWhitelist_, vector<string>) };
      inline vector<string> getEsIPWhitelist() { DARABONBA_PTR_GET(esIPWhitelist_, vector<string>) };
      inline Result& setEsIPWhitelist(const vector<string> & esIPWhitelist) { DARABONBA_PTR_SET_VALUE(esIPWhitelist_, esIPWhitelist) };
      inline Result& setEsIPWhitelist(vector<string> && esIPWhitelist) { DARABONBA_PTR_SET_RVALUE(esIPWhitelist_, esIPWhitelist) };


      // networkConfig Field Functions 
      bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
      void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
      inline const Result::NetworkConfig & getNetworkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Result::NetworkConfig) };
      inline Result::NetworkConfig getNetworkConfig() { DARABONBA_PTR_GET(networkConfig_, Result::NetworkConfig) };
      inline Result& setNetworkConfig(const Result::NetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
      inline Result& setNetworkConfig(Result::NetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    protected:
      // The list of whitelists.
      shared_ptr<vector<string>> esIPWhitelist_ {};
      // The name of the whitelist. By default, the default whitelist is included.
      shared_ptr<Result::NetworkConfig> networkConfig_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateWhiteIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdateWhiteIpsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, UpdateWhiteIpsResponseBody::Result) };
    inline UpdateWhiteIpsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, UpdateWhiteIpsResponseBody::Result) };
    inline UpdateWhiteIpsResponseBody& setResult(const UpdateWhiteIpsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateWhiteIpsResponseBody& setResult(UpdateWhiteIpsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The updated whitelist.
    shared_ptr<string> requestId_ {};
    // The network configurations.
    shared_ptr<UpdateWhiteIpsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
