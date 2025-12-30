// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAINDEXJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAINDEXJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class IndexJobInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IndexJobInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(GmtFinish, gmtFinish_);
        DARABONBA_PTR_TO_JSON(GmtSubmit, gmtSubmit_);
        DARABONBA_PTR_TO_JSON(IndexType, indexType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, IndexJobInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtFinish, gmtFinish_);
        DARABONBA_PTR_FROM_JSON(GmtSubmit, gmtSubmit_);
        DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      IndexJobInfoList() = default ;
      IndexJobInfoList(const IndexJobInfoList &) = default ;
      IndexJobInfoList(IndexJobInfoList &&) = default ;
      IndexJobInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IndexJobInfoList() = default ;
      IndexJobInfoList& operator=(const IndexJobInfoList &) = default ;
      IndexJobInfoList& operator=(IndexJobInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtFinish_ == nullptr
        && this->gmtSubmit_ == nullptr && this->indexType_ == nullptr && this->status_ == nullptr; };
      // gmtFinish Field Functions 
      bool hasGmtFinish() const { return this->gmtFinish_ != nullptr;};
      void deleteGmtFinish() { this->gmtFinish_ = nullptr;};
      inline string getGmtFinish() const { DARABONBA_PTR_GET_DEFAULT(gmtFinish_, "") };
      inline IndexJobInfoList& setGmtFinish(string gmtFinish) { DARABONBA_PTR_SET_VALUE(gmtFinish_, gmtFinish) };


      // gmtSubmit Field Functions 
      bool hasGmtSubmit() const { return this->gmtSubmit_ != nullptr;};
      void deleteGmtSubmit() { this->gmtSubmit_ = nullptr;};
      inline string getGmtSubmit() const { DARABONBA_PTR_GET_DEFAULT(gmtSubmit_, "") };
      inline IndexJobInfoList& setGmtSubmit(string gmtSubmit) { DARABONBA_PTR_SET_VALUE(gmtSubmit_, gmtSubmit) };


      // indexType Field Functions 
      bool hasIndexType() const { return this->indexType_ != nullptr;};
      void deleteIndexType() { this->indexType_ = nullptr;};
      inline string getIndexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
      inline IndexJobInfoList& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IndexJobInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The end time of the indexing job.
      shared_ptr<string> gmtFinish_ {};
      // The time when the index job was submitted.
      shared_ptr<string> gmtSubmit_ {};
      // The index type. Valid values:
      // 
      // *   mm: large visual model.
      // *   face: face recognition.
      // *   aiLabel: smart tagging.
      shared_ptr<string> indexType_ {};
      // The job status. Valid values:
      // 
      // *   Running
      // *   Success
      // *   Fail
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->indexJobInfoList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryMediaIndexJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // indexJobInfoList Field Functions 
    bool hasIndexJobInfoList() const { return this->indexJobInfoList_ != nullptr;};
    void deleteIndexJobInfoList() { this->indexJobInfoList_ = nullptr;};
    inline const vector<QueryMediaIndexJobResponseBody::IndexJobInfoList> & getIndexJobInfoList() const { DARABONBA_PTR_GET_CONST(indexJobInfoList_, vector<QueryMediaIndexJobResponseBody::IndexJobInfoList>) };
    inline vector<QueryMediaIndexJobResponseBody::IndexJobInfoList> getIndexJobInfoList() { DARABONBA_PTR_GET(indexJobInfoList_, vector<QueryMediaIndexJobResponseBody::IndexJobInfoList>) };
    inline QueryMediaIndexJobResponseBody& setIndexJobInfoList(const vector<QueryMediaIndexJobResponseBody::IndexJobInfoList> & indexJobInfoList) { DARABONBA_PTR_SET_VALUE(indexJobInfoList_, indexJobInfoList) };
    inline QueryMediaIndexJobResponseBody& setIndexJobInfoList(vector<QueryMediaIndexJobResponseBody::IndexJobInfoList> && indexJobInfoList) { DARABONBA_PTR_SET_RVALUE(indexJobInfoList_, indexJobInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMediaIndexJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline QueryMediaIndexJobResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The indexing jobs enabled for the media asset.
    shared_ptr<vector<QueryMediaIndexJobResponseBody::IndexJobInfoList>> indexJobInfoList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
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
