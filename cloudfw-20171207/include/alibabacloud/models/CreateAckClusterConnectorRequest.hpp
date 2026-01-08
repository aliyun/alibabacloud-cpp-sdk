// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACKCLUSTERCONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACKCLUSTERCONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateAckClusterConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAckClusterConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConnectorName, connectorName_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PrimaryVswitchId, primaryVswitchId_);
      DARABONBA_PTR_TO_JSON(PrimaryVswitchIp, primaryVswitchIp_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(StandbyVswitchId, standbyVswitchId_);
      DARABONBA_PTR_TO_JSON(StandbyVswitchIp, standbyVswitchIp_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAckClusterConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConnectorName, connectorName_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PrimaryVswitchId, primaryVswitchId_);
      DARABONBA_PTR_FROM_JSON(PrimaryVswitchIp, primaryVswitchIp_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(StandbyVswitchId, standbyVswitchId_);
      DARABONBA_PTR_FROM_JSON(StandbyVswitchIp, standbyVswitchIp_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    CreateAckClusterConnectorRequest() = default ;
    CreateAckClusterConnectorRequest(const CreateAckClusterConnectorRequest &) = default ;
    CreateAckClusterConnectorRequest(CreateAckClusterConnectorRequest &&) = default ;
    CreateAckClusterConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAckClusterConnectorRequest() = default ;
    CreateAckClusterConnectorRequest& operator=(const CreateAckClusterConnectorRequest &) = default ;
    CreateAckClusterConnectorRequest& operator=(CreateAckClusterConnectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->connectorName_ == nullptr && this->memberUid_ == nullptr && this->primaryVswitchId_ == nullptr && this->primaryVswitchIp_ == nullptr && this->regionNo_ == nullptr
        && this->standbyVswitchId_ == nullptr && this->standbyVswitchIp_ == nullptr && this->ttl_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateAckClusterConnectorRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // connectorName Field Functions 
    bool hasConnectorName() const { return this->connectorName_ != nullptr;};
    void deleteConnectorName() { this->connectorName_ = nullptr;};
    inline string getConnectorName() const { DARABONBA_PTR_GET_DEFAULT(connectorName_, "") };
    inline CreateAckClusterConnectorRequest& setConnectorName(string connectorName) { DARABONBA_PTR_SET_VALUE(connectorName_, connectorName) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline CreateAckClusterConnectorRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // primaryVswitchId Field Functions 
    bool hasPrimaryVswitchId() const { return this->primaryVswitchId_ != nullptr;};
    void deletePrimaryVswitchId() { this->primaryVswitchId_ = nullptr;};
    inline string getPrimaryVswitchId() const { DARABONBA_PTR_GET_DEFAULT(primaryVswitchId_, "") };
    inline CreateAckClusterConnectorRequest& setPrimaryVswitchId(string primaryVswitchId) { DARABONBA_PTR_SET_VALUE(primaryVswitchId_, primaryVswitchId) };


    // primaryVswitchIp Field Functions 
    bool hasPrimaryVswitchIp() const { return this->primaryVswitchIp_ != nullptr;};
    void deletePrimaryVswitchIp() { this->primaryVswitchIp_ = nullptr;};
    inline string getPrimaryVswitchIp() const { DARABONBA_PTR_GET_DEFAULT(primaryVswitchIp_, "") };
    inline CreateAckClusterConnectorRequest& setPrimaryVswitchIp(string primaryVswitchIp) { DARABONBA_PTR_SET_VALUE(primaryVswitchIp_, primaryVswitchIp) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline CreateAckClusterConnectorRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // standbyVswitchId Field Functions 
    bool hasStandbyVswitchId() const { return this->standbyVswitchId_ != nullptr;};
    void deleteStandbyVswitchId() { this->standbyVswitchId_ = nullptr;};
    inline string getStandbyVswitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVswitchId_, "") };
    inline CreateAckClusterConnectorRequest& setStandbyVswitchId(string standbyVswitchId) { DARABONBA_PTR_SET_VALUE(standbyVswitchId_, standbyVswitchId) };


    // standbyVswitchIp Field Functions 
    bool hasStandbyVswitchIp() const { return this->standbyVswitchIp_ != nullptr;};
    void deleteStandbyVswitchIp() { this->standbyVswitchIp_ = nullptr;};
    inline string getStandbyVswitchIp() const { DARABONBA_PTR_GET_DEFAULT(standbyVswitchIp_, "") };
    inline CreateAckClusterConnectorRequest& setStandbyVswitchIp(string standbyVswitchIp) { DARABONBA_PTR_SET_VALUE(standbyVswitchIp_, standbyVswitchIp) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline string getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, "") };
    inline CreateAckClusterConnectorRequest& setTtl(string ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> connectorName_ {};
    shared_ptr<string> memberUid_ {};
    // This parameter is required.
    shared_ptr<string> primaryVswitchId_ {};
    shared_ptr<string> primaryVswitchIp_ {};
    // This parameter is required.
    shared_ptr<string> regionNo_ {};
    shared_ptr<string> standbyVswitchId_ {};
    shared_ptr<string> standbyVswitchIp_ {};
    // This parameter is required.
    shared_ptr<string> ttl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
