// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENSASSUSPEVENTTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENSASSUSPEVENTTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNsasSuspEventTypeResponseBodyEventTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeNsasSuspEventTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNsasSuspEventTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNsasSuspEventTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNsasSuspEventTypeResponseBody() = default ;
    DescribeNsasSuspEventTypeResponseBody(const DescribeNsasSuspEventTypeResponseBody &) = default ;
    DescribeNsasSuspEventTypeResponseBody(DescribeNsasSuspEventTypeResponseBody &&) = default ;
    DescribeNsasSuspEventTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNsasSuspEventTypeResponseBody() = default ;
    DescribeNsasSuspEventTypeResponseBody& operator=(const DescribeNsasSuspEventTypeResponseBody &) = default ;
    DescribeNsasSuspEventTypeResponseBody& operator=(DescribeNsasSuspEventTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventTypes_ != nullptr
        && this->requestId_ != nullptr; };
    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline const vector<DescribeNsasSuspEventTypeResponseBodyEventTypes> & eventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<DescribeNsasSuspEventTypeResponseBodyEventTypes>) };
    inline vector<DescribeNsasSuspEventTypeResponseBodyEventTypes> eventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<DescribeNsasSuspEventTypeResponseBodyEventTypes>) };
    inline DescribeNsasSuspEventTypeResponseBody& setEventTypes(const vector<DescribeNsasSuspEventTypeResponseBodyEventTypes> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
    inline DescribeNsasSuspEventTypeResponseBody& setEventTypes(vector<DescribeNsasSuspEventTypeResponseBodyEventTypes> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNsasSuspEventTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about the alert type.
    std::shared_ptr<vector<DescribeNsasSuspEventTypeResponseBodyEventTypes>> eventTypes_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
