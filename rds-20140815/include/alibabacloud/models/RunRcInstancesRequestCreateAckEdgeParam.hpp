// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNRCINSTANCESREQUESTCREATEACKEDGEPARAM_HPP_
#define ALIBABACLOUD_MODELS_RUNRCINSTANCESREQUESTCREATEACKEDGEPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RunRCInstancesRequestCreateAckEdgeParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunRCInstancesRequestCreateAckEdgeParam& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
    };
    friend void from_json(const Darabonba::Json& j, RunRCInstancesRequestCreateAckEdgeParam& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
    };
    RunRCInstancesRequestCreateAckEdgeParam() = default ;
    RunRCInstancesRequestCreateAckEdgeParam(const RunRCInstancesRequestCreateAckEdgeParam &) = default ;
    RunRCInstancesRequestCreateAckEdgeParam(RunRCInstancesRequestCreateAckEdgeParam &&) = default ;
    RunRCInstancesRequestCreateAckEdgeParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunRCInstancesRequestCreateAckEdgeParam() = default ;
    RunRCInstancesRequestCreateAckEdgeParam& operator=(const RunRCInstancesRequestCreateAckEdgeParam &) = default ;
    RunRCInstancesRequestCreateAckEdgeParam& operator=(RunRCInstancesRequestCreateAckEdgeParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->nodePoolId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline RunRCInstancesRequestCreateAckEdgeParam& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // nodePoolId Field Functions 
    bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
    void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
    inline string nodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
    inline RunRCInstancesRequestCreateAckEdgeParam& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> nodePoolId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
