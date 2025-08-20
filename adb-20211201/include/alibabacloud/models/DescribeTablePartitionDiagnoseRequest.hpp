// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLEPARTITIONDIAGNOSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLEPARTITIONDIAGNOSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeTablePartitionDiagnoseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTablePartitionDiagnoseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTablePartitionDiagnoseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeTablePartitionDiagnoseRequest() = default ;
    DescribeTablePartitionDiagnoseRequest(const DescribeTablePartitionDiagnoseRequest &) = default ;
    DescribeTablePartitionDiagnoseRequest(DescribeTablePartitionDiagnoseRequest &&) = default ;
    DescribeTablePartitionDiagnoseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTablePartitionDiagnoseRequest() = default ;
    DescribeTablePartitionDiagnoseRequest& operator=(const DescribeTablePartitionDiagnoseRequest &) = default ;
    DescribeTablePartitionDiagnoseRequest& operator=(DescribeTablePartitionDiagnoseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->lang_ != nullptr && this->order_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeTablePartitionDiagnoseRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTablePartitionDiagnoseRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeTablePartitionDiagnoseRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTablePartitionDiagnoseRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTablePartitionDiagnoseRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeTablePartitionDiagnoseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: simplified Chinese.
    // *   **en**: English.
    // *   **ja**: Japanese.
    // *   **zh-tw**: traditional Chinese.
    std::shared_ptr<string> lang_ = nullptr;
    // The order by which to sort query results. Specify the parameter value in the JSON string format. Example: `[{"Field":"TotalSize","Type":"Desc"}]`.
    // 
    // *   `Field` specifies the field by which to sort the query results. Valid values:
    // 
    //     *   `SchemaName`: the name of the database to which the table belongs.
    //     *   `TableName`: the name of the table.
    //     *   `TotalSize`: the total data size of the table.
    //     *   `SpaceRatio`: the storage percentage of the table.
    // 
    // *   `Type` specifies the sorting order. Valid values:
    // 
    //     *   `Asc`: ascending order.
    //     *   `Desc`: descending order.
    // 
    // >  If you do not specify this parameter, the query results are sorted by the TotalSize field in descending order.
    std::shared_ptr<string> order_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
