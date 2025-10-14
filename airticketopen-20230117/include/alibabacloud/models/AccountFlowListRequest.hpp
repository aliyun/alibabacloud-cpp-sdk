// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCOUNTFLOWLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACCOUNTFLOWLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class AccountFlowListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccountFlowListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(day_num, dayNum_);
      DARABONBA_PTR_TO_JSON(page_index, pageIndex_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(utc_begin_time, utcBeginTime_);
    };
    friend void from_json(const Darabonba::Json& j, AccountFlowListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(day_num, dayNum_);
      DARABONBA_PTR_FROM_JSON(page_index, pageIndex_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(utc_begin_time, utcBeginTime_);
    };
    AccountFlowListRequest() = default ;
    AccountFlowListRequest(const AccountFlowListRequest &) = default ;
    AccountFlowListRequest(AccountFlowListRequest &&) = default ;
    AccountFlowListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccountFlowListRequest() = default ;
    AccountFlowListRequest& operator=(const AccountFlowListRequest &) = default ;
    AccountFlowListRequest& operator=(AccountFlowListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dayNum_ == nullptr
        && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr && return this->utcBeginTime_ == nullptr; };
    // dayNum Field Functions 
    bool hasDayNum() const { return this->dayNum_ != nullptr;};
    void deleteDayNum() { this->dayNum_ = nullptr;};
    inline int32_t dayNum() const { DARABONBA_PTR_GET_DEFAULT(dayNum_, 0) };
    inline AccountFlowListRequest& setDayNum(int32_t dayNum) { DARABONBA_PTR_SET_VALUE(dayNum_, dayNum) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline AccountFlowListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline AccountFlowListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // utcBeginTime Field Functions 
    bool hasUtcBeginTime() const { return this->utcBeginTime_ != nullptr;};
    void deleteUtcBeginTime() { this->utcBeginTime_ = nullptr;};
    inline int64_t utcBeginTime() const { DARABONBA_PTR_GET_DEFAULT(utcBeginTime_, 0L) };
    inline AccountFlowListRequest& setUtcBeginTime(int64_t utcBeginTime) { DARABONBA_PTR_SET_VALUE(utcBeginTime_, utcBeginTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> dayNum_ = nullptr;
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> utcBeginTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
