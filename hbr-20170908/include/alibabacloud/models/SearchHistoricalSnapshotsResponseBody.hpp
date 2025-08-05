// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHHISTORICALSNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHHISTORICALSNAPSHOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchHistoricalSnapshotsResponseBodySnapshots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class SearchHistoricalSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchHistoricalSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchHistoricalSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchHistoricalSnapshotsResponseBody() = default ;
    SearchHistoricalSnapshotsResponseBody(const SearchHistoricalSnapshotsResponseBody &) = default ;
    SearchHistoricalSnapshotsResponseBody(SearchHistoricalSnapshotsResponseBody &&) = default ;
    SearchHistoricalSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchHistoricalSnapshotsResponseBody() = default ;
    SearchHistoricalSnapshotsResponseBody& operator=(const SearchHistoricalSnapshotsResponseBody &) = default ;
    SearchHistoricalSnapshotsResponseBody& operator=(SearchHistoricalSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->limit_ != nullptr && this->message_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->snapshots_ != nullptr
        && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchHistoricalSnapshotsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline SearchHistoricalSnapshotsResponseBody& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchHistoricalSnapshotsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchHistoricalSnapshotsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchHistoricalSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const SearchHistoricalSnapshotsResponseBodySnapshots & snapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, SearchHistoricalSnapshotsResponseBodySnapshots) };
    inline SearchHistoricalSnapshotsResponseBodySnapshots snapshots() { DARABONBA_PTR_GET(snapshots_, SearchHistoricalSnapshotsResponseBodySnapshots) };
    inline SearchHistoricalSnapshotsResponseBody& setSnapshots(const SearchHistoricalSnapshotsResponseBodySnapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline SearchHistoricalSnapshotsResponseBody& setSnapshots(SearchHistoricalSnapshotsResponseBodySnapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchHistoricalSnapshotsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SearchHistoricalSnapshotsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The HTTP status code. The status code 200 indicates that the call is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The number of historical backup snapshots that are displayed on the current page.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The token that is required to obtain the next page of backup snapshots.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The historical backup snapshots.
    std::shared_ptr<SearchHistoricalSnapshotsResponseBodySnapshots> snapshots_ = nullptr;
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of returned backup snapshots that meet the specified conditions.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
