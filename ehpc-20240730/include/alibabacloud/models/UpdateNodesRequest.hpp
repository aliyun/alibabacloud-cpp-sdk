// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateNodesRequestInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UpdateNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
    };
    UpdateNodesRequest() = default ;
    UpdateNodesRequest(const UpdateNodesRequest &) = default ;
    UpdateNodesRequest(UpdateNodesRequest &&) = default ;
    UpdateNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNodesRequest() = default ;
    UpdateNodesRequest& operator=(const UpdateNodesRequest &) = default ;
    UpdateNodesRequest& operator=(UpdateNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->instances_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<UpdateNodesRequestInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<UpdateNodesRequestInstances>) };
    inline vector<UpdateNodesRequestInstances> instances() { DARABONBA_PTR_GET(instances_, vector<UpdateNodesRequestInstances>) };
    inline UpdateNodesRequest& setInstances(const vector<UpdateNodesRequestInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline UpdateNodesRequest& setInstances(vector<UpdateNodesRequestInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The information about the compute nodes that you want to update.
    std::shared_ptr<vector<UpdateNodesRequestInstances>> instances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
