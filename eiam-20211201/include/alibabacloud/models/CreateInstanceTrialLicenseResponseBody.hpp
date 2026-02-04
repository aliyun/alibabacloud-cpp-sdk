// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCETRIALLICENSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCETRIALLICENSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateInstanceTrialLicenseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceTrialLicenseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceTrialLicenseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateInstanceTrialLicenseResponseBody() = default ;
    CreateInstanceTrialLicenseResponseBody(const CreateInstanceTrialLicenseResponseBody &) = default ;
    CreateInstanceTrialLicenseResponseBody(CreateInstanceTrialLicenseResponseBody &&) = default ;
    CreateInstanceTrialLicenseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceTrialLicenseResponseBody() = default ;
    CreateInstanceTrialLicenseResponseBody& operator=(const CreateInstanceTrialLicenseResponseBody &) = default ;
    CreateInstanceTrialLicenseResponseBody& operator=(CreateInstanceTrialLicenseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->licenseId_ == nullptr
        && this->requestId_ == nullptr; };
    // licenseId Field Functions 
    bool hasLicenseId() const { return this->licenseId_ != nullptr;};
    void deleteLicenseId() { this->licenseId_ = nullptr;};
    inline string getLicenseId() const { DARABONBA_PTR_GET_DEFAULT(licenseId_, "") };
    inline CreateInstanceTrialLicenseResponseBody& setLicenseId(string licenseId) { DARABONBA_PTR_SET_VALUE(licenseId_, licenseId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInstanceTrialLicenseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> licenseId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
