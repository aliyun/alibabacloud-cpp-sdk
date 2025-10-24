// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTORAGEPROJECTSINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSTORAGEPROJECTSINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListStorageProjectsInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStorageProjectsInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(storageProjectInfoList, storageProjectInfoList_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStorageProjectsInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(storageProjectInfoList, storageProjectInfoList_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListStorageProjectsInfoResponseBodyData() = default ;
    ListStorageProjectsInfoResponseBodyData(const ListStorageProjectsInfoResponseBodyData &) = default ;
    ListStorageProjectsInfoResponseBodyData(ListStorageProjectsInfoResponseBodyData &&) = default ;
    ListStorageProjectsInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStorageProjectsInfoResponseBodyData() = default ;
    ListStorageProjectsInfoResponseBodyData& operator=(const ListStorageProjectsInfoResponseBodyData &) = default ;
    ListStorageProjectsInfoResponseBodyData& operator=(ListStorageProjectsInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->storageProjectInfoList_ == nullptr && return this->totalCount_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline ListStorageProjectsInfoResponseBodyData& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListStorageProjectsInfoResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListStorageProjectsInfoResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // storageProjectInfoList Field Functions 
    bool hasStorageProjectInfoList() const { return this->storageProjectInfoList_ != nullptr;};
    void deleteStorageProjectInfoList() { this->storageProjectInfoList_ = nullptr;};
    inline const vector<Models::ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList> & storageProjectInfoList() const { DARABONBA_PTR_GET_CONST(storageProjectInfoList_, vector<Models::ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList>) };
    inline vector<Models::ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList> storageProjectInfoList() { DARABONBA_PTR_GET(storageProjectInfoList_, vector<Models::ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList>) };
    inline ListStorageProjectsInfoResponseBodyData& setStorageProjectInfoList(const vector<Models::ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList> & storageProjectInfoList) { DARABONBA_PTR_SET_VALUE(storageProjectInfoList_, storageProjectInfoList) };
    inline ListStorageProjectsInfoResponseBodyData& setStorageProjectInfoList(vector<Models::ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList> && storageProjectInfoList) { DARABONBA_PTR_SET_RVALUE(storageProjectInfoList_, storageProjectInfoList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListStorageProjectsInfoResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<vector<Models::ListStorageProjectsInfoResponseBodyDataStorageProjectInfoList>> storageProjectInfoList_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
