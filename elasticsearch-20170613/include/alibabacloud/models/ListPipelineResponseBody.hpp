// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListPipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListPipelineResponseBody() = default ;
    ListPipelineResponseBody(const ListPipelineResponseBody &) = default ;
    ListPipelineResponseBody(ListPipelineResponseBody &&) = default ;
    ListPipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineResponseBody() = default ;
    ListPipelineResponseBody& operator=(const ListPipelineResponseBody &) = default ;
    ListPipelineResponseBody& operator=(ListPipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(gmtCreatedTime, gmtCreatedTime_);
        DARABONBA_PTR_TO_JSON(gmtUpdateTime, gmtUpdateTime_);
        DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(pipelineStatus, pipelineStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(gmtCreatedTime, gmtCreatedTime_);
        DARABONBA_PTR_FROM_JSON(gmtUpdateTime, gmtUpdateTime_);
        DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(pipelineStatus, pipelineStatus_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreatedTime_ == nullptr
        && this->gmtUpdateTime_ == nullptr && this->pipelineId_ == nullptr && this->pipelineStatus_ == nullptr; };
      // gmtCreatedTime Field Functions 
      bool hasGmtCreatedTime() const { return this->gmtCreatedTime_ != nullptr;};
      void deleteGmtCreatedTime() { this->gmtCreatedTime_ = nullptr;};
      inline string getGmtCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedTime_, "") };
      inline Result& setGmtCreatedTime(string gmtCreatedTime) { DARABONBA_PTR_SET_VALUE(gmtCreatedTime_, gmtCreatedTime) };


      // gmtUpdateTime Field Functions 
      bool hasGmtUpdateTime() const { return this->gmtUpdateTime_ != nullptr;};
      void deleteGmtUpdateTime() { this->gmtUpdateTime_ = nullptr;};
      inline string getGmtUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdateTime_, "") };
      inline Result& setGmtUpdateTime(string gmtUpdateTime) { DARABONBA_PTR_SET_VALUE(gmtUpdateTime_, gmtUpdateTime) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline Result& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // pipelineStatus Field Functions 
      bool hasPipelineStatus() const { return this->pipelineStatus_ != nullptr;};
      void deletePipelineStatus() { this->pipelineStatus_ = nullptr;};
      inline string getPipelineStatus() const { DARABONBA_PTR_GET_DEFAULT(pipelineStatus_, "") };
      inline Result& setPipelineStatus(string pipelineStatus) { DARABONBA_PTR_SET_VALUE(pipelineStatus_, pipelineStatus) };


    protected:
      shared_ptr<string> gmtCreatedTime_ {};
      shared_ptr<string> gmtUpdateTime_ {};
      // The status of the pipeline. Supported:
      // 
      // *   NOT_DEPLOYED: The node is not deployed.
      // *   RUNNING
      // *   DELETED: Deleted. The console does not display this status.
      shared_ptr<string> pipelineId_ {};
      shared_ptr<string> pipelineStatus_ {};
    };

    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->xTotalCount_ == nullptr; };
      // xTotalCount Field Functions 
      bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
      void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
      inline int32_t getXTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0) };
      inline Headers& setXTotalCount(int32_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


    protected:
      // The time when the pipeline was updated.
      shared_ptr<int32_t> xTotalCount_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListPipelineResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListPipelineResponseBody::Headers) };
    inline ListPipelineResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListPipelineResponseBody::Headers) };
    inline ListPipelineResponseBody& setHeaders(const ListPipelineResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListPipelineResponseBody& setHeaders(ListPipelineResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListPipelineResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListPipelineResponseBody::Result>) };
    inline vector<ListPipelineResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListPipelineResponseBody::Result>) };
    inline ListPipelineResponseBody& setResult(const vector<ListPipelineResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListPipelineResponseBody& setResult(vector<ListPipelineResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the ApsaraVideo Media Processing (MPS) queue that is used to run the job.
    shared_ptr<ListPipelineResponseBody::Headers> headers_ {};
    // The response.
    shared_ptr<string> requestId_ {};
    // The time when the pipeline was created.
    shared_ptr<vector<ListPipelineResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
