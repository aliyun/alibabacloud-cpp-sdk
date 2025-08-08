// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListIndexesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListIndexesRequest() = default ;
    ListIndexesRequest(const ListIndexesRequest &) = default ;
    ListIndexesRequest(ListIndexesRequest &&) = default ;
    ListIndexesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexesRequest() = default ;
    ListIndexesRequest& operator=(const ListIndexesRequest &) = default ;
    ListIndexesRequest& operator=(ListIndexesRequest &&) = default ;
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
    inline ListIndexesRequest& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline ListIndexesRequest& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListIndexesRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // Specifies whether the table is a logical table.
    std::shared_ptr<bool> logic_ = nullptr;
    // The ID of the table.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableId_ = nullptr;
    // The ID of the tenant.
    // 
    // > To view the tenant ID, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
