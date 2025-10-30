// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHDBINSTANCENETTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHDBINSTANCENETTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class SwitchDBInstanceNetTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchDBInstanceNetTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchDBInstanceNetTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    SwitchDBInstanceNetTypeRequest() = default ;
    SwitchDBInstanceNetTypeRequest(const SwitchDBInstanceNetTypeRequest &) = default ;
    SwitchDBInstanceNetTypeRequest(SwitchDBInstanceNetTypeRequest &&) = default ;
    SwitchDBInstanceNetTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchDBInstanceNetTypeRequest() = default ;
    SwitchDBInstanceNetTypeRequest& operator=(const SwitchDBInstanceNetTypeRequest &) = default ;
    SwitchDBInstanceNetTypeRequest& operator=(SwitchDBInstanceNetTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionStringPrefix_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->port_ == nullptr; };
    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string connectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline SwitchDBInstanceNetTypeRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline SwitchDBInstanceNetTypeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline SwitchDBInstanceNetTypeRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    // The prefix of the custom endpoint.
    // 
    // *   The prefix can contain lowercase letters, digits, and hyphens (-) and must start with a lowercase letter.
    // *   The prefix can be up to 30 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionStringPrefix_ = nullptr;
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/2361776.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The port number.
    // 
    // This parameter is required.
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
