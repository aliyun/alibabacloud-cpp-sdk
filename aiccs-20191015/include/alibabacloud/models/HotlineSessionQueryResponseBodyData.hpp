// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTLINESESSIONQUERYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_HOTLINESESSIONQUERYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotlineSessionQueryResponseBodyDataCallDetailRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class HotlineSessionQueryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotlineSessionQueryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallDetailRecord, callDetailRecord_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, HotlineSessionQueryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallDetailRecord, callDetailRecord_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    HotlineSessionQueryResponseBodyData() = default ;
    HotlineSessionQueryResponseBodyData(const HotlineSessionQueryResponseBodyData &) = default ;
    HotlineSessionQueryResponseBodyData(HotlineSessionQueryResponseBodyData &&) = default ;
    HotlineSessionQueryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotlineSessionQueryResponseBodyData() = default ;
    HotlineSessionQueryResponseBodyData& operator=(const HotlineSessionQueryResponseBodyData &) = default ;
    HotlineSessionQueryResponseBodyData& operator=(HotlineSessionQueryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callDetailRecord_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // callDetailRecord Field Functions 
    bool hasCallDetailRecord() const { return this->callDetailRecord_ != nullptr;};
    void deleteCallDetailRecord() { this->callDetailRecord_ = nullptr;};
    inline const vector<Models::HotlineSessionQueryResponseBodyDataCallDetailRecord> & callDetailRecord() const { DARABONBA_PTR_GET_CONST(callDetailRecord_, vector<Models::HotlineSessionQueryResponseBodyDataCallDetailRecord>) };
    inline vector<Models::HotlineSessionQueryResponseBodyDataCallDetailRecord> callDetailRecord() { DARABONBA_PTR_GET(callDetailRecord_, vector<Models::HotlineSessionQueryResponseBodyDataCallDetailRecord>) };
    inline HotlineSessionQueryResponseBodyData& setCallDetailRecord(const vector<Models::HotlineSessionQueryResponseBodyDataCallDetailRecord> & callDetailRecord) { DARABONBA_PTR_SET_VALUE(callDetailRecord_, callDetailRecord) };
    inline HotlineSessionQueryResponseBodyData& setCallDetailRecord(vector<Models::HotlineSessionQueryResponseBodyDataCallDetailRecord> && callDetailRecord) { DARABONBA_PTR_SET_RVALUE(callDetailRecord_, callDetailRecord) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline HotlineSessionQueryResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline HotlineSessionQueryResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline HotlineSessionQueryResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::HotlineSessionQueryResponseBodyDataCallDetailRecord>> callDetailRecord_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
