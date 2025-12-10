// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class GetRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    GetRoleRequest() = default ;
    GetRoleRequest(const GetRoleRequest &) = default ;
    GetRoleRequest(GetRoleRequest &&) = default ;
    GetRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoleRequest() = default ;
    GetRoleRequest& operator=(const GetRoleRequest &) = default ;
    GetRoleRequest& operator=(GetRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleName_ == nullptr; };
    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline GetRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The name of the role.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
