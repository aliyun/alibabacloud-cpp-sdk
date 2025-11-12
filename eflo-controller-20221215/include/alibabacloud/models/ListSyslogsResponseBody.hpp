// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSyslogsResponseBodyLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListSyslogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSyslogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSyslogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSyslogsResponseBody() = default ;
    ListSyslogsResponseBody(const ListSyslogsResponseBody &) = default ;
    ListSyslogsResponseBody(ListSyslogsResponseBody &&) = default ;
    ListSyslogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSyslogsResponseBody() = default ;
    ListSyslogsResponseBody& operator=(const ListSyslogsResponseBody &) = default ;
    ListSyslogsResponseBody& operator=(ListSyslogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logs_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<ListSyslogsResponseBodyLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<ListSyslogsResponseBodyLogs>) };
    inline vector<ListSyslogsResponseBodyLogs> logs() { DARABONBA_PTR_GET(logs_, vector<ListSyslogsResponseBodyLogs>) };
    inline ListSyslogsResponseBody& setLogs(const vector<ListSyslogsResponseBodyLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline ListSyslogsResponseBody& setLogs(vector<ListSyslogsResponseBodyLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSyslogsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSyslogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListSyslogsResponseBodyLogs>> logs_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
