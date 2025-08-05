// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOTSTABLESNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOTSTABLESNAPSHOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOtsTableSnapshotsResponseBodySnapshots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeOtsTableSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOtsTableSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOtsTableSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeOtsTableSnapshotsResponseBody() = default ;
    DescribeOtsTableSnapshotsResponseBody(const DescribeOtsTableSnapshotsResponseBody &) = default ;
    DescribeOtsTableSnapshotsResponseBody(DescribeOtsTableSnapshotsResponseBody &&) = default ;
    DescribeOtsTableSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOtsTableSnapshotsResponseBody() = default ;
    DescribeOtsTableSnapshotsResponseBody& operator=(const DescribeOtsTableSnapshotsResponseBody &) = default ;
    DescribeOtsTableSnapshotsResponseBody& operator=(DescribeOtsTableSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->limit_ != nullptr && this->message_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->snapshots_ != nullptr
        && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeOtsTableSnapshotsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline DescribeOtsTableSnapshotsResponseBody& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeOtsTableSnapshotsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeOtsTableSnapshotsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOtsTableSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<DescribeOtsTableSnapshotsResponseBodySnapshots> & snapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<DescribeOtsTableSnapshotsResponseBodySnapshots>) };
    inline vector<DescribeOtsTableSnapshotsResponseBodySnapshots> snapshots() { DARABONBA_PTR_GET(snapshots_, vector<DescribeOtsTableSnapshotsResponseBodySnapshots>) };
    inline DescribeOtsTableSnapshotsResponseBody& setSnapshots(const vector<DescribeOtsTableSnapshotsResponseBodySnapshots> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline DescribeOtsTableSnapshotsResponseBody& setSnapshots(vector<DescribeOtsTableSnapshotsResponseBodySnapshots> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeOtsTableSnapshotsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The number of backup snapshots that are displayed on the current page.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The returned message. If the request was successful, "successful" is returned. If the request failed, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The token that is required to obtain the next page of backup snapshots.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The backup snapshots.
    std::shared_ptr<vector<DescribeOtsTableSnapshotsResponseBodySnapshots>> snapshots_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
