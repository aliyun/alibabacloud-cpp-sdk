// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAuditHistoryResponseBodyHistories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAuditHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Histories, histories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Histories, histories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetAuditHistoryResponseBody() = default ;
    GetAuditHistoryResponseBody(const GetAuditHistoryResponseBody &) = default ;
    GetAuditHistoryResponseBody(GetAuditHistoryResponseBody &&) = default ;
    GetAuditHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditHistoryResponseBody() = default ;
    GetAuditHistoryResponseBody& operator=(const GetAuditHistoryResponseBody &) = default ;
    GetAuditHistoryResponseBody& operator=(GetAuditHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->histories_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->total_ == nullptr; };
    // histories Field Functions 
    bool hasHistories() const { return this->histories_ != nullptr;};
    void deleteHistories() { this->histories_ = nullptr;};
    inline const vector<GetAuditHistoryResponseBodyHistories> & histories() const { DARABONBA_PTR_GET_CONST(histories_, vector<GetAuditHistoryResponseBodyHistories>) };
    inline vector<GetAuditHistoryResponseBodyHistories> histories() { DARABONBA_PTR_GET(histories_, vector<GetAuditHistoryResponseBodyHistories>) };
    inline GetAuditHistoryResponseBody& setHistories(const vector<GetAuditHistoryResponseBodyHistories> & histories) { DARABONBA_PTR_SET_VALUE(histories_, histories) };
    inline GetAuditHistoryResponseBody& setHistories(vector<GetAuditHistoryResponseBodyHistories> && histories) { DARABONBA_PTR_SET_RVALUE(histories_, histories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuditHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAuditHistoryResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetAuditHistoryResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The review records.
    std::shared_ptr<vector<GetAuditHistoryResponseBodyHistories>> histories_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The manual review result. Valid values:
    // - **Normal**: The video can be played.
    // - **Blocked**: The video is blocked.
    std::shared_ptr<string> status_ = nullptr;
    // The total number of review records.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
