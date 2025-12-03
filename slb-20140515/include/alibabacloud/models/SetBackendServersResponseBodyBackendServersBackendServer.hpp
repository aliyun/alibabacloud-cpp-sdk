// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETBACKENDSERVERSRESPONSEBODYBACKENDSERVERSBACKENDSERVER_HPP_
#define ALIBABACLOUD_MODELS_SETBACKENDSERVERSRESPONSEBODYBACKENDSERVERSBACKENDSERVER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class SetBackendServersResponseBodyBackendServersBackendServer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetBackendServersResponseBodyBackendServersBackendServer& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, SetBackendServersResponseBodyBackendServersBackendServer& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    SetBackendServersResponseBodyBackendServersBackendServer() = default ;
    SetBackendServersResponseBodyBackendServersBackendServer(const SetBackendServersResponseBodyBackendServersBackendServer &) = default ;
    SetBackendServersResponseBodyBackendServersBackendServer(SetBackendServersResponseBodyBackendServersBackendServer &&) = default ;
    SetBackendServersResponseBodyBackendServersBackendServer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetBackendServersResponseBodyBackendServersBackendServer() = default ;
    SetBackendServersResponseBodyBackendServersBackendServer& operator=(const SetBackendServersResponseBodyBackendServersBackendServer &) = default ;
    SetBackendServersResponseBodyBackendServersBackendServer& operator=(SetBackendServersResponseBodyBackendServersBackendServer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->serverId_ == nullptr && return this->type_ == nullptr && return this->weight_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetBackendServersResponseBodyBackendServersBackendServer& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline SetBackendServersResponseBodyBackendServersBackendServer& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SetBackendServersResponseBodyBackendServersBackendServer& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline SetBackendServersResponseBodyBackendServersBackendServer& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The description of the backend server.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the server group.
    std::shared_ptr<string> serverId_ = nullptr;
    // The type of backend server. Valid values:
    // 
    // *   **ecs** (default): ECS instance
    // *   **eni**: ENI
    // *   **eci**: elastic container instance
    std::shared_ptr<string> type_ = nullptr;
    // The weight of the backend server.
    std::shared_ptr<string> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
