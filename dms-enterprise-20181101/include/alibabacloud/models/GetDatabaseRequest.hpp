// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetDatabaseRequest() = default ;
    GetDatabaseRequest(const GetDatabaseRequest &) = default ;
    GetDatabaseRequest(GetDatabaseRequest &&) = default ;
    GetDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseRequest() = default ;
    GetDatabaseRequest& operator=(const GetDatabaseRequest &) = default ;
    GetDatabaseRequest& operator=(GetDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->port_ != nullptr && this->realLoginUserUid_ != nullptr && this->schemaName_ != nullptr && this->sid_ != nullptr && this->tid_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetDatabaseRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetDatabaseRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string realLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline GetDatabaseRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetDatabaseRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline GetDatabaseRequest& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetDatabaseRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The endpoint that is used to connect to the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> host_ = nullptr;
    // The port that is used to connect to the database.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> realLoginUserUid_ = nullptr;
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The system identifier (SID) of the database.
    // 
    // >  The SID uniquely identifies an Oracle database. After a database is created, a SID is generated for the database.
    std::shared_ptr<string> sid_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the ID of the tenant.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
