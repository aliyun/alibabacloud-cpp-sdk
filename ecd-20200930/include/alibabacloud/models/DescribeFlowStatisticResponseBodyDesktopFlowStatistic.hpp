// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWSTATISTICRESPONSEBODYDESKTOPFLOWSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWSTATISTICRESPONSEBODYDESKTOPFLOWSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeFlowStatisticResponseBodyDesktopFlowStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowStatisticResponseBodyDesktopFlowStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(FlowIn, flowIn_);
      DARABONBA_PTR_TO_JSON(FlowRank, flowRank_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowStatisticResponseBodyDesktopFlowStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(FlowIn, flowIn_);
      DARABONBA_PTR_FROM_JSON(FlowRank, flowRank_);
    };
    DescribeFlowStatisticResponseBodyDesktopFlowStatistic() = default ;
    DescribeFlowStatisticResponseBodyDesktopFlowStatistic(const DescribeFlowStatisticResponseBodyDesktopFlowStatistic &) = default ;
    DescribeFlowStatisticResponseBodyDesktopFlowStatistic(DescribeFlowStatisticResponseBodyDesktopFlowStatistic &&) = default ;
    DescribeFlowStatisticResponseBodyDesktopFlowStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowStatisticResponseBodyDesktopFlowStatistic() = default ;
    DescribeFlowStatisticResponseBodyDesktopFlowStatistic& operator=(const DescribeFlowStatisticResponseBodyDesktopFlowStatistic &) = default ;
    DescribeFlowStatisticResponseBodyDesktopFlowStatistic& operator=(DescribeFlowStatisticResponseBodyDesktopFlowStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && return this->desktopName_ == nullptr && return this->flowIn_ == nullptr && return this->flowRank_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeFlowStatisticResponseBodyDesktopFlowStatistic& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeFlowStatisticResponseBodyDesktopFlowStatistic& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // flowIn Field Functions 
    bool hasFlowIn() const { return this->flowIn_ != nullptr;};
    void deleteFlowIn() { this->flowIn_ = nullptr;};
    inline string flowIn() const { DARABONBA_PTR_GET_DEFAULT(flowIn_, "") };
    inline DescribeFlowStatisticResponseBodyDesktopFlowStatistic& setFlowIn(string flowIn) { DARABONBA_PTR_SET_VALUE(flowIn_, flowIn) };


    // flowRank Field Functions 
    bool hasFlowRank() const { return this->flowRank_ != nullptr;};
    void deleteFlowRank() { this->flowRank_ = nullptr;};
    inline int32_t flowRank() const { DARABONBA_PTR_GET_DEFAULT(flowRank_, 0) };
    inline DescribeFlowStatisticResponseBodyDesktopFlowStatistic& setFlowRank(int32_t flowRank) { DARABONBA_PTR_SET_VALUE(flowRank_, flowRank) };


  protected:
    // The ID of the cloud computer.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The name of the cloud computer.
    std::shared_ptr<string> desktopName_ = nullptr;
    // The traffic amount. Unit: KB.
    std::shared_ptr<string> flowIn_ = nullptr;
    // The traffic ranking.
    std::shared_ptr<int32_t> flowRank_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
