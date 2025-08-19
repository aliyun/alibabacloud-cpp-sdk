// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENDPOINTSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTENDPOINTSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEndpointsResponseBodyResultEndpointZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class ListEndpointsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEndpointsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(connectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(endpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(endpointZones, endpointZones_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(securityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEndpointsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(connectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(endpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(endpointZones, endpointZones_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(securityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ListEndpointsResponseBodyResult() = default ;
    ListEndpointsResponseBodyResult(const ListEndpointsResponseBodyResult &) = default ;
    ListEndpointsResponseBodyResult(ListEndpointsResponseBodyResult &&) = default ;
    ListEndpointsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEndpointsResponseBodyResult() = default ;
    ListEndpointsResponseBodyResult& operator=(const ListEndpointsResponseBodyResult &) = default ;
    ListEndpointsResponseBodyResult& operator=(ListEndpointsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionStatus_ != nullptr
        && this->created_ != nullptr && this->domain_ != nullptr && this->endpointId_ != nullptr && this->endpointZones_ != nullptr && this->name_ != nullptr
        && this->resourceId_ != nullptr && this->securityGroupIds_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->updated_ != nullptr
        && this->vpcId_ != nullptr; };
    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline ListEndpointsResponseBodyResult& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int32_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
    inline ListEndpointsResponseBodyResult& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListEndpointsResponseBodyResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline ListEndpointsResponseBodyResult& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointZones Field Functions 
    bool hasEndpointZones() const { return this->endpointZones_ != nullptr;};
    void deleteEndpointZones() { this->endpointZones_ = nullptr;};
    inline const vector<Models::ListEndpointsResponseBodyResultEndpointZones> & endpointZones() const { DARABONBA_PTR_GET_CONST(endpointZones_, vector<Models::ListEndpointsResponseBodyResultEndpointZones>) };
    inline vector<Models::ListEndpointsResponseBodyResultEndpointZones> endpointZones() { DARABONBA_PTR_GET(endpointZones_, vector<Models::ListEndpointsResponseBodyResultEndpointZones>) };
    inline ListEndpointsResponseBodyResult& setEndpointZones(const vector<Models::ListEndpointsResponseBodyResultEndpointZones> & endpointZones) { DARABONBA_PTR_SET_VALUE(endpointZones_, endpointZones) };
    inline ListEndpointsResponseBodyResult& setEndpointZones(vector<Models::ListEndpointsResponseBodyResultEndpointZones> && endpointZones) { DARABONBA_PTR_SET_RVALUE(endpointZones_, endpointZones) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEndpointsResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListEndpointsResponseBodyResult& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline ListEndpointsResponseBodyResult& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline ListEndpointsResponseBodyResult& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEndpointsResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListEndpointsResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int32_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
    inline ListEndpointsResponseBodyResult& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListEndpointsResponseBodyResult& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> connectionStatus_ = nullptr;
    std::shared_ptr<int32_t> created_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> endpointId_ = nullptr;
    std::shared_ptr<vector<Models::ListEndpointsResponseBodyResultEndpointZones>> endpointZones_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int32_t> updated_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
