// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSHIPPERSTATUSRESPONSEBODYLOGSHIPPERSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSHIPPERSTATUSRESPONSEBODYLOGSHIPPERSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLogShipperStatusResponseBodyLogShipperStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogShipperStatusResponseBodyLogShipperStatus& obj) { 
      DARABONBA_PTR_TO_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_TO_JSON(BuyStatus, buyStatus_);
      DARABONBA_PTR_TO_JSON(EtlMetaVersion, etlMetaVersion_);
      DARABONBA_PTR_TO_JSON(OpenStatus, openStatus_);
      DARABONBA_PTR_TO_JSON(PostPaidOpenStatus, postPaidOpenStatus_);
      DARABONBA_PTR_TO_JSON(PostPaidSupportStatus, postPaidSupportStatus_);
      DARABONBA_PTR_TO_JSON(SlsProjectStatus, slsProjectStatus_);
      DARABONBA_PTR_TO_JSON(SlsServiceStatus, slsServiceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogShipperStatusResponseBodyLogShipperStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_FROM_JSON(BuyStatus, buyStatus_);
      DARABONBA_PTR_FROM_JSON(EtlMetaVersion, etlMetaVersion_);
      DARABONBA_PTR_FROM_JSON(OpenStatus, openStatus_);
      DARABONBA_PTR_FROM_JSON(PostPaidOpenStatus, postPaidOpenStatus_);
      DARABONBA_PTR_FROM_JSON(PostPaidSupportStatus, postPaidSupportStatus_);
      DARABONBA_PTR_FROM_JSON(SlsProjectStatus, slsProjectStatus_);
      DARABONBA_PTR_FROM_JSON(SlsServiceStatus, slsServiceStatus_);
    };
    DescribeLogShipperStatusResponseBodyLogShipperStatus() = default ;
    DescribeLogShipperStatusResponseBodyLogShipperStatus(const DescribeLogShipperStatusResponseBodyLogShipperStatus &) = default ;
    DescribeLogShipperStatusResponseBodyLogShipperStatus(DescribeLogShipperStatusResponseBodyLogShipperStatus &&) = default ;
    DescribeLogShipperStatusResponseBodyLogShipperStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogShipperStatusResponseBodyLogShipperStatus() = default ;
    DescribeLogShipperStatusResponseBodyLogShipperStatus& operator=(const DescribeLogShipperStatusResponseBodyLogShipperStatus &) = default ;
    DescribeLogShipperStatusResponseBodyLogShipperStatus& operator=(DescribeLogShipperStatusResponseBodyLogShipperStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authStatus_ != nullptr
        && this->buyStatus_ != nullptr && this->etlMetaVersion_ != nullptr && this->openStatus_ != nullptr && this->postPaidOpenStatus_ != nullptr && this->postPaidSupportStatus_ != nullptr
        && this->slsProjectStatus_ != nullptr && this->slsServiceStatus_ != nullptr; };
    // authStatus Field Functions 
    bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
    void deleteAuthStatus() { this->authStatus_ = nullptr;};
    inline string authStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, "") };
    inline DescribeLogShipperStatusResponseBodyLogShipperStatus& setAuthStatus(string authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


    // buyStatus Field Functions 
    bool hasBuyStatus() const { return this->buyStatus_ != nullptr;};
    void deleteBuyStatus() { this->buyStatus_ = nullptr;};
    inline string buyStatus() const { DARABONBA_PTR_GET_DEFAULT(buyStatus_, "") };
    inline DescribeLogShipperStatusResponseBodyLogShipperStatus& setBuyStatus(string buyStatus) { DARABONBA_PTR_SET_VALUE(buyStatus_, buyStatus) };


    // etlMetaVersion Field Functions 
    bool hasEtlMetaVersion() const { return this->etlMetaVersion_ != nullptr;};
    void deleteEtlMetaVersion() { this->etlMetaVersion_ = nullptr;};
    inline string etlMetaVersion() const { DARABONBA_PTR_GET_DEFAULT(etlMetaVersion_, "") };
    inline DescribeLogShipperStatusResponseBodyLogShipperStatus& setEtlMetaVersion(string etlMetaVersion) { DARABONBA_PTR_SET_VALUE(etlMetaVersion_, etlMetaVersion) };


    // openStatus Field Functions 
    bool hasOpenStatus() const { return this->openStatus_ != nullptr;};
    void deleteOpenStatus() { this->openStatus_ = nullptr;};
    inline string openStatus() const { DARABONBA_PTR_GET_DEFAULT(openStatus_, "") };
    inline DescribeLogShipperStatusResponseBodyLogShipperStatus& setOpenStatus(string openStatus) { DARABONBA_PTR_SET_VALUE(openStatus_, openStatus) };


    // postPaidOpenStatus Field Functions 
    bool hasPostPaidOpenStatus() const { return this->postPaidOpenStatus_ != nullptr;};
    void deletePostPaidOpenStatus() { this->postPaidOpenStatus_ = nullptr;};
    inline string postPaidOpenStatus() const { DARABONBA_PTR_GET_DEFAULT(postPaidOpenStatus_, "") };
    inline DescribeLogShipperStatusResponseBodyLogShipperStatus& setPostPaidOpenStatus(string postPaidOpenStatus) { DARABONBA_PTR_SET_VALUE(postPaidOpenStatus_, postPaidOpenStatus) };


    // postPaidSupportStatus Field Functions 
    bool hasPostPaidSupportStatus() const { return this->postPaidSupportStatus_ != nullptr;};
    void deletePostPaidSupportStatus() { this->postPaidSupportStatus_ = nullptr;};
    inline string postPaidSupportStatus() const { DARABONBA_PTR_GET_DEFAULT(postPaidSupportStatus_, "") };
    inline DescribeLogShipperStatusResponseBodyLogShipperStatus& setPostPaidSupportStatus(string postPaidSupportStatus) { DARABONBA_PTR_SET_VALUE(postPaidSupportStatus_, postPaidSupportStatus) };


    // slsProjectStatus Field Functions 
    bool hasSlsProjectStatus() const { return this->slsProjectStatus_ != nullptr;};
    void deleteSlsProjectStatus() { this->slsProjectStatus_ = nullptr;};
    inline string slsProjectStatus() const { DARABONBA_PTR_GET_DEFAULT(slsProjectStatus_, "") };
    inline DescribeLogShipperStatusResponseBodyLogShipperStatus& setSlsProjectStatus(string slsProjectStatus) { DARABONBA_PTR_SET_VALUE(slsProjectStatus_, slsProjectStatus) };


    // slsServiceStatus Field Functions 
    bool hasSlsServiceStatus() const { return this->slsServiceStatus_ != nullptr;};
    void deleteSlsServiceStatus() { this->slsServiceStatus_ = nullptr;};
    inline string slsServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(slsServiceStatus_, "") };
    inline DescribeLogShipperStatusResponseBodyLogShipperStatus& setSlsServiceStatus(string slsServiceStatus) { DARABONBA_PTR_SET_VALUE(slsServiceStatus_, slsServiceStatus) };


  protected:
    // Indicates whether Security Center is authorized to access Log Service. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> authStatus_ = nullptr;
    // Indicates whether the log analysis feature is purchased. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> buyStatus_ = nullptr;
    // The version of the log analysis field. Valid values:
    // - SAS_V1
    // - SAS_V2
    std::shared_ptr<string> etlMetaVersion_ = nullptr;
    // The status of the log analysis feature. Valid values:
    // 
    // *   **yes**: enabled
    // *   **no**: disabled
    std::shared_ptr<string> openStatus_ = nullptr;
    // Indicates whether the pay-as-you-go billing method is used. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> postPaidOpenStatus_ = nullptr;
    // Indicates whether the log analysis feature supports the pay-as-you-go billing method. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> postPaidSupportStatus_ = nullptr;
    // The status of the dedicated Log Service project. Valid values:
    // 
    // *   **Normal**: normal
    // *   **Disable**: disabled
    std::shared_ptr<string> slsProjectStatus_ = nullptr;
    // Indicates whether Log Service is activated. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> slsServiceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
