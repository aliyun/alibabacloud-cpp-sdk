// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELISTENERREQUESTDEFAULTACTIONSFORWARDGROUPCONFIGSERVERGROUPTUPLES_HPP_
#define ALIBABACLOUD_MODELS_CREATELISTENERREQUESTDEFAULTACTIONSFORWARDGROUPCONFIGSERVERGROUPTUPLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
    };
    CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples() = default ;
    CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples(const CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples &) = default ;
    CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples(CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples &&) = default ;
    CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples() = default ;
    CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples& operator=(const CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples &) = default ;
    CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples& operator=(CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupId_ != nullptr; };
    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string serverGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


  protected:
    // The ID of the server group to which requests are forwarded.
    // 
    // This parameter is required.
    std::shared_ptr<string> serverGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
