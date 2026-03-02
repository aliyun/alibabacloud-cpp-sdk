// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRIVILEGE_HPP_
#define ALIBABACLOUD_MODELS_PRIVILEGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class Privilege : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Privilege& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
      DARABONBA_PTR_TO_JSON(roleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, Privilege& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
      DARABONBA_PTR_FROM_JSON(roleId, roleId_);
    };
    Privilege() = default ;
    Privilege(const Privilege &) = default ;
    Privilege(Privilege &&) = default ;
    Privilege(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Privilege() = default ;
    Privilege& operator=(const Privilege &) = default ;
    Privilege& operator=(Privilege &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->actions_ == nullptr && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->requestId_ == nullptr && this->resource_ == nullptr
        && this->roleId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline Privilege& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline string getActions() const { DARABONBA_PTR_GET_DEFAULT(actions_, "") };
    inline Privilege& setActions(string actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline Privilege& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline Privilege& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Privilege& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline Privilege& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline Privilege& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    // This parameter is required.
    shared_ptr<string> accountId_ {};
    // This parameter is required.
    shared_ptr<string> actions_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<string> resource_ {};
    // This parameter is required.
    shared_ptr<int64_t> roleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
