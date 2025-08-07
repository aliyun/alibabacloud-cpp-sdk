// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAppVersionsResponseBodyAppVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetAppVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersions, appVersions_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersions, appVersions_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetAppVersionsResponseBody() = default ;
    GetAppVersionsResponseBody(const GetAppVersionsResponseBody &) = default ;
    GetAppVersionsResponseBody(GetAppVersionsResponseBody &&) = default ;
    GetAppVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppVersionsResponseBody() = default ;
    GetAppVersionsResponseBody& operator=(const GetAppVersionsResponseBody &) = default ;
    GetAppVersionsResponseBody& operator=(GetAppVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appVersions_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // appVersions Field Functions 
    bool hasAppVersions() const { return this->appVersions_ != nullptr;};
    void deleteAppVersions() { this->appVersions_ = nullptr;};
    inline const vector<GetAppVersionsResponseBodyAppVersions> & appVersions() const { DARABONBA_PTR_GET_CONST(appVersions_, vector<GetAppVersionsResponseBodyAppVersions>) };
    inline vector<GetAppVersionsResponseBodyAppVersions> appVersions() { DARABONBA_PTR_GET(appVersions_, vector<GetAppVersionsResponseBodyAppVersions>) };
    inline GetAppVersionsResponseBody& setAppVersions(const vector<GetAppVersionsResponseBodyAppVersions> & appVersions) { DARABONBA_PTR_SET_VALUE(appVersions_, appVersions) };
    inline GetAppVersionsResponseBody& setAppVersions(vector<GetAppVersionsResponseBodyAppVersions> && appVersions) { DARABONBA_PTR_SET_RVALUE(appVersions_, appVersions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetAppVersionsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetAppVersionsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAppVersionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetAppVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<GetAppVersionsResponseBodyAppVersions>> appVersions_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
