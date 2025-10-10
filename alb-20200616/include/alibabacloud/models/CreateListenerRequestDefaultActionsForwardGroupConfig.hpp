// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELISTENERREQUESTDEFAULTACTIONSFORWARDGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATELISTENERREQUESTDEFAULTACTIONSFORWARDGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateListenerRequestDefaultActionsForwardGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateListenerRequestDefaultActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, CreateListenerRequestDefaultActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    CreateListenerRequestDefaultActionsForwardGroupConfig() = default ;
    CreateListenerRequestDefaultActionsForwardGroupConfig(const CreateListenerRequestDefaultActionsForwardGroupConfig &) = default ;
    CreateListenerRequestDefaultActionsForwardGroupConfig(CreateListenerRequestDefaultActionsForwardGroupConfig &&) = default ;
    CreateListenerRequestDefaultActionsForwardGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateListenerRequestDefaultActionsForwardGroupConfig() = default ;
    CreateListenerRequestDefaultActionsForwardGroupConfig& operator=(const CreateListenerRequestDefaultActionsForwardGroupConfig &) = default ;
    CreateListenerRequestDefaultActionsForwardGroupConfig& operator=(CreateListenerRequestDefaultActionsForwardGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupTuples_ != nullptr; };
    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples>) };
    inline vector<Models::CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples>) };
    inline CreateListenerRequestDefaultActionsForwardGroupConfig& setServerGroupTuples(const vector<Models::CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline CreateListenerRequestDefaultActionsForwardGroupConfig& setServerGroupTuples(vector<Models::CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    // The destination server group to which requests are forwarded.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
