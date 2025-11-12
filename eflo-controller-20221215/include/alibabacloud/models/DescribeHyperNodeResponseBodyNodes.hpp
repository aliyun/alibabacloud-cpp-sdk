// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYPERNODERESPONSEBODYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYPERNODERESPONSEBODYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHyperNodeResponseBodyNodesDisks.hpp>
#include <alibabacloud/models/DescribeHyperNodeResponseBodyNodesNetworks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeHyperNodeResponseBodyNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHyperNodeResponseBodyNodes& obj) { 
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(Networks, networks_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OperatingState, operatingState_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHyperNodeResponseBodyNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(Networks, networks_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OperatingState, operatingState_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    DescribeHyperNodeResponseBodyNodes() = default ;
    DescribeHyperNodeResponseBodyNodes(const DescribeHyperNodeResponseBodyNodes &) = default ;
    DescribeHyperNodeResponseBodyNodes(DescribeHyperNodeResponseBodyNodes &&) = default ;
    DescribeHyperNodeResponseBodyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHyperNodeResponseBodyNodes() = default ;
    DescribeHyperNodeResponseBodyNodes& operator=(const DescribeHyperNodeResponseBodyNodes &) = default ;
    DescribeHyperNodeResponseBodyNodes& operator=(DescribeHyperNodeResponseBodyNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disks_ == nullptr
        && return this->hostname_ == nullptr && return this->imageId_ == nullptr && return this->imageName_ == nullptr && return this->networks_ == nullptr && return this->nodeId_ == nullptr
        && return this->operatingState_ == nullptr && return this->status_ == nullptr && return this->userData_ == nullptr; };
    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const vector<Models::DescribeHyperNodeResponseBodyNodesDisks> & disks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Models::DescribeHyperNodeResponseBodyNodesDisks>) };
    inline vector<Models::DescribeHyperNodeResponseBodyNodesDisks> disks() { DARABONBA_PTR_GET(disks_, vector<Models::DescribeHyperNodeResponseBodyNodesDisks>) };
    inline DescribeHyperNodeResponseBodyNodes& setDisks(const vector<Models::DescribeHyperNodeResponseBodyNodesDisks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeHyperNodeResponseBodyNodes& setDisks(vector<Models::DescribeHyperNodeResponseBodyNodesDisks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline DescribeHyperNodeResponseBodyNodes& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeHyperNodeResponseBodyNodes& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeHyperNodeResponseBodyNodes& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // networks Field Functions 
    bool hasNetworks() const { return this->networks_ != nullptr;};
    void deleteNetworks() { this->networks_ = nullptr;};
    inline const Models::DescribeHyperNodeResponseBodyNodesNetworks & networks() const { DARABONBA_PTR_GET_CONST(networks_, Models::DescribeHyperNodeResponseBodyNodesNetworks) };
    inline Models::DescribeHyperNodeResponseBodyNodesNetworks networks() { DARABONBA_PTR_GET(networks_, Models::DescribeHyperNodeResponseBodyNodesNetworks) };
    inline DescribeHyperNodeResponseBodyNodes& setNetworks(const Models::DescribeHyperNodeResponseBodyNodesNetworks & networks) { DARABONBA_PTR_SET_VALUE(networks_, networks) };
    inline DescribeHyperNodeResponseBodyNodes& setNetworks(Models::DescribeHyperNodeResponseBodyNodesNetworks && networks) { DARABONBA_PTR_SET_RVALUE(networks_, networks) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeHyperNodeResponseBodyNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // operatingState Field Functions 
    bool hasOperatingState() const { return this->operatingState_ != nullptr;};
    void deleteOperatingState() { this->operatingState_ = nullptr;};
    inline string operatingState() const { DARABONBA_PTR_GET_DEFAULT(operatingState_, "") };
    inline DescribeHyperNodeResponseBodyNodes& setOperatingState(string operatingState) { DARABONBA_PTR_SET_VALUE(operatingState_, operatingState) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHyperNodeResponseBodyNodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline DescribeHyperNodeResponseBodyNodes& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<vector<Models::DescribeHyperNodeResponseBodyNodesDisks>> disks_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> imageName_ = nullptr;
    std::shared_ptr<Models::DescribeHyperNodeResponseBodyNodesNetworks> networks_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> operatingState_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
