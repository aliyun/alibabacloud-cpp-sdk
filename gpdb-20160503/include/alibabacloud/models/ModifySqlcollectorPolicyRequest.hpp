// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSQLCOLLECTORPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSQLCOLLECTORPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifySQLCollectorPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySQLCollectorPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(SQLCollectorStatus, SQLCollectorStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySQLCollectorPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(SQLCollectorStatus, SQLCollectorStatus_);
    };
    ModifySQLCollectorPolicyRequest() = default ;
    ModifySQLCollectorPolicyRequest(const ModifySQLCollectorPolicyRequest &) = default ;
    ModifySQLCollectorPolicyRequest(ModifySQLCollectorPolicyRequest &&) = default ;
    ModifySQLCollectorPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySQLCollectorPolicyRequest() = default ;
    ModifySQLCollectorPolicyRequest& operator=(const ModifySQLCollectorPolicyRequest &) = default ;
    ModifySQLCollectorPolicyRequest& operator=(ModifySQLCollectorPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->SQLCollectorStatus_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifySQLCollectorPolicyRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // SQLCollectorStatus Field Functions 
    bool hasSQLCollectorStatus() const { return this->SQLCollectorStatus_ != nullptr;};
    void deleteSQLCollectorStatus() { this->SQLCollectorStatus_ = nullptr;};
    inline string SQLCollectorStatus() const { DARABONBA_PTR_GET_DEFAULT(SQLCollectorStatus_, "") };
    inline ModifySQLCollectorPolicyRequest& setSQLCollectorStatus(string SQLCollectorStatus) { DARABONBA_PTR_SET_VALUE(SQLCollectorStatus_, SQLCollectorStatus) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Specifies whether to enable or disable SQL collection.
    // 
    // *   Enable: enables SQL collection.
    // *   Disabled: disables SQL collection.
    // 
    // This parameter is required.
    std::shared_ptr<string> SQLCollectorStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
