// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceEndpointResponseBodyAclEntries.hpp>
#include <alibabacloud/models/GetInstanceEndpointResponseBodyDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetInstanceEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclEnable, aclEnable_);
      DARABONBA_PTR_TO_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEnable, aclEnable_);
      DARABONBA_PTR_FROM_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetInstanceEndpointResponseBody() = default ;
    GetInstanceEndpointResponseBody(const GetInstanceEndpointResponseBody &) = default ;
    GetInstanceEndpointResponseBody(GetInstanceEndpointResponseBody &&) = default ;
    GetInstanceEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceEndpointResponseBody() = default ;
    GetInstanceEndpointResponseBody& operator=(const GetInstanceEndpointResponseBody &) = default ;
    GetInstanceEndpointResponseBody& operator=(GetInstanceEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclEnable_ != nullptr
        && this->aclEntries_ != nullptr && this->code_ != nullptr && this->domains_ != nullptr && this->enable_ != nullptr && this->isSuccess_ != nullptr
        && this->requestId_ != nullptr && this->status_ != nullptr; };
    // aclEnable Field Functions 
    bool hasAclEnable() const { return this->aclEnable_ != nullptr;};
    void deleteAclEnable() { this->aclEnable_ = nullptr;};
    inline bool aclEnable() const { DARABONBA_PTR_GET_DEFAULT(aclEnable_, false) };
    inline GetInstanceEndpointResponseBody& setAclEnable(bool aclEnable) { DARABONBA_PTR_SET_VALUE(aclEnable_, aclEnable) };


    // aclEntries Field Functions 
    bool hasAclEntries() const { return this->aclEntries_ != nullptr;};
    void deleteAclEntries() { this->aclEntries_ = nullptr;};
    inline const vector<GetInstanceEndpointResponseBodyAclEntries> & aclEntries() const { DARABONBA_PTR_GET_CONST(aclEntries_, vector<GetInstanceEndpointResponseBodyAclEntries>) };
    inline vector<GetInstanceEndpointResponseBodyAclEntries> aclEntries() { DARABONBA_PTR_GET(aclEntries_, vector<GetInstanceEndpointResponseBodyAclEntries>) };
    inline GetInstanceEndpointResponseBody& setAclEntries(const vector<GetInstanceEndpointResponseBodyAclEntries> & aclEntries) { DARABONBA_PTR_SET_VALUE(aclEntries_, aclEntries) };
    inline GetInstanceEndpointResponseBody& setAclEntries(vector<GetInstanceEndpointResponseBodyAclEntries> && aclEntries) { DARABONBA_PTR_SET_RVALUE(aclEntries_, aclEntries) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceEndpointResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<GetInstanceEndpointResponseBodyDomains> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<GetInstanceEndpointResponseBodyDomains>) };
    inline vector<GetInstanceEndpointResponseBodyDomains> domains() { DARABONBA_PTR_GET(domains_, vector<GetInstanceEndpointResponseBodyDomains>) };
    inline GetInstanceEndpointResponseBody& setDomains(const vector<GetInstanceEndpointResponseBodyDomains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline GetInstanceEndpointResponseBody& setDomains(vector<GetInstanceEndpointResponseBodyDomains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetInstanceEndpointResponseBody& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetInstanceEndpointResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceEndpointResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates whether the access control list (ACL) feature is enabled.
    std::shared_ptr<bool> aclEnable_ = nullptr;
    // The ACLs.
    std::shared_ptr<vector<GetInstanceEndpointResponseBodyAclEntries>> aclEntries_ = nullptr;
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // Domain names.
    std::shared_ptr<vector<GetInstanceEndpointResponseBodyDomains>> domains_ = nullptr;
    // Indicates whether the ACL feature is enabled.
    std::shared_ptr<bool> enable_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the instance.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
