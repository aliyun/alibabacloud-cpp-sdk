// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEGROUPFEATUREGATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODEGROUPFEATUREGATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class GetNodeGroupFeatureGateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeGroupFeatureGateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeGroupFeatureGateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
    };
    GetNodeGroupFeatureGateRequest() = default ;
    GetNodeGroupFeatureGateRequest(const GetNodeGroupFeatureGateRequest &) = default ;
    GetNodeGroupFeatureGateRequest(GetNodeGroupFeatureGateRequest &&) = default ;
    GetNodeGroupFeatureGateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeGroupFeatureGateRequest() = default ;
    GetNodeGroupFeatureGateRequest& operator=(const GetNodeGroupFeatureGateRequest &) = default ;
    GetNodeGroupFeatureGateRequest& operator=(GetNodeGroupFeatureGateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nodeGroupId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetNodeGroupFeatureGateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline GetNodeGroupFeatureGateRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> nodeGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
