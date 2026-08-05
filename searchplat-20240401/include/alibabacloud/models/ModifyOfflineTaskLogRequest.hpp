// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOFFLINETASKLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOFFLINETASKLOGREQUEST_HPP_
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
  class ModifyOfflineTaskLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOfflineTaskLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(network, network_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOfflineTaskLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(network, network_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    ModifyOfflineTaskLogRequest() = default ;
    ModifyOfflineTaskLogRequest(const ModifyOfflineTaskLogRequest &) = default ;
    ModifyOfflineTaskLogRequest(ModifyOfflineTaskLogRequest &&) = default ;
    ModifyOfflineTaskLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOfflineTaskLogRequest() = default ;
    ModifyOfflineTaskLogRequest& operator=(const ModifyOfflineTaskLogRequest &) = default ;
    ModifyOfflineTaskLogRequest& operator=(ModifyOfflineTaskLogRequest &&) = default ;
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
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
          DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
        };
        friend void from_json(const Darabonba::Json& j, PublicEs& obj) { 
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
          // **The name of the IP whitelist group.**
          shared_ptr<string> groupName_ {};
          // **The IP whitelist.**
          shared_ptr<vector<string>> ips_ {};
        };

        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->whiteIpGroup_ == nullptr; };
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
        // **Specifies whether to enable or disable public network access.**
        shared_ptr<bool> enabled_ {};
        // **The IP whitelist group information.**
        shared_ptr<vector<PublicEs::WhiteIpGroup>> whiteIpGroup_ {};
      };

      class PrivateEs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivateEs& obj) { 
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
          DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
        };
        friend void from_json(const Darabonba::Json& j, PrivateEs& obj) { 
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
          // The name of the IP whitelist group.
          shared_ptr<string> groupName_ {};
          // The IP whitelist.
          shared_ptr<vector<string>> ips_ {};
        };

        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->whiteIpGroup_ == nullptr; };
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
        // Specifies whether to enable or disable private network access.
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
      // The ES private network information.
      shared_ptr<Network::PrivateEs> privateEs_ {};
      // **The ES public network information.**
      shared_ptr<Network::PublicEs> publicEs_ {};
    };

    virtual bool empty() const override { return this->network_ == nullptr
        && this->regionId_ == nullptr; };
    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const ModifyOfflineTaskLogRequest::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, ModifyOfflineTaskLogRequest::Network) };
    inline ModifyOfflineTaskLogRequest::Network getNetwork() { DARABONBA_PTR_GET(network_, ModifyOfflineTaskLogRequest::Network) };
    inline ModifyOfflineTaskLogRequest& setNetwork(const ModifyOfflineTaskLogRequest::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline ModifyOfflineTaskLogRequest& setNetwork(ModifyOfflineTaskLogRequest::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyOfflineTaskLogRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The network configuration for enabling or disabling network access.
    shared_ptr<ModifyOfflineTaskLogRequest::Network> network_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
