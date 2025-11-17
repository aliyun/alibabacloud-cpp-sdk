// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSEMBEDLISTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSEMBEDLISTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorksEmbedListResponseBodyResultData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetWorksEmbedListResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorksEmbedListResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorksEmbedListResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    GetWorksEmbedListResponseBodyResult() = default ;
    GetWorksEmbedListResponseBodyResult(const GetWorksEmbedListResponseBodyResult &) = default ;
    GetWorksEmbedListResponseBodyResult(GetWorksEmbedListResponseBodyResult &&) = default ;
    GetWorksEmbedListResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorksEmbedListResponseBodyResult() = default ;
    GetWorksEmbedListResponseBodyResult& operator=(const GetWorksEmbedListResponseBodyResult &) = default ;
    GetWorksEmbedListResponseBodyResult& operator=(GetWorksEmbedListResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->totalNum_ == nullptr && return this->totalPages_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::GetWorksEmbedListResponseBodyResultData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::GetWorksEmbedListResponseBodyResultData>) };
    inline vector<Models::GetWorksEmbedListResponseBodyResultData> data() { DARABONBA_PTR_GET(data_, vector<Models::GetWorksEmbedListResponseBodyResultData>) };
    inline GetWorksEmbedListResponseBodyResult& setData(const vector<Models::GetWorksEmbedListResponseBodyResultData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWorksEmbedListResponseBodyResult& setData(vector<Models::GetWorksEmbedListResponseBodyResultData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetWorksEmbedListResponseBodyResult& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetWorksEmbedListResponseBodyResult& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline GetWorksEmbedListResponseBodyResult& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int64_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0L) };
    inline GetWorksEmbedListResponseBodyResult& setTotalPages(int64_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // Array of reports
    std::shared_ptr<vector<Models::GetWorksEmbedListResponseBodyResultData>> data_ = nullptr;
    // Page number
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // Number of items per page
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Total number of items
    std::shared_ptr<int64_t> totalNum_ = nullptr;
    // Total number of pages
    std::shared_ptr<int64_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
