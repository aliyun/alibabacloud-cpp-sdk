// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLECOLUMNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLECOLUMNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetMetaTableColumnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableColumnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableColumnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetMetaTableColumnRequest() = default ;
    GetMetaTableColumnRequest(const GetMetaTableColumnRequest &) = default ;
    GetMetaTableColumnRequest(GetMetaTableColumnRequest &&) = default ;
    GetMetaTableColumnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableColumnRequest() = default ;
    GetMetaTableColumnRequest& operator=(const GetMetaTableColumnRequest &) = default ;
    GetMetaTableColumnRequest& operator=(GetMetaTableColumnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tableGuid_ != nullptr
        && this->tid_ != nullptr; };
    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetMetaTableColumnRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetMetaTableColumnRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The globally unique identifier (GUID) of the table in Data Management (DMS).
    // 
    // *   If the database to which the table belongs is a logical database, you can call the [ListLogicTables](https://help.aliyun.com/document_detail/141875.html) operation to obtain the value of this parameter.
    // *   If the database to which the table belongs is a physical database, you can call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableGuid_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
