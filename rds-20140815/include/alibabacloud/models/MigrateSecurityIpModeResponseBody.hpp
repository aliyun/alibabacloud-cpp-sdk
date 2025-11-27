// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATESECURITYIPMODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MIGRATESECURITYIPMODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class MigrateSecurityIPModeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateSecurityIPModeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityIPMode, securityIPMode_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateSecurityIPModeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPMode, securityIPMode_);
    };
    MigrateSecurityIPModeResponseBody() = default ;
    MigrateSecurityIPModeResponseBody(const MigrateSecurityIPModeResponseBody &) = default ;
    MigrateSecurityIPModeResponseBody(MigrateSecurityIPModeResponseBody &&) = default ;
    MigrateSecurityIPModeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateSecurityIPModeResponseBody() = default ;
    MigrateSecurityIPModeResponseBody& operator=(const MigrateSecurityIPModeResponseBody &) = default ;
    MigrateSecurityIPModeResponseBody& operator=(MigrateSecurityIPModeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->requestId_ == nullptr && return this->securityIPMode_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline MigrateSecurityIPModeResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MigrateSecurityIPModeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityIPMode Field Functions 
    bool hasSecurityIPMode() const { return this->securityIPMode_ != nullptr;};
    void deleteSecurityIPMode() { this->securityIPMode_ = nullptr;};
    inline string securityIPMode() const { DARABONBA_PTR_GET_DEFAULT(securityIPMode_, "") };
    inline MigrateSecurityIPModeResponseBody& setSecurityIPMode(string securityIPMode) { DARABONBA_PTR_SET_VALUE(securityIPMode_, securityIPMode) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The whitelist mode after the change, which is the enhanced whitelist mode.
    // 
    // Valid values:
    // 
    // *   safety
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     enhanced whitelist mode
    // 
    //     <!-- -->
    std::shared_ptr<string> securityIPMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
