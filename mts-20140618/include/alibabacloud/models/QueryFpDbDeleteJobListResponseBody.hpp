// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPDBDELETEJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPDBDELETEJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList.hpp>
#include <alibabacloud/models/QueryFpDBDeleteJobListResponseBodyNonExistIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpDBDeleteJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpDBDeleteJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpDBDeleteJobList, fpDBDeleteJobList_);
      DARABONBA_PTR_TO_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpDBDeleteJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpDBDeleteJobList, fpDBDeleteJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryFpDBDeleteJobListResponseBody() = default ;
    QueryFpDBDeleteJobListResponseBody(const QueryFpDBDeleteJobListResponseBody &) = default ;
    QueryFpDBDeleteJobListResponseBody(QueryFpDBDeleteJobListResponseBody &&) = default ;
    QueryFpDBDeleteJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpDBDeleteJobListResponseBody() = default ;
    QueryFpDBDeleteJobListResponseBody& operator=(const QueryFpDBDeleteJobListResponseBody &) = default ;
    QueryFpDBDeleteJobListResponseBody& operator=(QueryFpDBDeleteJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpDBDeleteJobList_ == nullptr
        && return this->nonExistIds_ == nullptr && return this->requestId_ == nullptr; };
    // fpDBDeleteJobList Field Functions 
    bool hasFpDBDeleteJobList() const { return this->fpDBDeleteJobList_ != nullptr;};
    void deleteFpDBDeleteJobList() { this->fpDBDeleteJobList_ = nullptr;};
    inline const QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList & fpDBDeleteJobList() const { DARABONBA_PTR_GET_CONST(fpDBDeleteJobList_, QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList) };
    inline QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList fpDBDeleteJobList() { DARABONBA_PTR_GET(fpDBDeleteJobList_, QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList) };
    inline QueryFpDBDeleteJobListResponseBody& setFpDBDeleteJobList(const QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList & fpDBDeleteJobList) { DARABONBA_PTR_SET_VALUE(fpDBDeleteJobList_, fpDBDeleteJobList) };
    inline QueryFpDBDeleteJobListResponseBody& setFpDBDeleteJobList(QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList && fpDBDeleteJobList) { DARABONBA_PTR_SET_RVALUE(fpDBDeleteJobList_, fpDBDeleteJobList) };


    // nonExistIds Field Functions 
    bool hasNonExistIds() const { return this->nonExistIds_ != nullptr;};
    void deleteNonExistIds() { this->nonExistIds_ = nullptr;};
    inline const QueryFpDBDeleteJobListResponseBodyNonExistIds & nonExistIds() const { DARABONBA_PTR_GET_CONST(nonExistIds_, QueryFpDBDeleteJobListResponseBodyNonExistIds) };
    inline QueryFpDBDeleteJobListResponseBodyNonExistIds nonExistIds() { DARABONBA_PTR_GET(nonExistIds_, QueryFpDBDeleteJobListResponseBodyNonExistIds) };
    inline QueryFpDBDeleteJobListResponseBody& setNonExistIds(const QueryFpDBDeleteJobListResponseBodyNonExistIds & nonExistIds) { DARABONBA_PTR_SET_VALUE(nonExistIds_, nonExistIds) };
    inline QueryFpDBDeleteJobListResponseBody& setNonExistIds(QueryFpDBDeleteJobListResponseBodyNonExistIds && nonExistIds) { DARABONBA_PTR_SET_RVALUE(nonExistIds_, nonExistIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFpDBDeleteJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The jobs of deleting a media fingerprint library. For more information, see the "FpDBDeleteJob" section of the [Data types](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/datatypes) topic.
    std::shared_ptr<QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList> fpDBDeleteJobList_ = nullptr;
    // The IDs of the jobs that do not exist.
    std::shared_ptr<QueryFpDBDeleteJobListResponseBodyNonExistIds> nonExistIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
