// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHONEYPOTNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHONEYPOTNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateHoneypotNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHoneypotNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableProbeNum, availableProbeNum_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(SecurityGroupProbeIpList, securityGroupProbeIpList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHoneypotNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableProbeNum, availableProbeNum_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupProbeIpList, securityGroupProbeIpList_);
    };
    UpdateHoneypotNodeRequest() = default ;
    UpdateHoneypotNodeRequest(const UpdateHoneypotNodeRequest &) = default ;
    UpdateHoneypotNodeRequest(UpdateHoneypotNodeRequest &&) = default ;
    UpdateHoneypotNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHoneypotNodeRequest() = default ;
    UpdateHoneypotNodeRequest& operator=(const UpdateHoneypotNodeRequest &) = default ;
    UpdateHoneypotNodeRequest& operator=(UpdateHoneypotNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableProbeNum_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->securityGroupProbeIpList_ == nullptr; };
    // availableProbeNum Field Functions 
    bool hasAvailableProbeNum() const { return this->availableProbeNum_ != nullptr;};
    void deleteAvailableProbeNum() { this->availableProbeNum_ = nullptr;};
    inline int32_t getAvailableProbeNum() const { DARABONBA_PTR_GET_DEFAULT(availableProbeNum_, 0) };
    inline UpdateHoneypotNodeRequest& setAvailableProbeNum(int32_t availableProbeNum) { DARABONBA_PTR_SET_VALUE(availableProbeNum_, availableProbeNum) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpdateHoneypotNodeRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline UpdateHoneypotNodeRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // securityGroupProbeIpList Field Functions 
    bool hasSecurityGroupProbeIpList() const { return this->securityGroupProbeIpList_ != nullptr;};
    void deleteSecurityGroupProbeIpList() { this->securityGroupProbeIpList_ = nullptr;};
    inline const vector<string> & getSecurityGroupProbeIpList() const { DARABONBA_PTR_GET_CONST(securityGroupProbeIpList_, vector<string>) };
    inline vector<string> getSecurityGroupProbeIpList() { DARABONBA_PTR_GET(securityGroupProbeIpList_, vector<string>) };
    inline UpdateHoneypotNodeRequest& setSecurityGroupProbeIpList(const vector<string> & securityGroupProbeIpList) { DARABONBA_PTR_SET_VALUE(securityGroupProbeIpList_, securityGroupProbeIpList) };
    inline UpdateHoneypotNodeRequest& setSecurityGroupProbeIpList(vector<string> && securityGroupProbeIpList) { DARABONBA_PTR_SET_RVALUE(securityGroupProbeIpList_, securityGroupProbeIpList) };


  protected:
    // The number of available probes.
    // 
    // This parameter is required.
    shared_ptr<int32_t> availableProbeNum_ {};
    // The ID of the management node.
    // 
    // > You can call the [ListHoneypotNode](~~ListHoneypotNode~~) operation to query the IDs of management nodes.
    // 
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
    // The name of the management node.
    // 
    // This parameter is required.
    shared_ptr<string> nodeName_ {};
    // The CIDR blocks that are allowed to access the management node.
    shared_ptr<vector<string>> securityGroupProbeIpList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
