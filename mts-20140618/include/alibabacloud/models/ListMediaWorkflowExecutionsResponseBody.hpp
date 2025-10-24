// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAWORKFLOWEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAWORKFLOWEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListMediaWorkflowExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaWorkflowExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaWorkflowExecutionList, mediaWorkflowExecutionList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaWorkflowExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaWorkflowExecutionList, mediaWorkflowExecutionList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMediaWorkflowExecutionsResponseBody() = default ;
    ListMediaWorkflowExecutionsResponseBody(const ListMediaWorkflowExecutionsResponseBody &) = default ;
    ListMediaWorkflowExecutionsResponseBody(ListMediaWorkflowExecutionsResponseBody &&) = default ;
    ListMediaWorkflowExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaWorkflowExecutionsResponseBody() = default ;
    ListMediaWorkflowExecutionsResponseBody& operator=(const ListMediaWorkflowExecutionsResponseBody &) = default ;
    ListMediaWorkflowExecutionsResponseBody& operator=(ListMediaWorkflowExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaWorkflowExecutionList_ == nullptr
        && return this->nextPageToken_ == nullptr && return this->requestId_ == nullptr; };
    // mediaWorkflowExecutionList Field Functions 
    bool hasMediaWorkflowExecutionList() const { return this->mediaWorkflowExecutionList_ != nullptr;};
    void deleteMediaWorkflowExecutionList() { this->mediaWorkflowExecutionList_ = nullptr;};
    inline const ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList & mediaWorkflowExecutionList() const { DARABONBA_PTR_GET_CONST(mediaWorkflowExecutionList_, ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList) };
    inline ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList mediaWorkflowExecutionList() { DARABONBA_PTR_GET(mediaWorkflowExecutionList_, ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList) };
    inline ListMediaWorkflowExecutionsResponseBody& setMediaWorkflowExecutionList(const ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList & mediaWorkflowExecutionList) { DARABONBA_PTR_SET_VALUE(mediaWorkflowExecutionList_, mediaWorkflowExecutionList) };
    inline ListMediaWorkflowExecutionsResponseBody& setMediaWorkflowExecutionList(ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList && mediaWorkflowExecutionList) { DARABONBA_PTR_SET_RVALUE(mediaWorkflowExecutionList_, mediaWorkflowExecutionList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListMediaWorkflowExecutionsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaWorkflowExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the media workflows.
    std::shared_ptr<ListMediaWorkflowExecutionsResponseBodyMediaWorkflowExecutionList> mediaWorkflowExecutionList_ = nullptr;
    // The returned value of NextPageToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
