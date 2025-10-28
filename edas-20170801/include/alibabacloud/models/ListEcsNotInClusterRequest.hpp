// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSNOTINCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTECSNOTINCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListEcsNotInClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsNotInClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsNotInClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListEcsNotInClusterRequest() = default ;
    ListEcsNotInClusterRequest(const ListEcsNotInClusterRequest &) = default ;
    ListEcsNotInClusterRequest(ListEcsNotInClusterRequest &&) = default ;
    ListEcsNotInClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsNotInClusterRequest() = default ;
    ListEcsNotInClusterRequest& operator=(const ListEcsNotInClusterRequest &) = default ;
    ListEcsNotInClusterRequest& operator=(ListEcsNotInClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkMode_ == nullptr
        && return this->vpcId_ == nullptr; };
    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline int32_t networkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, 0) };
    inline ListEcsNotInClusterRequest& setNetworkMode(int32_t networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListEcsNotInClusterRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The network type. Valid values:
    // 
    // *   1: classic network
    // *   2: virtual private cloud (VPC)
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> networkMode_ = nullptr;
    // The ID of the VPC. This parameter is required if the NetworkMode parameter is set to 2.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
