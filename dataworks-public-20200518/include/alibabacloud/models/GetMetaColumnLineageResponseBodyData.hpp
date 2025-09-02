// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETACOLUMNLINEAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMETACOLUMNLINEAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMetaColumnLineageResponseBodyDataDataEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaColumnLineageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaColumnLineageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataEntityList, dataEntityList_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaColumnLineageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataEntityList, dataEntityList_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetMetaColumnLineageResponseBodyData() = default ;
    GetMetaColumnLineageResponseBodyData(const GetMetaColumnLineageResponseBodyData &) = default ;
    GetMetaColumnLineageResponseBodyData(GetMetaColumnLineageResponseBodyData &&) = default ;
    GetMetaColumnLineageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaColumnLineageResponseBodyData() = default ;
    GetMetaColumnLineageResponseBodyData& operator=(const GetMetaColumnLineageResponseBodyData &) = default ;
    GetMetaColumnLineageResponseBodyData& operator=(GetMetaColumnLineageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataEntityList_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // dataEntityList Field Functions 
    bool hasDataEntityList() const { return this->dataEntityList_ != nullptr;};
    void deleteDataEntityList() { this->dataEntityList_ = nullptr;};
    inline const vector<Models::GetMetaColumnLineageResponseBodyDataDataEntityList> & dataEntityList() const { DARABONBA_PTR_GET_CONST(dataEntityList_, vector<Models::GetMetaColumnLineageResponseBodyDataDataEntityList>) };
    inline vector<Models::GetMetaColumnLineageResponseBodyDataDataEntityList> dataEntityList() { DARABONBA_PTR_GET(dataEntityList_, vector<Models::GetMetaColumnLineageResponseBodyDataDataEntityList>) };
    inline GetMetaColumnLineageResponseBodyData& setDataEntityList(const vector<Models::GetMetaColumnLineageResponseBodyDataDataEntityList> & dataEntityList) { DARABONBA_PTR_SET_VALUE(dataEntityList_, dataEntityList) };
    inline GetMetaColumnLineageResponseBodyData& setDataEntityList(vector<Models::GetMetaColumnLineageResponseBodyDataDataEntityList> && dataEntityList) { DARABONBA_PTR_SET_RVALUE(dataEntityList_, dataEntityList) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline GetMetaColumnLineageResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetMetaColumnLineageResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetMetaColumnLineageResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned result.
    std::shared_ptr<vector<Models::GetMetaColumnLineageResponseBodyDataDataEntityList>> dataEntityList_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of fields.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
