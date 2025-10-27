// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORTRIALCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORTRIALCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudVendorTrialConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudVendorTrialConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudVendorTrialConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCloudVendorTrialConfigResponseBodyData() = default ;
    DescribeCloudVendorTrialConfigResponseBodyData(const DescribeCloudVendorTrialConfigResponseBodyData &) = default ;
    DescribeCloudVendorTrialConfigResponseBodyData(DescribeCloudVendorTrialConfigResponseBodyData &&) = default ;
    DescribeCloudVendorTrialConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudVendorTrialConfigResponseBodyData() = default ;
    DescribeCloudVendorTrialConfigResponseBodyData& operator=(const DescribeCloudVendorTrialConfigResponseBodyData &) = default ;
    DescribeCloudVendorTrialConfigResponseBodyData& operator=(DescribeCloudVendorTrialConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authInfo_ == nullptr
        && return this->message_ == nullptr && return this->status_ == nullptr; };
    // authInfo Field Functions 
    bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
    void deleteAuthInfo() { this->authInfo_ = nullptr;};
    inline string authInfo() const { DARABONBA_PTR_GET_DEFAULT(authInfo_, "") };
    inline DescribeCloudVendorTrialConfigResponseBodyData& setAuthInfo(string authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCloudVendorTrialConfigResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCloudVendorTrialConfigResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Multi-cloud configuration information:
    // - *AWS*: Output parameters sqsQueueName, sqsRegion
    // - *Tencent*: Output parameters kafkaUserName, kafkaBootstrapServers, kafkaTopic
    std::shared_ptr<string> authInfo_ = nullptr;
    // Error message returned when connection fails.
    std::shared_ptr<string> message_ = nullptr;
    // The access status of the Trail configuration. Values:
    // - **init**: Initialization in progress
    // - **verify**: Configuration verification in progress
    // - **enable**: Configuration enabled
    // - **disable**: Configuration disabled
    // - **error**: Configuration access error
    // - **timeout**: Configuration access timeout
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
