// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTPAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTPAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventPageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventPageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(eventStatus, eventStatus_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventPageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(eventStatus, eventStatus_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeEventPageListRequest() = default ;
    DescribeEventPageListRequest(const DescribeEventPageListRequest &) = default ;
    DescribeEventPageListRequest(DescribeEventPageListRequest &&) = default ;
    DescribeEventPageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventPageListRequest() = default ;
    DescribeEventPageListRequest& operator=(const DescribeEventPageListRequest &) = default ;
    DescribeEventPageListRequest& operator=(DescribeEventPageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->createType_ == nullptr && this->currentPage_ == nullptr && this->eventCode_ == nullptr && this->eventName_ == nullptr && this->eventStatus_ == nullptr
        && this->pageSize_ == nullptr && this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeEventPageListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline DescribeEventPageListRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeEventPageListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeEventPageListRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeEventPageListRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline string getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
    inline DescribeEventPageListRequest& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEventPageListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeEventPageListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // The language of the request and response. Default value: **zh**. Valid values:
    // - **zh**: Chinese
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The creation type.
    shared_ptr<string> createType_ {};
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The event code.
    shared_ptr<string> eventCode_ {};
    // The event name.
    shared_ptr<string> eventName_ {};
    // The event status.
    shared_ptr<string> eventStatus_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region code.
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
