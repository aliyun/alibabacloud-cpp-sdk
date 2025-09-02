// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEPARTITIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEPARTITIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMetaTablePartitionResponseBodyDataDataEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTablePartitionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTablePartitionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataEntityList, dataEntityList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTablePartitionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataEntityList, dataEntityList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetMetaTablePartitionResponseBodyData() = default ;
    GetMetaTablePartitionResponseBodyData(const GetMetaTablePartitionResponseBodyData &) = default ;
    GetMetaTablePartitionResponseBodyData(GetMetaTablePartitionResponseBodyData &&) = default ;
    GetMetaTablePartitionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTablePartitionResponseBodyData() = default ;
    GetMetaTablePartitionResponseBodyData& operator=(const GetMetaTablePartitionResponseBodyData &) = default ;
    GetMetaTablePartitionResponseBodyData& operator=(GetMetaTablePartitionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataEntityList_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // dataEntityList Field Functions 
    bool hasDataEntityList() const { return this->dataEntityList_ != nullptr;};
    void deleteDataEntityList() { this->dataEntityList_ = nullptr;};
    inline const vector<Models::GetMetaTablePartitionResponseBodyDataDataEntityList> & dataEntityList() const { DARABONBA_PTR_GET_CONST(dataEntityList_, vector<Models::GetMetaTablePartitionResponseBodyDataDataEntityList>) };
    inline vector<Models::GetMetaTablePartitionResponseBodyDataDataEntityList> dataEntityList() { DARABONBA_PTR_GET(dataEntityList_, vector<Models::GetMetaTablePartitionResponseBodyDataDataEntityList>) };
    inline GetMetaTablePartitionResponseBodyData& setDataEntityList(const vector<Models::GetMetaTablePartitionResponseBodyDataDataEntityList> & dataEntityList) { DARABONBA_PTR_SET_VALUE(dataEntityList_, dataEntityList) };
    inline GetMetaTablePartitionResponseBodyData& setDataEntityList(vector<Models::GetMetaTablePartitionResponseBodyDataDataEntityList> && dataEntityList) { DARABONBA_PTR_SET_RVALUE(dataEntityList_, dataEntityList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetMetaTablePartitionResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetMetaTablePartitionResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetMetaTablePartitionResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of partitions.
    std::shared_ptr<vector<Models::GetMetaTablePartitionResponseBodyDataDataEntityList>> dataEntityList_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of partitions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
