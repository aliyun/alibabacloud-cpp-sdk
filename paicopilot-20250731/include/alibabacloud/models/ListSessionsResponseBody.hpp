// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Session.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class ListSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSessionsResponseBody() = default ;
    ListSessionsResponseBody(const ListSessionsResponseBody &) = default ;
    ListSessionsResponseBody(ListSessionsResponseBody &&) = default ;
    ListSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionsResponseBody() = default ;
    ListSessionsResponseBody& operator=(const ListSessionsResponseBody &) = default ;
    ListSessionsResponseBody& operator=(ListSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sessions_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<Session> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Session>) };
    inline vector<Session> getSessions() { DARABONBA_PTR_GET(sessions_, vector<Session>) };
    inline ListSessionsResponseBody& setSessions(const vector<Session> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline ListSessionsResponseBody& setSessions(vector<Session> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSessionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<Session>> sessions_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
