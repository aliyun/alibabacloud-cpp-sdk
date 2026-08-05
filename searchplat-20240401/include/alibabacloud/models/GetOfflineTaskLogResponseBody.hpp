// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOFFLINETASKLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOFFLINETASKLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class GetOfflineTaskLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOfflineTaskLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetOfflineTaskLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetOfflineTaskLogResponseBody() = default ;
    GetOfflineTaskLogResponseBody(const GetOfflineTaskLogResponseBody &) = default ;
    GetOfflineTaskLogResponseBody(GetOfflineTaskLogResponseBody &&) = default ;
    GetOfflineTaskLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOfflineTaskLogResponseBody() = default ;
    GetOfflineTaskLogResponseBody& operator=(const GetOfflineTaskLogResponseBody &) = default ;
    GetOfflineTaskLogResponseBody& operator=(GetOfflineTaskLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(network, network_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(network, network_);
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
      class Network : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Network& obj) { 
          DARABONBA_PTR_TO_JSON(privateEs, privateEs_);
          DARABONBA_PTR_TO_JSON(publicEs, publicEs_);
        };
        friend void from_json(const Darabonba::Json& j, Network& obj) { 
          DARABONBA_PTR_FROM_JSON(privateEs, privateEs_);
          DARABONBA_PTR_FROM_JSON(publicEs, publicEs_);
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
        class PublicEs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PublicEs& obj) { 
            DARABONBA_PTR_TO_JSON(domain, domain_);
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
            DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
          };
          friend void from_json(const Darabonba::Json& j, PublicEs& obj) { 
            DARABONBA_PTR_FROM_JSON(domain, domain_);
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(whiteIpGroup, whiteIpGroup_);
          };
          PublicEs() = default ;
          PublicEs(const PublicEs &) = default ;
          PublicEs(PublicEs &&) = default ;
          PublicEs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PublicEs() = default ;
          PublicEs& operator=(const PublicEs &) = default ;
          PublicEs& operator=(PublicEs &&) = default ;
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
            // The group name.
            shared_ptr<string> groupName_ {};
            // The list of IP addresses in the whitelist group.
            shared_ptr<vector<string>> ips_ {};
          };

          virtual bool empty() const override { return this->domain_ == nullptr
        && this->enabled_ == nullptr && this->whiteIpGroup_ == nullptr; };
          // domain Field Functions 
          bool hasDomain() const { return this->domain_ != nullptr;};
          void deleteDomain() { this->domain_ = nullptr;};
          inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
          inline PublicEs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline PublicEs& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // whiteIpGroup Field Functions 
          bool hasWhiteIpGroup() const { return this->whiteIpGroup_ != nullptr;};
          void deleteWhiteIpGroup() { this->whiteIpGroup_ = nullptr;};
          inline const vector<PublicEs::WhiteIpGroup> & getWhiteIpGroup() const { DARABONBA_PTR_GET_CONST(whiteIpGroup_, vector<PublicEs::WhiteIpGroup>) };
          inline vector<PublicEs::WhiteIpGroup> getWhiteIpGroup() { DARABONBA_PTR_GET(whiteIpGroup_, vector<PublicEs::WhiteIpGroup>) };
          inline PublicEs& setWhiteIpGroup(const vector<PublicEs::WhiteIpGroup> & whiteIpGroup) { DARABONBA_PTR_SET_VALUE(whiteIpGroup_, whiteIpGroup) };
          inline PublicEs& setWhiteIpGroup(vector<PublicEs::WhiteIpGroup> && whiteIpGroup) { DARABONBA_PTR_SET_RVALUE(whiteIpGroup_, whiteIpGroup) };


        protected:
          // The public domain name of ES.
          shared_ptr<string> domain_ {};
          // Indicates whether public ES is enabled.
          shared_ptr<bool> enabled_ {};
          // The IP whitelist groups.
          shared_ptr<vector<PublicEs::WhiteIpGroup>> whiteIpGroup_ {};
        };

        class PrivateEs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrivateEs& obj) { 
            DARABONBA_PTR_TO_JSON(domain, domain_);
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
            DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
          };
          friend void from_json(const Darabonba::Json& j, PrivateEs& obj) { 
            DARABONBA_PTR_FROM_JSON(domain, domain_);
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(whiteIpGroup, whiteIpGroup_);
          };
          PrivateEs() = default ;
          PrivateEs(const PrivateEs &) = default ;
          PrivateEs(PrivateEs &&) = default ;
          PrivateEs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrivateEs() = default ;
          PrivateEs& operator=(const PrivateEs &) = default ;
          PrivateEs& operator=(PrivateEs &&) = default ;
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
            // The group name.
            shared_ptr<string> groupName_ {};
            // The list of IP addresses in the whitelist group.
            shared_ptr<vector<string>> ips_ {};
          };

          virtual bool empty() const override { return this->domain_ == nullptr
        && this->enabled_ == nullptr && this->whiteIpGroup_ == nullptr; };
          // domain Field Functions 
          bool hasDomain() const { return this->domain_ != nullptr;};
          void deleteDomain() { this->domain_ = nullptr;};
          inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
          inline PrivateEs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline PrivateEs& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // whiteIpGroup Field Functions 
          bool hasWhiteIpGroup() const { return this->whiteIpGroup_ != nullptr;};
          void deleteWhiteIpGroup() { this->whiteIpGroup_ = nullptr;};
          inline const vector<PrivateEs::WhiteIpGroup> & getWhiteIpGroup() const { DARABONBA_PTR_GET_CONST(whiteIpGroup_, vector<PrivateEs::WhiteIpGroup>) };
          inline vector<PrivateEs::WhiteIpGroup> getWhiteIpGroup() { DARABONBA_PTR_GET(whiteIpGroup_, vector<PrivateEs::WhiteIpGroup>) };
          inline PrivateEs& setWhiteIpGroup(const vector<PrivateEs::WhiteIpGroup> & whiteIpGroup) { DARABONBA_PTR_SET_VALUE(whiteIpGroup_, whiteIpGroup) };
          inline PrivateEs& setWhiteIpGroup(vector<PrivateEs::WhiteIpGroup> && whiteIpGroup) { DARABONBA_PTR_SET_RVALUE(whiteIpGroup_, whiteIpGroup) };


        protected:
          // The domain name of the private ES.
          shared_ptr<string> domain_ {};
          // Indicates whether private ES is enabled.
          shared_ptr<bool> enabled_ {};
          // The IP whitelist groups.
          shared_ptr<vector<PrivateEs::WhiteIpGroup>> whiteIpGroup_ {};
        };

        virtual bool empty() const override { return this->privateEs_ == nullptr
        && this->publicEs_ == nullptr; };
        // privateEs Field Functions 
        bool hasPrivateEs() const { return this->privateEs_ != nullptr;};
        void deletePrivateEs() { this->privateEs_ = nullptr;};
        inline const Network::PrivateEs & getPrivateEs() const { DARABONBA_PTR_GET_CONST(privateEs_, Network::PrivateEs) };
        inline Network::PrivateEs getPrivateEs() { DARABONBA_PTR_GET(privateEs_, Network::PrivateEs) };
        inline Network& setPrivateEs(const Network::PrivateEs & privateEs) { DARABONBA_PTR_SET_VALUE(privateEs_, privateEs) };
        inline Network& setPrivateEs(Network::PrivateEs && privateEs) { DARABONBA_PTR_SET_RVALUE(privateEs_, privateEs) };


        // publicEs Field Functions 
        bool hasPublicEs() const { return this->publicEs_ != nullptr;};
        void deletePublicEs() { this->publicEs_ = nullptr;};
        inline const Network::PublicEs & getPublicEs() const { DARABONBA_PTR_GET_CONST(publicEs_, Network::PublicEs) };
        inline Network::PublicEs getPublicEs() { DARABONBA_PTR_GET(publicEs_, Network::PublicEs) };
        inline Network& setPublicEs(const Network::PublicEs & publicEs) { DARABONBA_PTR_SET_VALUE(publicEs_, publicEs) };
        inline Network& setPublicEs(Network::PublicEs && publicEs) { DARABONBA_PTR_SET_RVALUE(publicEs_, publicEs) };


      protected:
        // The private ES information.
        shared_ptr<Network::PrivateEs> privateEs_ {};
        // The public ES information.
        shared_ptr<Network::PublicEs> publicEs_ {};
      };

      virtual bool empty() const override { return this->network_ == nullptr; };
      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline const Result::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, Result::Network) };
      inline Result::Network getNetwork() { DARABONBA_PTR_GET(network_, Result::Network) };
      inline Result& setNetwork(const Result::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
      inline Result& setNetwork(Result::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    protected:
      // The network information.
      shared_ptr<Result::Network> network_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOfflineTaskLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetOfflineTaskLogResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetOfflineTaskLogResponseBody::Result) };
    inline GetOfflineTaskLogResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetOfflineTaskLogResponseBody::Result) };
    inline GetOfflineTaskLogResponseBody& setResult(const GetOfflineTaskLogResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetOfflineTaskLogResponseBody& setResult(GetOfflineTaskLogResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<GetOfflineTaskLogResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
