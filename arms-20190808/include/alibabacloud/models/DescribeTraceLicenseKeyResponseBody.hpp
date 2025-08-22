// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACELICENSEKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACELICENSEKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeTraceLicenseKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceLicenseKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LicenseKey, licenseKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceLicenseKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LicenseKey, licenseKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTraceLicenseKeyResponseBody() = default ;
    DescribeTraceLicenseKeyResponseBody(const DescribeTraceLicenseKeyResponseBody &) = default ;
    DescribeTraceLicenseKeyResponseBody(DescribeTraceLicenseKeyResponseBody &&) = default ;
    DescribeTraceLicenseKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceLicenseKeyResponseBody() = default ;
    DescribeTraceLicenseKeyResponseBody& operator=(const DescribeTraceLicenseKeyResponseBody &) = default ;
    DescribeTraceLicenseKeyResponseBody& operator=(DescribeTraceLicenseKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->licenseKey_ != nullptr
        && this->requestId_ != nullptr; };
    // licenseKey Field Functions 
    bool hasLicenseKey() const { return this->licenseKey_ != nullptr;};
    void deleteLicenseKey() { this->licenseKey_ = nullptr;};
    inline string licenseKey() const { DARABONBA_PTR_GET_DEFAULT(licenseKey_, "") };
    inline DescribeTraceLicenseKeyResponseBody& setLicenseKey(string licenseKey) { DARABONBA_PTR_SET_VALUE(licenseKey_, licenseKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTraceLicenseKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The license key for the application.
    std::shared_ptr<string> licenseKey_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
