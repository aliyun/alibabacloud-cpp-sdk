// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetPhysicalDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetPhysicalDatabaseRequest() = default ;
    GetPhysicalDatabaseRequest(const GetPhysicalDatabaseRequest &) = default ;
    GetPhysicalDatabaseRequest(GetPhysicalDatabaseRequest &&) = default ;
    GetPhysicalDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalDatabaseRequest() = default ;
    GetPhysicalDatabaseRequest& operator=(const GetPhysicalDatabaseRequest &) = default ;
    GetPhysicalDatabaseRequest& operator=(GetPhysicalDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->tid_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline GetPhysicalDatabaseRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetPhysicalDatabaseRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the physical database. You can call the [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the ID of the tenant.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
