// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPREQUESTPRIVATENETWORK_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPREQUESTPRIVATENETWORK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAppRequestPrivateNetworkWhiteIpGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateAppRequestPrivateNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppRequestPrivateNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(pvlEndpointId, pvlEndpointId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppRequestPrivateNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(pvlEndpointId, pvlEndpointId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(whiteIpGroup, whiteIpGroup_);
    };
    UpdateAppRequestPrivateNetwork() = default ;
    UpdateAppRequestPrivateNetwork(const UpdateAppRequestPrivateNetwork &) = default ;
    UpdateAppRequestPrivateNetwork(UpdateAppRequestPrivateNetwork &&) = default ;
    UpdateAppRequestPrivateNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppRequestPrivateNetwork() = default ;
    UpdateAppRequestPrivateNetwork& operator=(const UpdateAppRequestPrivateNetwork &) = default ;
    UpdateAppRequestPrivateNetwork& operator=(UpdateAppRequestPrivateNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->pvlEndpointId_ != nullptr && this->type_ != nullptr && this->vpcId_ != nullptr && this->whiteIpGroup_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateAppRequestPrivateNetwork& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // pvlEndpointId Field Functions 
    bool hasPvlEndpointId() const { return this->pvlEndpointId_ != nullptr;};
    void deletePvlEndpointId() { this->pvlEndpointId_ = nullptr;};
    inline string pvlEndpointId() const { DARABONBA_PTR_GET_DEFAULT(pvlEndpointId_, "") };
    inline UpdateAppRequestPrivateNetwork& setPvlEndpointId(string pvlEndpointId) { DARABONBA_PTR_SET_VALUE(pvlEndpointId_, pvlEndpointId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateAppRequestPrivateNetwork& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UpdateAppRequestPrivateNetwork& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // whiteIpGroup Field Functions 
    bool hasWhiteIpGroup() const { return this->whiteIpGroup_ != nullptr;};
    void deleteWhiteIpGroup() { this->whiteIpGroup_ = nullptr;};
    inline const vector<Models::UpdateAppRequestPrivateNetworkWhiteIpGroup> & whiteIpGroup() const { DARABONBA_PTR_GET_CONST(whiteIpGroup_, vector<Models::UpdateAppRequestPrivateNetworkWhiteIpGroup>) };
    inline vector<Models::UpdateAppRequestPrivateNetworkWhiteIpGroup> whiteIpGroup() { DARABONBA_PTR_GET(whiteIpGroup_, vector<Models::UpdateAppRequestPrivateNetworkWhiteIpGroup>) };
    inline UpdateAppRequestPrivateNetwork& setWhiteIpGroup(const vector<Models::UpdateAppRequestPrivateNetworkWhiteIpGroup> & whiteIpGroup) { DARABONBA_PTR_SET_VALUE(whiteIpGroup_, whiteIpGroup) };
    inline UpdateAppRequestPrivateNetwork& setWhiteIpGroup(vector<Models::UpdateAppRequestPrivateNetworkWhiteIpGroup> && whiteIpGroup) { DARABONBA_PTR_SET_RVALUE(whiteIpGroup_, whiteIpGroup) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> pvlEndpointId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<vector<Models::UpdateAppRequestPrivateNetworkWhiteIpGroup>> whiteIpGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
