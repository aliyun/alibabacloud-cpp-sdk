// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRenderingSessionsResponseBodySessions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRenderingSessionsResponseBody() = default ;
    ListRenderingSessionsResponseBody(const ListRenderingSessionsResponseBody &) = default ;
    ListRenderingSessionsResponseBody(ListRenderingSessionsResponseBody &&) = default ;
    ListRenderingSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingSessionsResponseBody() = default ;
    ListRenderingSessionsResponseBody& operator=(const ListRenderingSessionsResponseBody &) = default ;
    ListRenderingSessionsResponseBody& operator=(ListRenderingSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sessions_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRenderingSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<ListRenderingSessionsResponseBodySessions> & sessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<ListRenderingSessionsResponseBodySessions>) };
    inline vector<ListRenderingSessionsResponseBodySessions> sessions() { DARABONBA_PTR_GET(sessions_, vector<ListRenderingSessionsResponseBodySessions>) };
    inline ListRenderingSessionsResponseBody& setSessions(const vector<ListRenderingSessionsResponseBodySessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline ListRenderingSessionsResponseBody& setSessions(vector<ListRenderingSessionsResponseBodySessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRenderingSessionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListRenderingSessionsResponseBodySessions>> sessions_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
