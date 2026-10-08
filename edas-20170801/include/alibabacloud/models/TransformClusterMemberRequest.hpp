// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFORMCLUSTERMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFORMCLUSTERMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class TransformClusterMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransformClusterMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(TargetClusterId, targetClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, TransformClusterMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(TargetClusterId, targetClusterId_);
    };
    TransformClusterMemberRequest() = default ;
    TransformClusterMemberRequest(const TransformClusterMemberRequest &) = default ;
    TransformClusterMemberRequest(TransformClusterMemberRequest &&) = default ;
    TransformClusterMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransformClusterMemberRequest() = default ;
    TransformClusterMemberRequest& operator=(const TransformClusterMemberRequest &) = default ;
    TransformClusterMemberRequest& operator=(TransformClusterMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->password_ == nullptr && this->targetClusterId_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline TransformClusterMemberRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline TransformClusterMemberRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // targetClusterId Field Functions 
    bool hasTargetClusterId() const { return this->targetClusterId_ != nullptr;};
    void deleteTargetClusterId() { this->targetClusterId_ = nullptr;};
    inline string getTargetClusterId() const { DARABONBA_PTR_GET_DEFAULT(targetClusterId_, "") };
    inline TransformClusterMemberRequest& setTargetClusterId(string targetClusterId) { DARABONBA_PTR_SET_VALUE(targetClusterId_, targetClusterId) };


  protected:
    // The IDs of the ECS instances. Separate multiple IDs with a comma (,).
    // 
    // - The instances must be in the same VPC as the target cluster.
    // 
    // - An instance can belong to only one cluster at a time.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIds_ {};
    // The logon password to set for the instances.
    // 
    // This parameter is required.
    shared_ptr<string> password_ {};
    // The ID of the target cluster.
    // 
    // This parameter is required.
    shared_ptr<string> targetClusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
