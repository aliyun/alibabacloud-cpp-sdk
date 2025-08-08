// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLUMNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLUMNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListColumnsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListColumnsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListColumnsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListColumnsRequest() = default ;
    ListColumnsRequest(const ListColumnsRequest &) = default ;
    ListColumnsRequest(ListColumnsRequest &&) = default ;
    ListColumnsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListColumnsRequest() = default ;
    ListColumnsRequest& operator=(const ListColumnsRequest &) = default ;
    ListColumnsRequest& operator=(ListColumnsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logic_ != nullptr
        && this->tableId_ != nullptr && this->tid_ != nullptr; };
    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListColumnsRequest& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline ListColumnsRequest& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListColumnsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // Specifies whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database.
    // *   **false**: The database is a physical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The ID of the table. You can call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to obtain the table ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableId_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
