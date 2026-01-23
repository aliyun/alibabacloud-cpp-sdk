// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEENDPOINTRESPONSEBODY_HPP_
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
    class Domains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domains& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Domains& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Domains() = default ;
      Domains(const Domains &) = default ;
      Domains(Domains &&) = default ;
      Domains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Domains() = default ;
      Domains& operator=(const Domains &) = default ;
      Domains& operator=(Domains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->type_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Domains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Domains& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The domain name that is used to access the Container Registry Enterprise Edition instance.
      shared_ptr<string> domain_ {};
      // The type of the domain name. Valid values:
      // 
      // *   `SYSTEM`: a system domain name.
      // *   `USER`: a user domain name.
      shared_ptr<string> type_ {};
    };

    class AclEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclEntries& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Entry, entry_);
      };
      friend void from_json(const Darabonba::Json& j, AclEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Entry, entry_);
      };
      AclEntries() = default ;
      AclEntries(const AclEntries &) = default ;
      AclEntries(AclEntries &&) = default ;
      AclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AclEntries() = default ;
      AclEntries& operator=(const AclEntries &) = default ;
      AclEntries& operator=(AclEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->entry_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline AclEntries& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // entry Field Functions 
      bool hasEntry() const { return this->entry_ != nullptr;};
      void deleteEntry() { this->entry_ = nullptr;};
      inline string getEntry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
      inline AclEntries& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


    protected:
      // Remarks for public IP address whitelists.
      shared_ptr<string> comment_ {};
      // The public IP address whitelist.
      shared_ptr<string> entry_ {};
    };

    virtual bool empty() const override { return this->aclEnable_ == nullptr
        && this->aclEntries_ == nullptr && this->code_ == nullptr && this->domains_ == nullptr && this->enable_ == nullptr && this->isSuccess_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr; };
    // aclEnable Field Functions 
    bool hasAclEnable() const { return this->aclEnable_ != nullptr;};
    void deleteAclEnable() { this->aclEnable_ = nullptr;};
    inline bool getAclEnable() const { DARABONBA_PTR_GET_DEFAULT(aclEnable_, false) };
    inline GetInstanceEndpointResponseBody& setAclEnable(bool aclEnable) { DARABONBA_PTR_SET_VALUE(aclEnable_, aclEnable) };


    // aclEntries Field Functions 
    bool hasAclEntries() const { return this->aclEntries_ != nullptr;};
    void deleteAclEntries() { this->aclEntries_ = nullptr;};
    inline const vector<GetInstanceEndpointResponseBody::AclEntries> & getAclEntries() const { DARABONBA_PTR_GET_CONST(aclEntries_, vector<GetInstanceEndpointResponseBody::AclEntries>) };
    inline vector<GetInstanceEndpointResponseBody::AclEntries> getAclEntries() { DARABONBA_PTR_GET(aclEntries_, vector<GetInstanceEndpointResponseBody::AclEntries>) };
    inline GetInstanceEndpointResponseBody& setAclEntries(const vector<GetInstanceEndpointResponseBody::AclEntries> & aclEntries) { DARABONBA_PTR_SET_VALUE(aclEntries_, aclEntries) };
    inline GetInstanceEndpointResponseBody& setAclEntries(vector<GetInstanceEndpointResponseBody::AclEntries> && aclEntries) { DARABONBA_PTR_SET_RVALUE(aclEntries_, aclEntries) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceEndpointResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<GetInstanceEndpointResponseBody::Domains> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<GetInstanceEndpointResponseBody::Domains>) };
    inline vector<GetInstanceEndpointResponseBody::Domains> getDomains() { DARABONBA_PTR_GET(domains_, vector<GetInstanceEndpointResponseBody::Domains>) };
    inline GetInstanceEndpointResponseBody& setDomains(const vector<GetInstanceEndpointResponseBody::Domains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline GetInstanceEndpointResponseBody& setDomains(vector<GetInstanceEndpointResponseBody::Domains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetInstanceEndpointResponseBody& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetInstanceEndpointResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceEndpointResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates whether the access control list (ACL) feature is enabled.
    shared_ptr<bool> aclEnable_ {};
    // The ACLs.
    shared_ptr<vector<GetInstanceEndpointResponseBody::AclEntries>> aclEntries_ {};
    // The return value.
    shared_ptr<string> code_ {};
    // Domain names.
    shared_ptr<vector<GetInstanceEndpointResponseBody::Domains>> domains_ {};
    // Indicates whether the ACL feature is enabled.
    shared_ptr<bool> enable_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the instance.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
