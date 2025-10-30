// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataSourceWithConfigResponseBodyPageResultDataSourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataSourceWithConfigResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceWithConfigResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceList, dataSourceList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceWithConfigResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceList, dataSourceList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataSourceWithConfigResponseBodyPageResult() = default ;
    ListDataSourceWithConfigResponseBodyPageResult(const ListDataSourceWithConfigResponseBodyPageResult &) = default ;
    ListDataSourceWithConfigResponseBodyPageResult(ListDataSourceWithConfigResponseBodyPageResult &&) = default ;
    ListDataSourceWithConfigResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceWithConfigResponseBodyPageResult() = default ;
    ListDataSourceWithConfigResponseBodyPageResult& operator=(const ListDataSourceWithConfigResponseBodyPageResult &) = default ;
    ListDataSourceWithConfigResponseBodyPageResult& operator=(ListDataSourceWithConfigResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceList_ == nullptr
        && return this->totalCount_ == nullptr; };
    // dataSourceList Field Functions 
    bool hasDataSourceList() const { return this->dataSourceList_ != nullptr;};
    void deleteDataSourceList() { this->dataSourceList_ = nullptr;};
    inline const vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceList> & dataSourceList() const { DARABONBA_PTR_GET_CONST(dataSourceList_, vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceList>) };
    inline vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceList> dataSourceList() { DARABONBA_PTR_GET(dataSourceList_, vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceList>) };
    inline ListDataSourceWithConfigResponseBodyPageResult& setDataSourceList(const vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceList> & dataSourceList) { DARABONBA_PTR_SET_VALUE(dataSourceList_, dataSourceList) };
    inline ListDataSourceWithConfigResponseBodyPageResult& setDataSourceList(vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceList> && dataSourceList) { DARABONBA_PTR_SET_RVALUE(dataSourceList_, dataSourceList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDataSourceWithConfigResponseBodyPageResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceList>> dataSourceList_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
