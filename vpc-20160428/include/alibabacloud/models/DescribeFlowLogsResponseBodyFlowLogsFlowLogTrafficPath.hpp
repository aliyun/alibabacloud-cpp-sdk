// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGSFLOWLOGTRAFFICPATH_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGSFLOWLOGTRAFFICPATH_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath& obj) { 
      DARABONBA_PTR_TO_JSON(TrafficPathList, trafficPathList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath& obj) { 
      DARABONBA_PTR_FROM_JSON(TrafficPathList, trafficPathList_);
    };
    DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath() = default ;
    DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath(const DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath &) = default ;
    DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath(DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath &&) = default ;
    DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath() = default ;
    DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath& operator=(const DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath &) = default ;
    DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath& operator=(DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->trafficPathList_ != nullptr; };
    // trafficPathList Field Functions 
    bool hasTrafficPathList() const { return this->trafficPathList_ != nullptr;};
    void deleteTrafficPathList() { this->trafficPathList_ = nullptr;};
    inline const vector<string> & trafficPathList() const { DARABONBA_PTR_GET_CONST(trafficPathList_, vector<string>) };
    inline vector<string> trafficPathList() { DARABONBA_PTR_GET(trafficPathList_, vector<string>) };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath& setTrafficPathList(const vector<string> & trafficPathList) { DARABONBA_PTR_SET_VALUE(trafficPathList_, trafficPathList) };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath& setTrafficPathList(vector<string> && trafficPathList) { DARABONBA_PTR_SET_RVALUE(trafficPathList_, trafficPathList) };


  protected:
    std::shared_ptr<vector<string>> trafficPathList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
