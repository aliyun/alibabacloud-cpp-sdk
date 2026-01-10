// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESCRIPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ExecuteScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ExecuteScriptRequest() = default ;
    ExecuteScriptRequest(const ExecuteScriptRequest &) = default ;
    ExecuteScriptRequest(ExecuteScriptRequest &&) = default ;
    ExecuteScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteScriptRequest() = default ;
    ExecuteScriptRequest& operator=(const ExecuteScriptRequest &) = default ;
    ExecuteScriptRequest& operator=(ExecuteScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && this->logic_ == nullptr && this->realLoginUserUid_ == nullptr && this->script_ == nullptr && this->tid_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline ExecuteScriptRequest& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ExecuteScriptRequest& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string getRealLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline ExecuteScriptRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline ExecuteScriptRequest& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ExecuteScriptRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the database.
    // 
    // >  This parameter is equivalent to the DatabaseId parameter in the SearchDatabase, ListDatabases, and GetDatabase operations. You can call one of these operations to obtain the required database ID. For more information, see [SearchDatabase](https://help.aliyun.com/document_detail/141876.html), [ListDatabases](https://help.aliyun.com/document_detail/141873.html), and [GetDatabase](https://help.aliyun.com/document_detail/141869.html).
    // 
    // This parameter is required.
    shared_ptr<int32_t> dbId_ {};
    // Specifies whether the database is a logical database.
    // 
    // This parameter is required.
    shared_ptr<bool> logic_ {};
    shared_ptr<string> realLoginUserUid_ {};
    // The SQL statements to be executed. Data query language (DQL) statements, data definition language (DDL) statements, and data manipulation language (DML) statements are supported. The control mode of the instance that you want to query determines whether you can execute DDL and DML statements.
    // 
    // This parameter is required.
    shared_ptr<string> script_ {};
    // The ID of the tenant.
    // 
    // >  To obtain the tenant ID, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see [Tenant information](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
