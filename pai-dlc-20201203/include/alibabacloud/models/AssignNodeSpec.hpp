// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNNODESPEC_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNNODESPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HyperNodeSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class AssignNodeSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignNodeSpec& obj) { 
      DARABONBA_PTR_TO_JSON(AntiAffinityHyperNodes, antiAffinityHyperNodes_);
      DARABONBA_PTR_TO_JSON(AntiAffinityNodeNames, antiAffinityNodeNames_);
      DARABONBA_PTR_TO_JSON(EnableAssignNode, enableAssignNode_);
      DARABONBA_PTR_TO_JSON(HyperNodes, hyperNodes_);
      DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
    };
    friend void from_json(const Darabonba::Json& j, AssignNodeSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(AntiAffinityHyperNodes, antiAffinityHyperNodes_);
      DARABONBA_PTR_FROM_JSON(AntiAffinityNodeNames, antiAffinityNodeNames_);
      DARABONBA_PTR_FROM_JSON(EnableAssignNode, enableAssignNode_);
      DARABONBA_PTR_FROM_JSON(HyperNodes, hyperNodes_);
      DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
    };
    AssignNodeSpec() = default ;
    AssignNodeSpec(const AssignNodeSpec &) = default ;
    AssignNodeSpec(AssignNodeSpec &&) = default ;
    AssignNodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignNodeSpec() = default ;
    AssignNodeSpec& operator=(const AssignNodeSpec &) = default ;
    AssignNodeSpec& operator=(AssignNodeSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->antiAffinityHyperNodes_ == nullptr
        && this->antiAffinityNodeNames_ == nullptr && this->enableAssignNode_ == nullptr && this->hyperNodes_ == nullptr && this->nodeNames_ == nullptr; };
    // antiAffinityHyperNodes Field Functions 
    bool hasAntiAffinityHyperNodes() const { return this->antiAffinityHyperNodes_ != nullptr;};
    void deleteAntiAffinityHyperNodes() { this->antiAffinityHyperNodes_ = nullptr;};
    inline const vector<HyperNodeSpec> & getAntiAffinityHyperNodes() const { DARABONBA_PTR_GET_CONST(antiAffinityHyperNodes_, vector<HyperNodeSpec>) };
    inline vector<HyperNodeSpec> getAntiAffinityHyperNodes() { DARABONBA_PTR_GET(antiAffinityHyperNodes_, vector<HyperNodeSpec>) };
    inline AssignNodeSpec& setAntiAffinityHyperNodes(const vector<HyperNodeSpec> & antiAffinityHyperNodes) { DARABONBA_PTR_SET_VALUE(antiAffinityHyperNodes_, antiAffinityHyperNodes) };
    inline AssignNodeSpec& setAntiAffinityHyperNodes(vector<HyperNodeSpec> && antiAffinityHyperNodes) { DARABONBA_PTR_SET_RVALUE(antiAffinityHyperNodes_, antiAffinityHyperNodes) };


    // antiAffinityNodeNames Field Functions 
    bool hasAntiAffinityNodeNames() const { return this->antiAffinityNodeNames_ != nullptr;};
    void deleteAntiAffinityNodeNames() { this->antiAffinityNodeNames_ = nullptr;};
    inline string getAntiAffinityNodeNames() const { DARABONBA_PTR_GET_DEFAULT(antiAffinityNodeNames_, "") };
    inline AssignNodeSpec& setAntiAffinityNodeNames(string antiAffinityNodeNames) { DARABONBA_PTR_SET_VALUE(antiAffinityNodeNames_, antiAffinityNodeNames) };


    // enableAssignNode Field Functions 
    bool hasEnableAssignNode() const { return this->enableAssignNode_ != nullptr;};
    void deleteEnableAssignNode() { this->enableAssignNode_ = nullptr;};
    inline bool getEnableAssignNode() const { DARABONBA_PTR_GET_DEFAULT(enableAssignNode_, false) };
    inline AssignNodeSpec& setEnableAssignNode(bool enableAssignNode) { DARABONBA_PTR_SET_VALUE(enableAssignNode_, enableAssignNode) };


    // hyperNodes Field Functions 
    bool hasHyperNodes() const { return this->hyperNodes_ != nullptr;};
    void deleteHyperNodes() { this->hyperNodes_ = nullptr;};
    inline const vector<HyperNodeSpec> & getHyperNodes() const { DARABONBA_PTR_GET_CONST(hyperNodes_, vector<HyperNodeSpec>) };
    inline vector<HyperNodeSpec> getHyperNodes() { DARABONBA_PTR_GET(hyperNodes_, vector<HyperNodeSpec>) };
    inline AssignNodeSpec& setHyperNodes(const vector<HyperNodeSpec> & hyperNodes) { DARABONBA_PTR_SET_VALUE(hyperNodes_, hyperNodes) };
    inline AssignNodeSpec& setHyperNodes(vector<HyperNodeSpec> && hyperNodes) { DARABONBA_PTR_SET_RVALUE(hyperNodes_, hyperNodes) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline string getNodeNames() const { DARABONBA_PTR_GET_DEFAULT(nodeNames_, "") };
    inline AssignNodeSpec& setNodeNames(string nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };


  protected:
    shared_ptr<vector<HyperNodeSpec>> antiAffinityHyperNodes_ {};
    shared_ptr<string> antiAffinityNodeNames_ {};
    shared_ptr<bool> enableAssignNode_ {};
    shared_ptr<vector<HyperNodeSpec>> hyperNodes_ {};
    shared_ptr<string> nodeNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
