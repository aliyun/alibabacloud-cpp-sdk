// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTCLUSTERMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTCLUSTERMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertClusterMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertClusterMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(instanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(password, password_);
    };
    friend void from_json(const Darabonba::Json& j, InsertClusterMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(instanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(password, password_);
    };
    InsertClusterMemberRequest() = default ;
    InsertClusterMemberRequest(const InsertClusterMemberRequest &) = default ;
    InsertClusterMemberRequest(InsertClusterMemberRequest &&) = default ;
    InsertClusterMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertClusterMemberRequest() = default ;
    InsertClusterMemberRequest& operator=(const InsertClusterMemberRequest &) = default ;
    InsertClusterMemberRequest& operator=(InsertClusterMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->instanceIds_ == nullptr && return this->password_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InsertClusterMemberRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline InsertClusterMemberRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline InsertClusterMemberRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    // The ID of the cluster into which you want to import ECS instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the ECS instance that you want to import into the cluster. Separate multiple IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceIds_ = nullptr;
    // The logon password of the ECS instance that you want to import into the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
