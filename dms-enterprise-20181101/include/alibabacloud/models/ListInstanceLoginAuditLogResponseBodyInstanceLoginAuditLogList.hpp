// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCELOGINAUDITLOGRESPONSEBODYINSTANCELOGINAUDITLOGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCELOGINAUDITLOGRESPONSEBODYINSTANCELOGINAUDITLOGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceLoginAuditLog, instanceLoginAuditLog_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceLoginAuditLog, instanceLoginAuditLog_);
    };
    ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList() = default ;
    ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList(const ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList &) = default ;
    ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList(ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList &&) = default ;
    ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList() = default ;
    ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList& operator=(const ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList &) = default ;
    ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList& operator=(ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceLoginAuditLog_ != nullptr; };
    // instanceLoginAuditLog Field Functions 
    bool hasInstanceLoginAuditLog() const { return this->instanceLoginAuditLog_ != nullptr;};
    void deleteInstanceLoginAuditLog() { this->instanceLoginAuditLog_ = nullptr;};
    inline const vector<Models::ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog> & instanceLoginAuditLog() const { DARABONBA_PTR_GET_CONST(instanceLoginAuditLog_, vector<Models::ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog>) };
    inline vector<Models::ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog> instanceLoginAuditLog() { DARABONBA_PTR_GET(instanceLoginAuditLog_, vector<Models::ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog>) };
    inline ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList& setInstanceLoginAuditLog(const vector<Models::ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog> & instanceLoginAuditLog) { DARABONBA_PTR_SET_VALUE(instanceLoginAuditLog_, instanceLoginAuditLog) };
    inline ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogList& setInstanceLoginAuditLog(vector<Models::ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog> && instanceLoginAuditLog) { DARABONBA_PTR_SET_RVALUE(instanceLoginAuditLog_, instanceLoginAuditLog) };


  protected:
    std::shared_ptr<vector<Models::ListInstanceLoginAuditLogResponseBodyInstanceLoginAuditLogListInstanceLoginAuditLog>> instanceLoginAuditLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
