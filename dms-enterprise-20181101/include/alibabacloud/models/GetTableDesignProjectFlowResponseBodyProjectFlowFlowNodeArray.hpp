// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTFLOWRESPONSEBODYPROJECTFLOWFLOWNODEARRAY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTFLOWRESPONSEBODYPROJECTFLOWFLOWNODEARRAY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray& obj) { 
      DARABONBA_PTR_TO_JSON(BackToDesign, backToDesign_);
      DARABONBA_PTR_TO_JSON(CanSkip, canSkip_);
      DARABONBA_PTR_TO_JSON(NodeRole, nodeRole_);
      DARABONBA_PTR_TO_JSON(NodeTitle, nodeTitle_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(PublishAnchor, publishAnchor_);
      DARABONBA_PTR_TO_JSON(PublishStrategies, publishStrategies_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray& obj) { 
      DARABONBA_PTR_FROM_JSON(BackToDesign, backToDesign_);
      DARABONBA_PTR_FROM_JSON(CanSkip, canSkip_);
      DARABONBA_PTR_FROM_JSON(NodeRole, nodeRole_);
      DARABONBA_PTR_FROM_JSON(NodeTitle, nodeTitle_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(PublishAnchor, publishAnchor_);
      DARABONBA_PTR_FROM_JSON(PublishStrategies, publishStrategies_);
    };
    GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray() = default ;
    GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray(const GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray &) = default ;
    GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray(GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray &&) = default ;
    GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray() = default ;
    GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray& operator=(const GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray &) = default ;
    GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray& operator=(GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backToDesign_ != nullptr
        && this->canSkip_ != nullptr && this->nodeRole_ != nullptr && this->nodeTitle_ != nullptr && this->position_ != nullptr && this->publishAnchor_ != nullptr
        && this->publishStrategies_ != nullptr; };
    // backToDesign Field Functions 
    bool hasBackToDesign() const { return this->backToDesign_ != nullptr;};
    void deleteBackToDesign() { this->backToDesign_ = nullptr;};
    inline bool backToDesign() const { DARABONBA_PTR_GET_DEFAULT(backToDesign_, false) };
    inline GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray& setBackToDesign(bool backToDesign) { DARABONBA_PTR_SET_VALUE(backToDesign_, backToDesign) };


    // canSkip Field Functions 
    bool hasCanSkip() const { return this->canSkip_ != nullptr;};
    void deleteCanSkip() { this->canSkip_ = nullptr;};
    inline bool canSkip() const { DARABONBA_PTR_GET_DEFAULT(canSkip_, false) };
    inline GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray& setCanSkip(bool canSkip) { DARABONBA_PTR_SET_VALUE(canSkip_, canSkip) };


    // nodeRole Field Functions 
    bool hasNodeRole() const { return this->nodeRole_ != nullptr;};
    void deleteNodeRole() { this->nodeRole_ = nullptr;};
    inline string nodeRole() const { DARABONBA_PTR_GET_DEFAULT(nodeRole_, "") };
    inline GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray& setNodeRole(string nodeRole) { DARABONBA_PTR_SET_VALUE(nodeRole_, nodeRole) };


    // nodeTitle Field Functions 
    bool hasNodeTitle() const { return this->nodeTitle_ != nullptr;};
    void deleteNodeTitle() { this->nodeTitle_ = nullptr;};
    inline string nodeTitle() const { DARABONBA_PTR_GET_DEFAULT(nodeTitle_, "") };
    inline GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray& setNodeTitle(string nodeTitle) { DARABONBA_PTR_SET_VALUE(nodeTitle_, nodeTitle) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int32_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
    inline GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // publishAnchor Field Functions 
    bool hasPublishAnchor() const { return this->publishAnchor_ != nullptr;};
    void deletePublishAnchor() { this->publishAnchor_ = nullptr;};
    inline bool publishAnchor() const { DARABONBA_PTR_GET_DEFAULT(publishAnchor_, false) };
    inline GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray& setPublishAnchor(bool publishAnchor) { DARABONBA_PTR_SET_VALUE(publishAnchor_, publishAnchor) };


    // publishStrategies Field Functions 
    bool hasPublishStrategies() const { return this->publishStrategies_ != nullptr;};
    void deletePublishStrategies() { this->publishStrategies_ = nullptr;};
    inline const vector<string> & publishStrategies() const { DARABONBA_PTR_GET_CONST(publishStrategies_, vector<string>) };
    inline vector<string> publishStrategies() { DARABONBA_PTR_GET(publishStrategies_, vector<string>) };
    inline GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray& setPublishStrategies(const vector<string> & publishStrategies) { DARABONBA_PTR_SET_VALUE(publishStrategies_, publishStrategies) };
    inline GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray& setPublishStrategies(vector<string> && publishStrategies) { DARABONBA_PTR_SET_RVALUE(publishStrategies_, publishStrategies) };


  protected:
    // Indicates whether the ticket can be returned to the schema design node. Valid values:
    // 
    // *   **1**: The ticket can be returned to the schema design node.
    // *   **0**: The ticket cannot be returned to the schema design node. This value can be returned only for the PUBLISH node.
    std::shared_ptr<bool> backToDesign_ = nullptr;
    // Indicates whether the current node can be skipped. Valid values:
    // 
    // *   **1**: The current node can be skipped.
    // *   **0**: The current node cannot be skipped. This value can be returned only for the PUBLISH node.
    std::shared_ptr<bool> canSkip_ = nullptr;
    // The role of the node in the process.
    // 
    // *   START: The ticket was created.
    // *   DESIGN: The schema is being created.
    // *   PUBLISH: The schema is published.
    // *   END: The ticket is complete.
    std::shared_ptr<string> nodeRole_ = nullptr;
    // The title of the node.
    std::shared_ptr<string> nodeTitle_ = nullptr;
    // The position of the node in the process. The value starts from 1.
    std::shared_ptr<int32_t> position_ = nullptr;
    // Indicates whether the node is the anchor node. A schema design process has only one anchor node, on which the schema is published. After the schema is published on the anchor node, a post-publish image is generated and the DDL metadata lock is released.
    std::shared_ptr<bool> publishAnchor_ = nullptr;
    // The available publishing strategies.
    std::shared_ptr<vector<string>> publishStrategies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
