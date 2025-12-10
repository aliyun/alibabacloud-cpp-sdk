// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class DeleteRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
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
    virtual bool empty() const override { return this->roleName_ == nullptr; };
    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline DeleteRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The name of the role to be deleted.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
