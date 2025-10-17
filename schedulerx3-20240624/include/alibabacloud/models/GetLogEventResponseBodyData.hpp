// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGEVENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETLOGEVENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLogEventResponseBodyDataRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetLogEventResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogEventResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogEventResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetLogEventResponseBodyData() = default ;
    GetLogEventResponseBodyData(const GetLogEventResponseBodyData &) = default ;
    GetLogEventResponseBodyData(GetLogEventResponseBodyData &&) = default ;
    GetLogEventResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogEventResponseBodyData() = default ;
    GetLogEventResponseBodyData& operator=(const GetLogEventResponseBodyData &) = default ;
    GetLogEventResponseBodyData& operator=(GetLogEventResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->records_ == nullptr && return this->total_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetLogEventResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetLogEventResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Models::GetLogEventResponseBodyDataRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Models::GetLogEventResponseBodyDataRecords>) };
    inline vector<Models::GetLogEventResponseBodyDataRecords> records() { DARABONBA_PTR_GET(records_, vector<Models::GetLogEventResponseBodyDataRecords>) };
    inline GetLogEventResponseBodyData& setRecords(const vector<Models::GetLogEventResponseBodyDataRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline GetLogEventResponseBodyData& setRecords(vector<Models::GetLogEventResponseBodyDataRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetLogEventResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // -
    std::shared_ptr<vector<Models::GetLogEventResponseBodyDataRecords>> records_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
