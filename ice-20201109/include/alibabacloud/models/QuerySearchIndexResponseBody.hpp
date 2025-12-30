// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSEARCHINDEXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSEARCHINDEXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QuerySearchIndexResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySearchIndexResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IndexStatus, indexStatus_);
      DARABONBA_PTR_TO_JSON(IndexType, indexType_);
      DARABONBA_PTR_TO_JSON(MediaTotal, mediaTotal_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySearchIndexResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IndexStatus, indexStatus_);
      DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
      DARABONBA_PTR_FROM_JSON(MediaTotal, mediaTotal_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySearchIndexResponseBody() = default ;
    QuerySearchIndexResponseBody(const QuerySearchIndexResponseBody &) = default ;
    QuerySearchIndexResponseBody(QuerySearchIndexResponseBody &&) = default ;
    QuerySearchIndexResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySearchIndexResponseBody() = default ;
    QuerySearchIndexResponseBody& operator=(const QuerySearchIndexResponseBody &) = default ;
    QuerySearchIndexResponseBody& operator=(QuerySearchIndexResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->indexStatus_ == nullptr && this->indexType_ == nullptr && this->mediaTotal_ == nullptr && this->requestId_ == nullptr && this->searchLibName_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySearchIndexResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // indexStatus Field Functions 
    bool hasIndexStatus() const { return this->indexStatus_ != nullptr;};
    void deleteIndexStatus() { this->indexStatus_ = nullptr;};
    inline string getIndexStatus() const { DARABONBA_PTR_GET_DEFAULT(indexStatus_, "") };
    inline QuerySearchIndexResponseBody& setIndexStatus(string indexStatus) { DARABONBA_PTR_SET_VALUE(indexStatus_, indexStatus) };


    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string getIndexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline QuerySearchIndexResponseBody& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


    // mediaTotal Field Functions 
    bool hasMediaTotal() const { return this->mediaTotal_ != nullptr;};
    void deleteMediaTotal() { this->mediaTotal_ = nullptr;};
    inline string getMediaTotal() const { DARABONBA_PTR_GET_DEFAULT(mediaTotal_, "") };
    inline QuerySearchIndexResponseBody& setMediaTotal(string mediaTotal) { DARABONBA_PTR_SET_VALUE(mediaTotal_, mediaTotal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySearchIndexResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string getSearchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline QuerySearchIndexResponseBody& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline QuerySearchIndexResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The state of the index. Valid values:
    // 
    // *   active: the index is enabled.
    // *   Deactive: the index is not enabled.
    shared_ptr<string> indexStatus_ {};
    // The category of the index. Valid values:
    // 
    // *   mm: large visual model.
    // *   face: face recognition.
    // *   aiLabel: smart tagging.
    shared_ptr<string> indexType_ {};
    // The total number of media assets.
    shared_ptr<string> mediaTotal_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The name of the search library.
    shared_ptr<string> searchLibName_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
