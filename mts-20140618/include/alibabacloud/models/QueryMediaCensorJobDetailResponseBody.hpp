// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaCensorJobDetail, mediaCensorJobDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaCensorJobDetail, mediaCensorJobDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMediaCensorJobDetailResponseBody() = default ;
    QueryMediaCensorJobDetailResponseBody(const QueryMediaCensorJobDetailResponseBody &) = default ;
    QueryMediaCensorJobDetailResponseBody(QueryMediaCensorJobDetailResponseBody &&) = default ;
    QueryMediaCensorJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobDetailResponseBody() = default ;
    QueryMediaCensorJobDetailResponseBody& operator=(const QueryMediaCensorJobDetailResponseBody &) = default ;
    QueryMediaCensorJobDetailResponseBody& operator=(QueryMediaCensorJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaCensorJobDetail_ == nullptr
        && return this->requestId_ == nullptr; };
    // mediaCensorJobDetail Field Functions 
    bool hasMediaCensorJobDetail() const { return this->mediaCensorJobDetail_ != nullptr;};
    void deleteMediaCensorJobDetail() { this->mediaCensorJobDetail_ = nullptr;};
    inline const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail & mediaCensorJobDetail() const { DARABONBA_PTR_GET_CONST(mediaCensorJobDetail_, QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail mediaCensorJobDetail() { DARABONBA_PTR_GET(mediaCensorJobDetail_, QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail) };
    inline QueryMediaCensorJobDetailResponseBody& setMediaCensorJobDetail(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail & mediaCensorJobDetail) { DARABONBA_PTR_SET_VALUE(mediaCensorJobDetail_, mediaCensorJobDetail) };
    inline QueryMediaCensorJobDetailResponseBody& setMediaCensorJobDetail(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail && mediaCensorJobDetail) { DARABONBA_PTR_SET_RVALUE(mediaCensorJobDetail_, mediaCensorJobDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMediaCensorJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results of the content moderation job.
    std::shared_ptr<QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail> mediaCensorJobDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
