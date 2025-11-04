// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPipelinesResponseBodyPipelineList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListPipelinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineList, pipelineList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineList, pipelineList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPipelinesResponseBody() = default ;
    ListPipelinesResponseBody(const ListPipelinesResponseBody &) = default ;
    ListPipelinesResponseBody(ListPipelinesResponseBody &&) = default ;
    ListPipelinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelinesResponseBody() = default ;
    ListPipelinesResponseBody& operator=(const ListPipelinesResponseBody &) = default ;
    ListPipelinesResponseBody& operator=(ListPipelinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipelineList_ == nullptr
        && return this->requestId_ == nullptr; };
    // pipelineList Field Functions 
    bool hasPipelineList() const { return this->pipelineList_ != nullptr;};
    void deletePipelineList() { this->pipelineList_ = nullptr;};
    inline const vector<ListPipelinesResponseBodyPipelineList> & pipelineList() const { DARABONBA_PTR_GET_CONST(pipelineList_, vector<ListPipelinesResponseBodyPipelineList>) };
    inline vector<ListPipelinesResponseBodyPipelineList> pipelineList() { DARABONBA_PTR_GET(pipelineList_, vector<ListPipelinesResponseBodyPipelineList>) };
    inline ListPipelinesResponseBody& setPipelineList(const vector<ListPipelinesResponseBodyPipelineList> & pipelineList) { DARABONBA_PTR_SET_VALUE(pipelineList_, pipelineList) };
    inline ListPipelinesResponseBody& setPipelineList(vector<ListPipelinesResponseBodyPipelineList> && pipelineList) { DARABONBA_PTR_SET_RVALUE(pipelineList_, pipelineList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPipelinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried MPS queues.
    std::shared_ptr<vector<ListPipelinesResponseBodyPipelineList>> pipelineList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
