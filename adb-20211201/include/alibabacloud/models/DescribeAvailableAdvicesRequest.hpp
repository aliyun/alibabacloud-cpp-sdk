// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEADVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEADVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAvailableAdvicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableAdvicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdviceDate, adviceDate_);
      DARABONBA_PTR_TO_JSON(AdviceType, adviceType_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SchemaTableName, schemaTableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableAdvicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdviceDate, adviceDate_);
      DARABONBA_PTR_FROM_JSON(AdviceType, adviceType_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SchemaTableName, schemaTableName_);
    };
    DescribeAvailableAdvicesRequest() = default ;
    DescribeAvailableAdvicesRequest(const DescribeAvailableAdvicesRequest &) = default ;
    DescribeAvailableAdvicesRequest(DescribeAvailableAdvicesRequest &&) = default ;
    DescribeAvailableAdvicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableAdvicesRequest() = default ;
    DescribeAvailableAdvicesRequest& operator=(const DescribeAvailableAdvicesRequest &) = default ;
    DescribeAvailableAdvicesRequest& operator=(DescribeAvailableAdvicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adviceDate_ == nullptr
        && this->adviceType_ == nullptr && this->DBClusterId_ == nullptr && this->keyword_ == nullptr && this->lang_ == nullptr && this->order_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->schemaTableName_ == nullptr; };
    // adviceDate Field Functions 
    bool hasAdviceDate() const { return this->adviceDate_ != nullptr;};
    void deleteAdviceDate() { this->adviceDate_ = nullptr;};
    inline int64_t getAdviceDate() const { DARABONBA_PTR_GET_DEFAULT(adviceDate_, 0L) };
    inline DescribeAvailableAdvicesRequest& setAdviceDate(int64_t adviceDate) { DARABONBA_PTR_SET_VALUE(adviceDate_, adviceDate) };


    // adviceType Field Functions 
    bool hasAdviceType() const { return this->adviceType_ != nullptr;};
    void deleteAdviceType() { this->adviceType_ = nullptr;};
    inline string getAdviceType() const { DARABONBA_PTR_GET_DEFAULT(adviceType_, "") };
    inline DescribeAvailableAdvicesRequest& setAdviceType(string adviceType) { DARABONBA_PTR_SET_VALUE(adviceType_, adviceType) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAvailableAdvicesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeAvailableAdvicesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAvailableAdvicesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeAvailableAdvicesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAvailableAdvicesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAvailableAdvicesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableAdvicesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // schemaTableName Field Functions 
    bool hasSchemaTableName() const { return this->schemaTableName_ != nullptr;};
    void deleteSchemaTableName() { this->schemaTableName_ = nullptr;};
    inline string getSchemaTableName() const { DARABONBA_PTR_GET_DEFAULT(schemaTableName_, "") };
    inline DescribeAvailableAdvicesRequest& setSchemaTableName(string schemaTableName) { DARABONBA_PTR_SET_VALUE(schemaTableName_, schemaTableName) };


  protected:
    // The date when the advice was generated, in the `yyyyMMdd` format.
    // 
    // > Advice is generated daily. To query for advice, specify a date at least one day before the current date. For example, if you query on June 27, 2024, set this parameter to `20240626` or an earlier date.
    shared_ptr<int64_t> adviceDate_ {};
    // The type of advice. Valid values:
    // 
    // - **INDEX**: index optimization.
    // 
    // - **TIERING**: hot and cold data tiering.
    shared_ptr<string> adviceType_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The keyword for a fuzzy search on table names.
    shared_ptr<string> keyword_ {};
    // The display language for the advice. Valid values:
    // 
    // - **zh**: Simplified Chinese (default).
    // 
    // - **en**: English.
    // 
    // - **ja**: Japanese.
    // 
    // - **zh-tw**: Traditional Chinese.
    shared_ptr<string> lang_ {};
    // Specifies the sort order for the results. The value is a JSON string. Example: `[{"Field":"SchemaName","Type":"Asc"}]`. The JSON string contains the following key-value pairs:
    // 
    // - `Field`: the field to sort by. Valid values:
    // 
    //   - `SchemaName`: the database name.
    // 
    //   - `TableName`: the table name.
    // 
    //   - `Benefit`: the expected benefit.
    // 
    // - `Type`: the sort order. Valid values:
    // 
    //   - `Asc`: ascending order.
    // 
    //   - `Desc`: descending order.
    // 
    // > By default, results are sorted by expected benefit in descending order.
    shared_ptr<string> order_ {};
    // The page number. The value must be an integer that is greater than 0. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // - **30** (default)
    // 
    // - **50**
    // 
    // - **100**
    shared_ptr<int64_t> pageSize_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // A concatenation of the database name and the table name.
    shared_ptr<string> schemaTableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
