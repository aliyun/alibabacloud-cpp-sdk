// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCESSLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCESSLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyDBInstanceSSLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceSSLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceSSLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
    };
    ModifyDBInstanceSSLRequest() = default ;
    ModifyDBInstanceSSLRequest(const ModifyDBInstanceSSLRequest &) = default ;
    ModifyDBInstanceSSLRequest(ModifyDBInstanceSSLRequest &&) = default ;
    ModifyDBInstanceSSLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceSSLRequest() = default ;
    ModifyDBInstanceSSLRequest& operator=(const ModifyDBInstanceSSLRequest &) = default ;
    ModifyDBInstanceSSLRequest& operator=(ModifyDBInstanceSSLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->DBInstanceId_ == nullptr && this->SSLEnabled_ == nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline ModifyDBInstanceSSLRequest& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceSSLRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline int32_t getSSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, 0) };
    inline ModifyDBInstanceSSLRequest& setSSLEnabled(int32_t SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


  protected:
    // The encrypted endpoint. By default, the wildcards are used for instances that are hosted on ECS instances. This way, the endpoints that can be resolved to the same IP address are encrypted.
    shared_ptr<string> connectionString_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The status of SSL encryption. Valid values:
    // 
    // *   0: disables SSL encryption.
    // *   1: enables SSL encryption.
    // *   2: updates SSL encryption.
    // 
    // This parameter is required.
    shared_ptr<int32_t> SSLEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
