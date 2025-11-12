// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNNODESPEC_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNNODESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class AssignNodeSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignNodeSpec& obj) { 
      DARABONBA_PTR_TO_JSON(AntiAffinityNodeNames, antiAffinityNodeNames_);
      DARABONBA_PTR_TO_JSON(EnableAssignNode, enableAssignNode_);
      DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
    };
    friend void from_json(const Darabonba::Json& j, AssignNodeSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(AntiAffinityNodeNames, antiAffinityNodeNames_);
      DARABONBA_PTR_FROM_JSON(EnableAssignNode, enableAssignNode_);
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
    virtual bool empty() const override { return this->antiAffinityNodeNames_ == nullptr
        && return this->enableAssignNode_ == nullptr && return this->nodeNames_ == nullptr; };
    // antiAffinityNodeNames Field Functions 
    bool hasAntiAffinityNodeNames() const { return this->antiAffinityNodeNames_ != nullptr;};
    void deleteAntiAffinityNodeNames() { this->antiAffinityNodeNames_ = nullptr;};
    inline string antiAffinityNodeNames() const { DARABONBA_PTR_GET_DEFAULT(antiAffinityNodeNames_, "") };
    inline AssignNodeSpec& setAntiAffinityNodeNames(string antiAffinityNodeNames) { DARABONBA_PTR_SET_VALUE(antiAffinityNodeNames_, antiAffinityNodeNames) };


    // enableAssignNode Field Functions 
    bool hasEnableAssignNode() const { return this->enableAssignNode_ != nullptr;};
    void deleteEnableAssignNode() { this->enableAssignNode_ = nullptr;};
    inline bool enableAssignNode() const { DARABONBA_PTR_GET_DEFAULT(enableAssignNode_, false) };
    inline AssignNodeSpec& setEnableAssignNode(bool enableAssignNode) { DARABONBA_PTR_SET_VALUE(enableAssignNode_, enableAssignNode) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline string nodeNames() const { DARABONBA_PTR_GET_DEFAULT(nodeNames_, "") };
    inline AssignNodeSpec& setNodeNames(string nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };


  protected:
    std::shared_ptr<string> antiAffinityNodeNames_ = nullptr;
    std::shared_ptr<bool> enableAssignNode_ = nullptr;
    std::shared_ptr<string> nodeNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
