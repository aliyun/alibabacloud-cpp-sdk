// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCESEARCHPAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCESEARCHPAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAdvanceSearchPageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvanceSearchPageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(eventBeginTime, eventBeginTime_);
      DARABONBA_PTR_TO_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_TO_JSON(eventEndTime, eventEndTime_);
      DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvanceSearchPageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(eventBeginTime, eventBeginTime_);
      DARABONBA_PTR_FROM_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_FROM_JSON(eventEndTime, eventEndTime_);
      DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeAdvanceSearchPageListRequest() = default ;
    DescribeAdvanceSearchPageListRequest(const DescribeAdvanceSearchPageListRequest &) = default ;
    DescribeAdvanceSearchPageListRequest(DescribeAdvanceSearchPageListRequest &&) = default ;
    DescribeAdvanceSearchPageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvanceSearchPageListRequest() = default ;
    DescribeAdvanceSearchPageListRequest& operator=(const DescribeAdvanceSearchPageListRequest &) = default ;
    DescribeAdvanceSearchPageListRequest& operator=(DescribeAdvanceSearchPageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->condition_ == nullptr && return this->currentPage_ == nullptr && return this->eventBeginTime_ == nullptr && return this->eventCodes_ == nullptr && return this->eventEndTime_ == nullptr
        && return this->fieldName_ == nullptr && return this->fieldValue_ == nullptr && return this->pageSize_ == nullptr && return this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAdvanceSearchPageListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline DescribeAdvanceSearchPageListRequest& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline DescribeAdvanceSearchPageListRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // eventBeginTime Field Functions 
    bool hasEventBeginTime() const { return this->eventBeginTime_ != nullptr;};
    void deleteEventBeginTime() { this->eventBeginTime_ = nullptr;};
    inline int64_t eventBeginTime() const { DARABONBA_PTR_GET_DEFAULT(eventBeginTime_, 0L) };
    inline DescribeAdvanceSearchPageListRequest& setEventBeginTime(int64_t eventBeginTime) { DARABONBA_PTR_SET_VALUE(eventBeginTime_, eventBeginTime) };


    // eventCodes Field Functions 
    bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
    void deleteEventCodes() { this->eventCodes_ = nullptr;};
    inline string eventCodes() const { DARABONBA_PTR_GET_DEFAULT(eventCodes_, "") };
    inline DescribeAdvanceSearchPageListRequest& setEventCodes(string eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };


    // eventEndTime Field Functions 
    bool hasEventEndTime() const { return this->eventEndTime_ != nullptr;};
    void deleteEventEndTime() { this->eventEndTime_ = nullptr;};
    inline int64_t eventEndTime() const { DARABONBA_PTR_GET_DEFAULT(eventEndTime_, 0L) };
    inline DescribeAdvanceSearchPageListRequest& setEventEndTime(int64_t eventEndTime) { DARABONBA_PTR_SET_VALUE(eventEndTime_, eventEndTime) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeAdvanceSearchPageListRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline DescribeAdvanceSearchPageListRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAdvanceSearchPageListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeAdvanceSearchPageListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Condition value.
    std::shared_ptr<string> condition_ = nullptr;
    // Current page number.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // Query start time, accurate to milliseconds (ms).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> eventBeginTime_ = nullptr;
    // Event code.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventCodes_ = nullptr;
    // End time, accurate to milliseconds (ms).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> eventEndTime_ = nullptr;
    // Field name
    std::shared_ptr<string> fieldName_ = nullptr;
    // Field value
    std::shared_ptr<string> fieldValue_ = nullptr;
    // Page size, default value is 10
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Region code
    // 
    // This parameter is required.
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
