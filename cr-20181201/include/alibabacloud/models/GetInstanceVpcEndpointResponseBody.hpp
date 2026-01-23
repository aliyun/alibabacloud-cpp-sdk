// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEVPCENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEVPCENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetInstanceVpcEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceVpcEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(LinkedVpcs, linkedVpcs_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceVpcEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(LinkedVpcs, linkedVpcs_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceVpcEndpointResponseBody() = default ;
    GetInstanceVpcEndpointResponseBody(const GetInstanceVpcEndpointResponseBody &) = default ;
    GetInstanceVpcEndpointResponseBody(GetInstanceVpcEndpointResponseBody &&) = default ;
    GetInstanceVpcEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceVpcEndpointResponseBody() = default ;
    GetInstanceVpcEndpointResponseBody& operator=(const GetInstanceVpcEndpointResponseBody &) = default ;
    GetInstanceVpcEndpointResponseBody& operator=(GetInstanceVpcEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LinkedVpcs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LinkedVpcs& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultAccess, defaultAccess_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Issue, issue_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      };
      friend void from_json(const Darabonba::Json& j, LinkedVpcs& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultAccess, defaultAccess_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Issue, issue_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      };
      LinkedVpcs() = default ;
      LinkedVpcs(const LinkedVpcs &) = default ;
      LinkedVpcs(LinkedVpcs &&) = default ;
      LinkedVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LinkedVpcs() = default ;
      LinkedVpcs& operator=(const LinkedVpcs &) = default ;
      LinkedVpcs& operator=(LinkedVpcs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultAccess_ == nullptr
        && this->ip_ == nullptr && this->issue_ == nullptr && this->status_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr; };
      // defaultAccess Field Functions 
      bool hasDefaultAccess() const { return this->defaultAccess_ != nullptr;};
      void deleteDefaultAccess() { this->defaultAccess_ = nullptr;};
      inline bool getDefaultAccess() const { DARABONBA_PTR_GET_DEFAULT(defaultAccess_, false) };
      inline LinkedVpcs& setDefaultAccess(bool defaultAccess) { DARABONBA_PTR_SET_VALUE(defaultAccess_, defaultAccess) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline LinkedVpcs& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // issue Field Functions 
      bool hasIssue() const { return this->issue_ != nullptr;};
      void deleteIssue() { this->issue_ = nullptr;};
      inline string getIssue() const { DARABONBA_PTR_GET_DEFAULT(issue_, "") };
      inline LinkedVpcs& setIssue(string issue) { DARABONBA_PTR_SET_VALUE(issue_, issue) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LinkedVpcs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline LinkedVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline LinkedVpcs& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    protected:
      // Indicates whether the VPC is the default VPC over which the Container Registry instance is accessed.
      shared_ptr<bool> defaultAccess_ {};
      // IP address.
      shared_ptr<string> ip_ {};
      // The error message detected in the linked VPC access control.
      shared_ptr<string> issue_ {};
      // The status of the VPC. Valid values:
      // 
      // *   `CREATING`
      // *   `RUNNING`
      shared_ptr<string> status_ {};
      // VPC ID
      shared_ptr<string> vpcId_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vswitchId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->domains_ == nullptr && this->enable_ == nullptr && this->isSuccess_ == nullptr && this->linkedVpcs_ == nullptr && this->moduleName_ == nullptr
        && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceVpcEndpointResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> getDomains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline GetInstanceVpcEndpointResponseBody& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline GetInstanceVpcEndpointResponseBody& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetInstanceVpcEndpointResponseBody& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetInstanceVpcEndpointResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // linkedVpcs Field Functions 
    bool hasLinkedVpcs() const { return this->linkedVpcs_ != nullptr;};
    void deleteLinkedVpcs() { this->linkedVpcs_ = nullptr;};
    inline const vector<GetInstanceVpcEndpointResponseBody::LinkedVpcs> & getLinkedVpcs() const { DARABONBA_PTR_GET_CONST(linkedVpcs_, vector<GetInstanceVpcEndpointResponseBody::LinkedVpcs>) };
    inline vector<GetInstanceVpcEndpointResponseBody::LinkedVpcs> getLinkedVpcs() { DARABONBA_PTR_GET(linkedVpcs_, vector<GetInstanceVpcEndpointResponseBody::LinkedVpcs>) };
    inline GetInstanceVpcEndpointResponseBody& setLinkedVpcs(const vector<GetInstanceVpcEndpointResponseBody::LinkedVpcs> & linkedVpcs) { DARABONBA_PTR_SET_VALUE(linkedVpcs_, linkedVpcs) };
    inline GetInstanceVpcEndpointResponseBody& setLinkedVpcs(vector<GetInstanceVpcEndpointResponseBody::LinkedVpcs> && linkedVpcs) { DARABONBA_PTR_SET_RVALUE(linkedVpcs_, linkedVpcs) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetInstanceVpcEndpointResponseBody& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceVpcEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // Domain names.
    shared_ptr<vector<string>> domains_ {};
    // Indicates whether the VPC endpoint is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    shared_ptr<bool> enable_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    shared_ptr<bool> isSuccess_ {};
    // List of linked VPCs
    shared_ptr<vector<GetInstanceVpcEndpointResponseBody::LinkedVpcs>> linkedVpcs_ {};
    // The name of the modules that can be accessed. Valid values:
    // 
    // *   `Registry`: image repositories.
    // *   `Chart`: Helm charts.
    shared_ptr<string> moduleName_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
