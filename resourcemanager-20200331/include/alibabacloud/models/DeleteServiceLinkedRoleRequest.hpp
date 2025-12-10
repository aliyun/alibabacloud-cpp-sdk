// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESERVICELINKEDROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESERVICELINKEDROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class DeleteServiceLinkedRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteServiceLinkedRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteServiceLinkedRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    DeleteServiceLinkedRoleRequest() = default ;
    DeleteServiceLinkedRoleRequest(const DeleteServiceLinkedRoleRequest &) = default ;
    DeleteServiceLinkedRoleRequest(DeleteServiceLinkedRoleRequest &&) = default ;
    DeleteServiceLinkedRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteServiceLinkedRoleRequest() = default ;
    DeleteServiceLinkedRoleRequest& operator=(const DeleteServiceLinkedRoleRequest &) = default ;
    DeleteServiceLinkedRoleRequest& operator=(DeleteServiceLinkedRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleName_ == nullptr; };
    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline DeleteServiceLinkedRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The name of the role.
    // 
    // This parameter is required.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
