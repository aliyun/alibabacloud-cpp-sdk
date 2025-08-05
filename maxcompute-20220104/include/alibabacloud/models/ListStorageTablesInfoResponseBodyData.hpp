// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTORAGETABLESINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSTORAGETABLESINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStorageTablesInfoResponseBodyDataStorageTableInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListStorageTablesInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStorageTablesInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(storageTableInfoList, storageTableInfoList_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStorageTablesInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(storageTableInfoList, storageTableInfoList_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListStorageTablesInfoResponseBodyData() = default ;
    ListStorageTablesInfoResponseBodyData(const ListStorageTablesInfoResponseBodyData &) = default ;
    ListStorageTablesInfoResponseBodyData(ListStorageTablesInfoResponseBodyData &&) = default ;
    ListStorageTablesInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStorageTablesInfoResponseBodyData() = default ;
    ListStorageTablesInfoResponseBodyData& operator=(const ListStorageTablesInfoResponseBodyData &) = default ;
    ListStorageTablesInfoResponseBodyData& operator=(ListStorageTablesInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->storageTableInfoList_ != nullptr && this->totalCount_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline ListStorageTablesInfoResponseBodyData& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListStorageTablesInfoResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListStorageTablesInfoResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // storageTableInfoList Field Functions 
    bool hasStorageTableInfoList() const { return this->storageTableInfoList_ != nullptr;};
    void deleteStorageTableInfoList() { this->storageTableInfoList_ = nullptr;};
    inline const vector<Models::ListStorageTablesInfoResponseBodyDataStorageTableInfoList> & storageTableInfoList() const { DARABONBA_PTR_GET_CONST(storageTableInfoList_, vector<Models::ListStorageTablesInfoResponseBodyDataStorageTableInfoList>) };
    inline vector<Models::ListStorageTablesInfoResponseBodyDataStorageTableInfoList> storageTableInfoList() { DARABONBA_PTR_GET(storageTableInfoList_, vector<Models::ListStorageTablesInfoResponseBodyDataStorageTableInfoList>) };
    inline ListStorageTablesInfoResponseBodyData& setStorageTableInfoList(const vector<Models::ListStorageTablesInfoResponseBodyDataStorageTableInfoList> & storageTableInfoList) { DARABONBA_PTR_SET_VALUE(storageTableInfoList_, storageTableInfoList) };
    inline ListStorageTablesInfoResponseBodyData& setStorageTableInfoList(vector<Models::ListStorageTablesInfoResponseBodyDataStorageTableInfoList> && storageTableInfoList) { DARABONBA_PTR_SET_RVALUE(storageTableInfoList_, storageTableInfoList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListStorageTablesInfoResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The date on which the statistics are collected.
    std::shared_ptr<string> date_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The table storage information.
    std::shared_ptr<vector<Models::ListStorageTablesInfoResponseBodyDataStorageTableInfoList>> storageTableInfoList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
