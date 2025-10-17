// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBNODESPARAMETERSRESPONSEBODYDBNODEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBNODESPARAMETERSRESPONSEBODYDBNODEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBNodesParametersResponseBodyDBNodeIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBNodesParametersResponseBodyDBNodeIds& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(RunningParameters, runningParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBNodesParametersResponseBodyDBNodeIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(RunningParameters, runningParameters_);
    };
    DescribeDBNodesParametersResponseBodyDBNodeIds() = default ;
    DescribeDBNodesParametersResponseBodyDBNodeIds(const DescribeDBNodesParametersResponseBodyDBNodeIds &) = default ;
    DescribeDBNodesParametersResponseBodyDBNodeIds(DescribeDBNodesParametersResponseBodyDBNodeIds &&) = default ;
    DescribeDBNodesParametersResponseBodyDBNodeIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBNodesParametersResponseBodyDBNodeIds() = default ;
    DescribeDBNodesParametersResponseBodyDBNodeIds& operator=(const DescribeDBNodesParametersResponseBodyDBNodeIds &) = default ;
    DescribeDBNodesParametersResponseBodyDBNodeIds& operator=(DescribeDBNodesParametersResponseBodyDBNodeIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBNodeId_ == nullptr
        && return this->runningParameters_ == nullptr; };
    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string DBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline DescribeDBNodesParametersResponseBodyDBNodeIds& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // runningParameters Field Functions 
    bool hasRunningParameters() const { return this->runningParameters_ != nullptr;};
    void deleteRunningParameters() { this->runningParameters_ = nullptr;};
    inline const vector<Models::DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters> & runningParameters() const { DARABONBA_PTR_GET_CONST(runningParameters_, vector<Models::DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters>) };
    inline vector<Models::DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters> runningParameters() { DARABONBA_PTR_GET(runningParameters_, vector<Models::DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters>) };
    inline DescribeDBNodesParametersResponseBodyDBNodeIds& setRunningParameters(const vector<Models::DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters> & runningParameters) { DARABONBA_PTR_SET_VALUE(runningParameters_, runningParameters) };
    inline DescribeDBNodesParametersResponseBodyDBNodeIds& setRunningParameters(vector<Models::DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters> && runningParameters) { DARABONBA_PTR_SET_RVALUE(runningParameters_, runningParameters) };


  protected:
    // The ID of the node.
    std::shared_ptr<string> DBNodeId_ = nullptr;
    // The parameters of the current node.
    std::shared_ptr<vector<Models::DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters>> runningParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
