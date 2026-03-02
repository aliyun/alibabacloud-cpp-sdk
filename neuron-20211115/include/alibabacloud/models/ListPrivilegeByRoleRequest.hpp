// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVILEGEBYROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVILEGEBYROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListPrivilegeByRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivilegeByRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivilegeByRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
    };
    ListPrivilegeByRoleRequest() = default ;
    ListPrivilegeByRoleRequest(const ListPrivilegeByRoleRequest &) = default ;
    ListPrivilegeByRoleRequest(ListPrivilegeByRoleRequest &&) = default ;
    ListPrivilegeByRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivilegeByRoleRequest() = default ;
    ListPrivilegeByRoleRequest& operator=(const ListPrivilegeByRoleRequest &) = default ;
    ListPrivilegeByRoleRequest& operator=(ListPrivilegeByRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListPrivilegeByRoleRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


  protected:
    shared_ptr<string> accountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
