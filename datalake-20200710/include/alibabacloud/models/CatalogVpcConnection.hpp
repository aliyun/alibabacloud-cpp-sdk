// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOGVPCCONNECTION_HPP_
#define ALIBABACLOUD_MODELS_CATALOGVPCCONNECTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CatalogVpcConnectionZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class CatalogVpcConnection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CatalogVpcConnection& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(JdbcUri, jdbcUri_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(ThriftUri, thriftUri_);
      DARABONBA_PTR_TO_JSON(VpcConnectionId, vpcConnectionId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, CatalogVpcConnection& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(JdbcUri, jdbcUri_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(ThriftUri, thriftUri_);
      DARABONBA_PTR_FROM_JSON(VpcConnectionId, vpcConnectionId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    CatalogVpcConnection() = default ;
    CatalogVpcConnection(const CatalogVpcConnection &) = default ;
    CatalogVpcConnection(CatalogVpcConnection &&) = default ;
    CatalogVpcConnection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CatalogVpcConnection() = default ;
    CatalogVpcConnection& operator=(const CatalogVpcConnection &) = default ;
    CatalogVpcConnection& operator=(CatalogVpcConnection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->connectionName_ == nullptr && return this->connectionStatus_ == nullptr && return this->creator_ == nullptr && return this->errorMessage_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->jdbcUri_ == nullptr && return this->modifier_ == nullptr && return this->owner_ == nullptr && return this->regionId_ == nullptr
        && return this->securityGroupIds_ == nullptr && return this->thriftUri_ == nullptr && return this->vpcConnectionId_ == nullptr && return this->vpcId_ == nullptr && return this->zones_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline CatalogVpcConnection& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline CatalogVpcConnection& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline CatalogVpcConnection& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline int64_t creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
    inline CatalogVpcConnection& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CatalogVpcConnection& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline CatalogVpcConnection& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline CatalogVpcConnection& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // jdbcUri Field Functions 
    bool hasJdbcUri() const { return this->jdbcUri_ != nullptr;};
    void deleteJdbcUri() { this->jdbcUri_ = nullptr;};
    inline string jdbcUri() const { DARABONBA_PTR_GET_DEFAULT(jdbcUri_, "") };
    inline CatalogVpcConnection& setJdbcUri(string jdbcUri) { DARABONBA_PTR_SET_VALUE(jdbcUri_, jdbcUri) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline int64_t modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, 0L) };
    inline CatalogVpcConnection& setModifier(int64_t modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline int64_t owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, 0L) };
    inline CatalogVpcConnection& setOwner(int64_t owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CatalogVpcConnection& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CatalogVpcConnection& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CatalogVpcConnection& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // thriftUri Field Functions 
    bool hasThriftUri() const { return this->thriftUri_ != nullptr;};
    void deleteThriftUri() { this->thriftUri_ = nullptr;};
    inline string thriftUri() const { DARABONBA_PTR_GET_DEFAULT(thriftUri_, "") };
    inline CatalogVpcConnection& setThriftUri(string thriftUri) { DARABONBA_PTR_SET_VALUE(thriftUri_, thriftUri) };


    // vpcConnectionId Field Functions 
    bool hasVpcConnectionId() const { return this->vpcConnectionId_ != nullptr;};
    void deleteVpcConnectionId() { this->vpcConnectionId_ = nullptr;};
    inline string vpcConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpcConnectionId_, "") };
    inline CatalogVpcConnection& setVpcConnectionId(string vpcConnectionId) { DARABONBA_PTR_SET_VALUE(vpcConnectionId_, vpcConnectionId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CatalogVpcConnection& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<CatalogVpcConnectionZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<CatalogVpcConnectionZones>) };
    inline vector<CatalogVpcConnectionZones> zones() { DARABONBA_PTR_GET(zones_, vector<CatalogVpcConnectionZones>) };
    inline CatalogVpcConnection& setZones(const vector<CatalogVpcConnectionZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline CatalogVpcConnection& setZones(vector<CatalogVpcConnectionZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    std::shared_ptr<string> catalogId_ = nullptr;
    std::shared_ptr<string> connectionName_ = nullptr;
    std::shared_ptr<string> connectionStatus_ = nullptr;
    std::shared_ptr<int64_t> creator_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> jdbcUri_ = nullptr;
    std::shared_ptr<int64_t> modifier_ = nullptr;
    std::shared_ptr<int64_t> owner_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    std::shared_ptr<string> thriftUri_ = nullptr;
    std::shared_ptr<string> vpcConnectionId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<vector<CatalogVpcConnectionZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
