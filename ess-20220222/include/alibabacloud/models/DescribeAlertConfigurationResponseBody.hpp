// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTCONFIGURATIONRESPONSEBODY_HPP_
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
  class DescribeAlertConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScaleStatuses, scaleStatuses_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScaleStatuses, scaleStatuses_);
    };
    DescribeAlertConfigurationResponseBody() = default ;
    DescribeAlertConfigurationResponseBody(const DescribeAlertConfigurationResponseBody &) = default ;
    DescribeAlertConfigurationResponseBody(DescribeAlertConfigurationResponseBody &&) = default ;
    DescribeAlertConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertConfigurationResponseBody() = default ;
    DescribeAlertConfigurationResponseBody& operator=(const DescribeAlertConfigurationResponseBody &) = default ;
    DescribeAlertConfigurationResponseBody& operator=(DescribeAlertConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->scaleStatuses_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scaleStatuses Field Functions 
    bool hasScaleStatuses() const { return this->scaleStatuses_ != nullptr;};
    void deleteScaleStatuses() { this->scaleStatuses_ = nullptr;};
    inline const vector<string> & scaleStatuses() const { DARABONBA_PTR_GET_CONST(scaleStatuses_, vector<string>) };
    inline vector<string> scaleStatuses() { DARABONBA_PTR_GET(scaleStatuses_, vector<string>) };
    inline DescribeAlertConfigurationResponseBody& setScaleStatuses(const vector<string> & scaleStatuses) { DARABONBA_PTR_SET_VALUE(scaleStatuses_, scaleStatuses) };
    inline DescribeAlertConfigurationResponseBody& setScaleStatuses(vector<string> && scaleStatuses) { DARABONBA_PTR_SET_RVALUE(scaleStatuses_, scaleStatuses) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the scaling activities that trigger text message, internal message, or email-based notifications.
    std::shared_ptr<vector<string>> scaleStatuses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
