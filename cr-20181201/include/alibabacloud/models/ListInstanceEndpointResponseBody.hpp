// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEENDPOINTRESPONSEBODY_HPP_
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
  class ListInstanceEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstanceEndpointResponseBody() = default ;
    ListInstanceEndpointResponseBody(const ListInstanceEndpointResponseBody &) = default ;
    ListInstanceEndpointResponseBody(ListInstanceEndpointResponseBody &&) = default ;
    ListInstanceEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceEndpointResponseBody() = default ;
    ListInstanceEndpointResponseBody& operator=(const ListInstanceEndpointResponseBody &) = default ;
    ListInstanceEndpointResponseBody& operator=(ListInstanceEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(AclEnable, aclEnable_);
        DARABONBA_PTR_TO_JSON(AclEntries, aclEntries_);
        DARABONBA_PTR_TO_JSON(Domains, domains_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_TO_JSON(LinkedVpcs, linkedVpcs_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(AclEnable, aclEnable_);
        DARABONBA_PTR_FROM_JSON(AclEntries, aclEntries_);
        DARABONBA_PTR_FROM_JSON(Domains, domains_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_FROM_JSON(LinkedVpcs, linkedVpcs_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LinkedVpcs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LinkedVpcs& obj) { 
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, LinkedVpcs& obj) { 
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
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
        virtual bool empty() const override { return this->vpcId_ == nullptr; };
        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline LinkedVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // VPC ID
        shared_ptr<string> vpcId_ {};
      };

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
        // The domain name of the Container Registry instance.
        shared_ptr<string> domain_ {};
        // The type of the domain name. Valid values:
        // 
        // *   SYSTEM: system domain name.
        // *   USER: user domain name.
        shared_ptr<string> type_ {};
      };

      class AclEntries : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AclEntries& obj) { 
          DARABONBA_PTR_TO_JSON(Entry, entry_);
        };
        friend void from_json(const Darabonba::Json& j, AclEntries& obj) { 
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
        virtual bool empty() const override { return this->entry_ == nullptr; };
        // entry Field Functions 
        bool hasEntry() const { return this->entry_ != nullptr;};
        void deleteEntry() { this->entry_ = nullptr;};
        inline string getEntry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
        inline AclEntries& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


      protected:
        // The information about the ACL.
        shared_ptr<string> entry_ {};
      };

      virtual bool empty() const override { return this->aclEnable_ == nullptr
        && this->aclEntries_ == nullptr && this->domains_ == nullptr && this->enable_ == nullptr && this->endpointType_ == nullptr && this->linkedVpcs_ == nullptr
        && this->status_ == nullptr; };
      // aclEnable Field Functions 
      bool hasAclEnable() const { return this->aclEnable_ != nullptr;};
      void deleteAclEnable() { this->aclEnable_ = nullptr;};
      inline bool getAclEnable() const { DARABONBA_PTR_GET_DEFAULT(aclEnable_, false) };
      inline Endpoints& setAclEnable(bool aclEnable) { DARABONBA_PTR_SET_VALUE(aclEnable_, aclEnable) };


      // aclEntries Field Functions 
      bool hasAclEntries() const { return this->aclEntries_ != nullptr;};
      void deleteAclEntries() { this->aclEntries_ = nullptr;};
      inline const vector<Endpoints::AclEntries> & getAclEntries() const { DARABONBA_PTR_GET_CONST(aclEntries_, vector<Endpoints::AclEntries>) };
      inline vector<Endpoints::AclEntries> getAclEntries() { DARABONBA_PTR_GET(aclEntries_, vector<Endpoints::AclEntries>) };
      inline Endpoints& setAclEntries(const vector<Endpoints::AclEntries> & aclEntries) { DARABONBA_PTR_SET_VALUE(aclEntries_, aclEntries) };
      inline Endpoints& setAclEntries(vector<Endpoints::AclEntries> && aclEntries) { DARABONBA_PTR_SET_RVALUE(aclEntries_, aclEntries) };


      // domains Field Functions 
      bool hasDomains() const { return this->domains_ != nullptr;};
      void deleteDomains() { this->domains_ = nullptr;};
      inline const vector<Endpoints::Domains> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<Endpoints::Domains>) };
      inline vector<Endpoints::Domains> getDomains() { DARABONBA_PTR_GET(domains_, vector<Endpoints::Domains>) };
      inline Endpoints& setDomains(const vector<Endpoints::Domains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
      inline Endpoints& setDomains(vector<Endpoints::Domains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Endpoints& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline Endpoints& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


      // linkedVpcs Field Functions 
      bool hasLinkedVpcs() const { return this->linkedVpcs_ != nullptr;};
      void deleteLinkedVpcs() { this->linkedVpcs_ = nullptr;};
      inline const vector<Endpoints::LinkedVpcs> & getLinkedVpcs() const { DARABONBA_PTR_GET_CONST(linkedVpcs_, vector<Endpoints::LinkedVpcs>) };
      inline vector<Endpoints::LinkedVpcs> getLinkedVpcs() { DARABONBA_PTR_GET(linkedVpcs_, vector<Endpoints::LinkedVpcs>) };
      inline Endpoints& setLinkedVpcs(const vector<Endpoints::LinkedVpcs> & linkedVpcs) { DARABONBA_PTR_SET_VALUE(linkedVpcs_, linkedVpcs) };
      inline Endpoints& setLinkedVpcs(vector<Endpoints::LinkedVpcs> && linkedVpcs) { DARABONBA_PTR_SET_RVALUE(linkedVpcs_, linkedVpcs) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Endpoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Indicates whether the endpoint is added to an access control list (ACL).
      shared_ptr<bool> aclEnable_ {};
      // The ACLs that are configured for the instance.
      shared_ptr<vector<Endpoints::AclEntries>> aclEntries_ {};
      // The list of domain names of the Container Registry instance.
      shared_ptr<vector<Endpoints::Domains>> domains_ {};
      // Indicates whether the endpoint is added to an ACL.
      shared_ptr<bool> enable_ {};
      // The type of the endpoint.
      shared_ptr<string> endpointType_ {};
      // The VPCs associated with the instance.
      shared_ptr<vector<Endpoints::LinkedVpcs>> linkedVpcs_ {};
      // The status of the endpoint.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->endpoints_ == nullptr && this->isSuccess_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInstanceEndpointResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<ListInstanceEndpointResponseBody::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<ListInstanceEndpointResponseBody::Endpoints>) };
    inline vector<ListInstanceEndpointResponseBody::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<ListInstanceEndpointResponseBody::Endpoints>) };
    inline ListInstanceEndpointResponseBody& setEndpoints(const vector<ListInstanceEndpointResponseBody::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ListInstanceEndpointResponseBody& setEndpoints(vector<ListInstanceEndpointResponseBody::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListInstanceEndpointResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // The endpoints of the instance.
    shared_ptr<vector<ListInstanceEndpointResponseBody::Endpoints>> endpoints_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
