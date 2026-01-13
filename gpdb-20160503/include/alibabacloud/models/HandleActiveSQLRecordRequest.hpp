// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLEACTIVESQLRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HANDLEACTIVESQLRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class HandleActiveSQLRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleActiveSQLRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(Pids, pids_);
    };
    friend void from_json(const Darabonba::Json& j, HandleActiveSQLRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(Pids, pids_);
    };
    HandleActiveSQLRecordRequest() = default ;
    HandleActiveSQLRecordRequest(const HandleActiveSQLRecordRequest &) = default ;
    HandleActiveSQLRecordRequest(HandleActiveSQLRecordRequest &&) = default ;
    HandleActiveSQLRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleActiveSQLRecordRequest() = default ;
    HandleActiveSQLRecordRequest& operator=(const HandleActiveSQLRecordRequest &) = default ;
    HandleActiveSQLRecordRequest& operator=(HandleActiveSQLRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->operateType_ == nullptr && this->pids_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline HandleActiveSQLRecordRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline int32_t getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, 0) };
    inline HandleActiveSQLRecordRequest& setOperateType(int32_t operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // pids Field Functions 
    bool hasPids() const { return this->pids_ != nullptr;};
    void deletePids() { this->pids_ = nullptr;};
    inline string getPids() const { DARABONBA_PTR_GET_DEFAULT(pids_, "") };
    inline HandleActiveSQLRecordRequest& setPids(string pids) { DARABONBA_PTR_SET_VALUE(pids_, pids) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The type of the operation on the process ID. Valid values:
    // 
    // *   **0**: cancel.
    // *   **1**: terminate.
    // *   **2**: forcefully terminate.
    shared_ptr<int32_t> operateType_ {};
    // The process IDs. A process ID is a unique identifier of a query.
    // 
    // This parameter is required.
    shared_ptr<string> pids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
