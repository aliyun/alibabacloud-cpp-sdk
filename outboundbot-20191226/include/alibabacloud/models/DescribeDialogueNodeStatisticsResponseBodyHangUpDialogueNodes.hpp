// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIALOGUENODESTATISTICSRESPONSEBODYHANGUPDIALOGUENODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIALOGUENODESTATISTICSRESPONSEBODYHANGUPDIALOGUENODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes& obj) { 
      DARABONBA_PTR_TO_JSON(HangUpNum, hangUpNum_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(RateDisplay, rateDisplay_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(HangUpNum, hangUpNum_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(RateDisplay, rateDisplay_);
    };
    DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes() = default ;
    DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes(const DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes &) = default ;
    DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes(DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes &&) = default ;
    DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes() = default ;
    DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes& operator=(const DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes &) = default ;
    DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes& operator=(DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hangUpNum_ == nullptr
        && return this->nodeId_ == nullptr && return this->nodeName_ == nullptr && return this->rateDisplay_ == nullptr; };
    // hangUpNum Field Functions 
    bool hasHangUpNum() const { return this->hangUpNum_ != nullptr;};
    void deleteHangUpNum() { this->hangUpNum_ = nullptr;};
    inline int32_t hangUpNum() const { DARABONBA_PTR_GET_DEFAULT(hangUpNum_, 0) };
    inline DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes& setHangUpNum(int32_t hangUpNum) { DARABONBA_PTR_SET_VALUE(hangUpNum_, hangUpNum) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // rateDisplay Field Functions 
    bool hasRateDisplay() const { return this->rateDisplay_ != nullptr;};
    void deleteRateDisplay() { this->rateDisplay_ = nullptr;};
    inline string rateDisplay() const { DARABONBA_PTR_GET_DEFAULT(rateDisplay_, "") };
    inline DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes& setRateDisplay(string rateDisplay) { DARABONBA_PTR_SET_VALUE(rateDisplay_, rateDisplay) };


  protected:
    std::shared_ptr<int32_t> hangUpNum_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> rateDisplay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
