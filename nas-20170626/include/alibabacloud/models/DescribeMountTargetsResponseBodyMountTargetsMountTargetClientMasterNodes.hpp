// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETSMOUNTTARGETCLIENTMASTERNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETSMOUNTTARGETCLIENTMASTERNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes& obj) { 
      DARABONBA_PTR_TO_JSON(ClientMasterNode, clientMasterNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientMasterNode, clientMasterNode_);
    };
    DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes() = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes(const DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes &) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes(DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes &&) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes() = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes& operator=(const DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes &) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes& operator=(DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientMasterNode_ == nullptr; };
    // clientMasterNode Field Functions 
    bool hasClientMasterNode() const { return this->clientMasterNode_ != nullptr;};
    void deleteClientMasterNode() { this->clientMasterNode_ = nullptr;};
    inline const vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode> & clientMasterNode() const { DARABONBA_PTR_GET_CONST(clientMasterNode_, vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode>) };
    inline vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode> clientMasterNode() { DARABONBA_PTR_GET(clientMasterNode_, vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode>) };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes& setClientMasterNode(const vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode> & clientMasterNode) { DARABONBA_PTR_SET_VALUE(clientMasterNode_, clientMasterNode) };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes& setClientMasterNode(vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode> && clientMasterNode) { DARABONBA_PTR_SET_RVALUE(clientMasterNode_, clientMasterNode) };


  protected:
    std::shared_ptr<vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode>> clientMasterNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
