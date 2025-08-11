// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIDATASOURCERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIDATASOURCERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApiDatasourceResponseBodyResultData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListApiDatasourceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiDatasourceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiDatasourceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListApiDatasourceResponseBodyResult() = default ;
    ListApiDatasourceResponseBodyResult(const ListApiDatasourceResponseBodyResult &) = default ;
    ListApiDatasourceResponseBodyResult(ListApiDatasourceResponseBodyResult &&) = default ;
    ListApiDatasourceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiDatasourceResponseBodyResult() = default ;
    ListApiDatasourceResponseBodyResult& operator=(const ListApiDatasourceResponseBodyResult &) = default ;
    ListApiDatasourceResponseBodyResult& operator=(ListApiDatasourceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalNum_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListApiDatasourceResponseBodyResultData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListApiDatasourceResponseBodyResultData>) };
    inline vector<Models::ListApiDatasourceResponseBodyResultData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListApiDatasourceResponseBodyResultData>) };
    inline ListApiDatasourceResponseBodyResult& setData(const vector<Models::ListApiDatasourceResponseBodyResultData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListApiDatasourceResponseBodyResult& setData(vector<Models::ListApiDatasourceResponseBodyResultData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListApiDatasourceResponseBodyResult& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApiDatasourceResponseBodyResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListApiDatasourceResponseBodyResult& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The list of API data sources that were queried.
    std::shared_ptr<vector<Models::ListApiDatasourceResponseBodyResultData>> data_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of rows per page set when the interface is requested.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of rows.
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
