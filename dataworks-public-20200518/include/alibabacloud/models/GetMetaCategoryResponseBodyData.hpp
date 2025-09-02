// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETACATEGORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMETACATEGORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMetaCategoryResponseBodyDataDataEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaCategoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataEntityList, dataEntityList_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataEntityList, dataEntityList_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetMetaCategoryResponseBodyData() = default ;
    GetMetaCategoryResponseBodyData(const GetMetaCategoryResponseBodyData &) = default ;
    GetMetaCategoryResponseBodyData(GetMetaCategoryResponseBodyData &&) = default ;
    GetMetaCategoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaCategoryResponseBodyData() = default ;
    GetMetaCategoryResponseBodyData& operator=(const GetMetaCategoryResponseBodyData &) = default ;
    GetMetaCategoryResponseBodyData& operator=(GetMetaCategoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataEntityList_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // dataEntityList Field Functions 
    bool hasDataEntityList() const { return this->dataEntityList_ != nullptr;};
    void deleteDataEntityList() { this->dataEntityList_ = nullptr;};
    inline const vector<Models::GetMetaCategoryResponseBodyDataDataEntityList> & dataEntityList() const { DARABONBA_PTR_GET_CONST(dataEntityList_, vector<Models::GetMetaCategoryResponseBodyDataDataEntityList>) };
    inline vector<Models::GetMetaCategoryResponseBodyDataDataEntityList> dataEntityList() { DARABONBA_PTR_GET(dataEntityList_, vector<Models::GetMetaCategoryResponseBodyDataDataEntityList>) };
    inline GetMetaCategoryResponseBodyData& setDataEntityList(const vector<Models::GetMetaCategoryResponseBodyDataDataEntityList> & dataEntityList) { DARABONBA_PTR_SET_VALUE(dataEntityList_, dataEntityList) };
    inline GetMetaCategoryResponseBodyData& setDataEntityList(vector<Models::GetMetaCategoryResponseBodyDataDataEntityList> && dataEntityList) { DARABONBA_PTR_SET_RVALUE(dataEntityList_, dataEntityList) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline GetMetaCategoryResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetMetaCategoryResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetMetaCategoryResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the category tree.
    std::shared_ptr<vector<Models::GetMetaCategoryResponseBodyDataDataEntityList>> dataEntityList_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of categories returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
