// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTORAGETABLESINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTORAGETABLESINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListStorageTablesInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStorageTablesInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ascOrder, ascOrder_);
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(orderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(recentDays, recentDays_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(tablePrefix, tablePrefix_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(types, typesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListStorageTablesInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ascOrder, ascOrder_);
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(orderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(recentDays, recentDays_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(tablePrefix, tablePrefix_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(types, typesShrink_);
    };
    ListStorageTablesInfoShrinkRequest() = default ;
    ListStorageTablesInfoShrinkRequest(const ListStorageTablesInfoShrinkRequest &) = default ;
    ListStorageTablesInfoShrinkRequest(ListStorageTablesInfoShrinkRequest &&) = default ;
    ListStorageTablesInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStorageTablesInfoShrinkRequest() = default ;
    ListStorageTablesInfoShrinkRequest& operator=(const ListStorageTablesInfoShrinkRequest &) = default ;
    ListStorageTablesInfoShrinkRequest& operator=(ListStorageTablesInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ascOrder_ != nullptr
        && this->date_ != nullptr && this->orderColumn_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->recentDays_ != nullptr
        && this->region_ != nullptr && this->schema_ != nullptr && this->tablePrefix_ != nullptr && this->tenantId_ != nullptr && this->typesShrink_ != nullptr; };
    // ascOrder Field Functions 
    bool hasAscOrder() const { return this->ascOrder_ != nullptr;};
    void deleteAscOrder() { this->ascOrder_ = nullptr;};
    inline bool ascOrder() const { DARABONBA_PTR_GET_DEFAULT(ascOrder_, false) };
    inline ListStorageTablesInfoShrinkRequest& setAscOrder(bool ascOrder) { DARABONBA_PTR_SET_VALUE(ascOrder_, ascOrder) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline ListStorageTablesInfoShrinkRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string orderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline ListStorageTablesInfoShrinkRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListStorageTablesInfoShrinkRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListStorageTablesInfoShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recentDays Field Functions 
    bool hasRecentDays() const { return this->recentDays_ != nullptr;};
    void deleteRecentDays() { this->recentDays_ = nullptr;};
    inline int32_t recentDays() const { DARABONBA_PTR_GET_DEFAULT(recentDays_, 0) };
    inline ListStorageTablesInfoShrinkRequest& setRecentDays(int32_t recentDays) { DARABONBA_PTR_SET_VALUE(recentDays_, recentDays) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListStorageTablesInfoShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline ListStorageTablesInfoShrinkRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // tablePrefix Field Functions 
    bool hasTablePrefix() const { return this->tablePrefix_ != nullptr;};
    void deleteTablePrefix() { this->tablePrefix_ = nullptr;};
    inline string tablePrefix() const { DARABONBA_PTR_GET_DEFAULT(tablePrefix_, "") };
    inline ListStorageTablesInfoShrinkRequest& setTablePrefix(string tablePrefix) { DARABONBA_PTR_SET_VALUE(tablePrefix_, tablePrefix) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListStorageTablesInfoShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // typesShrink Field Functions 
    bool hasTypesShrink() const { return this->typesShrink_ != nullptr;};
    void deleteTypesShrink() { this->typesShrink_ = nullptr;};
    inline string typesShrink() const { DARABONBA_PTR_GET_DEFAULT(typesShrink_, "") };
    inline ListStorageTablesInfoShrinkRequest& setTypesShrink(string typesShrink) { DARABONBA_PTR_SET_VALUE(typesShrink_, typesShrink) };


  protected:
    // Specifies whether to sort data in ascending order.
    std::shared_ptr<bool> ascOrder_ = nullptr;
    // The date on which the statistics are collected, in days. Set this parameter to a value in the `YYYYMMdd` format.
    // 
    // This parameter is required.
    std::shared_ptr<string> date_ = nullptr;
    // The sorting column.
    std::shared_ptr<string> orderColumn_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The number of recent days for comparison.
    std::shared_ptr<int32_t> recentDays_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The name of the schema.
    std::shared_ptr<string> schema_ = nullptr;
    // The name of the table that you want to use for fuzzy match.
    std::shared_ptr<string> tablePrefix_ = nullptr;
    // The ID of the tenant. You can log on to the MaxCompute console, and choose **Tenants** > **Tenant Property** from the left-side navigation pane to view the tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The storage types.
    std::shared_ptr<string> typesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
