// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATENETWROKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATENETWROKREQUEST_HPP_
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
  class UpdatePrivateNetwrokRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateNetwrokRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateNetwrokRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdatePrivateNetwrokRequest() = default ;
    UpdatePrivateNetwrokRequest(const UpdatePrivateNetwrokRequest &) = default ;
    UpdatePrivateNetwrokRequest(UpdatePrivateNetwrokRequest &&) = default ;
    UpdatePrivateNetwrokRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateNetwrokRequest() = default ;
    UpdatePrivateNetwrokRequest& operator=(const UpdatePrivateNetwrokRequest &) = default ;
    UpdatePrivateNetwrokRequest& operator=(UpdatePrivateNetwrokRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(pvlEndpointId, pvlEndpointId_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(pvlEndpointId, pvlEndpointId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(whiteIpGroup, whiteIpGroup_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WhiteIpGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WhiteIpGroup& obj) { 
          DARABONBA_PTR_TO_JSON(groupName, groupName_);
          DARABONBA_PTR_TO_JSON(ips, ips_);
          DARABONBA_PTR_TO_JSON(modifyMode, modifyMode_);
        };
        friend void from_json(const Darabonba::Json& j, WhiteIpGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(groupName, groupName_);
          DARABONBA_PTR_FROM_JSON(ips, ips_);
          DARABONBA_PTR_FROM_JSON(modifyMode, modifyMode_);
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
        && this->ips_ == nullptr && this->modifyMode_ == nullptr; };
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


        // modifyMode Field Functions 
        bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
        void deleteModifyMode() { this->modifyMode_ = nullptr;};
        inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
        inline WhiteIpGroup& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


      protected:
        shared_ptr<string> groupName_ {};
        shared_ptr<vector<string>> ips_ {};
        shared_ptr<string> modifyMode_ {};
      };

      virtual bool empty() const override { return this->domain_ == nullptr
        && this->enabled_ == nullptr && this->port_ == nullptr && this->pvlEndpointId_ == nullptr && this->type_ == nullptr && this->vpcId_ == nullptr
        && this->whiteIpGroup_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Body& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Body& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Body& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // pvlEndpointId Field Functions 
      bool hasPvlEndpointId() const { return this->pvlEndpointId_ != nullptr;};
      void deletePvlEndpointId() { this->pvlEndpointId_ = nullptr;};
      inline string getPvlEndpointId() const { DARABONBA_PTR_GET_DEFAULT(pvlEndpointId_, "") };
      inline Body& setPvlEndpointId(string pvlEndpointId) { DARABONBA_PTR_SET_VALUE(pvlEndpointId_, pvlEndpointId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Body& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Body& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // whiteIpGroup Field Functions 
      bool hasWhiteIpGroup() const { return this->whiteIpGroup_ != nullptr;};
      void deleteWhiteIpGroup() { this->whiteIpGroup_ = nullptr;};
      inline const vector<Body::WhiteIpGroup> & getWhiteIpGroup() const { DARABONBA_PTR_GET_CONST(whiteIpGroup_, vector<Body::WhiteIpGroup>) };
      inline vector<Body::WhiteIpGroup> getWhiteIpGroup() { DARABONBA_PTR_GET(whiteIpGroup_, vector<Body::WhiteIpGroup>) };
      inline Body& setWhiteIpGroup(const vector<Body::WhiteIpGroup> & whiteIpGroup) { DARABONBA_PTR_SET_VALUE(whiteIpGroup_, whiteIpGroup) };
      inline Body& setWhiteIpGroup(vector<Body::WhiteIpGroup> && whiteIpGroup) { DARABONBA_PTR_SET_RVALUE(whiteIpGroup_, whiteIpGroup) };


    protected:
      shared_ptr<string> domain_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> pvlEndpointId_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<vector<Body::WhiteIpGroup>> whiteIpGroup_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<UpdatePrivateNetwrokRequest::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<UpdatePrivateNetwrokRequest::Body>) };
    inline vector<UpdatePrivateNetwrokRequest::Body> getBody() { DARABONBA_PTR_GET(body_, vector<UpdatePrivateNetwrokRequest::Body>) };
    inline UpdatePrivateNetwrokRequest& setBody(const vector<UpdatePrivateNetwrokRequest::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdatePrivateNetwrokRequest& setBody(vector<UpdatePrivateNetwrokRequest::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<vector<UpdatePrivateNetwrokRequest::Body>> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
