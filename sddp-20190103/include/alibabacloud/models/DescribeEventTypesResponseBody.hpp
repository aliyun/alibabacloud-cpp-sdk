// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventTypesResponseBodyEventTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEventTypesResponseBody() = default ;
    DescribeEventTypesResponseBody(const DescribeEventTypesResponseBody &) = default ;
    DescribeEventTypesResponseBody(DescribeEventTypesResponseBody &&) = default ;
    DescribeEventTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventTypesResponseBody() = default ;
    DescribeEventTypesResponseBody& operator=(const DescribeEventTypesResponseBody &) = default ;
    DescribeEventTypesResponseBody& operator=(DescribeEventTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventTypeList_ == nullptr
        && return this->requestId_ == nullptr; };
    // eventTypeList Field Functions 
    bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
    void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
    inline const vector<DescribeEventTypesResponseBodyEventTypeList> & eventTypeList() const { DARABONBA_PTR_GET_CONST(eventTypeList_, vector<DescribeEventTypesResponseBodyEventTypeList>) };
    inline vector<DescribeEventTypesResponseBodyEventTypeList> eventTypeList() { DARABONBA_PTR_GET(eventTypeList_, vector<DescribeEventTypesResponseBodyEventTypeList>) };
    inline DescribeEventTypesResponseBody& setEventTypeList(const vector<DescribeEventTypesResponseBodyEventTypeList> & eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };
    inline DescribeEventTypesResponseBody& setEventTypeList(vector<DescribeEventTypesResponseBodyEventTypeList> && eventTypeList) { DARABONBA_PTR_SET_RVALUE(eventTypeList_, eventTypeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the types of anomalous events.
    // 
    // > If you leave the ParentTypeId parameter empty, anomalous event types are returned. If you set the ParentTypeId parameter, anomalous event subtypes under the specified anomalous event type are returned.
    std::shared_ptr<vector<DescribeEventTypesResponseBodyEventTypeList>> eventTypeList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
