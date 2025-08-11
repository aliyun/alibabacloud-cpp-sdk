// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeNotificationConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNotificationConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationConfigurationModels, notificationConfigurationModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNotificationConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationConfigurationModels, notificationConfigurationModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNotificationConfigurationsResponseBody() = default ;
    DescribeNotificationConfigurationsResponseBody(const DescribeNotificationConfigurationsResponseBody &) = default ;
    DescribeNotificationConfigurationsResponseBody(DescribeNotificationConfigurationsResponseBody &&) = default ;
    DescribeNotificationConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNotificationConfigurationsResponseBody() = default ;
    DescribeNotificationConfigurationsResponseBody& operator=(const DescribeNotificationConfigurationsResponseBody &) = default ;
    DescribeNotificationConfigurationsResponseBody& operator=(DescribeNotificationConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notificationConfigurationModels_ != nullptr
        && this->requestId_ != nullptr; };
    // notificationConfigurationModels Field Functions 
    bool hasNotificationConfigurationModels() const { return this->notificationConfigurationModels_ != nullptr;};
    void deleteNotificationConfigurationModels() { this->notificationConfigurationModels_ = nullptr;};
    inline const vector<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels> & notificationConfigurationModels() const { DARABONBA_PTR_GET_CONST(notificationConfigurationModels_, vector<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels>) };
    inline vector<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels> notificationConfigurationModels() { DARABONBA_PTR_GET(notificationConfigurationModels_, vector<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels>) };
    inline DescribeNotificationConfigurationsResponseBody& setNotificationConfigurationModels(const vector<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels> & notificationConfigurationModels) { DARABONBA_PTR_SET_VALUE(notificationConfigurationModels_, notificationConfigurationModels) };
    inline DescribeNotificationConfigurationsResponseBody& setNotificationConfigurationModels(vector<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels> && notificationConfigurationModels) { DARABONBA_PTR_SET_RVALUE(notificationConfigurationModels_, notificationConfigurationModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNotificationConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The notification settings.
    std::shared_ptr<vector<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels>> notificationConfigurationModels_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
