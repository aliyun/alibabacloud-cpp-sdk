// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELISTPAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELISTPAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceListPageResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetServiceListPageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceListPageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceListPageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    GetServiceListPageResponseBodyData() = default ;
    GetServiceListPageResponseBodyData(const GetServiceListPageResponseBodyData &) = default ;
    GetServiceListPageResponseBodyData(GetServiceListPageResponseBodyData &&) = default ;
    GetServiceListPageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceListPageResponseBodyData() = default ;
    GetServiceListPageResponseBodyData& operator=(const GetServiceListPageResponseBodyData &) = default ;
    GetServiceListPageResponseBodyData& operator=(GetServiceListPageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->result_ == nullptr && return this->totalSize_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline GetServiceListPageResponseBodyData& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetServiceListPageResponseBodyData& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::GetServiceListPageResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::GetServiceListPageResponseBodyDataResult>) };
    inline vector<Models::GetServiceListPageResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::GetServiceListPageResponseBodyDataResult>) };
    inline GetServiceListPageResponseBodyData& setResult(const vector<Models::GetServiceListPageResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetServiceListPageResponseBodyData& setResult(vector<Models::GetServiceListPageResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline string totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, "") };
    inline GetServiceListPageResponseBodyData& setTotalSize(string totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The data on the current page.
    std::shared_ptr<vector<Models::GetServiceListPageResponseBodyDataResult>> result_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
