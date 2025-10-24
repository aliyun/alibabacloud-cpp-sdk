// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPIPELINELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPIPELINELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryPipelineListResponseBodyNonExistPids.hpp>
#include <alibabacloud/models/QueryPipelineListResponseBodyPipelineList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryPipelineListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPipelineListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistPids, nonExistPids_);
      DARABONBA_PTR_TO_JSON(PipelineList, pipelineList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPipelineListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistPids, nonExistPids_);
      DARABONBA_PTR_FROM_JSON(PipelineList, pipelineList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPipelineListResponseBody() = default ;
    QueryPipelineListResponseBody(const QueryPipelineListResponseBody &) = default ;
    QueryPipelineListResponseBody(QueryPipelineListResponseBody &&) = default ;
    QueryPipelineListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPipelineListResponseBody() = default ;
    QueryPipelineListResponseBody& operator=(const QueryPipelineListResponseBody &) = default ;
    QueryPipelineListResponseBody& operator=(QueryPipelineListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nonExistPids_ == nullptr
        && return this->pipelineList_ == nullptr && return this->requestId_ == nullptr; };
    // nonExistPids Field Functions 
    bool hasNonExistPids() const { return this->nonExistPids_ != nullptr;};
    void deleteNonExistPids() { this->nonExistPids_ = nullptr;};
    inline const QueryPipelineListResponseBodyNonExistPids & nonExistPids() const { DARABONBA_PTR_GET_CONST(nonExistPids_, QueryPipelineListResponseBodyNonExistPids) };
    inline QueryPipelineListResponseBodyNonExistPids nonExistPids() { DARABONBA_PTR_GET(nonExistPids_, QueryPipelineListResponseBodyNonExistPids) };
    inline QueryPipelineListResponseBody& setNonExistPids(const QueryPipelineListResponseBodyNonExistPids & nonExistPids) { DARABONBA_PTR_SET_VALUE(nonExistPids_, nonExistPids) };
    inline QueryPipelineListResponseBody& setNonExistPids(QueryPipelineListResponseBodyNonExistPids && nonExistPids) { DARABONBA_PTR_SET_RVALUE(nonExistPids_, nonExistPids) };


    // pipelineList Field Functions 
    bool hasPipelineList() const { return this->pipelineList_ != nullptr;};
    void deletePipelineList() { this->pipelineList_ = nullptr;};
    inline const QueryPipelineListResponseBodyPipelineList & pipelineList() const { DARABONBA_PTR_GET_CONST(pipelineList_, QueryPipelineListResponseBodyPipelineList) };
    inline QueryPipelineListResponseBodyPipelineList pipelineList() { DARABONBA_PTR_GET(pipelineList_, QueryPipelineListResponseBodyPipelineList) };
    inline QueryPipelineListResponseBody& setPipelineList(const QueryPipelineListResponseBodyPipelineList & pipelineList) { DARABONBA_PTR_SET_VALUE(pipelineList_, pipelineList) };
    inline QueryPipelineListResponseBody& setPipelineList(QueryPipelineListResponseBodyPipelineList && pipelineList) { DARABONBA_PTR_SET_RVALUE(pipelineList_, pipelineList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPipelineListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of MPS queues that do not exist.
    std::shared_ptr<QueryPipelineListResponseBodyNonExistPids> nonExistPids_ = nullptr;
    // The MPS queues.
    std::shared_ptr<QueryPipelineListResponseBodyPipelineList> pipelineList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
