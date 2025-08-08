// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLEXECAUDITLOGRESPONSEBODYSQLEXECAUDITLOGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLEXECAUDITLOGRESPONSEBODYSQLEXECAUDITLOGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSQLExecAuditLogResponseBodySQLExecAuditLogList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSQLExecAuditLogResponseBodySQLExecAuditLogList& obj) { 
      DARABONBA_PTR_TO_JSON(SQLExecAuditLog, SQLExecAuditLog_);
    };
    friend void from_json(const Darabonba::Json& j, ListSQLExecAuditLogResponseBodySQLExecAuditLogList& obj) { 
      DARABONBA_PTR_FROM_JSON(SQLExecAuditLog, SQLExecAuditLog_);
    };
    ListSQLExecAuditLogResponseBodySQLExecAuditLogList() = default ;
    ListSQLExecAuditLogResponseBodySQLExecAuditLogList(const ListSQLExecAuditLogResponseBodySQLExecAuditLogList &) = default ;
    ListSQLExecAuditLogResponseBodySQLExecAuditLogList(ListSQLExecAuditLogResponseBodySQLExecAuditLogList &&) = default ;
    ListSQLExecAuditLogResponseBodySQLExecAuditLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSQLExecAuditLogResponseBodySQLExecAuditLogList() = default ;
    ListSQLExecAuditLogResponseBodySQLExecAuditLogList& operator=(const ListSQLExecAuditLogResponseBodySQLExecAuditLogList &) = default ;
    ListSQLExecAuditLogResponseBodySQLExecAuditLogList& operator=(ListSQLExecAuditLogResponseBodySQLExecAuditLogList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->SQLExecAuditLog_ != nullptr; };
    // SQLExecAuditLog Field Functions 
    bool hasSQLExecAuditLog() const { return this->SQLExecAuditLog_ != nullptr;};
    void deleteSQLExecAuditLog() { this->SQLExecAuditLog_ = nullptr;};
    inline const vector<Models::ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog> & SQLExecAuditLog() const { DARABONBA_PTR_GET_CONST(SQLExecAuditLog_, vector<Models::ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog>) };
    inline vector<Models::ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog> SQLExecAuditLog() { DARABONBA_PTR_GET(SQLExecAuditLog_, vector<Models::ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog>) };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogList& setSQLExecAuditLog(const vector<Models::ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog> & SQLExecAuditLog) { DARABONBA_PTR_SET_VALUE(SQLExecAuditLog_, SQLExecAuditLog) };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogList& setSQLExecAuditLog(vector<Models::ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog> && SQLExecAuditLog) { DARABONBA_PTR_SET_RVALUE(SQLExecAuditLog_, SQLExecAuditLog) };


  protected:
    std::shared_ptr<vector<Models::ListSQLExecAuditLogResponseBodySQLExecAuditLogListSQLExecAuditLog>> SQLExecAuditLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
