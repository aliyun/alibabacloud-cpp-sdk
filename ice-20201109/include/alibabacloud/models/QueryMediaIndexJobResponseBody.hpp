// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAINDEXJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAINDEXJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaIndexJobResponseBodyIndexJobInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryMediaIndexJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaIndexJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IndexJobInfoList, indexJobInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaIndexJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IndexJobInfoList, indexJobInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryMediaIndexJobResponseBody() = default ;
    QueryMediaIndexJobResponseBody(const QueryMediaIndexJobResponseBody &) = default ;
    QueryMediaIndexJobResponseBody(QueryMediaIndexJobResponseBody &&) = default ;
    QueryMediaIndexJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaIndexJobResponseBody() = default ;
    QueryMediaIndexJobResponseBody& operator=(const QueryMediaIndexJobResponseBody &) = default ;
    QueryMediaIndexJobResponseBody& operator=(QueryMediaIndexJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->indexJobInfoList_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryMediaIndexJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // indexJobInfoList Field Functions 
    bool hasIndexJobInfoList() const { return this->indexJobInfoList_ != nullptr;};
    void deleteIndexJobInfoList() { this->indexJobInfoList_ = nullptr;};
    inline const vector<QueryMediaIndexJobResponseBodyIndexJobInfoList> & indexJobInfoList() const { DARABONBA_PTR_GET_CONST(indexJobInfoList_, vector<QueryMediaIndexJobResponseBodyIndexJobInfoList>) };
    inline vector<QueryMediaIndexJobResponseBodyIndexJobInfoList> indexJobInfoList() { DARABONBA_PTR_GET(indexJobInfoList_, vector<QueryMediaIndexJobResponseBodyIndexJobInfoList>) };
    inline QueryMediaIndexJobResponseBody& setIndexJobInfoList(const vector<QueryMediaIndexJobResponseBodyIndexJobInfoList> & indexJobInfoList) { DARABONBA_PTR_SET_VALUE(indexJobInfoList_, indexJobInfoList) };
    inline QueryMediaIndexJobResponseBody& setIndexJobInfoList(vector<QueryMediaIndexJobResponseBodyIndexJobInfoList> && indexJobInfoList) { DARABONBA_PTR_SET_RVALUE(indexJobInfoList_, indexJobInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMediaIndexJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline QueryMediaIndexJobResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The indexing jobs enabled for the media asset.
    std::shared_ptr<vector<QueryMediaIndexJobResponseBodyIndexJobInfoList>> indexJobInfoList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
