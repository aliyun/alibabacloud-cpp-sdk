// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIBRARYLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETLIBRARYLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLibraryListResponseBodyDataRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetLibraryListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLibraryListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(records, records_);
      DARABONBA_PTR_TO_JSON(totalPages, totalPages_);
      DARABONBA_PTR_TO_JSON(totalRecords, totalRecords_);
    };
    friend void from_json(const Darabonba::Json& j, GetLibraryListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(records, records_);
      DARABONBA_PTR_FROM_JSON(totalPages, totalPages_);
      DARABONBA_PTR_FROM_JSON(totalRecords, totalRecords_);
    };
    GetLibraryListResponseBodyData() = default ;
    GetLibraryListResponseBodyData(const GetLibraryListResponseBodyData &) = default ;
    GetLibraryListResponseBodyData(GetLibraryListResponseBodyData &&) = default ;
    GetLibraryListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLibraryListResponseBodyData() = default ;
    GetLibraryListResponseBodyData& operator=(const GetLibraryListResponseBodyData &) = default ;
    GetLibraryListResponseBodyData& operator=(GetLibraryListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->records_ == nullptr && return this->totalPages_ == nullptr && return this->totalRecords_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline GetLibraryListResponseBodyData& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetLibraryListResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Models::GetLibraryListResponseBodyDataRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Models::GetLibraryListResponseBodyDataRecords>) };
    inline vector<Models::GetLibraryListResponseBodyDataRecords> records() { DARABONBA_PTR_GET(records_, vector<Models::GetLibraryListResponseBodyDataRecords>) };
    inline GetLibraryListResponseBodyData& setRecords(const vector<Models::GetLibraryListResponseBodyDataRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline GetLibraryListResponseBodyData& setRecords(vector<Models::GetLibraryListResponseBodyDataRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int64_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0L) };
    inline GetLibraryListResponseBodyData& setTotalPages(int64_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    // totalRecords Field Functions 
    bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
    void deleteTotalRecords() { this->totalRecords_ = nullptr;};
    inline int64_t totalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0L) };
    inline GetLibraryListResponseBodyData& setTotalRecords(int64_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


  protected:
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<vector<Models::GetLibraryListResponseBodyDataRecords>> records_ = nullptr;
    std::shared_ptr<int64_t> totalPages_ = nullptr;
    std::shared_ptr<int64_t> totalRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
