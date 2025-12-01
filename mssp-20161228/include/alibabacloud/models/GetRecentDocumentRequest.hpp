// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECENTDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRECENTDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetRecentDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecentDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DateType, dateType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(SuspEventSource, suspEventSource_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecentDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DateType, dateType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(SuspEventSource, suspEventSource_);
    };
    GetRecentDocumentRequest() = default ;
    GetRecentDocumentRequest(const GetRecentDocumentRequest &) = default ;
    GetRecentDocumentRequest(GetRecentDocumentRequest &&) = default ;
    GetRecentDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecentDocumentRequest() = default ;
    GetRecentDocumentRequest& operator=(const GetRecentDocumentRequest &) = default ;
    GetRecentDocumentRequest& operator=(GetRecentDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dateType_ == nullptr
        && return this->endDate_ == nullptr && return this->startDate_ == nullptr && return this->suspEventSource_ == nullptr; };
    // dateType Field Functions 
    bool hasDateType() const { return this->dateType_ != nullptr;};
    void deleteDateType() { this->dateType_ = nullptr;};
    inline string dateType() const { DARABONBA_PTR_GET_DEFAULT(dateType_, "") };
    inline GetRecentDocumentRequest& setDateType(string dateType) { DARABONBA_PTR_SET_VALUE(dateType_, dateType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline GetRecentDocumentRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline GetRecentDocumentRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // suspEventSource Field Functions 
    bool hasSuspEventSource() const { return this->suspEventSource_ != nullptr;};
    void deleteSuspEventSource() { this->suspEventSource_ = nullptr;};
    inline string suspEventSource() const { DARABONBA_PTR_GET_DEFAULT(suspEventSource_, "") };
    inline GetRecentDocumentRequest& setSuspEventSource(string suspEventSource) { DARABONBA_PTR_SET_VALUE(suspEventSource_, suspEventSource) };


  protected:
    // Filter time type, supports filtering by the last 7 days, the last 30 days, the last half year, or custom time ranges.
    // 
    // This parameter is required.
    std::shared_ptr<string> dateType_ = nullptr;
    // End time.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endDate_ = nullptr;
    // Start time.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startDate_ = nullptr;
    // Alert event source.
    std::shared_ptr<string> suspEventSource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
