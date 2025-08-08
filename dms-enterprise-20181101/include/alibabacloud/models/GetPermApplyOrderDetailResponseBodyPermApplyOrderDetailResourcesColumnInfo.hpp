// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAILRESOURCESCOLUMNINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAILRESOURCESCOLUMNINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo &&) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo& operator=(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo& operator=(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->tableName_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The name of the column.
    std::shared_ptr<string> columnName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
