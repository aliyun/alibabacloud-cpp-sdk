// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENOTIFICATIONTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENOTIFICATIONTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeNotificationTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNotificationTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationTypes, notificationTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNotificationTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationTypes, notificationTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNotificationTypesResponseBody() = default ;
    DescribeNotificationTypesResponseBody(const DescribeNotificationTypesResponseBody &) = default ;
    DescribeNotificationTypesResponseBody(DescribeNotificationTypesResponseBody &&) = default ;
    DescribeNotificationTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNotificationTypesResponseBody() = default ;
    DescribeNotificationTypesResponseBody& operator=(const DescribeNotificationTypesResponseBody &) = default ;
    DescribeNotificationTypesResponseBody& operator=(DescribeNotificationTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notificationTypes_ != nullptr
        && this->requestId_ != nullptr; };
    // notificationTypes Field Functions 
    bool hasNotificationTypes() const { return this->notificationTypes_ != nullptr;};
    void deleteNotificationTypes() { this->notificationTypes_ = nullptr;};
    inline const vector<string> & notificationTypes() const { DARABONBA_PTR_GET_CONST(notificationTypes_, vector<string>) };
    inline vector<string> notificationTypes() { DARABONBA_PTR_GET(notificationTypes_, vector<string>) };
    inline DescribeNotificationTypesResponseBody& setNotificationTypes(const vector<string> & notificationTypes) { DARABONBA_PTR_SET_VALUE(notificationTypes_, notificationTypes) };
    inline DescribeNotificationTypesResponseBody& setNotificationTypes(vector<string> && notificationTypes) { DARABONBA_PTR_SET_RVALUE(notificationTypes_, notificationTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNotificationTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The types of the notifications.
    // 
    // *   AUTOSCALING:SCALE_OUT_SUCCESS: The scale-out activity succeeds.
    // *   AUTOSCALING:SCALE_IN_SUCCESS: The scale-in activity succeeds.
    // *   AUTOSCALING:SCALE_OUT_ERROR: The scale-out activity fails.
    // *   AUTOSCALING:SCALE_IN_ERROR: The scale-in activity fails.
    // *   AUTOSCALING:SCALE_REJECT: The request for scaling activities is rejected.
    // *   AUTOSCALING:SCALE_OUT_START: The scale-out activity starts.
    // *   AUTOSCALING:SCALE_IN_START: The scale-in activity starts.
    // *   AUTOSCALING:SCHEDULE_TASK_EXPIRING: Auto Scaling sends a notification when a scheduled task is about to expire.
    std::shared_ptr<vector<string>> notificationTypes_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
