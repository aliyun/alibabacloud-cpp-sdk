// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECEIVERLISTREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECEIVERLISTREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ReceiverListReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReceiverListReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(useridList, useridList_);
    };
    friend void from_json(const Darabonba::Json& j, ReceiverListReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(useridList, useridList_);
    };
    ReceiverListReportResponseBody() = default ;
    ReceiverListReportResponseBody(const ReceiverListReportResponseBody &) = default ;
    ReceiverListReportResponseBody(ReceiverListReportResponseBody &&) = default ;
    ReceiverListReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReceiverListReportResponseBody() = default ;
    ReceiverListReportResponseBody& operator=(const ReceiverListReportResponseBody &) = default ;
    ReceiverListReportResponseBody& operator=(ReceiverListReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasMore_ != nullptr
        && this->nextCursor_ != nullptr && this->requestId_ != nullptr && this->useridList_ != nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ReceiverListReportResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextCursor Field Functions 
    bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
    void deleteNextCursor() { this->nextCursor_ = nullptr;};
    inline int64_t nextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, 0L) };
    inline ReceiverListReportResponseBody& setNextCursor(int64_t nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReceiverListReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // useridList Field Functions 
    bool hasUseridList() const { return this->useridList_ != nullptr;};
    void deleteUseridList() { this->useridList_ = nullptr;};
    inline const vector<string> & useridList() const { DARABONBA_PTR_GET_CONST(useridList_, vector<string>) };
    inline vector<string> useridList() { DARABONBA_PTR_GET(useridList_, vector<string>) };
    inline ReceiverListReportResponseBody& setUseridList(const vector<string> & useridList) { DARABONBA_PTR_SET_VALUE(useridList_, useridList) };
    inline ReceiverListReportResponseBody& setUseridList(vector<string> && useridList) { DARABONBA_PTR_SET_RVALUE(useridList_, useridList) };


  protected:
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<int64_t> nextCursor_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> useridList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
