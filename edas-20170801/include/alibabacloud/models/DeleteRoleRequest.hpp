// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DeleteRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
    };
    DeleteRoleRequest() = default ;
    DeleteRoleRequest(const DeleteRoleRequest &) = default ;
    DeleteRoleRequest(DeleteRoleRequest &&) = default ;
    DeleteRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRoleRequest() = default ;
    DeleteRoleRequest& operator=(const DeleteRoleRequest &) = default ;
    DeleteRoleRequest& operator=(DeleteRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleId_ == nullptr; };
    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int32_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0) };
    inline DeleteRoleRequest& setRoleId(int32_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    // The ID of the RAM role.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> roleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
