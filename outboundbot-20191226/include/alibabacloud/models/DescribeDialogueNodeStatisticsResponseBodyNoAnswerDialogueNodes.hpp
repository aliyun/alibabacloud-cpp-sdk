// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIALOGUENODESTATISTICSRESPONSEBODYNOANSWERDIALOGUENODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIALOGUENODESTATISTICSRESPONSEBODYNOANSWERDIALOGUENODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HangUpNum, hangUpNum_);
      DARABONBA_PTR_TO_JSON(HitNum, hitNum_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NoAnswerNum, noAnswerNum_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HangUpNum, hangUpNum_);
      DARABONBA_PTR_FROM_JSON(HitNum, hitNum_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NoAnswerNum, noAnswerNum_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
    };
    DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes() = default ;
    DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes(const DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes &) = default ;
    DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes(DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes &&) = default ;
    DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes() = default ;
    DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes& operator=(const DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes &) = default ;
    DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes& operator=(DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->hangUpNum_ == nullptr && return this->hitNum_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->noAnswerNum_ == nullptr
        && return this->nodeId_ == nullptr && return this->nodeName_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hangUpNum Field Functions 
    bool hasHangUpNum() const { return this->hangUpNum_ != nullptr;};
    void deleteHangUpNum() { this->hangUpNum_ = nullptr;};
    inline int32_t hangUpNum() const { DARABONBA_PTR_GET_DEFAULT(hangUpNum_, 0) };
    inline DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes& setHangUpNum(int32_t hangUpNum) { DARABONBA_PTR_SET_VALUE(hangUpNum_, hangUpNum) };


    // hitNum Field Functions 
    bool hasHitNum() const { return this->hitNum_ != nullptr;};
    void deleteHitNum() { this->hitNum_ = nullptr;};
    inline int32_t hitNum() const { DARABONBA_PTR_GET_DEFAULT(hitNum_, 0) };
    inline DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes& setHitNum(int32_t hitNum) { DARABONBA_PTR_SET_VALUE(hitNum_, hitNum) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // noAnswerNum Field Functions 
    bool hasNoAnswerNum() const { return this->noAnswerNum_ != nullptr;};
    void deleteNoAnswerNum() { this->noAnswerNum_ = nullptr;};
    inline int32_t noAnswerNum() const { DARABONBA_PTR_GET_DEFAULT(noAnswerNum_, 0) };
    inline DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes& setNoAnswerNum(int32_t noAnswerNum) { DARABONBA_PTR_SET_VALUE(noAnswerNum_, noAnswerNum) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


  protected:
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<int32_t> hangUpNum_ = nullptr;
    std::shared_ptr<int32_t> hitNum_ = nullptr;
    // id
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> noAnswerNum_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
