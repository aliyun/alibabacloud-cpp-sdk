// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEINFOFORPODREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODEINFOFORPODREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetNodeInfoForPodRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeInfoForPodRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeInfoForPodRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetNodeInfoForPodRequest() = default ;
    GetNodeInfoForPodRequest(const GetNodeInfoForPodRequest &) = default ;
    GetNodeInfoForPodRequest(GetNodeInfoForPodRequest &&) = default ;
    GetNodeInfoForPodRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeInfoForPodRequest() = default ;
    GetNodeInfoForPodRequest& operator=(const GetNodeInfoForPodRequest &) = default ;
    GetNodeInfoForPodRequest& operator=(GetNodeInfoForPodRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeId_ == nullptr
        && return this->regionId_ == nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetNodeInfoForPodRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetNodeInfoForPodRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the node for this operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
