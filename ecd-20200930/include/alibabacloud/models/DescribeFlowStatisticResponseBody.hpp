// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeFlowStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopCount, desktopCount_);
      DARABONBA_PTR_TO_JSON(DesktopFlowStatistic, desktopFlowStatistic_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopCount, desktopCount_);
      DARABONBA_PTR_FROM_JSON(DesktopFlowStatistic, desktopFlowStatistic_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFlowStatisticResponseBody() = default ;
    DescribeFlowStatisticResponseBody(const DescribeFlowStatisticResponseBody &) = default ;
    DescribeFlowStatisticResponseBody(DescribeFlowStatisticResponseBody &&) = default ;
    DescribeFlowStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowStatisticResponseBody() = default ;
    DescribeFlowStatisticResponseBody& operator=(const DescribeFlowStatisticResponseBody &) = default ;
    DescribeFlowStatisticResponseBody& operator=(DescribeFlowStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DesktopFlowStatistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DesktopFlowStatistic& obj) { 
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(FlowIn, flowIn_);
        DARABONBA_PTR_TO_JSON(FlowRank, flowRank_);
      };
      friend void from_json(const Darabonba::Json& j, DesktopFlowStatistic& obj) { 
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(FlowIn, flowIn_);
        DARABONBA_PTR_FROM_JSON(FlowRank, flowRank_);
      };
      DesktopFlowStatistic() = default ;
      DesktopFlowStatistic(const DesktopFlowStatistic &) = default ;
      DesktopFlowStatistic(DesktopFlowStatistic &&) = default ;
      DesktopFlowStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DesktopFlowStatistic() = default ;
      DesktopFlowStatistic& operator=(const DesktopFlowStatistic &) = default ;
      DesktopFlowStatistic& operator=(DesktopFlowStatistic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->desktopName_ == nullptr && this->flowIn_ == nullptr && this->flowRank_ == nullptr; };
      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline DesktopFlowStatistic& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline DesktopFlowStatistic& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // flowIn Field Functions 
      bool hasFlowIn() const { return this->flowIn_ != nullptr;};
      void deleteFlowIn() { this->flowIn_ = nullptr;};
      inline string getFlowIn() const { DARABONBA_PTR_GET_DEFAULT(flowIn_, "") };
      inline DesktopFlowStatistic& setFlowIn(string flowIn) { DARABONBA_PTR_SET_VALUE(flowIn_, flowIn) };


      // flowRank Field Functions 
      bool hasFlowRank() const { return this->flowRank_ != nullptr;};
      void deleteFlowRank() { this->flowRank_ = nullptr;};
      inline int32_t getFlowRank() const { DARABONBA_PTR_GET_DEFAULT(flowRank_, 0) };
      inline DesktopFlowStatistic& setFlowRank(int32_t flowRank) { DARABONBA_PTR_SET_VALUE(flowRank_, flowRank) };


    protected:
      // The ID of the cloud computer.
      shared_ptr<string> desktopId_ {};
      // The name of the cloud computer.
      shared_ptr<string> desktopName_ {};
      // The traffic amount. Unit: KB.
      shared_ptr<string> flowIn_ {};
      // The traffic ranking.
      shared_ptr<int32_t> flowRank_ {};
    };

    virtual bool empty() const override { return this->desktopCount_ == nullptr
        && this->desktopFlowStatistic_ == nullptr && this->requestId_ == nullptr; };
    // desktopCount Field Functions 
    bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
    void deleteDesktopCount() { this->desktopCount_ = nullptr;};
    inline int32_t getDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, 0) };
    inline DescribeFlowStatisticResponseBody& setDesktopCount(int32_t desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


    // desktopFlowStatistic Field Functions 
    bool hasDesktopFlowStatistic() const { return this->desktopFlowStatistic_ != nullptr;};
    void deleteDesktopFlowStatistic() { this->desktopFlowStatistic_ = nullptr;};
    inline const vector<DescribeFlowStatisticResponseBody::DesktopFlowStatistic> & getDesktopFlowStatistic() const { DARABONBA_PTR_GET_CONST(desktopFlowStatistic_, vector<DescribeFlowStatisticResponseBody::DesktopFlowStatistic>) };
    inline vector<DescribeFlowStatisticResponseBody::DesktopFlowStatistic> getDesktopFlowStatistic() { DARABONBA_PTR_GET(desktopFlowStatistic_, vector<DescribeFlowStatisticResponseBody::DesktopFlowStatistic>) };
    inline DescribeFlowStatisticResponseBody& setDesktopFlowStatistic(const vector<DescribeFlowStatisticResponseBody::DesktopFlowStatistic> & desktopFlowStatistic) { DARABONBA_PTR_SET_VALUE(desktopFlowStatistic_, desktopFlowStatistic) };
    inline DescribeFlowStatisticResponseBody& setDesktopFlowStatistic(vector<DescribeFlowStatisticResponseBody::DesktopFlowStatistic> && desktopFlowStatistic) { DARABONBA_PTR_SET_RVALUE(desktopFlowStatistic_, desktopFlowStatistic) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFlowStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of available cloud computers in the office network.
    shared_ptr<int32_t> desktopCount_ {};
    // The traffic statistics.
    shared_ptr<vector<DescribeFlowStatisticResponseBody::DesktopFlowStatistic>> desktopFlowStatistic_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
