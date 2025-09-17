// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPAGESMARTSHORTURLLOGRESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_QUERYPAGESMARTSHORTURLLOGRESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPageSmartShortUrlLogResponseBodyModelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryPageSmartShortUrlLogResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPageSmartShortUrlLogResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPageSmartShortUrlLogResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    QueryPageSmartShortUrlLogResponseBodyModel() = default ;
    QueryPageSmartShortUrlLogResponseBodyModel(const QueryPageSmartShortUrlLogResponseBodyModel &) = default ;
    QueryPageSmartShortUrlLogResponseBodyModel(QueryPageSmartShortUrlLogResponseBodyModel &&) = default ;
    QueryPageSmartShortUrlLogResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPageSmartShortUrlLogResponseBodyModel() = default ;
    QueryPageSmartShortUrlLogResponseBodyModel& operator=(const QueryPageSmartShortUrlLogResponseBodyModel &) = default ;
    QueryPageSmartShortUrlLogResponseBodyModel& operator=(QueryPageSmartShortUrlLogResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr && this->totalPage_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::QueryPageSmartShortUrlLogResponseBodyModelList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::QueryPageSmartShortUrlLogResponseBodyModelList>) };
    inline vector<Models::QueryPageSmartShortUrlLogResponseBodyModelList> list() { DARABONBA_PTR_GET(list_, vector<Models::QueryPageSmartShortUrlLogResponseBodyModelList>) };
    inline QueryPageSmartShortUrlLogResponseBodyModel& setList(const vector<Models::QueryPageSmartShortUrlLogResponseBodyModelList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline QueryPageSmartShortUrlLogResponseBodyModel& setList(vector<Models::QueryPageSmartShortUrlLogResponseBodyModelList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline QueryPageSmartShortUrlLogResponseBodyModel& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryPageSmartShortUrlLogResponseBodyModel& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryPageSmartShortUrlLogResponseBodyModel& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline QueryPageSmartShortUrlLogResponseBodyModel& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    std::shared_ptr<vector<Models::QueryPageSmartShortUrlLogResponseBodyModelList>> list_ = nullptr;
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
