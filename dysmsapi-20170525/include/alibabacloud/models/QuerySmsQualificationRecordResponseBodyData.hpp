// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSQUALIFICATIONRECORDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSQUALIFICATIONRECORDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySmsQualificationRecordResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsQualificationRecordResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsQualificationRecordResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsQualificationRecordResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QuerySmsQualificationRecordResponseBodyData() = default ;
    QuerySmsQualificationRecordResponseBodyData(const QuerySmsQualificationRecordResponseBodyData &) = default ;
    QuerySmsQualificationRecordResponseBodyData(QuerySmsQualificationRecordResponseBodyData &&) = default ;
    QuerySmsQualificationRecordResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsQualificationRecordResponseBodyData() = default ;
    QuerySmsQualificationRecordResponseBodyData& operator=(const QuerySmsQualificationRecordResponseBodyData &) = default ;
    QuerySmsQualificationRecordResponseBodyData& operator=(QuerySmsQualificationRecordResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->total_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::QuerySmsQualificationRecordResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::QuerySmsQualificationRecordResponseBodyDataList>) };
    inline vector<Models::QuerySmsQualificationRecordResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::QuerySmsQualificationRecordResponseBodyDataList>) };
    inline QuerySmsQualificationRecordResponseBodyData& setList(const vector<Models::QuerySmsQualificationRecordResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline QuerySmsQualificationRecordResponseBodyData& setList(vector<Models::QuerySmsQualificationRecordResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline QuerySmsQualificationRecordResponseBodyData& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QuerySmsQualificationRecordResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline QuerySmsQualificationRecordResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Models::QuerySmsQualificationRecordResponseBodyDataList>> list_ = nullptr;
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
