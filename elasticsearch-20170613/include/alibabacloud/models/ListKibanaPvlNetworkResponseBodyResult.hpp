// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKIBANAPVLNETWORKRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTKIBANAPVLNETWORKRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListKibanaPvlNetworkResponseBodyResultVSwitchIdsZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListKibanaPvlNetworkResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKibanaPvlNetworkResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(endpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(endpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(endpointStatus, endpointStatus_);
      DARABONBA_PTR_TO_JSON(pvlId, pvlId_);
      DARABONBA_PTR_TO_JSON(securityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(vSwitchIdsZone, vSwitchIdsZone_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKibanaPvlNetworkResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(endpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(endpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(endpointStatus, endpointStatus_);
      DARABONBA_PTR_FROM_JSON(pvlId, pvlId_);
      DARABONBA_PTR_FROM_JSON(securityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(vSwitchIdsZone, vSwitchIdsZone_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ListKibanaPvlNetworkResponseBodyResult() = default ;
    ListKibanaPvlNetworkResponseBodyResult(const ListKibanaPvlNetworkResponseBodyResult &) = default ;
    ListKibanaPvlNetworkResponseBodyResult(ListKibanaPvlNetworkResponseBodyResult &&) = default ;
    ListKibanaPvlNetworkResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKibanaPvlNetworkResponseBodyResult() = default ;
    ListKibanaPvlNetworkResponseBodyResult& operator=(const ListKibanaPvlNetworkResponseBodyResult &) = default ;
    ListKibanaPvlNetworkResponseBodyResult& operator=(ListKibanaPvlNetworkResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->endpointId_ != nullptr && this->endpointName_ != nullptr && this->endpointStatus_ != nullptr && this->pvlId_ != nullptr && this->securityGroups_ != nullptr
        && this->vSwitchIdsZone_ != nullptr && this->vpcId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListKibanaPvlNetworkResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline ListKibanaPvlNetworkResponseBodyResult& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline ListKibanaPvlNetworkResponseBodyResult& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointStatus Field Functions 
    bool hasEndpointStatus() const { return this->endpointStatus_ != nullptr;};
    void deleteEndpointStatus() { this->endpointStatus_ = nullptr;};
    inline string endpointStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointStatus_, "") };
    inline ListKibanaPvlNetworkResponseBodyResult& setEndpointStatus(string endpointStatus) { DARABONBA_PTR_SET_VALUE(endpointStatus_, endpointStatus) };


    // pvlId Field Functions 
    bool hasPvlId() const { return this->pvlId_ != nullptr;};
    void deletePvlId() { this->pvlId_ = nullptr;};
    inline string pvlId() const { DARABONBA_PTR_GET_DEFAULT(pvlId_, "") };
    inline ListKibanaPvlNetworkResponseBodyResult& setPvlId(string pvlId) { DARABONBA_PTR_SET_VALUE(pvlId_, pvlId) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline const vector<string> & securityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<string>) };
    inline vector<string> securityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<string>) };
    inline ListKibanaPvlNetworkResponseBodyResult& setSecurityGroups(const vector<string> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
    inline ListKibanaPvlNetworkResponseBodyResult& setSecurityGroups(vector<string> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


    // vSwitchIdsZone Field Functions 
    bool hasVSwitchIdsZone() const { return this->vSwitchIdsZone_ != nullptr;};
    void deleteVSwitchIdsZone() { this->vSwitchIdsZone_ = nullptr;};
    inline const vector<Models::ListKibanaPvlNetworkResponseBodyResultVSwitchIdsZone> & vSwitchIdsZone() const { DARABONBA_PTR_GET_CONST(vSwitchIdsZone_, vector<Models::ListKibanaPvlNetworkResponseBodyResultVSwitchIdsZone>) };
    inline vector<Models::ListKibanaPvlNetworkResponseBodyResultVSwitchIdsZone> vSwitchIdsZone() { DARABONBA_PTR_GET(vSwitchIdsZone_, vector<Models::ListKibanaPvlNetworkResponseBodyResultVSwitchIdsZone>) };
    inline ListKibanaPvlNetworkResponseBodyResult& setVSwitchIdsZone(const vector<Models::ListKibanaPvlNetworkResponseBodyResultVSwitchIdsZone> & vSwitchIdsZone) { DARABONBA_PTR_SET_VALUE(vSwitchIdsZone_, vSwitchIdsZone) };
    inline ListKibanaPvlNetworkResponseBodyResult& setVSwitchIdsZone(vector<Models::ListKibanaPvlNetworkResponseBodyResultVSwitchIdsZone> && vSwitchIdsZone) { DARABONBA_PTR_SET_RVALUE(vSwitchIdsZone_, vSwitchIdsZone) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListKibanaPvlNetworkResponseBodyResult& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> endpointId_ = nullptr;
    std::shared_ptr<string> endpointName_ = nullptr;
    std::shared_ptr<string> endpointStatus_ = nullptr;
    std::shared_ptr<string> pvlId_ = nullptr;
    std::shared_ptr<vector<string>> securityGroups_ = nullptr;
    std::shared_ptr<vector<Models::ListKibanaPvlNetworkResponseBodyResultVSwitchIdsZone>> vSwitchIdsZone_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
