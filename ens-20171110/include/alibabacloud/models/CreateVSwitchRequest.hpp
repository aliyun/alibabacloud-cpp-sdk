// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateVSwitchRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateVSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
    };
    CreateVSwitchRequest() = default ;
    CreateVSwitchRequest(const CreateVSwitchRequest &) = default ;
    CreateVSwitchRequest(CreateVSwitchRequest &&) = default ;
    CreateVSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVSwitchRequest() = default ;
    CreateVSwitchRequest& operator=(const CreateVSwitchRequest &) = default ;
    CreateVSwitchRequest& operator=(CreateVSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && return this->description_ == nullptr && return this->ensRegionId_ == nullptr && return this->networkId_ == nullptr && return this->tag_ == nullptr && return this->vSwitchName_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline CreateVSwitchRequest& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVSwitchRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateVSwitchRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline CreateVSwitchRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVSwitchRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVSwitchRequestTag>) };
    inline vector<CreateVSwitchRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateVSwitchRequestTag>) };
    inline CreateVSwitchRequest& setTag(const vector<CreateVSwitchRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVSwitchRequest& setTag(vector<CreateVSwitchRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string vSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline CreateVSwitchRequest& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


  protected:
    // The CIDR block of the vSwitch. Take note of the following limits:
    // 
    // *   The subnet mask must be 16 to 29 bits in length.
    // *   The CIDR block of the vSwitch must fall within the CIDR block of the VPC to which the vSwitch belongs.
    // *   The CIDR block of the vSwitch cannot be the same as the destination CIDR block in a route entry of the VPC. However, it can be a subset of the destination CIDR block.
    // 
    // This parameter is required.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The description of the vSwitch.
    // 
    // The description must be 2 to 256 characters in length. It must start with a letter but cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the edge node.
    // 
    // This parameter is required.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the network to which the vSwitch that you want to create belongs.
    std::shared_ptr<string> networkId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateVSwitchRequestTag>> tag_ = nullptr;
    // The name of the vSwitch. The name must meet the following requirements:
    // 
    // *   The name must be 2 to 128 characters in length.
    // *   The name must start with a letter and cannot start with http:// or https://. It can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    // 
    // Default value: null.
    std::shared_ptr<string> vSwitchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
