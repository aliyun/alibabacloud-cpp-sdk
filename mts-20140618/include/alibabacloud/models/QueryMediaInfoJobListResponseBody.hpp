// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAINFOJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAINFOJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaInfoJobListResponseBodyMediaInfoJobList.hpp>
#include <alibabacloud/models/QueryMediaInfoJobListResponseBodyNonExistMediaInfoJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaInfoJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaInfoJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaInfoJobList, mediaInfoJobList_);
      DARABONBA_PTR_TO_JSON(NonExistMediaInfoJobIds, nonExistMediaInfoJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaInfoJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaInfoJobList, mediaInfoJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistMediaInfoJobIds, nonExistMediaInfoJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMediaInfoJobListResponseBody() = default ;
    QueryMediaInfoJobListResponseBody(const QueryMediaInfoJobListResponseBody &) = default ;
    QueryMediaInfoJobListResponseBody(QueryMediaInfoJobListResponseBody &&) = default ;
    QueryMediaInfoJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaInfoJobListResponseBody() = default ;
    QueryMediaInfoJobListResponseBody& operator=(const QueryMediaInfoJobListResponseBody &) = default ;
    QueryMediaInfoJobListResponseBody& operator=(QueryMediaInfoJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaInfoJobList_ == nullptr
        && return this->nonExistMediaInfoJobIds_ == nullptr && return this->requestId_ == nullptr; };
    // mediaInfoJobList Field Functions 
    bool hasMediaInfoJobList() const { return this->mediaInfoJobList_ != nullptr;};
    void deleteMediaInfoJobList() { this->mediaInfoJobList_ = nullptr;};
    inline const QueryMediaInfoJobListResponseBodyMediaInfoJobList & mediaInfoJobList() const { DARABONBA_PTR_GET_CONST(mediaInfoJobList_, QueryMediaInfoJobListResponseBodyMediaInfoJobList) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobList mediaInfoJobList() { DARABONBA_PTR_GET(mediaInfoJobList_, QueryMediaInfoJobListResponseBodyMediaInfoJobList) };
    inline QueryMediaInfoJobListResponseBody& setMediaInfoJobList(const QueryMediaInfoJobListResponseBodyMediaInfoJobList & mediaInfoJobList) { DARABONBA_PTR_SET_VALUE(mediaInfoJobList_, mediaInfoJobList) };
    inline QueryMediaInfoJobListResponseBody& setMediaInfoJobList(QueryMediaInfoJobListResponseBodyMediaInfoJobList && mediaInfoJobList) { DARABONBA_PTR_SET_RVALUE(mediaInfoJobList_, mediaInfoJobList) };


    // nonExistMediaInfoJobIds Field Functions 
    bool hasNonExistMediaInfoJobIds() const { return this->nonExistMediaInfoJobIds_ != nullptr;};
    void deleteNonExistMediaInfoJobIds() { this->nonExistMediaInfoJobIds_ = nullptr;};
    inline const QueryMediaInfoJobListResponseBodyNonExistMediaInfoJobIds & nonExistMediaInfoJobIds() const { DARABONBA_PTR_GET_CONST(nonExistMediaInfoJobIds_, QueryMediaInfoJobListResponseBodyNonExistMediaInfoJobIds) };
    inline QueryMediaInfoJobListResponseBodyNonExistMediaInfoJobIds nonExistMediaInfoJobIds() { DARABONBA_PTR_GET(nonExistMediaInfoJobIds_, QueryMediaInfoJobListResponseBodyNonExistMediaInfoJobIds) };
    inline QueryMediaInfoJobListResponseBody& setNonExistMediaInfoJobIds(const QueryMediaInfoJobListResponseBodyNonExistMediaInfoJobIds & nonExistMediaInfoJobIds) { DARABONBA_PTR_SET_VALUE(nonExistMediaInfoJobIds_, nonExistMediaInfoJobIds) };
    inline QueryMediaInfoJobListResponseBody& setNonExistMediaInfoJobIds(QueryMediaInfoJobListResponseBodyNonExistMediaInfoJobIds && nonExistMediaInfoJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistMediaInfoJobIds_, nonExistMediaInfoJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMediaInfoJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of each returned media information analysis job.
    std::shared_ptr<QueryMediaInfoJobListResponseBodyMediaInfoJobList> mediaInfoJobList_ = nullptr;
    // Nonexistent media information analysis jobs.
    std::shared_ptr<QueryMediaInfoJobListResponseBodyNonExistMediaInfoJobIds> nonExistMediaInfoJobIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
