// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLYADDINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIMPLYADDINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SimplyAddInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimplyAddInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabasePassword, databasePassword_);
      DARABONBA_PTR_TO_JSON(DatabaseUser, databaseUser_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceRegion, instanceRegion_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
    };
    friend void from_json(const Darabonba::Json& j, SimplyAddInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabasePassword, databasePassword_);
      DARABONBA_PTR_FROM_JSON(DatabaseUser, databaseUser_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceRegion, instanceRegion_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
    };
    SimplyAddInstanceRequest() = default ;
    SimplyAddInstanceRequest(const SimplyAddInstanceRequest &) = default ;
    SimplyAddInstanceRequest(SimplyAddInstanceRequest &&) = default ;
    SimplyAddInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimplyAddInstanceRequest() = default ;
    SimplyAddInstanceRequest& operator=(const SimplyAddInstanceRequest &) = default ;
    SimplyAddInstanceRequest& operator=(SimplyAddInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databasePassword_ != nullptr
        && this->databaseUser_ != nullptr && this->host_ != nullptr && this->instanceId_ != nullptr && this->instanceRegion_ != nullptr && this->port_ != nullptr
        && this->realLoginUserUid_ != nullptr; };
    // databasePassword Field Functions 
    bool hasDatabasePassword() const { return this->databasePassword_ != nullptr;};
    void deleteDatabasePassword() { this->databasePassword_ = nullptr;};
    inline string databasePassword() const { DARABONBA_PTR_GET_DEFAULT(databasePassword_, "") };
    inline SimplyAddInstanceRequest& setDatabasePassword(string databasePassword) { DARABONBA_PTR_SET_VALUE(databasePassword_, databasePassword) };


    // databaseUser Field Functions 
    bool hasDatabaseUser() const { return this->databaseUser_ != nullptr;};
    void deleteDatabaseUser() { this->databaseUser_ = nullptr;};
    inline string databaseUser() const { DARABONBA_PTR_GET_DEFAULT(databaseUser_, "") };
    inline SimplyAddInstanceRequest& setDatabaseUser(string databaseUser) { DARABONBA_PTR_SET_VALUE(databaseUser_, databaseUser) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline SimplyAddInstanceRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SimplyAddInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceRegion Field Functions 
    bool hasInstanceRegion() const { return this->instanceRegion_ != nullptr;};
    void deleteInstanceRegion() { this->instanceRegion_ = nullptr;};
    inline string instanceRegion() const { DARABONBA_PTR_GET_DEFAULT(instanceRegion_, "") };
    inline SimplyAddInstanceRequest& setInstanceRegion(string instanceRegion) { DARABONBA_PTR_SET_VALUE(instanceRegion_, instanceRegion) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline SimplyAddInstanceRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string realLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline SimplyAddInstanceRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> databasePassword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> databaseUser_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceRegion_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> realLoginUserUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
