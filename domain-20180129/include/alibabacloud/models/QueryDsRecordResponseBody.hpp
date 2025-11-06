// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDSRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDSRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDSRecordResponseBodyDSRecordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDSRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDSRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DSRecordList, DSRecordList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDSRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DSRecordList, DSRecordList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDSRecordResponseBody() = default ;
    QueryDSRecordResponseBody(const QueryDSRecordResponseBody &) = default ;
    QueryDSRecordResponseBody(QueryDSRecordResponseBody &&) = default ;
    QueryDSRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDSRecordResponseBody() = default ;
    QueryDSRecordResponseBody& operator=(const QueryDSRecordResponseBody &) = default ;
    QueryDSRecordResponseBody& operator=(QueryDSRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DSRecordList_ == nullptr
        && return this->requestId_ == nullptr; };
    // DSRecordList Field Functions 
    bool hasDSRecordList() const { return this->DSRecordList_ != nullptr;};
    void deleteDSRecordList() { this->DSRecordList_ = nullptr;};
    inline const vector<QueryDSRecordResponseBodyDSRecordList> & DSRecordList() const { DARABONBA_PTR_GET_CONST(DSRecordList_, vector<QueryDSRecordResponseBodyDSRecordList>) };
    inline vector<QueryDSRecordResponseBodyDSRecordList> DSRecordList() { DARABONBA_PTR_GET(DSRecordList_, vector<QueryDSRecordResponseBodyDSRecordList>) };
    inline QueryDSRecordResponseBody& setDSRecordList(const vector<QueryDSRecordResponseBodyDSRecordList> & DSRecordList) { DARABONBA_PTR_SET_VALUE(DSRecordList_, DSRecordList) };
    inline QueryDSRecordResponseBody& setDSRecordList(vector<QueryDSRecordResponseBodyDSRecordList> && DSRecordList) { DARABONBA_PTR_SET_RVALUE(DSRecordList_, DSRecordList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDSRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<QueryDSRecordResponseBodyDSRecordList>> DSRecordList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
