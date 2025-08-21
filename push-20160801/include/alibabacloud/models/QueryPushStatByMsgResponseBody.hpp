// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHSTATBYMSGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHSTATBYMSGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryPushStatByMsgResponseBodyPushStats.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryPushStatByMsgResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushStatByMsgResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PushStats, pushStats_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushStatByMsgResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PushStats, pushStats_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPushStatByMsgResponseBody() = default ;
    QueryPushStatByMsgResponseBody(const QueryPushStatByMsgResponseBody &) = default ;
    QueryPushStatByMsgResponseBody(QueryPushStatByMsgResponseBody &&) = default ;
    QueryPushStatByMsgResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushStatByMsgResponseBody() = default ;
    QueryPushStatByMsgResponseBody& operator=(const QueryPushStatByMsgResponseBody &) = default ;
    QueryPushStatByMsgResponseBody& operator=(QueryPushStatByMsgResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pushStats_ != nullptr
        && this->requestId_ != nullptr; };
    // pushStats Field Functions 
    bool hasPushStats() const { return this->pushStats_ != nullptr;};
    void deletePushStats() { this->pushStats_ = nullptr;};
    inline const QueryPushStatByMsgResponseBodyPushStats & pushStats() const { DARABONBA_PTR_GET_CONST(pushStats_, QueryPushStatByMsgResponseBodyPushStats) };
    inline QueryPushStatByMsgResponseBodyPushStats pushStats() { DARABONBA_PTR_GET(pushStats_, QueryPushStatByMsgResponseBodyPushStats) };
    inline QueryPushStatByMsgResponseBody& setPushStats(const QueryPushStatByMsgResponseBodyPushStats & pushStats) { DARABONBA_PTR_SET_VALUE(pushStats_, pushStats) };
    inline QueryPushStatByMsgResponseBody& setPushStats(QueryPushStatByMsgResponseBodyPushStats && pushStats) { DARABONBA_PTR_SET_RVALUE(pushStats_, pushStats) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPushStatByMsgResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryPushStatByMsgResponseBodyPushStats> pushStats_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
