// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERCONNECTIONSTRINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERCONNECTIONSTRINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyClusterConnectionStringRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterConnectionStringRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterConnectionStringRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    ModifyClusterConnectionStringRequest() = default ;
    ModifyClusterConnectionStringRequest(const ModifyClusterConnectionStringRequest &) = default ;
    ModifyClusterConnectionStringRequest(ModifyClusterConnectionStringRequest &&) = default ;
    ModifyClusterConnectionStringRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterConnectionStringRequest() = default ;
    ModifyClusterConnectionStringRequest& operator=(const ModifyClusterConnectionStringRequest &) = default ;
    ModifyClusterConnectionStringRequest& operator=(ModifyClusterConnectionStringRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionStringPrefix_ != nullptr
        && this->currentConnectionString_ != nullptr && this->DBClusterId_ != nullptr && this->port_ != nullptr; };
    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string connectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline ModifyClusterConnectionStringRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // currentConnectionString Field Functions 
    bool hasCurrentConnectionString() const { return this->currentConnectionString_ != nullptr;};
    void deleteCurrentConnectionString() { this->currentConnectionString_ = nullptr;};
    inline string currentConnectionString() const { DARABONBA_PTR_GET_DEFAULT(currentConnectionString_, "") };
    inline ModifyClusterConnectionStringRequest& setCurrentConnectionString(string currentConnectionString) { DARABONBA_PTR_SET_VALUE(currentConnectionString_, currentConnectionString) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyClusterConnectionStringRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifyClusterConnectionStringRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    // The prefix of the public endpoint.
    // 
    // *   The prefix can contain lowercase letters, digits, and hyphens (-). It must start with a lowercase letter.
    // *   The prefix can be up to 30 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionStringPrefix_ = nullptr;
    // The public endpoint of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> currentConnectionString_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The port number. Set the value to **3306**.
    std::shared_ptr<int32_t> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
