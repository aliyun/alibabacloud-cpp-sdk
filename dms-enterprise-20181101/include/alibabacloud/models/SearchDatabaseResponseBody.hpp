// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchDatabaseResponseBodySearchDatabaseList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchDatabaseList, searchDatabaseList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchDatabaseList, searchDatabaseList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchDatabaseResponseBody() = default ;
    SearchDatabaseResponseBody(const SearchDatabaseResponseBody &) = default ;
    SearchDatabaseResponseBody(SearchDatabaseResponseBody &&) = default ;
    SearchDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDatabaseResponseBody() = default ;
    SearchDatabaseResponseBody& operator=(const SearchDatabaseResponseBody &) = default ;
    SearchDatabaseResponseBody& operator=(SearchDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->searchDatabaseList_ == nullptr && return this->success_ == nullptr && return this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SearchDatabaseResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline SearchDatabaseResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchDatabaseList Field Functions 
    bool hasSearchDatabaseList() const { return this->searchDatabaseList_ != nullptr;};
    void deleteSearchDatabaseList() { this->searchDatabaseList_ = nullptr;};
    inline const SearchDatabaseResponseBodySearchDatabaseList & searchDatabaseList() const { DARABONBA_PTR_GET_CONST(searchDatabaseList_, SearchDatabaseResponseBodySearchDatabaseList) };
    inline SearchDatabaseResponseBodySearchDatabaseList searchDatabaseList() { DARABONBA_PTR_GET(searchDatabaseList_, SearchDatabaseResponseBodySearchDatabaseList) };
    inline SearchDatabaseResponseBody& setSearchDatabaseList(const SearchDatabaseResponseBodySearchDatabaseList & searchDatabaseList) { DARABONBA_PTR_SET_VALUE(searchDatabaseList_, searchDatabaseList) };
    inline SearchDatabaseResponseBody& setSearchDatabaseList(SearchDatabaseResponseBodySearchDatabaseList && searchDatabaseList) { DARABONBA_PTR_SET_RVALUE(searchDatabaseList_, searchDatabaseList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchDatabaseResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchDatabaseResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the databases.
    std::shared_ptr<SearchDatabaseResponseBodySearchDatabaseList> searchDatabaseList_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
