// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHSERVERGROUPSREQUESTSERVERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DETACHSERVERGROUPSREQUESTSERVERGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DetachServerGroupsRequestServerGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachServerGroupsRequestServerGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DetachServerGroupsRequestServerGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DetachServerGroupsRequestServerGroups() = default ;
    DetachServerGroupsRequestServerGroups(const DetachServerGroupsRequestServerGroups &) = default ;
    DetachServerGroupsRequestServerGroups(DetachServerGroupsRequestServerGroups &&) = default ;
    DetachServerGroupsRequestServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachServerGroupsRequestServerGroups() = default ;
    DetachServerGroupsRequestServerGroups& operator=(const DetachServerGroupsRequestServerGroups &) = default ;
    DetachServerGroupsRequestServerGroups& operator=(DetachServerGroupsRequestServerGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->port_ == nullptr
        && return this->serverGroupId_ == nullptr && return this->type_ == nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DetachServerGroupsRequestServerGroups& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string serverGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline DetachServerGroupsRequestServerGroups& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DetachServerGroupsRequestServerGroups& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The port used by ECS instances or elastic container instances as backend servers of the server group.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the server group.
    // 
    // This parameter is required.
    std::shared_ptr<string> serverGroupId_ = nullptr;
    // The type of the server group. Valid values:
    // 
    // *   ALB
    // *   NLB
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
