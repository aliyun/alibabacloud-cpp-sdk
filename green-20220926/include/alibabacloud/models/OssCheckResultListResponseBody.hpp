// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OSSCHECKRESULTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OSSCHECKRESULTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OssCheckResultListResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class OssCheckResultListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OssCheckResultListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, OssCheckResultListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    OssCheckResultListResponseBody() = default ;
    OssCheckResultListResponseBody(const OssCheckResultListResponseBody &) = default ;
    OssCheckResultListResponseBody(OssCheckResultListResponseBody &&) = default ;
    OssCheckResultListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OssCheckResultListResponseBody() = default ;
    OssCheckResultListResponseBody& operator=(const OssCheckResultListResponseBody &) = default ;
    OssCheckResultListResponseBody& operator=(OssCheckResultListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authStatus_ == nullptr
        && return this->currentPage_ == nullptr && return this->items_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // authStatus Field Functions 
    bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
    void deleteAuthStatus() { this->authStatus_ = nullptr;};
    inline string authStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, "") };
    inline OssCheckResultListResponseBody& setAuthStatus(string authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline OssCheckResultListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<OssCheckResultListResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<OssCheckResultListResponseBodyItems>) };
    inline vector<OssCheckResultListResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<OssCheckResultListResponseBodyItems>) };
    inline OssCheckResultListResponseBody& setItems(const vector<OssCheckResultListResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline OssCheckResultListResponseBody& setItems(vector<OssCheckResultListResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline OssCheckResultListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OssCheckResultListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline OssCheckResultListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Backend-assigned ID, used to uniquely identify a request. Can be used for troubleshooting.
    std::shared_ptr<string> authStatus_ = nullptr;
    // Page size.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Current page number.
    std::shared_ptr<vector<OssCheckResultListResponseBodyItems>> items_ = nullptr;
    // Total number of records.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Task status.
    std::shared_ptr<string> requestId_ = nullptr;
    // Authorization status.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
