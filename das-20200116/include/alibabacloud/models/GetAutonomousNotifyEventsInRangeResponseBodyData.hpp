// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTONOMOUSNOTIFYEVENTSINRANGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAUTONOMOUSNOTIFYEVENTSINRANGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAutonomousNotifyEventsInRangeResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutonomousNotifyEventsInRangeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutonomousNotifyEventsInRangeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutonomousNotifyEventsInRangeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetAutonomousNotifyEventsInRangeResponseBodyData() = default ;
    GetAutonomousNotifyEventsInRangeResponseBodyData(const GetAutonomousNotifyEventsInRangeResponseBodyData &) = default ;
    GetAutonomousNotifyEventsInRangeResponseBodyData(GetAutonomousNotifyEventsInRangeResponseBodyData &&) = default ;
    GetAutonomousNotifyEventsInRangeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutonomousNotifyEventsInRangeResponseBodyData() = default ;
    GetAutonomousNotifyEventsInRangeResponseBodyData& operator=(const GetAutonomousNotifyEventsInRangeResponseBodyData &) = default ;
    GetAutonomousNotifyEventsInRangeResponseBodyData& operator=(GetAutonomousNotifyEventsInRangeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extra_ == nullptr
        && return this->list_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->total_ == nullptr; };
    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline GetAutonomousNotifyEventsInRangeResponseBodyData& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const Models::GetAutonomousNotifyEventsInRangeResponseBodyDataList & list() const { DARABONBA_PTR_GET_CONST(list_, Models::GetAutonomousNotifyEventsInRangeResponseBodyDataList) };
    inline Models::GetAutonomousNotifyEventsInRangeResponseBodyDataList list() { DARABONBA_PTR_GET(list_, Models::GetAutonomousNotifyEventsInRangeResponseBodyDataList) };
    inline GetAutonomousNotifyEventsInRangeResponseBodyData& setList(const Models::GetAutonomousNotifyEventsInRangeResponseBodyDataList & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetAutonomousNotifyEventsInRangeResponseBodyData& setList(Models::GetAutonomousNotifyEventsInRangeResponseBodyDataList && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetAutonomousNotifyEventsInRangeResponseBodyData& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetAutonomousNotifyEventsInRangeResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetAutonomousNotifyEventsInRangeResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The reserved parameter.
    std::shared_ptr<string> extra_ = nullptr;
    // The detailed information, including the error codes and the number of entries that are returned.
    std::shared_ptr<Models::GetAutonomousNotifyEventsInRangeResponseBodyDataList> list_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
