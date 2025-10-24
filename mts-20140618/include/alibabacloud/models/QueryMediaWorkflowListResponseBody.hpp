// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaWorkflowListResponseBodyMediaWorkflowList.hpp>
#include <alibabacloud/models/QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaWorkflowListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaWorkflowListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaWorkflowList, mediaWorkflowList_);
      DARABONBA_PTR_TO_JSON(NonExistMediaWorkflowIds, nonExistMediaWorkflowIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaWorkflowListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaWorkflowList, mediaWorkflowList_);
      DARABONBA_PTR_FROM_JSON(NonExistMediaWorkflowIds, nonExistMediaWorkflowIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMediaWorkflowListResponseBody() = default ;
    QueryMediaWorkflowListResponseBody(const QueryMediaWorkflowListResponseBody &) = default ;
    QueryMediaWorkflowListResponseBody(QueryMediaWorkflowListResponseBody &&) = default ;
    QueryMediaWorkflowListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaWorkflowListResponseBody() = default ;
    QueryMediaWorkflowListResponseBody& operator=(const QueryMediaWorkflowListResponseBody &) = default ;
    QueryMediaWorkflowListResponseBody& operator=(QueryMediaWorkflowListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaWorkflowList_ == nullptr
        && return this->nonExistMediaWorkflowIds_ == nullptr && return this->requestId_ == nullptr; };
    // mediaWorkflowList Field Functions 
    bool hasMediaWorkflowList() const { return this->mediaWorkflowList_ != nullptr;};
    void deleteMediaWorkflowList() { this->mediaWorkflowList_ = nullptr;};
    inline const QueryMediaWorkflowListResponseBodyMediaWorkflowList & mediaWorkflowList() const { DARABONBA_PTR_GET_CONST(mediaWorkflowList_, QueryMediaWorkflowListResponseBodyMediaWorkflowList) };
    inline QueryMediaWorkflowListResponseBodyMediaWorkflowList mediaWorkflowList() { DARABONBA_PTR_GET(mediaWorkflowList_, QueryMediaWorkflowListResponseBodyMediaWorkflowList) };
    inline QueryMediaWorkflowListResponseBody& setMediaWorkflowList(const QueryMediaWorkflowListResponseBodyMediaWorkflowList & mediaWorkflowList) { DARABONBA_PTR_SET_VALUE(mediaWorkflowList_, mediaWorkflowList) };
    inline QueryMediaWorkflowListResponseBody& setMediaWorkflowList(QueryMediaWorkflowListResponseBodyMediaWorkflowList && mediaWorkflowList) { DARABONBA_PTR_SET_RVALUE(mediaWorkflowList_, mediaWorkflowList) };


    // nonExistMediaWorkflowIds Field Functions 
    bool hasNonExistMediaWorkflowIds() const { return this->nonExistMediaWorkflowIds_ != nullptr;};
    void deleteNonExistMediaWorkflowIds() { this->nonExistMediaWorkflowIds_ = nullptr;};
    inline const QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds & nonExistMediaWorkflowIds() const { DARABONBA_PTR_GET_CONST(nonExistMediaWorkflowIds_, QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds) };
    inline QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds nonExistMediaWorkflowIds() { DARABONBA_PTR_GET(nonExistMediaWorkflowIds_, QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds) };
    inline QueryMediaWorkflowListResponseBody& setNonExistMediaWorkflowIds(const QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds & nonExistMediaWorkflowIds) { DARABONBA_PTR_SET_VALUE(nonExistMediaWorkflowIds_, nonExistMediaWorkflowIds) };
    inline QueryMediaWorkflowListResponseBody& setNonExistMediaWorkflowIds(QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds && nonExistMediaWorkflowIds) { DARABONBA_PTR_SET_RVALUE(nonExistMediaWorkflowIds_, nonExistMediaWorkflowIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMediaWorkflowListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The media workflows.
    std::shared_ptr<QueryMediaWorkflowListResponseBodyMediaWorkflowList> mediaWorkflowList_ = nullptr;
    // The workflows that do not exist.
    std::shared_ptr<QueryMediaWorkflowListResponseBodyNonExistMediaWorkflowIds> nonExistMediaWorkflowIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
