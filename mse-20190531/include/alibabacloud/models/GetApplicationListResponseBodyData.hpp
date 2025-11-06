// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApplicationListResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetApplicationListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    GetApplicationListResponseBodyData() = default ;
    GetApplicationListResponseBodyData(const GetApplicationListResponseBodyData &) = default ;
    GetApplicationListResponseBodyData(GetApplicationListResponseBodyData &&) = default ;
    GetApplicationListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationListResponseBodyData() = default ;
    GetApplicationListResponseBodyData& operator=(const GetApplicationListResponseBodyData &) = default ;
    GetApplicationListResponseBodyData& operator=(GetApplicationListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->result_ == nullptr && return this->totalSize_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetApplicationListResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetApplicationListResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::GetApplicationListResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::GetApplicationListResponseBodyDataResult>) };
    inline vector<Models::GetApplicationListResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::GetApplicationListResponseBodyDataResult>) };
    inline GetApplicationListResponseBodyData& setResult(const vector<Models::GetApplicationListResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetApplicationListResponseBodyData& setResult(vector<Models::GetApplicationListResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline GetApplicationListResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The data returned.
    std::shared_ptr<vector<Models::GetApplicationListResponseBodyDataResult>> result_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
