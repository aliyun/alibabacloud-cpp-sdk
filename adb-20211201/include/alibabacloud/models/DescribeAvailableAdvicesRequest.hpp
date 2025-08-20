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
    virtual bool empty() const override { this->adviceDate_ != nullptr
        && this->adviceType_ != nullptr && this->DBClusterId_ != nullptr && this->keyword_ != nullptr && this->lang_ != nullptr && this->order_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->schemaTableName_ != nullptr; };
    // adviceDate Field Functions 
    bool hasAdviceDate() const { return this->adviceDate_ != nullptr;};
    void deleteAdviceDate() { this->adviceDate_ = nullptr;};
    inline int64_t adviceDate() const { DARABONBA_PTR_GET_DEFAULT(adviceDate_, 0L) };
    inline DescribeAvailableAdvicesRequest& setAdviceDate(int64_t adviceDate) { DARABONBA_PTR_SET_VALUE(adviceDate_, adviceDate) };


    // adviceType Field Functions 
    bool hasAdviceType() const { return this->adviceType_ != nullptr;};
    void deleteAdviceType() { this->adviceType_ = nullptr;};
    inline string adviceType() const { DARABONBA_PTR_GET_DEFAULT(adviceType_, "") };
    inline DescribeAvailableAdvicesRequest& setAdviceType(string adviceType) { DARABONBA_PTR_SET_VALUE(adviceType_, adviceType) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAvailableAdvicesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeAvailableAdvicesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAvailableAdvicesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeAvailableAdvicesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAvailableAdvicesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAvailableAdvicesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableAdvicesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // schemaTableName Field Functions 
    bool hasSchemaTableName() const { return this->schemaTableName_ != nullptr;};
    void deleteSchemaTableName() { this->schemaTableName_ = nullptr;};
    inline string schemaTableName() const { DARABONBA_PTR_GET_DEFAULT(schemaTableName_, "") };
    inline DescribeAvailableAdvicesRequest& setSchemaTableName(string schemaTableName) { DARABONBA_PTR_SET_VALUE(schemaTableName_, schemaTableName) };


  protected:
    // The date when the suggestion is generated. Specify the date in the yyyyMMdd format.
    // 
    // >  Suggestions are generated after analysis after midnight every day. You must specify a date that is at least one day earlier than the current date. For example, if the current date is 20240627, you must specify 20240626 or an earlier date.
    std::shared_ptr<int64_t> adviceDate_ = nullptr;
    // The type of the suggestion. Valid values:
    // 
    // *   **INDEX**: index optimization.
    // *   **TIERING**: hot and cold data optimization.
    std::shared_ptr<string> adviceType_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The keyword that is used to query information by table name.
    std::shared_ptr<string> keyword_ = nullptr;
    // The display language of suggestions. Valid values:
    // 
    // *   **zh** (default): simplified Chinese.
    // *   **en**: English.
    // *   **ja**: Japanese.
    // *   **zh-tw**: traditional Chinese.
    std::shared_ptr<string> lang_ = nullptr;
    // The order by which to sort query results. Specify the parameter value in the JSON format. Example: `[{"Field":"SchemaName","Type":"Asc"}]`.
    // 
    // *   `Field` specifies the field by which to sort the query results. Valid values:
    // 
    //     *   `SchemaName`: the name of the database.
    //     *   `TableName`: the name of the table.
    //     *   `Benefit`: the expected benefits of the applied optimization suggestion.
    // 
    // *   `Type` specifies the sorting order. Valid values:
    // 
    //     *   `Asc`: ascending order.
    //     *   `Desc`: descending order.
    // 
    // >  If you do not specify this parameter, the query results are sorted in descending order based on the Benefit field.
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the table in the DatabaseName.TableName format.
    std::shared_ptr<string> schemaTableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
