// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEENDPOINTRESPONSEBODYENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEENDPOINTRESPONSEBODYENDPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceEndpointResponseBodyEndpointsAclEntries.hpp>
#include <alibabacloud/models/ListInstanceEndpointResponseBodyEndpointsDomains.hpp>
#include <alibabacloud/models/ListInstanceEndpointResponseBodyEndpointsLinkedVpcs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListInstanceEndpointResponseBodyEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceEndpointResponseBodyEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(AclEnable, aclEnable_);
      DARABONBA_PTR_TO_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(LinkedVpcs, linkedVpcs_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceEndpointResponseBodyEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEnable, aclEnable_);
      DARABONBA_PTR_FROM_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(LinkedVpcs, linkedVpcs_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInstanceEndpointResponseBodyEndpoints() = default ;
    ListInstanceEndpointResponseBodyEndpoints(const ListInstanceEndpointResponseBodyEndpoints &) = default ;
    ListInstanceEndpointResponseBodyEndpoints(ListInstanceEndpointResponseBodyEndpoints &&) = default ;
    ListInstanceEndpointResponseBodyEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceEndpointResponseBodyEndpoints() = default ;
    ListInstanceEndpointResponseBodyEndpoints& operator=(const ListInstanceEndpointResponseBodyEndpoints &) = default ;
    ListInstanceEndpointResponseBodyEndpoints& operator=(ListInstanceEndpointResponseBodyEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclEnable_ == nullptr
        && return this->aclEntries_ == nullptr && return this->domains_ == nullptr && return this->enable_ == nullptr && return this->endpointType_ == nullptr && return this->linkedVpcs_ == nullptr
        && return this->status_ == nullptr; };
    // aclEnable Field Functions 
    bool hasAclEnable() const { return this->aclEnable_ != nullptr;};
    void deleteAclEnable() { this->aclEnable_ = nullptr;};
    inline bool aclEnable() const { DARABONBA_PTR_GET_DEFAULT(aclEnable_, false) };
    inline ListInstanceEndpointResponseBodyEndpoints& setAclEnable(bool aclEnable) { DARABONBA_PTR_SET_VALUE(aclEnable_, aclEnable) };


    // aclEntries Field Functions 
    bool hasAclEntries() const { return this->aclEntries_ != nullptr;};
    void deleteAclEntries() { this->aclEntries_ = nullptr;};
    inline const vector<Models::ListInstanceEndpointResponseBodyEndpointsAclEntries> & aclEntries() const { DARABONBA_PTR_GET_CONST(aclEntries_, vector<Models::ListInstanceEndpointResponseBodyEndpointsAclEntries>) };
    inline vector<Models::ListInstanceEndpointResponseBodyEndpointsAclEntries> aclEntries() { DARABONBA_PTR_GET(aclEntries_, vector<Models::ListInstanceEndpointResponseBodyEndpointsAclEntries>) };
    inline ListInstanceEndpointResponseBodyEndpoints& setAclEntries(const vector<Models::ListInstanceEndpointResponseBodyEndpointsAclEntries> & aclEntries) { DARABONBA_PTR_SET_VALUE(aclEntries_, aclEntries) };
    inline ListInstanceEndpointResponseBodyEndpoints& setAclEntries(vector<Models::ListInstanceEndpointResponseBodyEndpointsAclEntries> && aclEntries) { DARABONBA_PTR_SET_RVALUE(aclEntries_, aclEntries) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<Models::ListInstanceEndpointResponseBodyEndpointsDomains> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<Models::ListInstanceEndpointResponseBodyEndpointsDomains>) };
    inline vector<Models::ListInstanceEndpointResponseBodyEndpointsDomains> domains() { DARABONBA_PTR_GET(domains_, vector<Models::ListInstanceEndpointResponseBodyEndpointsDomains>) };
    inline ListInstanceEndpointResponseBodyEndpoints& setDomains(const vector<Models::ListInstanceEndpointResponseBodyEndpointsDomains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline ListInstanceEndpointResponseBodyEndpoints& setDomains(vector<Models::ListInstanceEndpointResponseBodyEndpointsDomains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListInstanceEndpointResponseBodyEndpoints& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline ListInstanceEndpointResponseBodyEndpoints& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // linkedVpcs Field Functions 
    bool hasLinkedVpcs() const { return this->linkedVpcs_ != nullptr;};
    void deleteLinkedVpcs() { this->linkedVpcs_ = nullptr;};
    inline const vector<Models::ListInstanceEndpointResponseBodyEndpointsLinkedVpcs> & linkedVpcs() const { DARABONBA_PTR_GET_CONST(linkedVpcs_, vector<Models::ListInstanceEndpointResponseBodyEndpointsLinkedVpcs>) };
    inline vector<Models::ListInstanceEndpointResponseBodyEndpointsLinkedVpcs> linkedVpcs() { DARABONBA_PTR_GET(linkedVpcs_, vector<Models::ListInstanceEndpointResponseBodyEndpointsLinkedVpcs>) };
    inline ListInstanceEndpointResponseBodyEndpoints& setLinkedVpcs(const vector<Models::ListInstanceEndpointResponseBodyEndpointsLinkedVpcs> & linkedVpcs) { DARABONBA_PTR_SET_VALUE(linkedVpcs_, linkedVpcs) };
    inline ListInstanceEndpointResponseBodyEndpoints& setLinkedVpcs(vector<Models::ListInstanceEndpointResponseBodyEndpointsLinkedVpcs> && linkedVpcs) { DARABONBA_PTR_SET_RVALUE(linkedVpcs_, linkedVpcs) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstanceEndpointResponseBodyEndpoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates whether the endpoint is added to an access control list (ACL).
    std::shared_ptr<bool> aclEnable_ = nullptr;
    // The ACLs that are configured for the instance.
    std::shared_ptr<vector<Models::ListInstanceEndpointResponseBodyEndpointsAclEntries>> aclEntries_ = nullptr;
    // The list of domain names of the Container Registry instance.
    std::shared_ptr<vector<Models::ListInstanceEndpointResponseBodyEndpointsDomains>> domains_ = nullptr;
    // Indicates whether the endpoint is added to an ACL.
    std::shared_ptr<bool> enable_ = nullptr;
    // The type of the endpoint.
    std::shared_ptr<string> endpointType_ = nullptr;
    // The VPCs associated with the instance.
    std::shared_ptr<vector<Models::ListInstanceEndpointResponseBodyEndpointsLinkedVpcs>> linkedVpcs_ = nullptr;
    // The status of the endpoint.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
