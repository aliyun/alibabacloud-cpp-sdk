// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSubResponseBodyResultDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListSubResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPageCount, totalPageCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPageCount, totalPageCount_);
    };
    ListSubResponseBodyResult() = default ;
    ListSubResponseBodyResult(const ListSubResponseBodyResult &) = default ;
    ListSubResponseBodyResult(ListSubResponseBodyResult &&) = default ;
    ListSubResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubResponseBodyResult() = default ;
    ListSubResponseBodyResult& operator=(const ListSubResponseBodyResult &) = default ;
    ListSubResponseBodyResult& operator=(ListSubResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataList_ != nullptr
        && this->hasNext_ != nullptr && this->totalCount_ != nullptr && this->totalPageCount_ != nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<Models::ListSubResponseBodyResultDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<Models::ListSubResponseBodyResultDataList>) };
    inline vector<Models::ListSubResponseBodyResultDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<Models::ListSubResponseBodyResultDataList>) };
    inline ListSubResponseBodyResult& setDataList(const vector<Models::ListSubResponseBodyResultDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline ListSubResponseBodyResult& setDataList(vector<Models::ListSubResponseBodyResultDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // hasNext Field Functions 
    bool hasHasNext() const { return this->hasNext_ != nullptr;};
    void deleteHasNext() { this->hasNext_ = nullptr;};
    inline bool hasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
    inline ListSubResponseBodyResult& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSubResponseBodyResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPageCount Field Functions 
    bool hasTotalPageCount() const { return this->totalPageCount_ != nullptr;};
    void deleteTotalPageCount() { this->totalPageCount_ = nullptr;};
    inline int32_t totalPageCount() const { DARABONBA_PTR_GET_DEFAULT(totalPageCount_, 0) };
    inline ListSubResponseBodyResult& setTotalPageCount(int32_t totalPageCount) { DARABONBA_PTR_SET_VALUE(totalPageCount_, totalPageCount) };


  protected:
    std::shared_ptr<vector<Models::ListSubResponseBodyResultDataList>> dataList_ = nullptr;
    std::shared_ptr<bool> hasNext_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int32_t> totalPageCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
