// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELOGICDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELOGICDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteLogicDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLogicDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogicDbId, logicDbId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLogicDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicDbId, logicDbId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    DeleteLogicDatabaseRequest() = default ;
    DeleteLogicDatabaseRequest(const DeleteLogicDatabaseRequest &) = default ;
    DeleteLogicDatabaseRequest(DeleteLogicDatabaseRequest &&) = default ;
    DeleteLogicDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLogicDatabaseRequest() = default ;
    DeleteLogicDatabaseRequest& operator=(const DeleteLogicDatabaseRequest &) = default ;
    DeleteLogicDatabaseRequest& operator=(DeleteLogicDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logicDbId_ == nullptr
        && return this->tid_ == nullptr; };
    // logicDbId Field Functions 
    bool hasLogicDbId() const { return this->logicDbId_ != nullptr;};
    void deleteLogicDbId() { this->logicDbId_ = nullptr;};
    inline int64_t logicDbId() const { DARABONBA_PTR_GET_DEFAULT(logicDbId_, 0L) };
    inline DeleteLogicDatabaseRequest& setLogicDbId(int64_t logicDbId) { DARABONBA_PTR_SET_VALUE(logicDbId_, logicDbId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DeleteLogicDatabaseRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the logical database. You can call the [ListLogicDatabases](https://www.alibabacloud.com/help/en/data-management-service/latest/listlogicdatabases) or [SearchDatabase](https://www.alibabacloud.com/help/en/data-management-service/latest/searchdatabase) operation to query the ID of the logical database.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> logicDbId_ = nullptr;
    // The ID of the tenant. 
    // 
    // >  To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the DMS console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://www.alibabacloud.com/help/en/data-management-service/latest/manage-dms-tenants) topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
