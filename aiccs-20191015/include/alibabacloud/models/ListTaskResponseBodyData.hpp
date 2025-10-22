// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskResponseBodyDataRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Record, record_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Record, record_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListTaskResponseBodyData() = default ;
    ListTaskResponseBodyData(const ListTaskResponseBodyData &) = default ;
    ListTaskResponseBodyData(ListTaskResponseBodyData &&) = default ;
    ListTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskResponseBodyData() = default ;
    ListTaskResponseBodyData& operator=(const ListTaskResponseBodyData &) = default ;
    ListTaskResponseBodyData& operator=(ListTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && return this->pageSize_ == nullptr && return this->record_ == nullptr && return this->total_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListTaskResponseBodyData& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListTaskResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // record Field Functions 
    bool hasRecord() const { return this->record_ != nullptr;};
    void deleteRecord() { this->record_ = nullptr;};
    inline const vector<Models::ListTaskResponseBodyDataRecord> & record() const { DARABONBA_PTR_GET_CONST(record_, vector<Models::ListTaskResponseBodyDataRecord>) };
    inline vector<Models::ListTaskResponseBodyDataRecord> record() { DARABONBA_PTR_GET(record_, vector<Models::ListTaskResponseBodyDataRecord>) };
    inline ListTaskResponseBodyData& setRecord(const vector<Models::ListTaskResponseBodyDataRecord> & record) { DARABONBA_PTR_SET_VALUE(record_, record) };
    inline ListTaskResponseBodyData& setRecord(vector<Models::ListTaskResponseBodyDataRecord> && record) { DARABONBA_PTR_SET_RVALUE(record_, record) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListTaskResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<vector<Models::ListTaskResponseBodyDataRecord>> record_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
