// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATENETWROKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATENETWROKRESPONSEBODY_HPP_
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
  class UpdatePrivateNetwrokResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateNetwrokResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateNetwrokResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    UpdatePrivateNetwrokResponseBody() = default ;
    UpdatePrivateNetwrokResponseBody(const UpdatePrivateNetwrokResponseBody &) = default ;
    UpdatePrivateNetwrokResponseBody(UpdatePrivateNetwrokResponseBody &&) = default ;
    UpdatePrivateNetwrokResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateNetwrokResponseBody() = default ;
    UpdatePrivateNetwrokResponseBody& operator=(const UpdatePrivateNetwrokResponseBody &) = default ;
    UpdatePrivateNetwrokResponseBody& operator=(UpdatePrivateNetwrokResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(pvlEndpointId, pvlEndpointId_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(pvlEndpointId, pvlEndpointId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(whiteIpGroup, whiteIpGroup_);
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
        && this->enabled_ == nullptr && this->port_ == nullptr && this->pvlEndpointId_ == nullptr && this->type_ == nullptr && this->vpcId_ == nullptr
        && this->whiteIpGroup_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Result& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline string getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
      inline Result& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Result& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // pvlEndpointId Field Functions 
      bool hasPvlEndpointId() const { return this->pvlEndpointId_ != nullptr;};
      void deletePvlEndpointId() { this->pvlEndpointId_ = nullptr;};
      inline string getPvlEndpointId() const { DARABONBA_PTR_GET_DEFAULT(pvlEndpointId_, "") };
      inline Result& setPvlEndpointId(string pvlEndpointId) { DARABONBA_PTR_SET_VALUE(pvlEndpointId_, pvlEndpointId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Result& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // whiteIpGroup Field Functions 
      bool hasWhiteIpGroup() const { return this->whiteIpGroup_ != nullptr;};
      void deleteWhiteIpGroup() { this->whiteIpGroup_ = nullptr;};
      inline const vector<Result::WhiteIpGroup> & getWhiteIpGroup() const { DARABONBA_PTR_GET_CONST(whiteIpGroup_, vector<Result::WhiteIpGroup>) };
      inline vector<Result::WhiteIpGroup> getWhiteIpGroup() { DARABONBA_PTR_GET(whiteIpGroup_, vector<Result::WhiteIpGroup>) };
      inline Result& setWhiteIpGroup(const vector<Result::WhiteIpGroup> & whiteIpGroup) { DARABONBA_PTR_SET_VALUE(whiteIpGroup_, whiteIpGroup) };
      inline Result& setWhiteIpGroup(vector<Result::WhiteIpGroup> && whiteIpGroup) { DARABONBA_PTR_SET_RVALUE(whiteIpGroup_, whiteIpGroup) };


    protected:
      shared_ptr<string> domain_ {};
      shared_ptr<string> enabled_ {};
      shared_ptr<string> port_ {};
      shared_ptr<string> pvlEndpointId_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<vector<Result::WhiteIpGroup>> whiteIpGroup_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePrivateNetwrokResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<UpdatePrivateNetwrokResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<UpdatePrivateNetwrokResponseBody::Result>) };
    inline vector<UpdatePrivateNetwrokResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<UpdatePrivateNetwrokResponseBody::Result>) };
    inline UpdatePrivateNetwrokResponseBody& setResult(const vector<UpdatePrivateNetwrokResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdatePrivateNetwrokResponseBody& setResult(vector<UpdatePrivateNetwrokResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<UpdatePrivateNetwrokResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
