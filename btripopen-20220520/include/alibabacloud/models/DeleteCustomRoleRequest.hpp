// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class DeleteCustomRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(role_id, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(role_id, roleId_);
    };
    DeleteCustomRoleRequest() = default ;
    DeleteCustomRoleRequest(const DeleteCustomRoleRequest &) = default ;
    DeleteCustomRoleRequest(DeleteCustomRoleRequest &&) = default ;
    DeleteCustomRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomRoleRequest() = default ;
    DeleteCustomRoleRequest& operator=(const DeleteCustomRoleRequest &) = default ;
    DeleteCustomRoleRequest& operator=(DeleteCustomRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roleId_ != nullptr; };
    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline DeleteCustomRoleRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> roleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
