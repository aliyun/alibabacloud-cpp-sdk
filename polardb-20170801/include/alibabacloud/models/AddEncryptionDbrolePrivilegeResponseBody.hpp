// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDENCRYPTIONDBROLEPRIVILEGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDENCRYPTIONDBROLEPRIVILEGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class AddEncryptionDBRolePrivilegeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEncryptionDBRolePrivilegeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddEncryptionDBRolePrivilegeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddEncryptionDBRolePrivilegeResponseBody() = default ;
    AddEncryptionDBRolePrivilegeResponseBody(const AddEncryptionDBRolePrivilegeResponseBody &) = default ;
    AddEncryptionDBRolePrivilegeResponseBody(AddEncryptionDBRolePrivilegeResponseBody &&) = default ;
    AddEncryptionDBRolePrivilegeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEncryptionDBRolePrivilegeResponseBody() = default ;
    AddEncryptionDBRolePrivilegeResponseBody& operator=(const AddEncryptionDBRolePrivilegeResponseBody &) = default ;
    AddEncryptionDBRolePrivilegeResponseBody& operator=(AddEncryptionDBRolePrivilegeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->requestId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline AddEncryptionDBRolePrivilegeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddEncryptionDBRolePrivilegeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
