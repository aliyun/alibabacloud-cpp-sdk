// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETVSERVERGROUPATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETVSERVERGROUPATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetVServerGroupAttributeResponseBodyBackendServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class SetVServerGroupAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetVServerGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(VServerGroupName, VServerGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, SetVServerGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupName, VServerGroupName_);
    };
    SetVServerGroupAttributeResponseBody() = default ;
    SetVServerGroupAttributeResponseBody(const SetVServerGroupAttributeResponseBody &) = default ;
    SetVServerGroupAttributeResponseBody(SetVServerGroupAttributeResponseBody &&) = default ;
    SetVServerGroupAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetVServerGroupAttributeResponseBody() = default ;
    SetVServerGroupAttributeResponseBody& operator=(const SetVServerGroupAttributeResponseBody &) = default ;
    SetVServerGroupAttributeResponseBody& operator=(SetVServerGroupAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServers_ == nullptr
        && return this->requestId_ == nullptr && return this->VServerGroupId_ == nullptr && return this->VServerGroupName_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const SetVServerGroupAttributeResponseBodyBackendServers & backendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, SetVServerGroupAttributeResponseBodyBackendServers) };
    inline SetVServerGroupAttributeResponseBodyBackendServers backendServers() { DARABONBA_PTR_GET(backendServers_, SetVServerGroupAttributeResponseBodyBackendServers) };
    inline SetVServerGroupAttributeResponseBody& setBackendServers(const SetVServerGroupAttributeResponseBodyBackendServers & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline SetVServerGroupAttributeResponseBody& setBackendServers(SetVServerGroupAttributeResponseBodyBackendServers && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetVServerGroupAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline SetVServerGroupAttributeResponseBody& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // VServerGroupName Field Functions 
    bool hasVServerGroupName() const { return this->VServerGroupName_ != nullptr;};
    void deleteVServerGroupName() { this->VServerGroupName_ = nullptr;};
    inline string VServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupName_, "") };
    inline SetVServerGroupAttributeResponseBody& setVServerGroupName(string VServerGroupName) { DARABONBA_PTR_SET_VALUE(VServerGroupName_, VServerGroupName) };


  protected:
    // The backend servers.
    std::shared_ptr<SetVServerGroupAttributeResponseBodyBackendServers> backendServers_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The server group ID.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // The name of the vServer group.
    std::shared_ptr<string> VServerGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
