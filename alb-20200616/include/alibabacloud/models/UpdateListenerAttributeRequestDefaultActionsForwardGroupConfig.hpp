// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUESTDEFAULTACTIONSFORWARDGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUESTDEFAULTACTIONSFORWARDGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig() = default ;
    UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig(const UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig &) = default ;
    UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig(UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig &&) = default ;
    UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig() = default ;
    UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig& operator=(const UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig &) = default ;
    UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig& operator=(UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupTuples_ != nullptr; };
    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples>) };
    inline vector<Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples>) };
    inline UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig& setServerGroupTuples(const vector<Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig& setServerGroupTuples(vector<Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    // The server groups to which requests are forwarded.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
