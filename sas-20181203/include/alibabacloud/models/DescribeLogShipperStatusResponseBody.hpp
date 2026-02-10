// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSHIPPERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSHIPPERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLogShipperStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogShipperStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogShipperStatus, logShipperStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogShipperStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogShipperStatus, logShipperStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLogShipperStatusResponseBody() = default ;
    DescribeLogShipperStatusResponseBody(const DescribeLogShipperStatusResponseBody &) = default ;
    DescribeLogShipperStatusResponseBody(DescribeLogShipperStatusResponseBody &&) = default ;
    DescribeLogShipperStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogShipperStatusResponseBody() = default ;
    DescribeLogShipperStatusResponseBody& operator=(const DescribeLogShipperStatusResponseBody &) = default ;
    DescribeLogShipperStatusResponseBody& operator=(DescribeLogShipperStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogShipperStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogShipperStatus& obj) { 
        DARABONBA_PTR_TO_JSON(AuthStatus, authStatus_);
        DARABONBA_PTR_TO_JSON(BuyStatus, buyStatus_);
        DARABONBA_PTR_TO_JSON(EtlMetaVersion, etlMetaVersion_);
        DARABONBA_PTR_TO_JSON(OpenStatus, openStatus_);
        DARABONBA_PTR_TO_JSON(PostPaidOpenStatus, postPaidOpenStatus_);
        DARABONBA_PTR_TO_JSON(PostPaidSupportStatus, postPaidSupportStatus_);
        DARABONBA_PTR_TO_JSON(SlsProjectStatus, slsProjectStatus_);
        DARABONBA_PTR_TO_JSON(SlsServiceStatus, slsServiceStatus_);
      };
      friend void from_json(const Darabonba::Json& j, LogShipperStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthStatus, authStatus_);
        DARABONBA_PTR_FROM_JSON(BuyStatus, buyStatus_);
        DARABONBA_PTR_FROM_JSON(EtlMetaVersion, etlMetaVersion_);
        DARABONBA_PTR_FROM_JSON(OpenStatus, openStatus_);
        DARABONBA_PTR_FROM_JSON(PostPaidOpenStatus, postPaidOpenStatus_);
        DARABONBA_PTR_FROM_JSON(PostPaidSupportStatus, postPaidSupportStatus_);
        DARABONBA_PTR_FROM_JSON(SlsProjectStatus, slsProjectStatus_);
        DARABONBA_PTR_FROM_JSON(SlsServiceStatus, slsServiceStatus_);
      };
      LogShipperStatus() = default ;
      LogShipperStatus(const LogShipperStatus &) = default ;
      LogShipperStatus(LogShipperStatus &&) = default ;
      LogShipperStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogShipperStatus() = default ;
      LogShipperStatus& operator=(const LogShipperStatus &) = default ;
      LogShipperStatus& operator=(LogShipperStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authStatus_ == nullptr
        && this->buyStatus_ == nullptr && this->etlMetaVersion_ == nullptr && this->openStatus_ == nullptr && this->postPaidOpenStatus_ == nullptr && this->postPaidSupportStatus_ == nullptr
        && this->slsProjectStatus_ == nullptr && this->slsServiceStatus_ == nullptr; };
      // authStatus Field Functions 
      bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
      void deleteAuthStatus() { this->authStatus_ = nullptr;};
      inline string getAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, "") };
      inline LogShipperStatus& setAuthStatus(string authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


      // buyStatus Field Functions 
      bool hasBuyStatus() const { return this->buyStatus_ != nullptr;};
      void deleteBuyStatus() { this->buyStatus_ = nullptr;};
      inline string getBuyStatus() const { DARABONBA_PTR_GET_DEFAULT(buyStatus_, "") };
      inline LogShipperStatus& setBuyStatus(string buyStatus) { DARABONBA_PTR_SET_VALUE(buyStatus_, buyStatus) };


      // etlMetaVersion Field Functions 
      bool hasEtlMetaVersion() const { return this->etlMetaVersion_ != nullptr;};
      void deleteEtlMetaVersion() { this->etlMetaVersion_ = nullptr;};
      inline string getEtlMetaVersion() const { DARABONBA_PTR_GET_DEFAULT(etlMetaVersion_, "") };
      inline LogShipperStatus& setEtlMetaVersion(string etlMetaVersion) { DARABONBA_PTR_SET_VALUE(etlMetaVersion_, etlMetaVersion) };


      // openStatus Field Functions 
      bool hasOpenStatus() const { return this->openStatus_ != nullptr;};
      void deleteOpenStatus() { this->openStatus_ = nullptr;};
      inline string getOpenStatus() const { DARABONBA_PTR_GET_DEFAULT(openStatus_, "") };
      inline LogShipperStatus& setOpenStatus(string openStatus) { DARABONBA_PTR_SET_VALUE(openStatus_, openStatus) };


      // postPaidOpenStatus Field Functions 
      bool hasPostPaidOpenStatus() const { return this->postPaidOpenStatus_ != nullptr;};
      void deletePostPaidOpenStatus() { this->postPaidOpenStatus_ = nullptr;};
      inline string getPostPaidOpenStatus() const { DARABONBA_PTR_GET_DEFAULT(postPaidOpenStatus_, "") };
      inline LogShipperStatus& setPostPaidOpenStatus(string postPaidOpenStatus) { DARABONBA_PTR_SET_VALUE(postPaidOpenStatus_, postPaidOpenStatus) };


      // postPaidSupportStatus Field Functions 
      bool hasPostPaidSupportStatus() const { return this->postPaidSupportStatus_ != nullptr;};
      void deletePostPaidSupportStatus() { this->postPaidSupportStatus_ = nullptr;};
      inline string getPostPaidSupportStatus() const { DARABONBA_PTR_GET_DEFAULT(postPaidSupportStatus_, "") };
      inline LogShipperStatus& setPostPaidSupportStatus(string postPaidSupportStatus) { DARABONBA_PTR_SET_VALUE(postPaidSupportStatus_, postPaidSupportStatus) };


      // slsProjectStatus Field Functions 
      bool hasSlsProjectStatus() const { return this->slsProjectStatus_ != nullptr;};
      void deleteSlsProjectStatus() { this->slsProjectStatus_ = nullptr;};
      inline string getSlsProjectStatus() const { DARABONBA_PTR_GET_DEFAULT(slsProjectStatus_, "") };
      inline LogShipperStatus& setSlsProjectStatus(string slsProjectStatus) { DARABONBA_PTR_SET_VALUE(slsProjectStatus_, slsProjectStatus) };


      // slsServiceStatus Field Functions 
      bool hasSlsServiceStatus() const { return this->slsServiceStatus_ != nullptr;};
      void deleteSlsServiceStatus() { this->slsServiceStatus_ = nullptr;};
      inline string getSlsServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(slsServiceStatus_, "") };
      inline LogShipperStatus& setSlsServiceStatus(string slsServiceStatus) { DARABONBA_PTR_SET_VALUE(slsServiceStatus_, slsServiceStatus) };


    protected:
      // Indicates whether Security Center is authorized to access Log Service. Valid values:
      // 
      // *   **yes**
      // *   **no**
      shared_ptr<string> authStatus_ {};
      // Indicates whether the log analysis feature is purchased. Valid values:
      // 
      // *   **yes**
      // *   **no**
      shared_ptr<string> buyStatus_ {};
      // The version of the log analysis field. Valid values:
      // - SAS_V1
      // - SAS_V2
      shared_ptr<string> etlMetaVersion_ {};
      // The status of the log analysis feature. Valid values:
      // 
      // *   **yes**: enabled
      // *   **no**: disabled
      shared_ptr<string> openStatus_ {};
      // Indicates whether the pay-as-you-go billing method is used. Valid values:
      // 
      // *   **yes**
      // *   **no**
      shared_ptr<string> postPaidOpenStatus_ {};
      // Indicates whether the log analysis feature supports the pay-as-you-go billing method. Valid values:
      // 
      // *   **yes**
      // *   **no**
      shared_ptr<string> postPaidSupportStatus_ {};
      // The status of the dedicated Log Service project. Valid values:
      // 
      // *   **Normal**: normal
      // *   **Disable**: disabled
      shared_ptr<string> slsProjectStatus_ {};
      // Indicates whether Log Service is activated. Valid values:
      // 
      // *   **yes**
      // *   **no**
      shared_ptr<string> slsServiceStatus_ {};
    };

    virtual bool empty() const override { return this->logShipperStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // logShipperStatus Field Functions 
    bool hasLogShipperStatus() const { return this->logShipperStatus_ != nullptr;};
    void deleteLogShipperStatus() { this->logShipperStatus_ = nullptr;};
    inline const DescribeLogShipperStatusResponseBody::LogShipperStatus & getLogShipperStatus() const { DARABONBA_PTR_GET_CONST(logShipperStatus_, DescribeLogShipperStatusResponseBody::LogShipperStatus) };
    inline DescribeLogShipperStatusResponseBody::LogShipperStatus getLogShipperStatus() { DARABONBA_PTR_GET(logShipperStatus_, DescribeLogShipperStatusResponseBody::LogShipperStatus) };
    inline DescribeLogShipperStatusResponseBody& setLogShipperStatus(const DescribeLogShipperStatusResponseBody::LogShipperStatus & logShipperStatus) { DARABONBA_PTR_SET_VALUE(logShipperStatus_, logShipperStatus) };
    inline DescribeLogShipperStatusResponseBody& setLogShipperStatus(DescribeLogShipperStatusResponseBody::LogShipperStatus && logShipperStatus) { DARABONBA_PTR_SET_RVALUE(logShipperStatus_, logShipperStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogShipperStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status information.
    shared_ptr<DescribeLogShipperStatusResponseBody::LogShipperStatus> logShipperStatus_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
