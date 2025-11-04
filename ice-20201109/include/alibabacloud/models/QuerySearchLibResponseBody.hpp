// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSEARCHLIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSEARCHLIBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySearchLibResponseBodyIndexInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QuerySearchLibResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySearchLibResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IndexInfo, indexInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySearchLibResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IndexInfo, indexInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySearchLibResponseBody() = default ;
    QuerySearchLibResponseBody(const QuerySearchLibResponseBody &) = default ;
    QuerySearchLibResponseBody(QuerySearchLibResponseBody &&) = default ;
    QuerySearchLibResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySearchLibResponseBody() = default ;
    QuerySearchLibResponseBody& operator=(const QuerySearchLibResponseBody &) = default ;
    QuerySearchLibResponseBody& operator=(QuerySearchLibResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->indexInfo_ == nullptr && return this->requestId_ == nullptr && return this->searchLibName_ == nullptr && return this->status_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySearchLibResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // indexInfo Field Functions 
    bool hasIndexInfo() const { return this->indexInfo_ != nullptr;};
    void deleteIndexInfo() { this->indexInfo_ = nullptr;};
    inline const vector<QuerySearchLibResponseBodyIndexInfo> & indexInfo() const { DARABONBA_PTR_GET_CONST(indexInfo_, vector<QuerySearchLibResponseBodyIndexInfo>) };
    inline vector<QuerySearchLibResponseBodyIndexInfo> indexInfo() { DARABONBA_PTR_GET(indexInfo_, vector<QuerySearchLibResponseBodyIndexInfo>) };
    inline QuerySearchLibResponseBody& setIndexInfo(const vector<QuerySearchLibResponseBodyIndexInfo> & indexInfo) { DARABONBA_PTR_SET_VALUE(indexInfo_, indexInfo) };
    inline QuerySearchLibResponseBody& setIndexInfo(vector<QuerySearchLibResponseBodyIndexInfo> && indexInfo) { DARABONBA_PTR_SET_RVALUE(indexInfo_, indexInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySearchLibResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline QuerySearchLibResponseBody& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QuerySearchLibResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline QuerySearchLibResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<QuerySearchLibResponseBodyIndexInfo>> indexInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the search library.
    std::shared_ptr<string> searchLibName_ = nullptr;
    // The status of the search library.
    // 
    // Valid values:
    // 
    // *   normal
    // *   deleting
    // *   deleteFail
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the call was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
