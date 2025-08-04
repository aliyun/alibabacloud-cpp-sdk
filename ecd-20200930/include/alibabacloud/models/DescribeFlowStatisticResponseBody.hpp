// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFlowStatisticResponseBodyDesktopFlowStatistic.hpp>
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
    virtual bool empty() const override { this->desktopCount_ != nullptr
        && this->desktopFlowStatistic_ != nullptr && this->requestId_ != nullptr; };
    // desktopCount Field Functions 
    bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
    void deleteDesktopCount() { this->desktopCount_ = nullptr;};
    inline int32_t desktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, 0) };
    inline DescribeFlowStatisticResponseBody& setDesktopCount(int32_t desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


    // desktopFlowStatistic Field Functions 
    bool hasDesktopFlowStatistic() const { return this->desktopFlowStatistic_ != nullptr;};
    void deleteDesktopFlowStatistic() { this->desktopFlowStatistic_ = nullptr;};
    inline const vector<DescribeFlowStatisticResponseBodyDesktopFlowStatistic> & desktopFlowStatistic() const { DARABONBA_PTR_GET_CONST(desktopFlowStatistic_, vector<DescribeFlowStatisticResponseBodyDesktopFlowStatistic>) };
    inline vector<DescribeFlowStatisticResponseBodyDesktopFlowStatistic> desktopFlowStatistic() { DARABONBA_PTR_GET(desktopFlowStatistic_, vector<DescribeFlowStatisticResponseBodyDesktopFlowStatistic>) };
    inline DescribeFlowStatisticResponseBody& setDesktopFlowStatistic(const vector<DescribeFlowStatisticResponseBodyDesktopFlowStatistic> & desktopFlowStatistic) { DARABONBA_PTR_SET_VALUE(desktopFlowStatistic_, desktopFlowStatistic) };
    inline DescribeFlowStatisticResponseBody& setDesktopFlowStatistic(vector<DescribeFlowStatisticResponseBodyDesktopFlowStatistic> && desktopFlowStatistic) { DARABONBA_PTR_SET_RVALUE(desktopFlowStatistic_, desktopFlowStatistic) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFlowStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of available cloud computers in the office network.
    std::shared_ptr<int32_t> desktopCount_ = nullptr;
    // The traffic statistics.
    std::shared_ptr<vector<DescribeFlowStatisticResponseBodyDesktopFlowStatistic>> desktopFlowStatistic_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
