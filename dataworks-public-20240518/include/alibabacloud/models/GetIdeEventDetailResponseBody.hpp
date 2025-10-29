// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIDEEventDetailResponseBodyEventDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetIDEEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIDEEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventDetail, eventDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIDEEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventDetail, eventDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIDEEventDetailResponseBody() = default ;
    GetIDEEventDetailResponseBody(const GetIDEEventDetailResponseBody &) = default ;
    GetIDEEventDetailResponseBody(GetIDEEventDetailResponseBody &&) = default ;
    GetIDEEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIDEEventDetailResponseBody() = default ;
    GetIDEEventDetailResponseBody& operator=(const GetIDEEventDetailResponseBody &) = default ;
    GetIDEEventDetailResponseBody& operator=(GetIDEEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventDetail_ == nullptr
        && return this->requestId_ == nullptr; };
    // eventDetail Field Functions 
    bool hasEventDetail() const { return this->eventDetail_ != nullptr;};
    void deleteEventDetail() { this->eventDetail_ = nullptr;};
    inline const GetIDEEventDetailResponseBodyEventDetail & eventDetail() const { DARABONBA_PTR_GET_CONST(eventDetail_, GetIDEEventDetailResponseBodyEventDetail) };
    inline GetIDEEventDetailResponseBodyEventDetail eventDetail() { DARABONBA_PTR_GET(eventDetail_, GetIDEEventDetailResponseBodyEventDetail) };
    inline GetIDEEventDetailResponseBody& setEventDetail(const GetIDEEventDetailResponseBodyEventDetail & eventDetail) { DARABONBA_PTR_SET_VALUE(eventDetail_, eventDetail) };
    inline GetIDEEventDetailResponseBody& setEventDetail(GetIDEEventDetailResponseBodyEventDetail && eventDetail) { DARABONBA_PTR_SET_RVALUE(eventDetail_, eventDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIDEEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data snapshot that is generated when an extension point event is triggered.
    // 
    // The fields contained in data snapshots vary based on the types of the triggered extension point events. For more information, see the description of the fields.
    std::shared_ptr<GetIDEEventDetailResponseBodyEventDetail> eventDetail_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
