// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORTRIALCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORTRIALCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudVendorTrialConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudVendorTrialConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudVendorTrialConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudVendorTrialConfigResponseBody() = default ;
    DescribeCloudVendorTrialConfigResponseBody(const DescribeCloudVendorTrialConfigResponseBody &) = default ;
    DescribeCloudVendorTrialConfigResponseBody(DescribeCloudVendorTrialConfigResponseBody &&) = default ;
    DescribeCloudVendorTrialConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudVendorTrialConfigResponseBody() = default ;
    DescribeCloudVendorTrialConfigResponseBody& operator=(const DescribeCloudVendorTrialConfigResponseBody &) = default ;
    DescribeCloudVendorTrialConfigResponseBody& operator=(DescribeCloudVendorTrialConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthInfo, authInfo_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthInfo, authInfo_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authInfo_ == nullptr
        && this->message_ == nullptr && this->status_ == nullptr; };
      // authInfo Field Functions 
      bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
      void deleteAuthInfo() { this->authInfo_ = nullptr;};
      inline string getAuthInfo() const { DARABONBA_PTR_GET_DEFAULT(authInfo_, "") };
      inline Data& setAuthInfo(string authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Multi-cloud configuration information:
      // - *AWS*: Output parameters sqsQueueName, sqsRegion
      // - *Tencent*: Output parameters kafkaUserName, kafkaBootstrapServers, kafkaTopic
      shared_ptr<string> authInfo_ {};
      // Error message returned when connection fails.
      shared_ptr<string> message_ {};
      // The access status of the Trail configuration. Values:
      // - **init**: Initialization in progress
      // - **verify**: Configuration verification in progress
      // - **enable**: Configuration enabled
      // - **disable**: Configuration disabled
      // - **error**: Configuration access error
      // - **timeout**: Configuration access timeout
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCloudVendorTrialConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCloudVendorTrialConfigResponseBody::Data) };
    inline DescribeCloudVendorTrialConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCloudVendorTrialConfigResponseBody::Data) };
    inline DescribeCloudVendorTrialConfigResponseBody& setData(const DescribeCloudVendorTrialConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCloudVendorTrialConfigResponseBody& setData(DescribeCloudVendorTrialConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudVendorTrialConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data.
    shared_ptr<DescribeCloudVendorTrialConfigResponseBody::Data> data_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
