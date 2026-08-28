// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYAUTHORIZEDSECURITYGROUPRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYAUTHORIZEDSECURITYGROUPRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewayAuthorizedSecurityGroupRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayAuthorizedSecurityGroupRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayAuthorizedSecurityGroupRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListGatewayAuthorizedSecurityGroupRulesResponseBody() = default ;
    ListGatewayAuthorizedSecurityGroupRulesResponseBody(const ListGatewayAuthorizedSecurityGroupRulesResponseBody &) = default ;
    ListGatewayAuthorizedSecurityGroupRulesResponseBody(ListGatewayAuthorizedSecurityGroupRulesResponseBody &&) = default ;
    ListGatewayAuthorizedSecurityGroupRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayAuthorizedSecurityGroupRulesResponseBody() = default ;
    ListGatewayAuthorizedSecurityGroupRulesResponseBody& operator=(const ListGatewayAuthorizedSecurityGroupRulesResponseBody &) = default ;
    ListGatewayAuthorizedSecurityGroupRulesResponseBody& operator=(ListGatewayAuthorizedSecurityGroupRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(authCidrs, authCidrs_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(ipProtocol, ipProtocol_);
          DARABONBA_PTR_TO_JSON(portRange, portRange_);
          DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(securityGroupName, securityGroupName_);
          DARABONBA_PTR_TO_JSON(securityGroupRuleId, securityGroupRuleId_);
          DARABONBA_PTR_TO_JSON(sourceSecurityGroupId, sourceSecurityGroupId_);
          DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(authCidrs, authCidrs_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(ipProtocol, ipProtocol_);
          DARABONBA_PTR_FROM_JSON(portRange, portRange_);
          DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(securityGroupName, securityGroupName_);
          DARABONBA_PTR_FROM_JSON(securityGroupRuleId, securityGroupRuleId_);
          DARABONBA_PTR_FROM_JSON(sourceSecurityGroupId, sourceSecurityGroupId_);
          DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authCidrs_ == nullptr
        && this->description_ == nullptr && this->ipProtocol_ == nullptr && this->portRange_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupName_ == nullptr
        && this->securityGroupRuleId_ == nullptr && this->sourceSecurityGroupId_ == nullptr && this->vpcId_ == nullptr; };
        // authCidrs Field Functions 
        bool hasAuthCidrs() const { return this->authCidrs_ != nullptr;};
        void deleteAuthCidrs() { this->authCidrs_ = nullptr;};
        inline const vector<string> & getAuthCidrs() const { DARABONBA_PTR_GET_CONST(authCidrs_, vector<string>) };
        inline vector<string> getAuthCidrs() { DARABONBA_PTR_GET(authCidrs_, vector<string>) };
        inline Items& setAuthCidrs(const vector<string> & authCidrs) { DARABONBA_PTR_SET_VALUE(authCidrs_, authCidrs) };
        inline Items& setAuthCidrs(vector<string> && authCidrs) { DARABONBA_PTR_SET_RVALUE(authCidrs_, authCidrs) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ipProtocol Field Functions 
        bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
        void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
        inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
        inline Items& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


        // portRange Field Functions 
        bool hasPortRange() const { return this->portRange_ != nullptr;};
        void deletePortRange() { this->portRange_ = nullptr;};
        inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
        inline Items& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline Items& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // securityGroupName Field Functions 
        bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
        void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
        inline string getSecurityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
        inline Items& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


        // securityGroupRuleId Field Functions 
        bool hasSecurityGroupRuleId() const { return this->securityGroupRuleId_ != nullptr;};
        void deleteSecurityGroupRuleId() { this->securityGroupRuleId_ = nullptr;};
        inline string getSecurityGroupRuleId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupRuleId_, "") };
        inline Items& setSecurityGroupRuleId(string securityGroupRuleId) { DARABONBA_PTR_SET_VALUE(securityGroupRuleId_, securityGroupRuleId) };


        // sourceSecurityGroupId Field Functions 
        bool hasSourceSecurityGroupId() const { return this->sourceSecurityGroupId_ != nullptr;};
        void deleteSourceSecurityGroupId() { this->sourceSecurityGroupId_ = nullptr;};
        inline string getSourceSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(sourceSecurityGroupId_, "") };
        inline Items& setSourceSecurityGroupId(string sourceSecurityGroupId) { DARABONBA_PTR_SET_VALUE(sourceSecurityGroupId_, sourceSecurityGroupId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Items& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The list of authorized CIDR blocks.
        shared_ptr<vector<string>> authCidrs_ {};
        // The rule description.
        shared_ptr<string> description_ {};
        // The protocol. Valid values:
        // 
        // *   TCP
        shared_ptr<string> ipProtocol_ {};
        // The port range.
        shared_ptr<string> portRange_ {};
        // The security group ID.
        shared_ptr<string> securityGroupId_ {};
        // The security group name.
        shared_ptr<string> securityGroupName_ {};
        // The rule ID.
        shared_ptr<string> securityGroupRuleId_ {};
        // The ID of the source security group.
        shared_ptr<string> sourceSecurityGroupId_ {};
        // The virtual private cloud (VPC) ID.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      // The security group rules.
      shared_ptr<vector<Data::Items>> items_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGatewayAuthorizedSecurityGroupRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListGatewayAuthorizedSecurityGroupRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListGatewayAuthorizedSecurityGroupRulesResponseBody::Data) };
    inline ListGatewayAuthorizedSecurityGroupRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListGatewayAuthorizedSecurityGroupRulesResponseBody::Data) };
    inline ListGatewayAuthorizedSecurityGroupRulesResponseBody& setData(const ListGatewayAuthorizedSecurityGroupRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewayAuthorizedSecurityGroupRulesResponseBody& setData(ListGatewayAuthorizedSecurityGroupRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewayAuthorizedSecurityGroupRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayAuthorizedSecurityGroupRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListGatewayAuthorizedSecurityGroupRulesResponseBody::Data> data_ {};
    // The response message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
