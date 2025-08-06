// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACEPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACEPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNetworkInterfacePermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfacePermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfacePermission, networkInterfacePermission_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfacePermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfacePermission, networkInterfacePermission_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNetworkInterfacePermissionResponseBody() = default ;
    CreateNetworkInterfacePermissionResponseBody(const CreateNetworkInterfacePermissionResponseBody &) = default ;
    CreateNetworkInterfacePermissionResponseBody(CreateNetworkInterfacePermissionResponseBody &&) = default ;
    CreateNetworkInterfacePermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfacePermissionResponseBody() = default ;
    CreateNetworkInterfacePermissionResponseBody& operator=(const CreateNetworkInterfacePermissionResponseBody &) = default ;
    CreateNetworkInterfacePermissionResponseBody& operator=(CreateNetworkInterfacePermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkInterfacePermission_ != nullptr
        && this->requestId_ != nullptr; };
    // networkInterfacePermission Field Functions 
    bool hasNetworkInterfacePermission() const { return this->networkInterfacePermission_ != nullptr;};
    void deleteNetworkInterfacePermission() { this->networkInterfacePermission_ = nullptr;};
    inline const CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission & networkInterfacePermission() const { DARABONBA_PTR_GET_CONST(networkInterfacePermission_, CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission) };
    inline CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission networkInterfacePermission() { DARABONBA_PTR_GET(networkInterfacePermission_, CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission) };
    inline CreateNetworkInterfacePermissionResponseBody& setNetworkInterfacePermission(const CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission & networkInterfacePermission) { DARABONBA_PTR_SET_VALUE(networkInterfacePermission_, networkInterfacePermission) };
    inline CreateNetworkInterfacePermissionResponseBody& setNetworkInterfacePermission(CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission && networkInterfacePermission) { DARABONBA_PTR_SET_RVALUE(networkInterfacePermission_, networkInterfacePermission) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetworkInterfacePermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about permissions on the ENI.
    std::shared_ptr<CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission> networkInterfacePermission_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
