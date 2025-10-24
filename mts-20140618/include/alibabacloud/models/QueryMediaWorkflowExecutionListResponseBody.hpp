// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWEXECUTIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWEXECUTIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList.hpp>
#include <alibabacloud/models/QueryMediaWorkflowExecutionListResponseBodyNonExistRunIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaWorkflowExecutionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaWorkflowExecutionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaWorkflowExecutionList, mediaWorkflowExecutionList_);
      DARABONBA_PTR_TO_JSON(NonExistRunIds, nonExistRunIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaWorkflowExecutionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaWorkflowExecutionList, mediaWorkflowExecutionList_);
      DARABONBA_PTR_FROM_JSON(NonExistRunIds, nonExistRunIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMediaWorkflowExecutionListResponseBody() = default ;
    QueryMediaWorkflowExecutionListResponseBody(const QueryMediaWorkflowExecutionListResponseBody &) = default ;
    QueryMediaWorkflowExecutionListResponseBody(QueryMediaWorkflowExecutionListResponseBody &&) = default ;
    QueryMediaWorkflowExecutionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaWorkflowExecutionListResponseBody() = default ;
    QueryMediaWorkflowExecutionListResponseBody& operator=(const QueryMediaWorkflowExecutionListResponseBody &) = default ;
    QueryMediaWorkflowExecutionListResponseBody& operator=(QueryMediaWorkflowExecutionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaWorkflowExecutionList_ == nullptr
        && return this->nonExistRunIds_ == nullptr && return this->requestId_ == nullptr; };
    // mediaWorkflowExecutionList Field Functions 
    bool hasMediaWorkflowExecutionList() const { return this->mediaWorkflowExecutionList_ != nullptr;};
    void deleteMediaWorkflowExecutionList() { this->mediaWorkflowExecutionList_ = nullptr;};
    inline const QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList & mediaWorkflowExecutionList() const { DARABONBA_PTR_GET_CONST(mediaWorkflowExecutionList_, QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList) };
    inline QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList mediaWorkflowExecutionList() { DARABONBA_PTR_GET(mediaWorkflowExecutionList_, QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList) };
    inline QueryMediaWorkflowExecutionListResponseBody& setMediaWorkflowExecutionList(const QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList & mediaWorkflowExecutionList) { DARABONBA_PTR_SET_VALUE(mediaWorkflowExecutionList_, mediaWorkflowExecutionList) };
    inline QueryMediaWorkflowExecutionListResponseBody& setMediaWorkflowExecutionList(QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList && mediaWorkflowExecutionList) { DARABONBA_PTR_SET_RVALUE(mediaWorkflowExecutionList_, mediaWorkflowExecutionList) };


    // nonExistRunIds Field Functions 
    bool hasNonExistRunIds() const { return this->nonExistRunIds_ != nullptr;};
    void deleteNonExistRunIds() { this->nonExistRunIds_ = nullptr;};
    inline const QueryMediaWorkflowExecutionListResponseBodyNonExistRunIds & nonExistRunIds() const { DARABONBA_PTR_GET_CONST(nonExistRunIds_, QueryMediaWorkflowExecutionListResponseBodyNonExistRunIds) };
    inline QueryMediaWorkflowExecutionListResponseBodyNonExistRunIds nonExistRunIds() { DARABONBA_PTR_GET(nonExistRunIds_, QueryMediaWorkflowExecutionListResponseBodyNonExistRunIds) };
    inline QueryMediaWorkflowExecutionListResponseBody& setNonExistRunIds(const QueryMediaWorkflowExecutionListResponseBodyNonExistRunIds & nonExistRunIds) { DARABONBA_PTR_SET_VALUE(nonExistRunIds_, nonExistRunIds) };
    inline QueryMediaWorkflowExecutionListResponseBody& setNonExistRunIds(QueryMediaWorkflowExecutionListResponseBodyNonExistRunIds && nonExistRunIds) { DARABONBA_PTR_SET_RVALUE(nonExistRunIds_, nonExistRunIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMediaWorkflowExecutionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the media workflows.
    std::shared_ptr<QueryMediaWorkflowExecutionListResponseBodyMediaWorkflowExecutionList> mediaWorkflowExecutionList_ = nullptr;
    // The IDs of the execution instances that do not exist.
    std::shared_ptr<QueryMediaWorkflowExecutionListResponseBodyNonExistRunIds> nonExistRunIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
