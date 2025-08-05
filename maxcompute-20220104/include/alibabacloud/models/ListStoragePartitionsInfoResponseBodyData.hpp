// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTORAGEPARTITIONSINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSTORAGEPARTITIONSINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListStoragePartitionsInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStoragePartitionsInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(storagePartitionInfoList, storagePartitionInfoList_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStoragePartitionsInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(storagePartitionInfoList, storagePartitionInfoList_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListStoragePartitionsInfoResponseBodyData() = default ;
    ListStoragePartitionsInfoResponseBodyData(const ListStoragePartitionsInfoResponseBodyData &) = default ;
    ListStoragePartitionsInfoResponseBodyData(ListStoragePartitionsInfoResponseBodyData &&) = default ;
    ListStoragePartitionsInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStoragePartitionsInfoResponseBodyData() = default ;
    ListStoragePartitionsInfoResponseBodyData& operator=(const ListStoragePartitionsInfoResponseBodyData &) = default ;
    ListStoragePartitionsInfoResponseBodyData& operator=(ListStoragePartitionsInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->storagePartitionInfoList_ != nullptr && this->totalCount_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline ListStoragePartitionsInfoResponseBodyData& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListStoragePartitionsInfoResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListStoragePartitionsInfoResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // storagePartitionInfoList Field Functions 
    bool hasStoragePartitionInfoList() const { return this->storagePartitionInfoList_ != nullptr;};
    void deleteStoragePartitionInfoList() { this->storagePartitionInfoList_ = nullptr;};
    inline const vector<Models::ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList> & storagePartitionInfoList() const { DARABONBA_PTR_GET_CONST(storagePartitionInfoList_, vector<Models::ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList>) };
    inline vector<Models::ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList> storagePartitionInfoList() { DARABONBA_PTR_GET(storagePartitionInfoList_, vector<Models::ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList>) };
    inline ListStoragePartitionsInfoResponseBodyData& setStoragePartitionInfoList(const vector<Models::ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList> & storagePartitionInfoList) { DARABONBA_PTR_SET_VALUE(storagePartitionInfoList_, storagePartitionInfoList) };
    inline ListStoragePartitionsInfoResponseBodyData& setStoragePartitionInfoList(vector<Models::ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList> && storagePartitionInfoList) { DARABONBA_PTR_SET_RVALUE(storagePartitionInfoList_, storagePartitionInfoList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListStoragePartitionsInfoResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The date on which the statistics are collected.
    std::shared_ptr<string> date_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The partition storage information.
    std::shared_ptr<vector<Models::ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList>> storagePartitionInfoList_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
