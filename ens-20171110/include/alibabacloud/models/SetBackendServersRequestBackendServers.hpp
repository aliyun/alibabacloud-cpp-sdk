// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETBACKENDSERVERSREQUESTBACKENDSERVERS_HPP_
#define ALIBABACLOUD_MODELS_SETBACKENDSERVERSREQUESTBACKENDSERVERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class SetBackendServersRequestBackendServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetBackendServersRequestBackendServers& obj) { 
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, SetBackendServersRequestBackendServers& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    SetBackendServersRequestBackendServers() = default ;
    SetBackendServersRequestBackendServers(const SetBackendServersRequestBackendServers &) = default ;
    SetBackendServersRequestBackendServers(SetBackendServersRequestBackendServers &&) = default ;
    SetBackendServersRequestBackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetBackendServersRequestBackendServers() = default ;
    SetBackendServersRequestBackendServers& operator=(const SetBackendServersRequestBackendServers &) = default ;
    SetBackendServersRequestBackendServers& operator=(SetBackendServersRequestBackendServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serverId_ == nullptr
        && return this->type_ == nullptr && return this->weight_ == nullptr; };
    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline SetBackendServersRequestBackendServers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SetBackendServersRequestBackendServers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline SetBackendServersRequestBackendServers& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The ID of the instance that you use as the backend server.
    // 
    // This parameter is required.
    std::shared_ptr<string> serverId_ = nullptr;
    // The type of the backend server. Valid values:
    // 
    // *   **ens**: ENS instance
    // *   **eni**: elastic network interface (ENI)
    std::shared_ptr<string> type_ = nullptr;
    // The weight of the backend server. Default value: 100. Valid values: **0** to **100**.
    // 
    // >  The value 0 indicates that requests are not forwarded to the backend server.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
