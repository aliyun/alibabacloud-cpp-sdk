// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEVPCENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEVPCENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceVpcEndpointResponseBodyLinkedVpcs.hpp>
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
    virtual bool empty() const override { this->code_ != nullptr
        && this->domains_ != nullptr && this->enable_ != nullptr && this->isSuccess_ != nullptr && this->linkedVpcs_ != nullptr && this->moduleName_ != nullptr
        && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceVpcEndpointResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> domains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline GetInstanceVpcEndpointResponseBody& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline GetInstanceVpcEndpointResponseBody& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetInstanceVpcEndpointResponseBody& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetInstanceVpcEndpointResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // linkedVpcs Field Functions 
    bool hasLinkedVpcs() const { return this->linkedVpcs_ != nullptr;};
    void deleteLinkedVpcs() { this->linkedVpcs_ = nullptr;};
    inline const vector<GetInstanceVpcEndpointResponseBodyLinkedVpcs> & linkedVpcs() const { DARABONBA_PTR_GET_CONST(linkedVpcs_, vector<GetInstanceVpcEndpointResponseBodyLinkedVpcs>) };
    inline vector<GetInstanceVpcEndpointResponseBodyLinkedVpcs> linkedVpcs() { DARABONBA_PTR_GET(linkedVpcs_, vector<GetInstanceVpcEndpointResponseBodyLinkedVpcs>) };
    inline GetInstanceVpcEndpointResponseBody& setLinkedVpcs(const vector<GetInstanceVpcEndpointResponseBodyLinkedVpcs> & linkedVpcs) { DARABONBA_PTR_SET_VALUE(linkedVpcs_, linkedVpcs) };
    inline GetInstanceVpcEndpointResponseBody& setLinkedVpcs(vector<GetInstanceVpcEndpointResponseBodyLinkedVpcs> && linkedVpcs) { DARABONBA_PTR_SET_RVALUE(linkedVpcs_, linkedVpcs) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetInstanceVpcEndpointResponseBody& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceVpcEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // Domain names.
    std::shared_ptr<vector<string>> domains_ = nullptr;
    // Indicates whether the VPC endpoint is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enable_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The VPCs that are added to the access control list.
    std::shared_ptr<vector<GetInstanceVpcEndpointResponseBodyLinkedVpcs>> linkedVpcs_ = nullptr;
    // The name of the modules that can be accessed. Valid values:
    // 
    // *   `Registry`: image repositories.
    // *   `Chart`: Helm charts.
    std::shared_ptr<string> moduleName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
