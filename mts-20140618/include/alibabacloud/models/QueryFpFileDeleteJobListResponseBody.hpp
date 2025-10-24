// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPFILEDELETEJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPFILEDELETEJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList.hpp>
#include <alibabacloud/models/QueryFpFileDeleteJobListResponseBodyNonExistIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpFileDeleteJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpFileDeleteJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpFileDeleteJobList, fpFileDeleteJobList_);
      DARABONBA_PTR_TO_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpFileDeleteJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpFileDeleteJobList, fpFileDeleteJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryFpFileDeleteJobListResponseBody() = default ;
    QueryFpFileDeleteJobListResponseBody(const QueryFpFileDeleteJobListResponseBody &) = default ;
    QueryFpFileDeleteJobListResponseBody(QueryFpFileDeleteJobListResponseBody &&) = default ;
    QueryFpFileDeleteJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpFileDeleteJobListResponseBody() = default ;
    QueryFpFileDeleteJobListResponseBody& operator=(const QueryFpFileDeleteJobListResponseBody &) = default ;
    QueryFpFileDeleteJobListResponseBody& operator=(QueryFpFileDeleteJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpFileDeleteJobList_ == nullptr
        && return this->nonExistIds_ == nullptr && return this->requestId_ == nullptr; };
    // fpFileDeleteJobList Field Functions 
    bool hasFpFileDeleteJobList() const { return this->fpFileDeleteJobList_ != nullptr;};
    void deleteFpFileDeleteJobList() { this->fpFileDeleteJobList_ = nullptr;};
    inline const QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList & fpFileDeleteJobList() const { DARABONBA_PTR_GET_CONST(fpFileDeleteJobList_, QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList) };
    inline QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList fpFileDeleteJobList() { DARABONBA_PTR_GET(fpFileDeleteJobList_, QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList) };
    inline QueryFpFileDeleteJobListResponseBody& setFpFileDeleteJobList(const QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList & fpFileDeleteJobList) { DARABONBA_PTR_SET_VALUE(fpFileDeleteJobList_, fpFileDeleteJobList) };
    inline QueryFpFileDeleteJobListResponseBody& setFpFileDeleteJobList(QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList && fpFileDeleteJobList) { DARABONBA_PTR_SET_RVALUE(fpFileDeleteJobList_, fpFileDeleteJobList) };


    // nonExistIds Field Functions 
    bool hasNonExistIds() const { return this->nonExistIds_ != nullptr;};
    void deleteNonExistIds() { this->nonExistIds_ = nullptr;};
    inline const QueryFpFileDeleteJobListResponseBodyNonExistIds & nonExistIds() const { DARABONBA_PTR_GET_CONST(nonExistIds_, QueryFpFileDeleteJobListResponseBodyNonExistIds) };
    inline QueryFpFileDeleteJobListResponseBodyNonExistIds nonExistIds() { DARABONBA_PTR_GET(nonExistIds_, QueryFpFileDeleteJobListResponseBodyNonExistIds) };
    inline QueryFpFileDeleteJobListResponseBody& setNonExistIds(const QueryFpFileDeleteJobListResponseBodyNonExistIds & nonExistIds) { DARABONBA_PTR_SET_VALUE(nonExistIds_, nonExistIds) };
    inline QueryFpFileDeleteJobListResponseBody& setNonExistIds(QueryFpFileDeleteJobListResponseBodyNonExistIds && nonExistIds) { DARABONBA_PTR_SET_RVALUE(nonExistIds_, nonExistIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFpFileDeleteJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The jobs of deleting media files from a media fingerprint library. For more information, see the "FpFileDeleteJob" section of the [Data types](https://help.aliyun.com/document_detail/93555.html) topic.
    std::shared_ptr<QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList> fpFileDeleteJobList_ = nullptr;
    // The response parameters.
    std::shared_ptr<QueryFpFileDeleteJobListResponseBodyNonExistIds> nonExistIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
