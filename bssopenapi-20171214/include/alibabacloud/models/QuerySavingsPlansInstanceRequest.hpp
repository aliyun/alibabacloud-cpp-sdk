// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySavingsPlansInstanceRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySavingsPlansInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySavingsPlansInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Locale, locale_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySavingsPlansInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Locale, locale_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    QuerySavingsPlansInstanceRequest() = default ;
    QuerySavingsPlansInstanceRequest(const QuerySavingsPlansInstanceRequest &) = default ;
    QuerySavingsPlansInstanceRequest(QuerySavingsPlansInstanceRequest &&) = default ;
    QuerySavingsPlansInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySavingsPlansInstanceRequest() = default ;
    QuerySavingsPlansInstanceRequest& operator=(const QuerySavingsPlansInstanceRequest &) = default ;
    QuerySavingsPlansInstanceRequest& operator=(QuerySavingsPlansInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->endTime_ != nullptr && this->instanceId_ != nullptr && this->locale_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr && this->tag_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline QuerySavingsPlansInstanceRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QuerySavingsPlansInstanceRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QuerySavingsPlansInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string locale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline QuerySavingsPlansInstanceRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QuerySavingsPlansInstanceRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySavingsPlansInstanceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QuerySavingsPlansInstanceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QuerySavingsPlansInstanceRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<QuerySavingsPlansInstanceRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<QuerySavingsPlansInstanceRequestTag>) };
    inline vector<QuerySavingsPlansInstanceRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<QuerySavingsPlansInstanceRequestTag>) };
    inline QuerySavingsPlansInstanceRequest& setTag(const vector<QuerySavingsPlansInstanceRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline QuerySavingsPlansInstanceRequest& setTag(vector<QuerySavingsPlansInstanceRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The end of the time range to query. Specify the time in the format of yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the savings plan instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The language of the return data. Valid values:
    // 
    // *   ZH: Chinese
    // *   EN: English
    std::shared_ptr<string> locale_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The beginning of the time range to query. Specify the time in the format of yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the Instance. 
    // 
    // *  NORMAL
    // * RELEASE
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<QuerySavingsPlansInstanceRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
