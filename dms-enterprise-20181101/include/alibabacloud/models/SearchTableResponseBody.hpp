// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchTableResponseBodySearchTableList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchTableList, searchTableList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchTableList, searchTableList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchTableResponseBody() = default ;
    SearchTableResponseBody(const SearchTableResponseBody &) = default ;
    SearchTableResponseBody(SearchTableResponseBody &&) = default ;
    SearchTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTableResponseBody() = default ;
    SearchTableResponseBody& operator=(const SearchTableResponseBody &) = default ;
    SearchTableResponseBody& operator=(SearchTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->searchTableList_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SearchTableResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline SearchTableResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchTableList Field Functions 
    bool hasSearchTableList() const { return this->searchTableList_ != nullptr;};
    void deleteSearchTableList() { this->searchTableList_ = nullptr;};
    inline const SearchTableResponseBodySearchTableList & searchTableList() const { DARABONBA_PTR_GET_CONST(searchTableList_, SearchTableResponseBodySearchTableList) };
    inline SearchTableResponseBodySearchTableList searchTableList() { DARABONBA_PTR_GET(searchTableList_, SearchTableResponseBodySearchTableList) };
    inline SearchTableResponseBody& setSearchTableList(const SearchTableResponseBodySearchTableList & searchTableList) { DARABONBA_PTR_SET_VALUE(searchTableList_, searchTableList) };
    inline SearchTableResponseBody& setSearchTableList(SearchTableResponseBodySearchTableList && searchTableList) { DARABONBA_PTR_SET_RVALUE(searchTableList_, searchTableList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchTableResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchTableResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the tables.
    std::shared_ptr<SearchTableResponseBodySearchTableList> searchTableList_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
