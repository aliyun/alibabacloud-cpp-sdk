// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATECONNECTDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATECONNECTDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class OperateConnectDatasourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateConnectDatasourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConnectionParams, connectionParams_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OperateConnectDatasourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConnectionParams, connectionParams_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    OperateConnectDatasourceRequest() = default ;
    OperateConnectDatasourceRequest(const OperateConnectDatasourceRequest &) = default ;
    OperateConnectDatasourceRequest(OperateConnectDatasourceRequest &&) = default ;
    OperateConnectDatasourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateConnectDatasourceRequest() = default ;
    OperateConnectDatasourceRequest& operator=(const OperateConnectDatasourceRequest &) = default ;
    OperateConnectDatasourceRequest& operator=(OperateConnectDatasourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->connectionParams_ == nullptr && this->password_ == nullptr && this->type_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateConnectDatasourceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // connectionParams Field Functions 
    bool hasConnectionParams() const { return this->connectionParams_ != nullptr;};
    void deleteConnectionParams() { this->connectionParams_ = nullptr;};
    inline string getConnectionParams() const { DARABONBA_PTR_GET_DEFAULT(connectionParams_, "") };
    inline OperateConnectDatasourceRequest& setConnectionParams(string connectionParams) { DARABONBA_PTR_SET_VALUE(connectionParams_, connectionParams) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline OperateConnectDatasourceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline OperateConnectDatasourceRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> connectionParams_ {};
    // This parameter is required.
    shared_ptr<string> password_ {};
    // This parameter is required.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
