// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CheckServiceRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(roles, roles_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(roles, roles_);
    };
    CheckServiceRoleRequest() = default ;
    CheckServiceRoleRequest(const CheckServiceRoleRequest &) = default ;
    CheckServiceRoleRequest(CheckServiceRoleRequest &&) = default ;
    CheckServiceRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceRoleRequest() = default ;
    CheckServiceRoleRequest& operator=(const CheckServiceRoleRequest &) = default ;
    CheckServiceRoleRequest& operator=(CheckServiceRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Roles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Roles& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Roles& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      Roles() = default ;
      Roles(const Roles &) = default ;
      Roles(Roles &&) = default ;
      Roles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Roles() = default ;
      Roles& operator=(const Roles &) = default ;
      Roles& operator=(Roles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Roles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The server role name. For more information about the service roles and their permissions in ACK, see [ACK roles](https://help.aliyun.com/document_detail/86483.html).
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->roles_ == nullptr; };
    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<CheckServiceRoleRequest::Roles> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<CheckServiceRoleRequest::Roles>) };
    inline vector<CheckServiceRoleRequest::Roles> getRoles() { DARABONBA_PTR_GET(roles_, vector<CheckServiceRoleRequest::Roles>) };
    inline CheckServiceRoleRequest& setRoles(const vector<CheckServiceRoleRequest::Roles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline CheckServiceRoleRequest& setRoles(vector<CheckServiceRoleRequest::Roles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


  protected:
    // The list of service roles you want to check.
    // 
    // This parameter is required.
    shared_ptr<vector<CheckServiceRoleRequest::Roles>> roles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
