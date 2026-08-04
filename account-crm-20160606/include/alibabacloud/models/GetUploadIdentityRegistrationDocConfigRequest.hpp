// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADIDENTITYREGISTRATIONDOCCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADIDENTITYREGISTRATIONDOCCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetUploadIdentityRegistrationDocConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadIdentityRegistrationDocConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadIdentityRegistrationDocConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
    };
    GetUploadIdentityRegistrationDocConfigRequest() = default ;
    GetUploadIdentityRegistrationDocConfigRequest(const GetUploadIdentityRegistrationDocConfigRequest &) = default ;
    GetUploadIdentityRegistrationDocConfigRequest(GetUploadIdentityRegistrationDocConfigRequest &&) = default ;
    GetUploadIdentityRegistrationDocConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadIdentityRegistrationDocConfigRequest() = default ;
    GetUploadIdentityRegistrationDocConfigRequest& operator=(const GetUploadIdentityRegistrationDocConfigRequest &) = default ;
    GetUploadIdentityRegistrationDocConfigRequest& operator=(GetUploadIdentityRegistrationDocConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerId_ == nullptr
        && this->filePath_ == nullptr; };
    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline GetUploadIdentityRegistrationDocConfigRequest& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline GetUploadIdentityRegistrationDocConfigRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


  protected:
    // This parameter is required.
    shared_ptr<string> customerId_ {};
    // This parameter is required.
    shared_ptr<string> filePath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
