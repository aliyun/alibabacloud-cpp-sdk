// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSESSIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSESSIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySessionInfoResponseBodyQueryResourceInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QuerySessionInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySessionInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(queryResourceInfoList, queryResourceInfoList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySessionInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(queryResourceInfoList, queryResourceInfoList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    QuerySessionInfoResponseBody() = default ;
    QuerySessionInfoResponseBody(const QuerySessionInfoResponseBody &) = default ;
    QuerySessionInfoResponseBody(QuerySessionInfoResponseBody &&) = default ;
    QuerySessionInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySessionInfoResponseBody() = default ;
    QuerySessionInfoResponseBody& operator=(const QuerySessionInfoResponseBody &) = default ;
    QuerySessionInfoResponseBody& operator=(QuerySessionInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryResourceInfoList_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // queryResourceInfoList Field Functions 
    bool hasQueryResourceInfoList() const { return this->queryResourceInfoList_ != nullptr;};
    void deleteQueryResourceInfoList() { this->queryResourceInfoList_ = nullptr;};
    inline const vector<QuerySessionInfoResponseBodyQueryResourceInfoList> & queryResourceInfoList() const { DARABONBA_PTR_GET_CONST(queryResourceInfoList_, vector<QuerySessionInfoResponseBodyQueryResourceInfoList>) };
    inline vector<QuerySessionInfoResponseBodyQueryResourceInfoList> queryResourceInfoList() { DARABONBA_PTR_GET(queryResourceInfoList_, vector<QuerySessionInfoResponseBodyQueryResourceInfoList>) };
    inline QuerySessionInfoResponseBody& setQueryResourceInfoList(const vector<QuerySessionInfoResponseBodyQueryResourceInfoList> & queryResourceInfoList) { DARABONBA_PTR_SET_VALUE(queryResourceInfoList_, queryResourceInfoList) };
    inline QuerySessionInfoResponseBody& setQueryResourceInfoList(vector<QuerySessionInfoResponseBodyQueryResourceInfoList> && queryResourceInfoList) { DARABONBA_PTR_SET_RVALUE(queryResourceInfoList_, queryResourceInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySessionInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline QuerySessionInfoResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<QuerySessionInfoResponseBodyQueryResourceInfoList>> queryResourceInfoList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
