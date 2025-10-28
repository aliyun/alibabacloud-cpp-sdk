// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InstallAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DoAsync, doAsync_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DoAsync, doAsync_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    InstallAgentRequest() = default ;
    InstallAgentRequest(const InstallAgentRequest &) = default ;
    InstallAgentRequest(InstallAgentRequest &&) = default ;
    InstallAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAgentRequest() = default ;
    InstallAgentRequest& operator=(const InstallAgentRequest &) = default ;
    InstallAgentRequest& operator=(InstallAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->doAsync_ == nullptr && return this->instanceIds_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InstallAgentRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // doAsync Field Functions 
    bool hasDoAsync() const { return this->doAsync_ != nullptr;};
    void deleteDoAsync() { this->doAsync_ = nullptr;};
    inline bool doAsync() const { DARABONBA_PTR_GET_DEFAULT(doAsync_, false) };
    inline InstallAgentRequest& setDoAsync(bool doAsync) { DARABONBA_PTR_SET_VALUE(doAsync_, doAsync) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline InstallAgentRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // This parameter is discontinued.
    std::shared_ptr<bool> doAsync_ = nullptr;
    // The ID of the ECS instance. Separate multiple IDs with commas (,). Example: instanceId1,instanceId2.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
