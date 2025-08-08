// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELICENSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELICENSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLicenseResponseBodyLicense.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeLicenseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLicenseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(License, license_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLicenseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(License, license_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLicenseResponseBody() = default ;
    DescribeLicenseResponseBody(const DescribeLicenseResponseBody &) = default ;
    DescribeLicenseResponseBody(DescribeLicenseResponseBody &&) = default ;
    DescribeLicenseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLicenseResponseBody() = default ;
    DescribeLicenseResponseBody& operator=(const DescribeLicenseResponseBody &) = default ;
    DescribeLicenseResponseBody& operator=(DescribeLicenseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->license_ != nullptr
        && this->requestId_ != nullptr; };
    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline const DescribeLicenseResponseBodyLicense & license() const { DARABONBA_PTR_GET_CONST(license_, DescribeLicenseResponseBodyLicense) };
    inline DescribeLicenseResponseBodyLicense license() { DARABONBA_PTR_GET(license_, DescribeLicenseResponseBodyLicense) };
    inline DescribeLicenseResponseBody& setLicense(const DescribeLicenseResponseBodyLicense & license) { DARABONBA_PTR_SET_VALUE(license_, license) };
    inline DescribeLicenseResponseBody& setLicense(DescribeLicenseResponseBodyLicense && license) { DARABONBA_PTR_SET_RVALUE(license_, license) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLicenseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeLicenseResponseBodyLicense> license_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
