// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARTITIONSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTPARTITIONSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Partition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListPartitionsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPartitionsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PartitionList, partitionList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPartitionsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PartitionList, partitionList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPartitionsResponseBodyPagingInfo() = default ;
    ListPartitionsResponseBodyPagingInfo(const ListPartitionsResponseBodyPagingInfo &) = default ;
    ListPartitionsResponseBodyPagingInfo(ListPartitionsResponseBodyPagingInfo &&) = default ;
    ListPartitionsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPartitionsResponseBodyPagingInfo() = default ;
    ListPartitionsResponseBodyPagingInfo& operator=(const ListPartitionsResponseBodyPagingInfo &) = default ;
    ListPartitionsResponseBodyPagingInfo& operator=(ListPartitionsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->partitionList_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPartitionsResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPartitionsResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // partitionList Field Functions 
    bool hasPartitionList() const { return this->partitionList_ != nullptr;};
    void deletePartitionList() { this->partitionList_ = nullptr;};
    inline const vector<Models::Partition> & partitionList() const { DARABONBA_PTR_GET_CONST(partitionList_, vector<Models::Partition>) };
    inline vector<Models::Partition> partitionList() { DARABONBA_PTR_GET(partitionList_, vector<Models::Partition>) };
    inline ListPartitionsResponseBodyPagingInfo& setPartitionList(const vector<Models::Partition> & partitionList) { DARABONBA_PTR_SET_VALUE(partitionList_, partitionList) };
    inline ListPartitionsResponseBodyPagingInfo& setPartitionList(vector<Models::Partition> && partitionList) { DARABONBA_PTR_SET_RVALUE(partitionList_, partitionList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListPartitionsResponseBodyPagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<Models::Partition>> partitionList_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
