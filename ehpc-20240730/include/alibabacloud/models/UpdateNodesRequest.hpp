// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(KeepAlive, keepAlive_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(KeepAlive, keepAlive_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->keepAlive_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // keepAlive Field Functions 
      bool hasKeepAlive() const { return this->keepAlive_ != nullptr;};
      void deleteKeepAlive() { this->keepAlive_ = nullptr;};
      inline bool getKeepAlive() const { DARABONBA_PTR_GET_DEFAULT(keepAlive_, false) };
      inline Instances& setKeepAlive(bool keepAlive) { DARABONBA_PTR_SET_VALUE(keepAlive_, keepAlive) };


    protected:
      // The instance ID of the compute node.
      shared_ptr<string> instanceId_ {};
      // Specifies whether to enable deletion protection for the compute node.
      shared_ptr<bool> keepAlive_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->instances_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<UpdateNodesRequest::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<UpdateNodesRequest::Instances>) };
    inline vector<UpdateNodesRequest::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<UpdateNodesRequest::Instances>) };
    inline UpdateNodesRequest& setInstances(const vector<UpdateNodesRequest::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline UpdateNodesRequest& setInstances(vector<UpdateNodesRequest::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The information about the compute nodes that you want to update.
    shared_ptr<vector<UpdateNodesRequest::Instances>> instances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
