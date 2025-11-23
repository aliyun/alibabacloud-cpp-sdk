// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROXYSQLEXECAUDITLOGRESPONSEBODYPROXYSQLEXECAUDITLOGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROXYSQLEXECAUDITLOGRESPONSEBODYPROXYSQLEXECAUDITLOGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogListProxySQLExecAuditLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList& obj) { 
      DARABONBA_PTR_TO_JSON(ProxySQLExecAuditLog, proxySQLExecAuditLog_);
    };
    friend void from_json(const Darabonba::Json& j, ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxySQLExecAuditLog, proxySQLExecAuditLog_);
    };
    ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList() = default ;
    ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList(const ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList &) = default ;
    ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList(ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList &&) = default ;
    ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList() = default ;
    ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList& operator=(const ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList &) = default ;
    ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList& operator=(ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->proxySQLExecAuditLog_ == nullptr; };
    // proxySQLExecAuditLog Field Functions 
    bool hasProxySQLExecAuditLog() const { return this->proxySQLExecAuditLog_ != nullptr;};
    void deleteProxySQLExecAuditLog() { this->proxySQLExecAuditLog_ = nullptr;};
    inline const vector<Models::ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogListProxySQLExecAuditLog> & proxySQLExecAuditLog() const { DARABONBA_PTR_GET_CONST(proxySQLExecAuditLog_, vector<Models::ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogListProxySQLExecAuditLog>) };
    inline vector<Models::ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogListProxySQLExecAuditLog> proxySQLExecAuditLog() { DARABONBA_PTR_GET(proxySQLExecAuditLog_, vector<Models::ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogListProxySQLExecAuditLog>) };
    inline ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList& setProxySQLExecAuditLog(const vector<Models::ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogListProxySQLExecAuditLog> & proxySQLExecAuditLog) { DARABONBA_PTR_SET_VALUE(proxySQLExecAuditLog_, proxySQLExecAuditLog) };
    inline ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogList& setProxySQLExecAuditLog(vector<Models::ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogListProxySQLExecAuditLog> && proxySQLExecAuditLog) { DARABONBA_PTR_SET_RVALUE(proxySQLExecAuditLog_, proxySQLExecAuditLog) };


  protected:
    std::shared_ptr<vector<Models::ListProxySQLExecAuditLogResponseBodyProxySQLExecAuditLogListProxySQLExecAuditLog>> proxySQLExecAuditLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
